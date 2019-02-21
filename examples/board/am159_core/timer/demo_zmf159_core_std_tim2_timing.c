/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief TIM2 定时器 TIMING 例程，通过标准接口实现
 *
 * - 实验现象：
 *   1. 调试串口输出定时器的相关信息
 *   2. 定时周期到达(默认为 2Hz)，调试串口会输出 The timing frq is 2Hz;
 *
 * \note
 *    16 位定时器定时计数值不为 65536 的倍数，则定时会有一些偏差。
 *
 * \par 源代码
 * \snippet demo_zmf159_core_std_tim2_timing.c src_zmf159_core_std_tim2_timing
 *
 * \internal
 * \par Modification history
 * - 1.00 17-04-22  nwt, first implementation
 * \endinternal
 */ 

/**
 * \addtogroup demo_if_zmf159_core_std_tim2_timing
 * \copydoc demo_zmf159_core_std_tim2_timing.c
 */

/** [src_zmf159_core_std_tim2_timing] */
#include <demo_zmf159_core_entries.h>
#include "ametal.h"
#include "am_vdebug.h"
#include "am_zmf159_inst_init.h"
#include "demo_std_entries.h"

/**
 * \brief 例程入口
 */
void demo_zmf159_core_std_tim2_timing_entry (void)
{
    AM_DBG_INFO("demo zmf159_core std tim2 timing!\r\n");

    demo_std_timer_timing_entry(am_zmf159_tim2_timing_inst_init(), 0);
}
/** [src_zmf159_core_std_tim2_timing] */

/* end of file */
