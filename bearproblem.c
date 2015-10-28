#define PI 3.1415
#include <stdio.h>
int main(void)
{
    float money=0.0,price=0.0;
    int gap=0,bott=0,beer=0;
    int gapbeer=0,botbeer=0;
    int gap_per_beer=4,bot_per_beer=2;
    int k;

    printf("防老年痴呆题：啤酒2块1瓶，4个盖换1瓶，2个空瓶换1瓶，10块可以喝几瓶？\n\n");
    printf("输入单价、总钱数（元）：" );
    scanf("%f %f",&price,&money);

    if (price != 0.0)
    {
        beer=money/price;
        gap=beer;
        bott=beer;
    }
    else
    {
        printf("单价不能为0！");
    }

    k=0;
    while (bott>=bot_per_beer || gap>=gap_per_beer)
    {
        k=k+1;
        printf("----第%d次用盖子和空瓶换酒情况：-------\n",k);
        printf("换之前个数目：\n");
        printf("   瓶盖=%d 瓶子=%d 喝%d瓶酒\n",gap,bott,beer);
        gapbeer=gap/gap_per_beer;
        gap=gap%gap_per_beer;
        botbeer=bott/bot_per_beer;
        bott=bott%bot_per_beer;

        beer=beer+gapbeer+botbeer;
        gap=gap+gapbeer+botbeer;
        bott=bott+gapbeer+botbeer;
        printf("换之后个数目：\n");
        printf("   瓶盖=%d 瓶子=%d 喝%d瓶酒\n\n",gap,bott,beer);
    }





    return 0;

}
