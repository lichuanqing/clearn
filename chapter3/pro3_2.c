
/* ����ʵ��3.ʹ��if���
*/
#include<stdio.h>
int main(void)
{

/* ��������*/
float price,discout,Total;/* �۸��ۿ�*/
int amount=0; /* ����*/

/* ��ֵ-����*/
price=3.5;
discout=0.05; /* 5%*/

printf("�����빺��������\n");
scanf("%d",&amount);
/* ����*/
if (amount>10)
 Total=price*amount*(1-discout);
else
Total=price*amount;
/* ���*/
printf("�ܶ�Ϊ��%.2f��",Total);


    return 0;
}
