
/* ����ʵ��2.8���������������ַ���ȡ�С��λ��������ơ�����scanfʹ��
*/
#include<stdio.h>
#include<limits.h>
#define PI =3.14159f /*������� */
#include<stdbool.h>
#include<stddef.h>
#include<complex.h>
int main(void)
{
/* ��������*/
float Radius=0.0f,
      Diameter=0.0f,
      Circum=0.0f,
      Area=0.0f;
float Pi=3.1415926f;
const float pi=3.1415926f; /* ���峣��*/
char letter_A='A'; /* ���õ����ţ�������˫���š��� */
char nextLine='\n';
char charcter_A=65;
char ch=0;
wchar_t wch='a'; /* Ҫ����ͷ�ļ�stddef.h*/
bool lee=1; /* Ҫ����ͷ�ļ�stdbool.h*/
double complex z1=2.0+1.0*I;/* Ҫ����ͷ�ļ�complex.h*/

printf("һ�����ַ�4�ֽڣ�%lc\n",wch);
printf("INPUT a character:\n");
scanf("%c",&ch);
printf("Your input is %c and the code value(ASCII) is %d\n",ch,ch);
printf("%c,%c\n",charcter_A,letter_A);
letter_A=letter_A+3;
printf("%c\n",letter_A);

printf("2.10.1����ֵ��������INT_MAX=%d (ע��Ҫ����limits.hͷ�ļ�)\n",INT_MAX);
printf("2.10.2��ȡ������ռ�ֽڣ���sizeof(short)=%d,sizeof(double)=%d\n",sizeof(short),sizeof(double));

/* ��ֵ-����*/
printf("�������ֱ��:\n");
scanf("%f",&Diameter); /*һ��Ҫ���� &Ѱַ����*/

/* ����*/
Radius=Diameter/2.0;/* ����������*/
Circum=Diameter*Pi;
Area=Pi*Radius*Radius;
/* ���*/
printf("\nThe circumference is %.2f.\n",Circum);
printf("The area is %.2f.\n",Area);

    return 0;
}
