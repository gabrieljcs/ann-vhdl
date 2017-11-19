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
static const char *ng0 = "/home/gabriel/ann-vhdl/src/neuron_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_1475539293;
extern char *IEEE_PROPOSED_P_0892474878;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
double ieee_proposed_p_0892474878_sub_1188295956142067222_450259796(char *, char *, char *);
char *work_p_1475539293_sub_17463432786869482003_952668239(char *, char *, char *, char *);
char *work_p_1475539293_sub_17781610739482545447_952668239(char *, char *, int );


static void work_a_0388473939_3671711236_p_0(char *t0)
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

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t1 = (t0 + 5552);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t1, 0U, 1, t3);
    t11 = (t0 + 5552);
    xsi_driver_intertial_reject(t11, t3, t3);

LAB2:    t12 = (t0 + 5424);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0388473939_3671711236_p_1(char *t0)
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

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280U);
    t4 = work_p_1475539293_sub_17463432786869482003_952668239(WORK_P_1475539293, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 8U);
    t7 = (16U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 5616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 16U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5440);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t6, 0);
    goto LAB6;

}

static void work_a_0388473939_3671711236_p_2(char *t0)
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

LAB0:    xsi_set_current_line(50, ng0);

LAB3:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 8296U);
    t4 = work_p_1475539293_sub_17463432786869482003_952668239(WORK_P_1475539293, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 8U);
    t7 = (24U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 5680);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 24U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5456);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(24U, t6, 0);
    goto LAB6;

}

static void work_a_0388473939_3671711236_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    double t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 1840U);
    t3 = *((char **)t1);
    t4 = ieee_proposed_p_0892474878_sub_1188295956142067222_450259796(IEEE_PROPOSED_P_0892474878, t2, t3);
    t5 = (t0 + 5744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((double *)t9) = t4;
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 5472);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0388473939_3671711236_p_4(char *t0)
{
    char t3[16];
    char t7[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    char *t8;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(53, ng0);

LAB3:    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t2 = t1;
    t4 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t3, 0);
    t5 = (t3 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    memcpy(t2, t4, t6);
    t2 = (t2 + t6);
    t8 = work_p_1475539293_sub_17781610739482545447_952668239(WORK_P_1475539293, t7, 20);
    t9 = (t7 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    memcpy(t2, t8, t10);
    t11 = (t0 + 5808);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 64U);
    xsi_driver_first_trans_fast(t11);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0388473939_3671711236_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int64 t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(54, ng0);

LAB3:    t1 = (t0 + 5872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (15 * 1000LL);
    t7 = (t0 + 5872);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);
    t12 = (30 * 1000LL);
    t13 = (t0 + 5872);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t13, 0U, 1, t12);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0388473939_3671711236_init()
{
	static char *pe[] = {(void *)work_a_0388473939_3671711236_p_0,(void *)work_a_0388473939_3671711236_p_1,(void *)work_a_0388473939_3671711236_p_2,(void *)work_a_0388473939_3671711236_p_3,(void *)work_a_0388473939_3671711236_p_4,(void *)work_a_0388473939_3671711236_p_5};
	xsi_register_didat("work_a_0388473939_3671711236", "isim/neuron_tb_isim_beh.exe.sim/work/a_0388473939_3671711236.didat");
	xsi_register_executes(pe);
}
