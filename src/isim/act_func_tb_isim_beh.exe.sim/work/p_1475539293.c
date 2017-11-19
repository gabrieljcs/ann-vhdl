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
extern char *IEEE_PROPOSED_P_0892474878;

char *ieee_proposed_p_0892474878_sub_5786431565696090975_450259796(char *, char *, double , int , int , unsigned char , unsigned char , int );
char *ieee_proposed_p_0892474878_sub_7763173220434332409_450259796(char *, char *, int , int , int , unsigned char , unsigned char );


char *work_p_1475539293_sub_17655941269769944715_952668239(char *t1, char *t2, double t3)
{
    char t4[128];
    char t5[16];
    char t6[16];
    char t13[32];
    char t18[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    char *t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 15;
    t8 = (t7 + 4U);
    *((int *)t8) = -16;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (-16 - 15);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = ((IEEE_PROPOSED_P_0892474878) + 4256);
    t12 = (t8 + 88U);
    *((char **)t12) = t11;
    t14 = (t8 + 56U);
    *((char **)t14) = t13;
    xsi_type_set_default_value(t11, t13, t6);
    t15 = (t8 + 64U);
    *((char **)t15) = t6;
    t16 = (t8 + 80U);
    *((unsigned int *)t16) = 32U;
    t17 = (t5 + 4U);
    *((double *)t17) = t3;
    t19 = (t1 + 1288U);
    t20 = *((char **)t19);
    t21 = *((int *)t20);
    t22 = (t21 - 1);
    t19 = (t1 + 1408U);
    t23 = *((char **)t19);
    t24 = *((int *)t23);
    t25 = (-(t24));
    t19 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t26 = *((char **)t19);
    t27 = *((unsigned char *)t26);
    t19 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t28 = *((char **)t19);
    t29 = *((unsigned char *)t28);
    t19 = ((IEEE_PROPOSED_P_0892474878) + 1408U);
    t30 = *((char **)t19);
    t31 = *((int *)t30);
    t19 = ieee_proposed_p_0892474878_sub_5786431565696090975_450259796(IEEE_PROPOSED_P_0892474878, t18, t3, t22, t25, t27, t29, t31);
    t32 = (t8 + 56U);
    t33 = *((char **)t32);
    t32 = (t33 + 0);
    t34 = (t18 + 12U);
    t10 = *((unsigned int *)t34);
    t10 = (t10 * 1U);
    memcpy(t32, t19, t10);
    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t7 = (t6 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t11, t10);
    t12 = (t6 + 0U);
    t9 = *((int *)t12);
    t14 = (t6 + 4U);
    t21 = *((int *)t14);
    t15 = (t6 + 8U);
    t22 = *((int *)t15);
    t16 = (t2 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = t9;
    t19 = (t16 + 4U);
    *((int *)t19) = t21;
    t19 = (t16 + 8U);
    *((int *)t19) = t22;
    t24 = (t21 - t9);
    t35 = (t24 * t22);
    t35 = (t35 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t35;

LAB1:    return t0;
LAB2:;
}

char *work_p_1475539293_sub_17781610739482545447_952668239(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t6[16];
    char t13[32];
    char t18[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    char *t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 15;
    t8 = (t7 + 4U);
    *((int *)t8) = -16;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (-16 - 15);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = ((IEEE_PROPOSED_P_0892474878) + 4256);
    t12 = (t8 + 88U);
    *((char **)t12) = t11;
    t14 = (t8 + 56U);
    *((char **)t14) = t13;
    xsi_type_set_default_value(t11, t13, t6);
    t15 = (t8 + 64U);
    *((char **)t15) = t6;
    t16 = (t8 + 80U);
    *((unsigned int *)t16) = 32U;
    t17 = (t5 + 4U);
    *((int *)t17) = t3;
    t19 = (t1 + 1288U);
    t20 = *((char **)t19);
    t21 = *((int *)t20);
    t22 = (t21 - 1);
    t19 = (t1 + 1408U);
    t23 = *((char **)t19);
    t24 = *((int *)t23);
    t25 = (-(t24));
    t19 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t26 = *((char **)t19);
    t27 = *((unsigned char *)t26);
    t19 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t28 = *((char **)t19);
    t29 = *((unsigned char *)t28);
    t19 = ieee_proposed_p_0892474878_sub_7763173220434332409_450259796(IEEE_PROPOSED_P_0892474878, t18, t3, t22, t25, t27, t29);
    t30 = (t8 + 56U);
    t31 = *((char **)t30);
    t30 = (t31 + 0);
    t32 = (t18 + 12U);
    t10 = *((unsigned int *)t32);
    t10 = (t10 * 1U);
    memcpy(t30, t19, t10);
    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t7 = (t6 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t11, t10);
    t12 = (t6 + 0U);
    t9 = *((int *)t12);
    t14 = (t6 + 4U);
    t21 = *((int *)t14);
    t15 = (t6 + 8U);
    t22 = *((int *)t15);
    t16 = (t2 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = t9;
    t19 = (t16 + 4U);
    *((int *)t19) = t21;
    t19 = (t16 + 8U);
    *((int *)t19) = t22;
    t24 = (t21 - t9);
    t33 = (t24 * t22);
    t33 = (t33 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t33;

LAB1:    return t0;
LAB2:;
}


void ieee_p_2592010699_sub_7991387870887201249_503743352();

extern void work_p_1475539293_init()
{
	static char *se[] = {(void *)work_p_1475539293_sub_17655941269769944715_952668239,(void *)work_p_1475539293_sub_17781610739482545447_952668239};
	xsi_register_didat("work_p_1475539293", "isim/act_func_tb_isim_beh.exe.sim/work/p_1475539293.didat");
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_7991387870887201249_503743352, 4);
}
