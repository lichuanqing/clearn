/* ��ϰ2.2��C�������ž�����İ� p.77 */
#include <stdio.h>
int main(void)
{

    long inches=0L; /* ����Ӣ����*/
    long feet=0L; /*����Ӣ����*/
    float width=0.0f,length=0.0f; /* ����ĳ��� ��λ��*/
    const float inches_per_foot=12.f;
    const float feet_per_yard=3.f;

    /* ���뷿�䳤��*/
    printf("�����뷿�䳤�ȣ�Ӣ������");
    scanf("%ld",&feet);
    printf(".......Ӣ������");
    scanf("%ld",&inches);
    length=inches/inches_per_foot/feet_per_yard+feet/feet_per_yard;

        /* ���뷿����*/
    printf("�����뷿���ȣ�Ӣ������");
    scanf("%ld",&feet);
    printf(".......Ӣ������");
    scanf("%ld",&inches);
    width=inches/inches_per_foot/feet_per_yard+feet/feet_per_yard;

    printf("���䳤%-.2f�룬��%-.2f�룬���%-.2fƽ���롣\n",length,width,length*width);

    printf("��������˳���");
    getch();
    return 0;
}
