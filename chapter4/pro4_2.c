
/* ����ʵ��3.ʹ��if���
*/
#include<stdio.h>
int main(void)
//����ʵ��4.2-����һ������-ѭ��ʹ��printf
{
	printf("����ʵ��4.2-����һ������-ѭ��ʹ��printf\n\n");
	printf("***************\n");//�����ϱ�
	for (int k = 1; k <= 8; ++k) //���Ӷ�������
	{
		printf("*             *\n");
	}

	printf("***************\n");//�����±�
	for (int i = 1, j = 1; i <= 10, j <= 10; ++i, j = j + 2)
		printf("i%5d,j%5d,i*j%5d\n", i, j, i*j);

    return 0;
}
