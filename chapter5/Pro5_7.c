//����5.7, �������-��Ϸ����ʵ���������������Ϸ��

#include<stdio.h>
# include <stdlib.h>

int main(void){
    int Ncube=3;//�������ӡ��߳����������޸����֣�
    int num=0;
    char Show[3][3]={
     {'1','2','3'},
     {'4','5','6'},
     {'7','8','9'}
    };
    int ok=0,save[9];//�洢λ��
    int play=1;//��Ҵ��ţ�1-�ף�2-��
    int winer=0;//ʤ���߱��
    int Location=0,col=0,row=0;//�����λ��,�кţ��к�
    int i=0,j=0;

for (i=0;i<Ncube*Ncube;i++){
// //��ӡ����
printf("\n %c  | %c  | %c  ",Show[0][0],Show[0][1],Show[0][2]);//��1������
printf("\n----+----+----");
printf("\n %c  | %c  | %c  ",Show[1][0],Show[1][1],Show[1][2]);//
printf("\n----+----+----");
printf("\n %c  | %c  | %c  ",Show[2][0],Show[2][1],Show[2][2]);//��3������

if (winer != 0){
    printf("\n\nѡ��%d,��ϲ������Ӯ�ˣ���",winer);
    break;
}

play=i%2+1;//ѡ��2�ν���һ��
do
{printf("\n\n��ѡ�� %d ѡ��λ�ñ�ţ�",play);
scanf("%d",&Location);
//�ж�������Ч��
save[i]=Location;
ok=0;
if (i>0){
    for (j=0;j<i;j++){
           // printf("save[%d]=%d,location=%d",j,save[j],Location);
        if (Location==save[j]){ //��ʽ����ˡ�
            printf("%d λ���Ѿ�ѡ�������������ѡ��",Location);
            ok=1;
            break;
        }
    }
}
if(Location>9 || Location<1){
    ok=1;
    printf("\nλ��ѡ��������ѡ�������ϵ�����");
}
}while(ok);

//�޸������λ�ã����X O
Location=Location-1;
col=Location/Ncube,row=Location%Ncube;
//if (play==1){
//    Show[col][row]='X';
//}
//else{
//    Show[col][row]='O';
//}
Show[col][row]=(play==1)?'X':'O';

//�ж��Ƿ�ʤ�����Խ���-�����Ƿ�ȫ����ͬ
for (j=0;j<Ncube;j++){
    if ('X'==Show[j][0] && 'X'==Show[j][1] && 'X'==Show[j][2] ){ //���Ƿ���ͬ
        winer=1;
        break;
    }
        if ('X'==Show[0][j] &&'X'==Show[1][j] && 'X'==Show[2][j] ){ //���Ƿ���ͬ
        winer=1;
        break;
    }
        if ('O'==Show[j][0] &&'O'==Show[j][1] && 'O'==Show[j][2] ){ //���Ƿ���ͬ
        winer=2;
        break;
    }
        if ('O'==Show[0][j] &&'O'==Show[1][j] && 'O'==Show[2][j] ){ //���Ƿ���ͬ
        winer=2;
        break;
    }
}
        if ('X'==Show[0][0] &&'X'==Show[1][1] && 'X'==Show[2][2] ){ //���Ƿ���ͬ
        winer=1;
    }
            if ('O'==Show[0][0] &&'O'==Show[1][1] && 'O'==Show[2][2] ){ //���Ƿ���ͬ
        winer=2;
    }

}
    printf("\n\n��Enter���˳�!");
    getchar();
    return 0;
}
