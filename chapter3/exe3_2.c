
/* ��ϰ3.1���¶�ת��ѡ��
*/
#include<stdio.h>
int main(void)
{

/* ��������*/
int mm=0,dd=0,yy=0;



/* ��ֵ-����*/
printf("\n ����һ���ڹ淶����ĳ��� \n\n�����������������ֱ���� �� �� �꣨�м��ÿո������:");
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
    printf("һ��С��12����");
}
printf(" %d",yy);

//{
// case 1:
// printf("�����������¶ȣ�");
// scanf("%lf",&temp_in);
// temp_out=temp_in*1.8+32.0;
// printf("%.2lf ���϶�=%.2lf ���϶�",temp_in,temp_out);
// break;
// case 2:
// printf("�����뻪���¶ȣ�");
// scanf("%lf",&temp_in);
// temp_out=(temp_in-32)*5/9;
// printf("%.2lf ���϶�=%.2lf ���϶�",temp_in,temp_out);
// break;
// default:
//    printf("������������Ч�������� 1 ���� 2��");
//}

    return 0;
}
