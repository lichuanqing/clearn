/* ��ϰ2.1��C�������ž�����İ� p.76 */
#include <stdio.h>
int main(void)
{
    char ch='\n';
    long inches=0L; /* ����Ӣ����*/
    long feets=0L; /*��Ӣ����*/
    const long inches_per_foot=12L;
    const long feet_per_yard=3L;

    printf("������Ӣ������");
    scanf("%ld",&inches);
    feets=inches/inches_per_foot;
    printf("%dӢ��=%d��%dӢ��%dӢ��\n",inches,feets/feet_per_yard,feets%feet_per_yard,inches%inches_per_foot);
    printf("��������˳���");
    getch();
    return 0;
}
