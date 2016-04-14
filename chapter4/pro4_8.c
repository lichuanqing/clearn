

#include<stdio.h>
int main(void)
//do-while,多重循环
{

	int i = 0,j=0;
	int count = 0;
	long sum = 0L;
	int N = 0, M = 0;

	count = 7;
	while (i<=count)
	{
		sum += i++; //注意 ++在前还是在后，与条件对用
		printf("i=%d,sum=%d\n", i, sum);
	}

	i = 1, j = 1;
	N = 10, M = 6;
	count = 0;
	for (i = 1; i <= N; ++i)
		for (j = 1; j <= M; ++j)
		{
			count += j;
			printf("i=%d,j=%d,sum=%d\n",i, j, count);
		}
    return 0;
}
