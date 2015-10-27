
/* 程序实例3.10，练习使用位逻辑运算
*/
#include<stdio.h>
int main(void)
{

/* 变量定义*/
unsigned int original=0xABC;
unsigned int result=0;
unsigned int mask=0xF; /* 右移4位 */

/* 赋值-输入*/
printf("\n original=%X",original);

/* 第一位C */
result |=original&mask; /*最右边4个位的结果*/
printf("\n step1 result= %X,original=%X",result,original);
original=original>>4;
result=result<<4;
result |=original&mask; /*最右边4个位的结果*/
printf("\n step2 result= %X,original=%X",result,original);
original=original>>4;
result=result<<4;
result |=original&mask; /*最右边4个位的结果*/
printf("\n step3 result= %X,original=%X",result,original);



    return 0;
}
