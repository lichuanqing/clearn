
/* 练习3.1，温度转换选择
*/
#include<stdio.h>
int main(void)
{

/* 变量定义*/
int chose=0;
double temp_in=0.0,temp_out=0.0;

/* 赋值-输入*/
printf("\n 这是一个华氏温度与摄氏温度转换的程序： \n\n1-将温度从摄氏度转换为华氏度；\n2-将温度从华氏度转换为摄氏度。\n 请选择编号：");
scanf("%d",&chose);
//printf("x1=%lf,ope=%c,x2=%lf,",num1,ope,num2);
switch (chose)
{
 case 1:
 printf("请输入摄氏温度：");
 scanf("%lf",&temp_in);
 temp_out=temp_in*1.8+32.0;
 printf("%.2lf 摄氏度=%.2lf 华氏度",temp_in,temp_out);
 break;
 case 2:
 printf("请输入华氏温度：");
 scanf("%lf",&temp_in);
 temp_out=(temp_in-32)*5/9;
 printf("%.2lf 华氏度=%.2lf 摄氏度",temp_in,temp_out);
 break;
 default:
    printf("您的输输入无效！请输入 1 或者 2！");
}

    return 0;
}
