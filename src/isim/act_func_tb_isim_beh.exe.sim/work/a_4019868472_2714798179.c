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
static const char *ng0 = "/home/gabriel/ann-vhdl/src/act_func.vhd";
extern char *WORK_P_1475539293;
extern char *IEEE_P_2592010699;
extern char *IEEE_PROPOSED_P_0892474878;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_proposed_p_0892474878_sub_2635098317837174973_450259796(char *, char *, char *, char *, char *);
char *work_p_1475539293_sub_17781610739482545447_952668239(char *, char *, int );


static void work_a_4019868472_2714798179_p_0(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB9:
LAB8:    t1 = (t0 + 4120);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 4232);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(32, ng0);
    t1 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t9, 0);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 4296);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB13;

LAB14:    t4 = (unsigned char)0;

LAB15:    if (t4 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB19:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4232);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(44, ng0);
    t1 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t9, 0);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 4296);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t2);

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(37, ng0);
    t13 = (t0 + 4232);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(38, ng0);
    t1 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t9, 1);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 4296);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB13:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t2 = (t0 + 1520U);
    t7 = *((char **)t2);
    t8 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t9, 0);
    t12 = ieee_proposed_p_0892474878_sub_2635098317837174973_450259796(IEEE_PROPOSED_P_0892474878, t6, t7, t8, t9);
    t4 = t12;
    goto LAB15;

LAB16:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 4232);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(41, ng0);
    t1 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t9, 0);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 4296);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB20:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB23;

}

static void work_a_4019868472_2714798179_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(50, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4360);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4136);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4019868472_2714798179_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4152);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4019868472_2714798179_init()
{
	static char *pe[] = {(void *)work_a_4019868472_2714798179_p_0,(void *)work_a_4019868472_2714798179_p_1,(void *)work_a_4019868472_2714798179_p_2};
	xsi_register_didat("work_a_4019868472_2714798179", "isim/act_func_tb_isim_beh.exe.sim/work/a_4019868472_2714798179.didat");
	xsi_register_executes(pe);
}
