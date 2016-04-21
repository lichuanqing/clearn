//程序 5.3，使用数组计算平均值
//程序5.5, 体现数组的优越性，

#include<stdio.h>


int main(void){
 int score[10];//存入10个分数数值
 int sum;//总分
 int i;
printf("请输入10个学生的分数：\n");

sum=0;
 for (i=0;i<10;i++){
    printf("%d >",i+1);
    scanf("%d",&score[i]);
    sum+=score[i];
 }

  printf("\n10个学生的平均分为：%f。",(float)sum/10);

  //程序5.4 重新使用数据；
  for (i=0;i<10;i++){
    printf("\n学号%2d的得分为：%3d",i+1,score[i]); //重新使用数组
  }

    printf("HELLO,WORLD!");
    getchar();
    return 0;
}
