/* ��ϰ2.4��C�������ž�����İ� p.77 */
#include <stdio.h>
int main(void)
{


    float salery=0.0f; /* һ��нˮ��λ��Ԫ*/
    float times=0.0f; /* һ���ϰ�Сʱ*/
    long rate=0.0f; /*Сʱƽ������ ��λ�� */
    const long cents_per_dollar=100L;

    /* ����*/
    printf("������һ�ܹ���ʱ�䣨��λСʱ����");
    scanf("%f",&times);
    printf("������һ�ܵ�нˮ����λ��Ԫ����");
    scanf("%f",&salery);

    rate=salery/times*cents_per_dollar;
    /* printf("��Ԫ��%f",salery/times);*/
    printf("��Сʱƽ������Ϊ%d��Ԫ%d���֡�\n",rate/cents_per_dollar,rate%cents_per_dollar);

    printf("��������˳���");
    getch();
    return 0;
}
