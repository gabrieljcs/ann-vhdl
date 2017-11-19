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


static void work_a_4136542893_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(45, ng0);
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
LAB3:    t1 = (t0 + 6496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 6640);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 6640);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_4136542893_3212880686_p_1(char *t0)
{
    char t13[16];
    char t19[16];
    char t27[16];
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
    int t12;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t20;
    unsigned int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int64 t38;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6512);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6768);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6896);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 96U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6960);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6768);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 0);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t14 = (t12 - 1);
    t15 = (t14 - 2);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, t14);
    t17 = (32U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = (t19 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 15;
    t8 = (t5 + 4U);
    *((int *)t8) = -16;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t20 = (-16 - 15);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t21;
    t8 = (t0 + 2632U);
    t9 = *((char **)t8);
    t8 = (t0 + 3112U);
    t10 = *((char **)t8);
    t22 = *((int *)t10);
    t23 = (t22 - 1);
    t24 = (t23 - 2);
    t21 = (t24 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, t23);
    t25 = (32U * t21);
    t26 = (0 + t25);
    t8 = (t9 + t26);
    t11 = (t27 + 0U);
    t28 = (t11 + 0U);
    *((int *)t28) = 15;
    t28 = (t11 + 4U);
    *((int *)t28) = -16;
    t28 = (t11 + 8U);
    *((int *)t28) = -1;
    t29 = (-16 - 15);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t11 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = ieee_proposed_p_0892474878_sub_13227029559694678111_450259796(IEEE_PROPOSED_P_0892474878, t13, t1, t19, t8, t27);
    t31 = (t13 + 12U);
    t30 = *((unsigned int *)t31);
    t32 = (1U * t30);
    t3 = (64U != t32);
    if (t3 == 1)
        goto LAB14;

LAB15:    t33 = (t0 + 7024);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 64U);
    xsi_driver_first_trans_fast(t33);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 6768);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB6:    xsi_set_current_line(82, ng0);
    t38 = (5 * 1000LL);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t14 = (t12 - 1);
    t1 = (t0 + 7088);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t14;
    xsi_driver_first_trans_delta(t1, 0U, 1, t38);
    t10 = (t0 + 7088);
    xsi_driver_intertial_reject(t10, t38, t38);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 6768);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 7152);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6768);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB2;

LAB8:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 6768);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 6832);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 6768);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_size_not_matching(64U, t32, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6768);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 6832);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}

static void work_a_4136542893_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(111, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7216);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6528);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4136542893_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(112, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 7280);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6544);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4136542893_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(113, ng0);

LAB3:    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 10320U);
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

LAB6:    t18 = (t0 + 7344);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t4, 32U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 6560);
    *((int *)t23) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t16, 0);
    goto LAB6;

}


extern void work_a_4136542893_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4136542893_3212880686_p_0,(void *)work_a_4136542893_3212880686_p_1,(void *)work_a_4136542893_3212880686_p_2,(void *)work_a_4136542893_3212880686_p_3,(void *)work_a_4136542893_3212880686_p_4};
	xsi_register_didat("work_a_4136542893_3212880686", "isim/neuron_isim_beh.exe.sim/work/a_4136542893_3212880686.didat");
	xsi_register_executes(pe);
}
