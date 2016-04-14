
/* 程序实例3.使用if语句
*/
#include<stdio.h>
int main(void)
//程序实例4.2-绘制一个盒子-循环使用printf
{
	printf("程序实例4.2-绘制一个盒子-循环使用printf\n\n");
	printf("***************\n");//盒子上边
	for (int k = 1; k <= 8; ++k) //盒子二个竖线
	{
		printf("*             *\n");
	}

	printf("***************\n");//盒子下边
	for (int i = 1, j = 1; i <= 10, j <= 10; ++i, j = j + 2)
		printf("i%5d,j%5d,i*j%5d\n", i, j, i*j);

    return 0;
}
