#define PI 3.1415
#include <stdio.h>
int main(void)
{
    float money=0.0,price=0.0;
    int gap=0,bott=0,beer=0;
    int gapbeer=0,botbeer=0;
    int gap_per_beer=4,bot_per_beer=2;
    int k;

    printf("������մ��⣺ơ��2��1ƿ��4���ǻ�1ƿ��2����ƿ��1ƿ��10����Ժȼ�ƿ��\n\n");
    printf("���뵥�ۡ���Ǯ����Ԫ����" );
    scanf("%f %f",&price,&money);

    if (price != 0.0)
    {
        beer=money/price;
        gap=beer;
        bott=beer;
    }
    else
    {
        printf("���۲���Ϊ0��");
    }

    k=0;
    while (bott>=bot_per_beer || gap>=gap_per_beer)
    {
        k=k+1;
        printf("----��%d���ø��ӺͿ�ƿ���������-------\n",k);
        printf("��֮ǰ����Ŀ��\n");
        printf("   ƿ��=%d ƿ��=%d ��%dƿ��\n",gap,bott,beer);
        gapbeer=gap/gap_per_beer;
        gap=gap%gap_per_beer;
        botbeer=bott/bot_per_beer;
        bott=bott%bot_per_beer;

        beer=beer+gapbeer+botbeer;
        gap=gap+gapbeer+botbeer;
        bott=bott+gapbeer+botbeer;
        printf("��֮�����Ŀ��\n");
        printf("   ƿ��=%d ƿ��=%d ��%dƿ��\n\n",gap,bott,beer);
    }





    return 0;

}
