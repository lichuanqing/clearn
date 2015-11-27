
/* 练习3.4，计算器修改，是否重新计算
*/
#include<stdio.h>
int main(void)
{
    /* 变量定义*/
double num1=0.0,num2=0.0;
char ope=0; /* 运算符 必须是 + - * / */
char yesno=0; /*是否再进行计算?y/n: */
//printf("%c 开始前",yesno);

recal:{
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
}

printf("\n是否再进行计算?y/n");
scanf("%c",&yesno);  /*为什么该句不让键盘读入数据--好像读入计算输入的Enter键*/
scanf("%c",&yesno);

if (yesno=='y' || yesno=='Y'){
    goto recal;
}
else if (yesno=='n' || yesno=='N'){
  printf("\n结束计算。");
}
else
{
    printf("\n请给出正确的选择");
}

    return 0;
}
