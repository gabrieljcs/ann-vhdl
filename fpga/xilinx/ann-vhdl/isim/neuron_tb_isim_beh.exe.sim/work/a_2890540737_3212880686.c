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
static const char *ng0 = "/home/gabriel/ann-vhdl/src/neuron.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_PROPOSED_P_0892474878;
extern char *WORK_P_1475539293;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(char *, char *, char *, char *, int , int , unsigned char , unsigned char );
char *ieee_proposed_p_0892474878_sub_13227029559694678111_450259796(char *, char *, char *, char *, char *, char *);
char *ieee_proposed_p_0892474878_sub_13483384195030879960_450259796(char *, char *, char *, char *, char *, char *);


static void work_a_2890540737_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6424);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 6584);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 6584);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_2890540737_3212880686_p_1(char *t0)
{
    char t12[16];
    char t17[16];
    char t33[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    int t18;
    unsigned int t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned char t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6440);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 64U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t14 = (t13 * -1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t4 = (t17 + 0U);
    t5 = (t4 + 0U);
    *((int *)t5) = 15;
    t5 = (t4 + 4U);
    *((int *)t5) = -16;
    t5 = (t4 + 8U);
    *((int *)t5) = -1;
    t18 = (-16 - 15);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t5 = (t4 + 12U);
    *((unsigned int *)t5) = t19;
    t5 = ((WORK_P_1475539293) + 1288U);
    t8 = *((char **)t5);
    t20 = *((int *)t8);
    t5 = ((WORK_P_1475539293) + 1408U);
    t9 = *((char **)t5);
    t21 = *((int *)t9);
    t22 = (-(t21));
    t5 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t10 = *((char **)t5);
    t3 = *((unsigned char *)t10);
    t5 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t11 = *((char **)t5);
    t6 = *((unsigned char *)t11);
    t5 = ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(IEEE_PROPOSED_P_0892474878, t12, t1, t17, t20, t22, t3, t6);
    t23 = (t12 + 12U);
    t19 = *((unsigned int *)t23);
    t19 = (t19 * 1U);
    t7 = (33U != t19);
    if (t7 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 6776);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t5, 33U);
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t2 = t1;
    memset(t2, (unsigned char)2, 64U);
    t4 = (t0 + 6840);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 64U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 6904);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((int *)t8) = 2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 0);
    if (t3 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t13 = *((int *)t4);
    t18 = (t13 - 1);
    t20 = (t18 - 1);
    t14 = (t20 * -1);
    xsi_vhdl_check_range_of_index(1, 0, -1, t18);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t5 = (t17 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 15;
    t8 = (t5 + 4U);
    *((int *)t8) = -16;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t21 = (-16 - 15);
    t19 = (t21 * -1);
    t19 = (t19 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t19;
    t8 = (t0 + 3112U);
    t9 = *((char **)t8);
    t8 = (t0 + 2952U);
    t10 = *((char **)t8);
    t22 = *((int *)t10);
    t29 = (t22 - 1);
    t30 = (t29 - 2);
    t19 = (t30 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, t29);
    t31 = (32U * t19);
    t32 = (0 + t31);
    t8 = (t9 + t32);
    t11 = (t33 + 0U);
    t23 = (t11 + 0U);
    *((int *)t23) = 15;
    t23 = (t11 + 4U);
    *((int *)t23) = -16;
    t23 = (t11 + 8U);
    *((int *)t23) = -1;
    t34 = (-16 - 15);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t23 = (t11 + 12U);
    *((unsigned int *)t23) = t35;
    t23 = ieee_proposed_p_0892474878_sub_13227029559694678111_450259796(IEEE_PROPOSED_P_0892474878, t12, t1, t17, t8, t33);
    t24 = (t12 + 12U);
    t35 = *((unsigned int *)t24);
    t36 = (1U * t35);
    t3 = (64U != t36);
    if (t3 == 1)
        goto LAB16;

LAB17:    t25 = (t0 + 6840);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t37 = *((char **)t28);
    memcpy(t37, t23, 64U);
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t18 = (t13 - 1);
    t1 = (t0 + 6904);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t18;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 10104U);
    t4 = ((WORK_P_1475539293) + 1288U);
    t5 = *((char **)t4);
    t13 = *((int *)t5);
    t18 = (t13 - 1);
    t4 = ((WORK_P_1475539293) + 1408U);
    t8 = *((char **)t4);
    t20 = *((int *)t8);
    t21 = (-(t20));
    t4 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t9 = *((char **)t4);
    t3 = *((unsigned char *)t9);
    t4 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t10 = *((char **)t4);
    t6 = *((unsigned char *)t10);
    t4 = ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(IEEE_PROPOSED_P_0892474878, t17, t2, t1, t18, t21, t3, t6);
    t11 = (t0 + 2792U);
    t23 = *((char **)t11);
    t11 = (t0 + 10120U);
    t24 = ((WORK_P_1475539293) + 1288U);
    t25 = *((char **)t24);
    t22 = *((int *)t25);
    t29 = (t22 - 1);
    t24 = ((WORK_P_1475539293) + 1408U);
    t26 = *((char **)t24);
    t30 = *((int *)t26);
    t34 = (-(t30));
    t24 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t27 = *((char **)t24);
    t7 = *((unsigned char *)t27);
    t24 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t28 = *((char **)t24);
    t38 = *((unsigned char *)t28);
    t24 = ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(IEEE_PROPOSED_P_0892474878, t33, t23, t11, t29, t34, t7, t38);
    t37 = ieee_proposed_p_0892474878_sub_13483384195030879960_450259796(IEEE_PROPOSED_P_0892474878, t12, t4, t17, t24, t33);
    t39 = (t12 + 12U);
    t14 = *((unsigned int *)t39);
    t15 = (1U * t14);
    t40 = (33U != t15);
    if (t40 == 1)
        goto LAB18;

LAB19:    t41 = (t0 + 6776);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t37, 33U);
    xsi_driver_first_trans_fast(t41);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6968);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 6648);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_size_not_matching(33U, t19, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 6648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_size_not_matching(64U, t36, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(33U, t15, 0);
    goto LAB19;

}

static void work_a_2890540737_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(94, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6456);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2890540737_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(95, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 7096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6472);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2890540737_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 7160);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 96U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 6488);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2890540737_3212880686_p_5(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    char *t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(97, ng0);

LAB3:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 10104U);
    t4 = ((WORK_P_1475539293) + 1288U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = (t6 - 1);
    t4 = ((WORK_P_1475539293) + 1408U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (-(t9));
    t4 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t4 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t13 = *((char **)t4);
    t14 = *((unsigned char *)t13);
    t4 = ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(IEEE_PROPOSED_P_0892474878, t1, t3, t2, t7, t10, t12, t14);
    t15 = (t1 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t17 = (32U != t16);
    if (t17 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 7224);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t4, 32U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 6504);
    *((int *)t23) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t16, 0);
    goto LAB6;

}


extern void work_a_2890540737_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2890540737_3212880686_p_0,(void *)work_a_2890540737_3212880686_p_1,(void *)work_a_2890540737_3212880686_p_2,(void *)work_a_2890540737_3212880686_p_3,(void *)work_a_2890540737_3212880686_p_4,(void *)work_a_2890540737_3212880686_p_5};
	xsi_register_didat("work_a_2890540737_3212880686", "isim/neuron_tb_isim_beh.exe.sim/work/a_2890540737_3212880686.didat");
	xsi_register_executes(pe);
}
