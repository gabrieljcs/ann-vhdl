/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/gabriel/ann-vhdl/src/network_test_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_1475539293;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
char *work_p_1475539293_sub_17463432786869482003_952668239(char *, char *, char *, char *);
char *work_p_1475539293_sub_17655941269769944715_952668239(char *, char *, double );
char *work_p_1475539293_sub_17781610739482545447_952668239(char *, char *, int );


static void work_a_0800774752_0105454314_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t1 = (t0 + 5184);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t1, 0U, 1, t3);
    t11 = (t0 + 5184);
    xsi_driver_intertial_reject(t11, t3, t3);

LAB2:    t12 = (t0 + 4976);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0800774752_0105454314_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int64 t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (15 * 1000LL);
    t8 = (t0 + 5248);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    t13 = (30 * 1000LL);
    t14 = (t0 + 5248);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(46, ng0);

LAB6:    t2 = (t0 + 4992);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 4992);
    *((int *)t3) = 0;
    goto LAB2;

LAB5:    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t19 = *((unsigned char *)t4);
    t20 = (t19 == (unsigned char)3);
    if (t20 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

}

static void work_a_0800774752_0105454314_p_2(char *t0)
{
    char t4[16];
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = xsi_get_transient_memory(64U);
    memset(t2, 0, 64U);
    t3 = t2;
    t5 = work_p_1475539293_sub_17655941269769944715_952668239(WORK_P_1475539293, t4, 0.69999999999999996);
    memcpy(t3, t5, 32U);
    t3 = (t3 + 32U);
    t7 = work_p_1475539293_sub_17655941269769944715_952668239(WORK_P_1475539293, t6, 0.69999999999999996);
    t8 = (t6 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    memcpy(t3, t7, t9);
    t10 = (t0 + 5312);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 64U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(53, ng0);

LAB6:    t2 = (t0 + 5008);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 5008);
    *((int *)t3) = 0;
    xsi_set_current_line(54, ng0);
    t2 = xsi_get_transient_memory(64U);
    memset(t2, 0, 64U);
    t3 = t2;
    t5 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t4, 0);
    t7 = (t4 + 12U);
    t9 = *((unsigned int *)t7);
    t9 = (t9 * 1U);
    memcpy(t3, t5, t9);
    t3 = (t3 + t9);
    t8 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t6, 0);
    t10 = (t6 + 12U);
    t17 = *((unsigned int *)t10);
    t17 = (t17 * 1U);
    memcpy(t3, t8, t17);
    t11 = (t0 + 5312);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 64U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(55, ng0);

LAB10:    t2 = (t0 + 5024);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 5024);
    *((int *)t3) = 0;
    xsi_set_current_line(56, ng0);
    t2 = xsi_get_transient_memory(64U);
    memset(t2, 0, 64U);
    t3 = t2;
    t5 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t4, 0);
    t7 = (t4 + 12U);
    t9 = *((unsigned int *)t7);
    t9 = (t9 * 1U);
    memcpy(t3, t5, t9);
    t3 = (t3 + t9);
    t8 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t6, 1);
    t10 = (t6 + 12U);
    t17 = *((unsigned int *)t10);
    t17 = (t17 * 1U);
    memcpy(t3, t8, t17);
    t11 = (t0 + 5312);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 64U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(57, ng0);

LAB14:    t2 = (t0 + 5040);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t3 = (t0 + 5040);
    *((int *)t3) = 0;
    xsi_set_current_line(58, ng0);
    t2 = xsi_get_transient_memory(64U);
    memset(t2, 0, 64U);
    t3 = t2;
    t5 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t4, 1);
    t7 = (t4 + 12U);
    t9 = *((unsigned int *)t7);
    t9 = (t9 * 1U);
    memcpy(t3, t5, t9);
    t3 = (t3 + t9);
    t8 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t6, 0);
    t10 = (t6 + 12U);
    t17 = *((unsigned int *)t10);
    t17 = (t17 * 1U);
    memcpy(t3, t8, t17);
    t11 = (t0 + 5312);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 64U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(59, ng0);

LAB18:    t2 = (t0 + 5056);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t3 = (t0 + 5056);
    *((int *)t3) = 0;
    xsi_set_current_line(60, ng0);
    t2 = xsi_get_transient_memory(64U);
    memset(t2, 0, 64U);
    t3 = t2;
    t5 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t4, 1);
    t7 = (t4 + 12U);
    t9 = *((unsigned int *)t7);
    t9 = (t9 * 1U);
    memcpy(t3, t5, t9);
    t3 = (t3 + t9);
    t8 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t6, 1);
    t10 = (t6 + 12U);
    t17 = *((unsigned int *)t10);
    t17 = (t17 * 1U);
    memcpy(t3, t8, t17);
    t11 = (t0 + 5312);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 64U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(61, ng0);

LAB22:    t2 = (t0 + 5072);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t3 = (t0 + 5072);
    *((int *)t3) = 0;
    goto LAB2;

LAB21:    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

}

static void work_a_0800774752_0105454314_p_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(64, ng0);

LAB3:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 7936U);
    t4 = work_p_1475539293_sub_17463432786869482003_952668239(WORK_P_1475539293, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 8U);
    t7 = (16U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 5376);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 16U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5088);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t6, 0);
    goto LAB6;

}

static void work_a_0800774752_0105454314_p_4(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 7952U);
    t4 = work_p_1475539293_sub_17463432786869482003_952668239(WORK_P_1475539293, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 8U);
    t7 = (8U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 5440);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5104);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t6, 0);
    goto LAB6;

}


extern void work_a_0800774752_0105454314_init()
{
	static char *pe[] = {(void *)work_a_0800774752_0105454314_p_0,(void *)work_a_0800774752_0105454314_p_1,(void *)work_a_0800774752_0105454314_p_2,(void *)work_a_0800774752_0105454314_p_3,(void *)work_a_0800774752_0105454314_p_4};
	xsi_register_didat("work_a_0800774752_0105454314", "isim/network_test_tb_isim_beh.exe.sim/work/a_0800774752_0105454314.didat");
	xsi_register_executes(pe);
}
