
/* ����ʵ��3.10����ϰʹ��λ�߼�����
*/
#include<stdio.h>
int main(void)
{

/* ��������*/
unsigned int original=0xABC;
unsigned int result=0;
unsigned int mask=0xF; /* ����4λ */

/* ��ֵ-����*/
printf("\n original=%X",original);

/* ��һλC */
result |=original&mask; /*���ұ�4��λ�Ľ��*/
printf("\n step1 result= %X,original=%X",result,original);
original=original>>4;
result=result<<4;
result |=original&mask; /*���ұ�4��λ�Ľ��*/
printf("\n step2 result= %X,original=%X",result,original);
original=original>>4;
result=result<<4;
result |=original&mask; /*���ұ�4��λ�Ľ��*/
printf("\n step3 result= %X,original=%X",result,original);



    return 0;
}
