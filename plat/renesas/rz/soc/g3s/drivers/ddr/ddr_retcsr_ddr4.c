/*
 * Copyright (c) 2023, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>
#include <stddef.h>
#include <assert.h>
#include <common/debug.h>
#include <lib/mmio.h>
#include <cpg.h>
#include <ddr.h>

#include "ddr_regs.h"
#include "ddr_private.h"

static uint32_t retcsr_list_1d[] = {
	0x0580b2, 0x0580cb, 0x058024, 0x030043, 0x031043, 0x030143, 0x031143, 0x000080,
	0x001080, 0x002080, 0x003080, 0x004080, 0x005080, 0x006080, 0x007080, 0x008080,
	0x009080, 0x030080, 0x031080, 0x030180, 0x031180, 0x030081, 0x031081, 0x030181,
	0x031181, 0x030082, 0x031082, 0x030182, 0x031182, 0x030083, 0x031083, 0x030183,
	0x031183, 0x0301d0, 0x0311d0, 0x0300d0, 0x0310d0, 0x0301d1, 0x0311d1, 0x0300d1,
	0x0310d1, 0x0301d2, 0x0311d2, 0x0300d2, 0x0310d2, 0x0301d3, 0x0311d3, 0x0300d3,
	0x0310d3, 0x030868, 0x031868, 0x030768, 0x031768, 0x030668, 0x031668, 0x030568,
	0x031568, 0x030468, 0x031468, 0x030368, 0x031368, 0x030268, 0x031268, 0x030168,
	0x031168, 0x030068, 0x031068, 0x030869, 0x031869, 0x030769, 0x031769, 0x030669,
	0x031669, 0x030569, 0x031569, 0x030469, 0x031469, 0x030369, 0x031369, 0x030269,
	0x031269, 0x030169, 0x031169, 0x030069, 0x031069, 0x03086a, 0x03186a, 0x03076a,
	0x03176a, 0x03066a, 0x03166a, 0x03056a, 0x03156a, 0x03046a, 0x03146a, 0x03036a,
	0x03136a, 0x03026a, 0x03126a, 0x03016a, 0x03116a, 0x03006a, 0x03106a, 0x03086b,
	0x03186b, 0x03076b, 0x03176b, 0x03066b, 0x03166b, 0x03056b, 0x03156b, 0x03046b,
	0x03146b, 0x03036b, 0x03136b, 0x03026b, 0x03126b, 0x03016b, 0x03116b, 0x03006b,
	0x03106b, 0x03008c, 0x03108c, 0x03018c, 0x03118c, 0x03008d, 0x03108d, 0x03018d,
	0x03118d, 0x03008e, 0x03108e, 0x03018e, 0x03118e, 0x03008f, 0x03108f, 0x03018f,
	0x03118f, 0x0308c0, 0x0318c0, 0x0307c0, 0x0317c0, 0x0306c0, 0x0316c0, 0x0305c0,
	0x0315c0, 0x0304c0, 0x0314c0, 0x0303c0, 0x0313c0, 0x0302c0, 0x0312c0, 0x0301c0,
	0x0311c0, 0x0300c0, 0x0310c0, 0x0308c1, 0x0318c1, 0x0307c1, 0x0317c1, 0x0306c1,
	0x0316c1, 0x0305c1, 0x0315c1, 0x0304c1, 0x0314c1, 0x0303c1, 0x0313c1, 0x0302c1,
	0x0312c1, 0x0301c1, 0x0311c1, 0x0300c1, 0x0310c1, 0x0308c2, 0x0318c2, 0x0307c2,
	0x0317c2, 0x0306c2, 0x0316c2, 0x0305c2, 0x0315c2, 0x0304c2, 0x0314c2, 0x0303c2,
	0x0313c2, 0x0302c2, 0x0312c2, 0x0301c2, 0x0311c2, 0x0300c2, 0x0310c2, 0x0308c3,
	0x0318c3, 0x0307c3, 0x0317c3, 0x0306c3, 0x0316c3, 0x0305c3, 0x0315c3, 0x0304c3,
	0x0314c3, 0x0303c3, 0x0313c3, 0x0302c3, 0x0312c3, 0x0301c3, 0x0311c3, 0x0300c3,
	0x0310c3, 0x030020, 0x031020, 0x058072, 0x058073, 0x0300aa, 0x0310aa, 0x058010,
	0x058011, 0x0300ae, 0x0310ae, 0x0300af, 0x0310af, 0x058020, 0x05807c, 0x05807d,
	0x05C0fd, 0x05C0c0, 0x069201, 0x069202, 0x069203, 0x069204, 0x069205, 0x069206,
	0x069207, 0x069208, 0x030062, 0x030162, 0x030262, 0x030362, 0x030462, 0x030562,
	0x030662, 0x030762, 0x030862, 0x031062, 0x031162, 0x031262, 0x031362, 0x031462,
	0x031562, 0x031662, 0x031762, 0x031862, 0x058077, 0x030001, 0x031001
};

static uint32_t retcsr_list_2d[] = {
	0x03008c, 0x03108c, 0x03018c, 0x03118c, 0x03008d, 0x03108d, 0x03018d, 0x03118d,
	0x03008e, 0x03108e, 0x03018e, 0x03118e, 0x03008f, 0x03108f, 0x03018f, 0x03118f,
	0x030840, 0x031840, 0x030740, 0x031740, 0x030640, 0x031640, 0x030540, 0x031540,
	0x030440, 0x031440, 0x030340, 0x031340, 0x030240, 0x031240, 0x030140, 0x031140,
	0x030040, 0x031040, 0x030830, 0x031830, 0x030730, 0x031730, 0x030630, 0x031630,
	0x030530, 0x031530, 0x030430, 0x031430, 0x030330, 0x031330, 0x030230, 0x031230,
	0x030130, 0x031130, 0x030030, 0x031030
};

static uint32_t retcsr_list_ctrl[] = {
	0x000226, 0x000243
};

void retcsr_read_registers(uint32_t *buffer, size_t size)
{
	size_t i;

	assert(size >= (sizeof(retcsr_list_1d) + sizeof(retcsr_list_2d) + sizeof(retcsr_list_ctrl)));

	dwc_ddrphy_apb_wr(0x0006E000, 0);
	dwc_ddrphy_apb_wr(0x0006D080, 3);

	for (i = 0; i < ARRAY_SIZE(retcsr_list_1d); i++, buffer++)
		*buffer = dwc_ddrphy_apb_rd(retcsr_list_1d[i]);

	for (i = 0; i < ARRAY_SIZE(retcsr_list_2d); i++, buffer++)
		*buffer = dwc_ddrphy_apb_rd(retcsr_list_2d[i]);

	for (i = 0; i < ARRAY_SIZE(retcsr_list_ctrl); i++, buffer++)
		*buffer = DDRTOP_mc_apb_rd(retcsr_list_ctrl[i]);

	dwc_ddrphy_apb_wr(0x0006D080, 0);
	dwc_ddrphy_apb_wr(0x0006E000, 1);
}

void retcsr_write_registers(uint32_t *buffer, size_t size)
{
	size_t i;

	assert(size >= (sizeof(retcsr_list_1d) + sizeof(retcsr_list_2d) + sizeof(retcsr_list_ctrl)));

	dwc_ddrphy_apb_wr(0x0006E000, 0);
	dwc_ddrphy_apb_wr(0x0006D080, 3);

	for (i = 0; i < ARRAY_SIZE(retcsr_list_1d); i++, buffer++)
		dwc_ddrphy_apb_wr(retcsr_list_1d[i], *buffer);

	for (i = 0; i < ARRAY_SIZE(retcsr_list_2d); i++, buffer++)
		dwc_ddrphy_apb_wr(retcsr_list_2d[i], *buffer);

	for (i = 0; i < ARRAY_SIZE(retcsr_list_ctrl); i++, buffer++)
		DDRTOP_mc_apb_wr(retcsr_list_ctrl[i], *buffer);

	dwc_ddrphy_apb_wr(0x0006D080, 0);
	dwc_ddrphy_apb_wr(0x0006E000, 1);
}
