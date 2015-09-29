
/* 程序实例2.6，除法和取模运算练习：45块饼干7个孩子吃，每人吃几块剩下几块？
*/
#include<stdio.h>
int main(void)
{
unsigned int count=10; /* 无符号整数*/
int decrease=3147438649;
long Big_Num=2147438649L;
float Radius=2.5f;
double Biggest=1E30;
long double huge=12345.56789L;
printf("int %d;Long %d\n",decrease,Big_Num);
printf("float %-8.1f, double %8.1f,Long double %.5f \n",Radius,Biggest,huge); /*打印不出来？？*/
/* 变量定义*/
int Total=1,N_chi=1; /* 总饼干数 孩子数*/
int N_per=0; /* 每个孩子吃的饼干块数*/
int N_lef=0; /* 剩余块数*/

/* 赋值-输入*/
Total=45;
N_chi=7;

/* 计算*/
N_per=Total/N_chi;/* 整除运算*/
N_lef=Total%N_chi;/* 取模（求余数）运算*/
/* 输出*/
printf("\nWe have %d children and %d cookies.\n",N_chi,Total);
printf("Give each child %d cookies.\n",N_per);
printf("There are %d cookies left over.\n",N_lef);


    return 0;
}
