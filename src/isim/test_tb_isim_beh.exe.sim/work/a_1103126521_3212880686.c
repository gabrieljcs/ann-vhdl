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
static const char *ng0 = "/home/gabriel/ann-vhdl/src/test.vhd";
extern char *IEEE_PROPOSED_P_0892474878;

char *ieee_proposed_p_0892474878_sub_10337155231412677099_450259796(char *, char *, char *, char *, int );
char *ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(char *, char *, char *, char *, int , int , unsigned char , unsigned char );


static void work_a_1103126521_3212880686_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 4832U);
    t5 = ieee_proposed_p_0892474878_sub_10337155231412677099_450259796(IEEE_PROPOSED_P_0892474878, t2, t4, t3, 1);
    t6 = (-(16));
    t7 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t7 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t10 = *((char **)t7);
    t11 = *((unsigned char *)t10);
    t7 = ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(IEEE_PROPOSED_P_0892474878, t1, t5, t2, 15, t6, t9, t11);
    t12 = (t1 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t14 = (32U != t13);
    if (t14 == 1)
        goto LAB2;

LAB3:    t15 = (t0 + 3168);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 32U);
    xsi_driver_first_trans_fast(t15);
    t3 = (t0 + 3072);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(32U, t13, 0);
    goto LAB3;

}

static void work_a_1103126521_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3088);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1103126521_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1103126521_3212880686_p_0,(void *)work_a_1103126521_3212880686_p_1};
	xsi_register_didat("work_a_1103126521_3212880686", "isim/test_tb_isim_beh.exe.sim/work/a_1103126521_3212880686.didat");
	xsi_register_executes(pe);
}
