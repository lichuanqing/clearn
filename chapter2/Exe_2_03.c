/* ��ϰ2.3��C�������ž�����İ� p.77 */
#include <stdio.h>
int main(void)
{

    long amount=0L; /*��������*/
    float price=0.0f; /* ���ۣ���׼��$3.5;������$5.5.*/


    /* ���뵥��*/
    printf("�����뵥��(��׼��$3.5;������$5.5)��");
    scanf("%f",&price);
    printf("�����빺��������");
    scanf("%ld",&amount);

    printf("�ܼ�Ϊ$%-.2f��\n",price*amount);

    printf("��������˳���");
    getch();
    return 0;
}
