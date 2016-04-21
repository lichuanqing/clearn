//程序5.7, 程序设计-游戏，其实是类似五子棋的游戏。

#include<stdio.h>
# include <stdlib.h>

int main(void){
    int Ncube=3;//正方格子“边长”，方便修改数字；
    int num=0;
    char Show[3][3]={
     {'1','2','3'},
     {'4','5','6'},
     {'7','8','9'}
    };
    int ok=0,save[9];//存储位置
    int play=1;//玩家代号，1-甲；2-乙
    int winer=0;//胜利者编号
    int Location=0,col=0,row=0;//下棋的位置,行号，列号
    int i=0,j=0;

for (i=0;i<Ncube*Ncube;i++){
// //打印棋盘
printf("\n %c  | %c  | %c  ",Show[0][0],Show[0][1],Show[0][2]);//第1行数字
printf("\n----+----+----");
printf("\n %c  | %c  | %c  ",Show[1][0],Show[1][1],Show[1][2]);//
printf("\n----+----+----");
printf("\n %c  | %c  | %c  ",Show[2][0],Show[2][1],Show[2][2]);//第3行数字

if (winer != 0){
    printf("\n\n选手%d,恭喜您，您赢了！。",winer);
    break;
}

play=i%2+1;//选手2次交换一次
do
{printf("\n\n请选手 %d 选择位置编号：",play);
scanf("%d",&Location);
//判断输入有效性
save[i]=Location;
ok=0;
if (i>0){
    for (j=0;j<i;j++){
           // printf("save[%d]=%d,location=%d",j,save[j],Location);
        if (Location==save[j]){ //公式打错了。
            printf("%d 位置已经选择过，请您重新选择",Location);
            ok=1;
            break;
        }
    }
}
if(Location>9 || Location<1){
    ok=1;
    printf("\n位置选择有误，请选择棋盘上的数字");
}
}while(ok);

//修改下棋后位置，标记X O
Location=Location-1;
col=Location/Ncube,row=Location%Ncube;
//if (play==1){
//    Show[col][row]='X';
//}
//else{
//    Show[col][row]='O';
//}
Show[col][row]=(play==1)?'X':'O';

//判断是否胜利，对角线-边上是否全部相同
for (j=0;j<Ncube;j++){
    if ('X'==Show[j][0] && 'X'==Show[j][1] && 'X'==Show[j][2] ){ //行是否相同
        winer=1;
        break;
    }
        if ('X'==Show[0][j] &&'X'==Show[1][j] && 'X'==Show[2][j] ){ //列是否相同
        winer=1;
        break;
    }
        if ('O'==Show[j][0] &&'O'==Show[j][1] && 'O'==Show[j][2] ){ //行是否相同
        winer=2;
        break;
    }
        if ('O'==Show[0][j] &&'O'==Show[1][j] && 'O'==Show[2][j] ){ //列是否相同
        winer=2;
        break;
    }
}
        if ('X'==Show[0][0] &&'X'==Show[1][1] && 'X'==Show[2][2] ){ //行是否相同
        winer=1;
    }
            if ('O'==Show[0][0] &&'O'==Show[1][1] && 'O'==Show[2][2] ){ //行是否相同
        winer=2;
    }

}
    printf("\n\n按Enter键退出!");
    getchar();
    return 0;
}
