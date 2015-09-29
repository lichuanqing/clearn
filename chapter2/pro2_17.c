
/* 程序实例2.17，复数的使用
*/
#include<stdio.h>
//#include<limits.h>
//#define PI =3.14159f /*定义符号 */
//#include<stdbool.h>
//#include<stddef.h>
#include<complex.h>
int main(void)
{
/* 变量定义*/
double complex cx=1.0+3.0*I,
               cy=1.0-4.0*I;


/* 赋值-输入*/


/* 计算*/

/* 输出*/
printf("使用的二个复数为：\n");
printf("\t cx=%.2f%+.2fi\n\t cy=%.2f%+.2fi\n",creal(cx),cimag(cx),creal(cy),cimag(cy)); /* %+.2f 加号表示总是输出符号，减号表示左对齐*/
double complex sum=cx+cy;
printf("\n之和：cx+cy=%.2f%+.2fi\n",creal(sum),cimag(sum));
double complex diff=cx-cy;
printf("\n之差：cx-cy=%.2f%+.2fi\n",creal(diff),cimag(diff));
double complex Mut=cx*cy;
printf("\n乘积：cx*cy=%.2f%+.2fi\n",creal(Mut),cimag(Mut));
double complex div=cx/cy;
printf("\n相除：cx/cy=%.2f%+.2fi\n",creal(div),cimag(div));
double complex conju=conj(cx);
printf("\ncx共轭=%.2f%+.2fi\n",creal(conju),cimag(conju));
    return 0;
}
