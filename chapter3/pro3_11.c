
/* ����ʵ��3.11����ĩ�������-һ��������
*/
#include<stdio.h>
int main(void)
{

/* ��������*/
double num1=0.0,num2=0.0;
char ope=0; /* ����� ������ + - * / */

/* ��ֵ-����*/
printf("\n ����һ����������ļ������������������ʽ��\n");
scanf("%lf %c %lf",&num1,&ope,&num2);
//printf("x1=%lf,ope=%c,x2=%lf,",num1,ope,num2);

/* ���������Ч��*/
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
        printf("\n\n��������Ϊ�㣡");
    else
        printf("=%lf",num1/num2);
    break;
case '%':
    if (num2==0)
        printf("\n\n��������Ϊ�㣡");
    else
        printf("=%ld",(long)num1 % (long)num2);
    break;
default:
    printf("\n\n��Ч�Ĳ������ţ�");
}
    return 0;
}
