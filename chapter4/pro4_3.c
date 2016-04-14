
/* 程序实例3.使用if语句
*/
#include<stdio.h>
int main(void)
//程序实例4.3-门牌号之后
{
	int NoEnd = 0;
	long sum = 0L;
	char ans = 0;

	printf("程序实例4.2-程序实例4.3-门牌号之后P135\n\n");
	printf("输入结尾的门牌号：");//输入的那个数
	scanf_s(" %d",&NoEnd);
	printf("NoEnd=%d", NoEnd);
	//scanf_s(" %d", & NoEnd);
	for (int k = 1; k <= NoEnd; ++k) //盒子二个竖线
	{
		sum = sum + k;
		printf("k=%d,sum=%d\n",k,sum);
	}

	for (;;)
	{
		printf("是否继续 y/n:");
		scanf_s("%c", &ans);
		if (tolower(ans) == 'n') //都转为小写 tolower(ans) 
			break;
		printf("k=");
	}
	printf("按Enter键退出！\n");
	getchar();
    return 0;
}
