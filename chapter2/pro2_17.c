
/* ����ʵ��2.17��������ʹ��
*/
#include<stdio.h>
//#include<limits.h>
//#define PI =3.14159f /*������� */
//#include<stdbool.h>
//#include<stddef.h>
#include<complex.h>
int main(void)
{
/* ��������*/
double complex cx=1.0+3.0*I,
               cy=1.0-4.0*I;


/* ��ֵ-����*/


/* ����*/

/* ���*/
printf("ʹ�õĶ�������Ϊ��\n");
printf("\t cx=%.2f%+.2fi\n\t cy=%.2f%+.2fi\n",creal(cx),cimag(cx),creal(cy),cimag(cy)); /* %+.2f �Ӻű�ʾ����������ţ����ű�ʾ�����*/
double complex sum=cx+cy;
printf("\n֮�ͣ�cx+cy=%.2f%+.2fi\n",creal(sum),cimag(sum));
double complex diff=cx-cy;
printf("\n֮�cx-cy=%.2f%+.2fi\n",creal(diff),cimag(diff));
double complex Mut=cx*cy;
printf("\n�˻���cx*cy=%.2f%+.2fi\n",creal(Mut),cimag(Mut));
double complex div=cx/cy;
printf("\n�����cx/cy=%.2f%+.2fi\n",creal(div),cimag(div));
double complex conju=conj(cx);
printf("\ncx����=%.2f%+.2fi\n",creal(conju),cimag(conju));
    return 0;
}
