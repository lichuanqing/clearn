
/* ��ϰ3.1���¶�ת��ѡ��
*/
#include<stdio.h>
int main(void)
{

/* ��������*/
int chose=0;
double temp_in=0.0,temp_out=0.0;

/* ��ֵ-����*/
printf("\n ����һ�������¶��������¶�ת���ĳ��� \n\n1-���¶ȴ����϶�ת��Ϊ���϶ȣ�\n2-���¶ȴӻ��϶�ת��Ϊ���϶ȡ�\n ��ѡ���ţ�");
scanf("%d",&chose);
//printf("x1=%lf,ope=%c,x2=%lf,",num1,ope,num2);
switch (chose)
{
 case 1:
 printf("�����������¶ȣ�");
 scanf("%lf",&temp_in);
 temp_out=temp_in*1.8+32.0;
 printf("%.2lf ���϶�=%.2lf ���϶�",temp_in,temp_out);
 break;
 case 2:
 printf("�����뻪���¶ȣ�");
 scanf("%lf",&temp_in);
 temp_out=(temp_in-32)*5/9;
 printf("%.2lf ���϶�=%.2lf ���϶�",temp_in,temp_out);
 break;
 default:
    printf("������������Ч�������� 1 ���� 2��");
}

    return 0;
}
