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

double ieee_proposed_p_0892474878_sub_1188295956142067222_450259796(char *, char *, char *);
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

char *work_p_1475539293_sub_17463432786869482003_952668239(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t9[16];
    char *t0;
    char *t7;
    unsigned int t8;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    double t50;
    char *t51;
    char *t52;
    int t53;
    char *t54;
    int t55;
    int t56;
    unsigned int t57;
    char *t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 8U);
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    t14 = (t4 + 8U);
    t15 = *((int *)t14);
    t16 = (t9 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t13;
    t17 = (t16 + 8U);
    *((int *)t17) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 3136);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t8);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t9);
    t24 = (t17 + 64U);
    *((char **)t24) = t9;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t8;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 8U);
    t30 = *((int *)t29);
    t31 = (t4 + 4U);
    t32 = *((int *)t31);
    t33 = (t4 + 0U);
    t34 = *((int *)t33);
    t35 = t34;
    t36 = t32;

LAB4:    t37 = (t36 * t30);
    t38 = (t35 * t30);
    if (t38 <= t37)
        goto LAB5;

LAB7:    t7 = (t17 + 56U);
    t10 = *((char **)t7);
    t7 = (t9 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 8U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t10, t8);
    t12 = (t9 + 0U);
    t11 = *((int *)t12);
    t14 = (t9 + 4U);
    t13 = *((int *)t14);
    t16 = (t9 + 8U);
    t15 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t11;
    t21 = (t20 + 4U);
    *((int *)t21) = t13;
    t21 = (t20 + 8U);
    *((int *)t21) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB5:    t39 = (t4 + 0U);
    t40 = *((int *)t39);
    t41 = (t4 + 8U);
    t42 = *((int *)t41);
    t43 = (t35 - t40);
    t19 = (t43 * t42);
    t44 = (32U * t19);
    t45 = (0 + t44);
    t46 = (t3 + t45);
    t47 = (t1 + 2928);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = ieee_proposed_p_0892474878_sub_1188295956142067222_450259796(IEEE_PROPOSED_P_0892474878, t46, t49);
    t51 = (t17 + 56U);
    t52 = *((char **)t51);
    t51 = (t9 + 0U);
    t53 = *((int *)t51);
    t54 = (t9 + 8U);
    t55 = *((int *)t54);
    t56 = (t35 - t53);
    t57 = (t56 * t55);
    t58 = (t9 + 4U);
    t59 = *((int *)t58);
    xsi_vhdl_check_range_of_index(t53, t59, t55, t35);
    t60 = (8U * t57);
    t61 = (0 + t60);
    t62 = (t52 + t61);
    *((double *)t62) = t50;

LAB6:    if (t35 == t36)
        goto LAB7;

LAB8:    t11 = (t35 + t30);
    t35 = t11;
    goto LAB4;

LAB9:;
}


void ieee_p_2592010699_sub_7991387870887201249_503743352();

extern void work_p_1475539293_init()
{
	static char *se[] = {(void *)work_p_1475539293_sub_17655941269769944715_952668239,(void *)work_p_1475539293_sub_17781610739482545447_952668239,(void *)work_p_1475539293_sub_17463432786869482003_952668239};
	xsi_register_didat("work_p_1475539293", "isim/network_test_tb_isim_beh.exe.sim/work/p_1475539293.didat");
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_7991387870887201249_503743352, 4);
}
