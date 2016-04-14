

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h> //rand(),srand()
#include<time.h> //time()

int main(void)
//程序设计：一个简单的simon游戏，记忆测试游戏。
{
    char another_game='Y';//是否再玩一把新游戏
    //记录输入玩家输入数字是否正确，输入正确设置为true；不正确设置为false
    bool correct=true;

    int counter=0; //输入正确次数；超过3次，进入下一关-增加难度
    int len_sequ=0;//一串数字的长度，3次正确后会增加；
    time_t seed=0; //随机种子
    int numbere=0; //存储输入的数字
    time_t now=0; //当前时间
    time_t time_token; //玩游戏花费时间

    //int i=1,j=1; //循环变量
  //初始化程序

  // 说明如何游戏
  printf("玩一个简单的记忆数字游戏（simon游戏）");
  printf("\n仔细看屏幕上的一串数字，1秒后它将消失，"
         "请尽量记住所看到的这串数字");
  printf("\n计算机将要求你输入你记得的数字");
  printf("\n注意输入每个数字时，加一个空格");
  printf("\n\n祝您好运！\n现在按Enter键开始游戏！");
  scanf("%c",&another_game);


   do { //外层循环：一局游戏


    correct=true;//初始化
    counter=0; //成功次数
    len_sequ=2; //初始长度设置为2
    time_token=clock();//一局开始计时

    // 内层循环：一直玩到错误为止
    while (correct){
      // 玩游戏

      //没3次正确后，数字串边长一个
      //counter=counter+1,if (counter%3==0){len_sequ=len_sequ+1}
      len_sequ+=counter++%3==0;

      //设置seed，
      seed=time(NULL);

      now=clock();//显示开始时间
      //生成一串数字，并显示
      srand((unsigned int)seed);//初始化随机数串
      for (int i=1;i<=len_sequ;i++)
        {
            //i++;
            printf("%d ",rand()%10);
        }

      //等待一秒钟
        for (;clock()-now<CLOCKS_PER_SEC;); //循环直至1秒


      //一串数字消失-即移到行首，用空覆盖掉
      printf("\r");
      for (int i=1;i<=len_sequ;i++){
        printf("  ");
      }

      if (counter==1){
        printf("\n 输入数字串，不要忘记空格\n");
      }
      else
      {
          printf("\r");//回到行首
      }
      //printf("\n输入你记住的数字");

      //输入数字，并检查是否正确,//判断是否正确
      srand((unsigned int)seed);//重新生成和上面相同的随机数串
      for (int i=1;i<=len_sequ;i++){
        scanf("%d",&numbere);//一个一个读入数字
      //  printf("numbere=%d",numbere);
        //printf("%d",rand()%10);
        if (numbere != rand()%10){
            correct=false;
            break;
        }
      }
      //correct=true;
        printf("%s\n",correct ? "Correct!":"Wrong!");
    }
    // 计算玩的时间
    time_token=(clock()-time_token)/CLOCKS_PER_SEC; //秒为单位
    printf("\n\n你的得分是%d ",counter*100/time_token);
    fflush(stdin); //清除键盘缓存

    printf("得分=\n");
    printf("是否再玩一把新游戏(y/n)?:");
    scanf("%c",&another_game);


   }while(toupper(another_game) =='Y');
    return 0;
}
