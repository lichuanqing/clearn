
/* 程序实例2.18，设计一个程序：计算大树的高度，主要原理三点一线和相似三角形。
方法：一矮、一个高二个人，与树依次站立，调整相互间水平距离使得矮子看高个子头和树梢重合。
测量：矮子身高h1、高个子身高h2，矮个子与高个子之间水平距离d1；高个子与树之间的水平距离d2
可以由下式计算树的高度h3=(d1+d2)/d1*(h2-h1)+h1
*/
#include<stdio.h>

int main(void)
{
    /* 采用英制距离单位：英尺和英寸，1英尺=12英寸 采用长整数计算*/

    /* 变量定义*/
long h1,h2,d1,d2; /* 四距离量量 单位英寸*/
long  inches,feet; /* 每次读入英尺和英寸，共同组成高度和距离*/
long h3; /*树的高度 单位英寸，输出时可以取余数*/
const long inches_per_foot=12L;  /* 1英尺=12英寸*/

/* 赋值-输入矮个子身高*/
printf("请输入矮个子身高,英尺数：");
scanf("%d",&feet);
printf("......,英寸数：");
scanf("%d",&inches);
h1=inches+feet*inches_per_foot;

/* 赋值-输入高个子身高*/
printf("请输入高个子身高,英尺数：");
scanf("%d",&feet);
printf("......,英寸数：");
scanf("%d",&inches);
h2=inches+feet*inches_per_foot;

/* 赋值-输入矮个子与高个子之间水平距离*/
printf("请输入矮个子与高个子之间水平距离,英尺数：");
scanf("%d",&feet);
printf("......,,英寸数：");
scanf("%d",&inches);
d1=inches+feet*inches_per_foot;

/* 赋值-输入矮个子与高个子之间水平距离*/
printf("请输入高个子与树之间的水平距离,英尺数：");
scanf("%d",&feet); /* 仅需要输入英尺数，英寸数相对为小量*/
d2=feet*inches_per_foot;

/* 计算*/
h3=(d1+d2)/d1*(h2-h1)+h1;
/* 输出*/
printf("树的高度是%d英尺%d英寸。\n",h3/inches_per_foot,h3%inches_per_foot);


/* 直接用国际单位：米，采用浮点数进行计算*/

///* 变量定义*/
//float h1,h2,d1,d2; /* 四个输入量 */
//float h3; /*树的高度 */
//
///* 赋值-输入*/
//printf("请输入矮个子身高h1（米）：\n");
//scanf("%f",&h1);
//printf("请输入高个子身高h2（米）：\n");
//scanf("%f",&h2);
//printf("请输入矮个子与高个子之间水平距离d1（米）：\n");
//scanf("%f",&d1);
//printf("请输入高个子与树之间的水平距离d2（米）：\n");
//scanf("%f",&d2);
///* 计算*/
//h3=(d1+d2)/d1*(h2-h1)+h1;
///* 输出*/
//printf("树的高度h3为%-.2f米。\n",h3);
    return 0;
}
