
/* ����ʵ��3.ʹ��if���
*/
#include<stdio.h>
int main(void)
//����ʵ��4.3-���ƺ�֮��
{
	int NoEnd = 0;
	long sum = 0L;
	char ans = 0;

	printf("����ʵ��4.2-����ʵ��4.3-���ƺ�֮��P135\n\n");
	printf("�����β�����ƺţ�");//������Ǹ���
	scanf_s(" %d",&NoEnd);
	printf("NoEnd=%d", NoEnd);
	//scanf_s(" %d", & NoEnd);
	for (int k = 1; k <= NoEnd; ++k) //���Ӷ�������
	{
		sum = sum + k;
		printf("k=%d,sum=%d\n",k,sum);
	}

	for (;;)
	{
		printf("�Ƿ���� y/n:");
		scanf_s("%c", &ans);
		if (tolower(ans) == 'n') //��תΪСд tolower(ans) 
			break;
		printf("k=");
	}
	printf("��Enter���˳���\n");
	getchar();
    return 0;
}
