
/* ����ʵ��2.6��������ȡģ������ϰ��45�����7�����ӳԣ�ÿ�˳Լ���ʣ�¼��飿
*/
#include<stdio.h>
int main(void)
{
unsigned int count=10; /* �޷�������*/
int decrease=3147438649;
long Big_Num=2147438649L;
float Radius=2.5f;
double Biggest=1E30;
long double huge=12345.56789L;
printf("int %d;Long %d\n",decrease,Big_Num);
printf("float %-8.1f, double %8.1f,Long double %.5f \n",Radius,Biggest,huge); /*��ӡ����������*/
/* ��������*/
int Total=1,N_chi=1; /* �ܱ����� ������*/
int N_per=0; /* ÿ�����ӳԵı��ɿ���*/
int N_lef=0; /* ʣ�����*/

/* ��ֵ-����*/
Total=45;
N_chi=7;

/* ����*/
N_per=Total/N_chi;/* ��������*/
N_lef=Total%N_chi;/* ȡģ��������������*/
/* ���*/
printf("\nWe have %d children and %d cookies.\n",N_chi,Total);
printf("Give each child %d cookies.\n",N_per);
printf("There are %d cookies left over.\n",N_lef);


    return 0;
}
