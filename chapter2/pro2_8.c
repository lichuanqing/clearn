
/* 程序实例2.8，浮点数除法，字符宽度、小数位数输出控制、读入scanf使用
*/
#include<stdio.h>
#include<limits.h>
#define PI =3.14159f /*定义符号 */
#include<stdbool.h>
#include<stddef.h>
#include<complex.h>
int main(void)
{
/* 变量定义*/
float Radius=0.0f,
      Diameter=0.0f,
      Circum=0.0f,
      Area=0.0f;
float Pi=3.1415926f;
const float pi=3.1415926f; /* 定义常量*/
char letter_A='A'; /* 采用单引号，而不是双引号”“ */
char nextLine='\n';
char charcter_A=65;
char ch=0;
wchar_t wch='a'; /* 要加入头文件stddef.h*/
bool lee=1; /* 要加入头文件stdbool.h*/
double complex z1=2.0+1.0*I;/* 要加入头文件complex.h*/

printf("一个长字符4字节，%lc\n",wch);
printf("INPUT a character:\n");
scanf("%c",&ch);
printf("Your input is %c and the code value(ASCII) is %d\n",ch,ch);
printf("%c,%c\n",charcter_A,letter_A);
letter_A=letter_A+3;
printf("%c\n",letter_A);

printf("2.10.1极限值函数，如INT_MAX=%d (注意要加入limits.h头文件)\n",INT_MAX);
printf("2.10.2获取类型所占字节，如sizeof(short)=%d,sizeof(double)=%d\n",sizeof(short),sizeof(double));

/* 赋值-输入*/
printf("输出桌子直径:\n");
scanf("%f",&Diameter); /*一定要加上 &寻址符号*/

/* 计算*/
Radius=Diameter/2.0;/* 浮点数除法*/
Circum=Diameter*Pi;
Area=Pi*Radius*Radius;
/* 输出*/
printf("\nThe circumference is %.2f.\n",Circum);
printf("The area is %.2f.\n",Area);

    return 0;
}
