/* Copyright (c) 2002,2007-2014, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define ANY_ID (~0)

static const struct adreno_gpu_core adreno_gpulist[] = {
	{
		.gpurev = ADRENO_REV_A305,
		.core = 3,
		.major = 0,
		.minor = 5,
		.patchid = 0,
		.features = ADRENO_HAS_IOMMU_SYNC_LOCK,
		.pm4fw_name = "a300_pm4.fw",
		.pfpfw_name = "a300_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_256K,
		.sync_lock_pm4_ver = 0x3FF037,
		.sync_lock_pfp_ver = 0x3FF016,
	},
	{
		.gpurev = ADRENO_REV_A320,
		.core = 3,
		.major = 2,
		.minor = ANY_ID,
		.patchid = ANY_ID,
		.features = ADRENO_HAS_IOMMU_SYNC_LOCK,
		.pm4fw_name = "a300_pm4.fw",
		.pfpfw_name = "a300_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_512K,
		.sync_lock_pm4_ver = 0x3FF037,
		.sync_lock_pfp_ver = 0x3FF016,
	},
	{
		.gpurev = ADRENO_REV_A330,
		.core = 3,
		.major = 3,
		.minor = 0,
		.patchid = ANY_ID,
		.features = ADRENO_USES_OCMEM | IOMMU_FLUSH_TLB_ON_MAP |
			ADRENO_WARM_START | ADRENO_USE_BOOTSTRAP,
		.pm4fw_name = "a330_pm4.fw",
		.pfpfw_name = "a330_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_1M,
		.pm4_jt_idx = 0x8AD,
		.pm4_jt_addr = 0x2E4,
		.pfp_jt_idx = 0x201,
		.pfp_jt_addr = 0x200,
		.pm4_bstrp_size = 0x6,
		.pfp_bstrp_size = 0x20,
		.pfp_bstrp_ver = 0x330020,
	},
	/* 8226v1 */
	{
		.gpurev = ADRENO_REV_A305B,
		.core = 3,
		.major = 0,
		.minor = 5,
		.patchid = 0x10,
		.pm4fw_name = "a330_pm4.fw",
		.pfpfw_name = "a330_pfp.fw",
		.features = ADRENO_USES_OCMEM | IOMMU_FLUSH_TLB_ON_MAP |
			ADRENO_WARM_START,
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_128K,
		.pm4_jt_idx = 0x8AD,
		.pm4_jt_addr = 0x2E4,
		.pfp_jt_idx = 0x201,
		.pfp_jt_addr = 0x200,
	},
	/* 8226v2 */
	{
		.gpurev = ADRENO_REV_A305B,
		.core = 3,
		.major = 0,
		.minor = 5,
		.patchid = 0x12,
		.features = ADRENO_USES_OCMEM  | IOMMU_FLUSH_TLB_ON_MAP |
			ADRENO_WARM_START,
		.pm4fw_name = "a330_pm4.fw",
		.pfpfw_name = "a330_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_128K,
		.pm4_jt_idx = 0x8AD,
		.pm4_jt_addr = 0x2E4,
		.pfp_jt_idx = 0x201,
		.pfp_jt_addr = 0x200,
	},
	/*8x10 */
	{
		.gpurev = ADRENO_REV_A305C,
		.core = 3,
		.major = 0,
		.minor = 5,
		.patchid = 0x20,
		.features = ADRENO_HAS_IOMMU_SYNC_LOCK,
		.pm4fw_name = "a300_pm4.fw",
		.pfpfw_name = "a300_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_128K,
		.sync_lock_pm4_ver = 0x3FF037,
		.sync_lock_pfp_ver = 0x3FF016,
	},
	{
		.gpurev = ADRENO_REV_A306,
		.core = 3,
		.major = 0,
		.minor = 6,
		.patchid = 0x00,
		.pm4fw_name = "a300_pm4.fw",
		.pfpfw_name = "a300_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_128K,
	},
	{
		.gpurev = ADRENO_REV_A304,
		.core = 3,
		.major = 0,
		.minor = 4,
		.patchid = 0x00,
		.pm4fw_name = "a300_pm4.fw",
		.pfpfw_name = "a300_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = (SZ_64K + SZ_32K),
	},
	{
		.gpurev = ADRENO_REV_A310,
		.core = 3,
		.major = 1,
		.minor = 0,
		.patchid = 0x10,
		.features = ADRENO_USES_OCMEM | ADRENO_WARM_START,
		.pm4fw_name = "a330_pm4.fw",
		.pfpfw_name = "a330_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_512K,
		.pm4_jt_idx = 0x8AD,
		.pm4_jt_addr = 0x2E4,
		.pfp_jt_idx = 0x201,
		.pfp_jt_addr = 0x200,
	},
	{
		.gpurev = ADRENO_REV_A405,
		.core = 4,
		.major = 0,
		.minor = 5,
		.patchid = ANY_ID,
		.features = 0,
		.pm4fw_name = "a420_pm4.fw",
		.pfpfw_name = "a420_pfp.fw",
		.gpudev = &adreno_a4xx_gpudev,
		.gmem_size = SZ_256K,
	},
	{
		.gpurev = ADRENO_REV_A420,
		.core = 4,
		.major = 2,
		.minor = 0,
		.patchid = ANY_ID,
		.features = ADRENO_USES_OCMEM  | IOMMU_FLUSH_TLB_ON_MAP |
			ADRENO_WARM_START | ADRENO_USE_BOOTSTRAP,
		.pm4fw_name = "a420_pm4.fw",
		.pfpfw_name = "a420_pfp.fw",
		.gpudev = &adreno_a4xx_gpudev,
		.gmem_size = (SZ_1M + SZ_512K),
		.pm4_jt_idx = 0x901,
		.pm4_jt_addr = 0x300,
		.pfp_jt_idx = 0x401,
		.pfp_jt_addr = 0x400,
		.pm4_bstrp_size = 0x06,
		.pfp_bstrp_size = 0x28,
		.pfp_bstrp_ver = 0x4ff083,
	},
	{
		.gpurev = ADRENO_REV_A430,
		.core = 4,
		.major = 3,
		.minor = 0,
		.patchid = ANY_ID,
		.features = ADRENO_USES_OCMEM  | ADRENO_WARM_START |
			ADRENO_USE_BOOTSTRAP | ADRENO_SPTP_PC | ADRENO_PPD |
			ADRENO_CONTENT_PROTECTION,
		.pm4fw_name = "a420_pm4.fw",
		.pfpfw_name = "a420_pfp.fw",
		.gpudev = &adreno_a4xx_gpudev,
		.gmem_size = (SZ_1M + SZ_512K),
		.pm4_jt_idx = 0x901,
		.pm4_jt_addr = 0x300,
		.pfp_jt_idx = 0x401,
		.pfp_jt_addr = 0x400,
		.pm4_bstrp_size = 0x06,
		.pfp_bstrp_size = 0x28,
		.pfp_bstrp_ver = 0x4ff083,
		.shader_offset = 0x20000,
		.shader_size = 0x10000,
	},
	{
		.gpurev = ADRENO_REV_A418,
		.core = 4,
		.major = 1,
		.minor = 8,
		.patchid = ANY_ID,
		.features = ADRENO_USES_OCMEM  | ADRENO_WARM_START |
			ADRENO_USE_BOOTSTRAP | ADRENO_SPTP_PC,
		.pm4fw_name = "a420_pm4.fw",
		.pfpfw_name = "a420_pfp.fw",
		.gpudev = &adreno_a4xx_gpudev,
		.gmem_size = (SZ_512K),
		.pm4_jt_idx = 0x901,
		.pm4_jt_addr = 0x300,
		.pfp_jt_idx = 0x401,
		.pfp_jt_addr = 0x400,
		.pm4_bstrp_size = 0x06,
		.pfp_bstrp_size = 0x28,
		.pfp_bstrp_ver = 0x4ff083,
		.shader_offset = 0x20000, /* SP and TP addresses */
		.shader_size = 0x10000,
	},
};
