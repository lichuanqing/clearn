
/* 程序实例3.11，章末程序设计-一个计算器
*/
#include<stdio.h>
int main(void)
{

/* 变量定义*/
double num1=0.0,num2=0.0;
char ope=0; /* 运算符 必须是 + - * / */

/* 赋值-输入*/
printf("\n 这是一个四则运算的计算器，请输入计算表达式：\n");
scanf("%lf %c %lf",&num1,&ope,&num2);
//printf("x1=%lf,ope=%c,x2=%lf,",num1,ope,num2);

/* 检查输入有效性*/
switch(ope)
{
case '+':
    printf("=%lf",num1+num2);
    break;
case '-':
    printf("=%lf",num1-num2);
    break;
case '*':
    printf("=%lf",num1*num2);
    break;
case '/':
    if (num2==0)
        printf("\n\n除数不能为零！");
    else
        printf("=%lf",num1/num2);
    break;
case '%':
    if (num2==0)
        printf("\n\n除数不能为零！");
    else
        printf("=%ld",(long)num1 % (long)num2);
    break;
default:
    printf("\n\n无效的操作符号！");
}
    return 0;
}
