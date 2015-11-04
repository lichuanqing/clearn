
/* 练习3.1，温度转换选择
*/
#include<stdio.h>
int main(void)
{

/* 变量定义*/
int mm=0,dd=0,yy=0;



/* 赋值-输入*/
printf("\n 这是一日期规范输出的程序： \n\n请输入三个整数，分别代表 月 日 年（中间用空格隔开）:");
scanf("%d %d %d",&mm,&dd,&yy);


if ((dd>3 && dd<21) || (dd>23 && dd<31))
    printf("%dth ",dd);
else
    printf("%d%s ",dd,(dd%10==1 ? "st":(dd%10==2 ?  "nd":"rd")));
switch (mm)
{
    case 1:
    printf("January");
    break;
case 2:
    printf("February");
    break;
case 3:
    printf("March");
    break;
case 4:
    printf("April");
    break;
case 5:
    printf("May");
    break;
case 6:
    printf("June");
    break;
case 7:
    printf("July");
    break;
case 8:
    printf("August");
    break;
case 9:
    printf("September");
    break;
case 10:
    printf("October");
    break;
case 11:
    printf("November");
    break;
case 12:
    printf("December");
    break;
default:
    printf("一年小于12个月");
}
printf(" %d",yy);

//{
// case 1:
// printf("请输入摄氏温度：");
// scanf("%lf",&temp_in);
// temp_out=temp_in*1.8+32.0;
// printf("%.2lf 摄氏度=%.2lf 华氏度",temp_in,temp_out);
// break;
// case 2:
// printf("请输入华氏温度：");
// scanf("%lf",&temp_in);
// temp_out=(temp_in-32)*5/9;
// printf("%.2lf 华氏度=%.2lf 摄氏度",temp_in,temp_out);
// break;
// default:
//    printf("您的输输入无效！请输入 1 或者 2！");
//}

    return 0;
}
