
// ��ϰ4.5������ѡ�񣬼���
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h> //rand(),srand()
#include<time.h> //time()

int main(void)
//������ƣ�һ���򵥵�simon��Ϸ�����������Ϸ��
{
    char another_game='Y';//�Ƿ�����һ������Ϸ
    //��¼����������������Ƿ���ȷ��������ȷ����Ϊtrue������ȷ����Ϊfalse
    bool correct=true;

    int counter=0; //������ȷ����������3�Σ�������һ��-�����Ѷ�
    int len_sequ=0;//һ�����ֵĳ��ȣ�3����ȷ������ӣ�
    time_t seed=0; //�������
    int numbere=0; //�洢���������
    time_t now=0; //��ǰʱ��
    time_t time_token; //����Ϸ����ʱ��
    int sel=0; //�ôμǴ��ˣ���ѡ�����֣�\n\t1-�����ù���Ϸ��2-���¿�����Ϸ

    //int i=1,j=1; //ѭ������
  //��ʼ������

  // ˵�������Ϸ
  printf("��һ���򵥵ļ���������Ϸ��simon��Ϸ��");
  printf("\n��ϸ����Ļ�ϵ�һ�����֣�1���������ʧ��"
         "�뾡����ס���������⴮����");
  printf("\n�������Ҫ����������ǵõ�����");
  printf("\nע������ÿ������ʱ����һ���ո�");
  printf("\n\nף�����ˣ�\n���ڰ�Enter����ʼ��Ϸ��");
  scanf("%c",&another_game);


   do { //���ѭ����һ����Ϸ


    correct=true;//��ʼ��
    counter=0; //�ɹ�����
    len_sequ=2; //��ʼ��������Ϊ2
    time_token=clock();//һ�ֿ�ʼ��ʱ

    // �ڲ�ѭ����һֱ�浽����Ϊֹ
    while (correct){
      // ����Ϸ

      //û3����ȷ�����ִ��߳�һ��
      //counter=counter+1,if (counter%3==0){len_sequ=len_sequ+1}
      len_sequ+=counter++%3==0;

      //����seed��
      seed=time(NULL);

      now=clock();//��ʾ��ʼʱ��
      //����һ�����֣�����ʾ
      srand((unsigned int)seed);//��ʼ���������
      for (int i=1;i<=len_sequ;i++)
        {
            //i++;
            printf("%d ",rand()%10);
        }

      //�ȴ�һ����
        for (;clock()-now<CLOCKS_PER_SEC;); //ѭ��ֱ��1��


      //һ��������ʧ-���Ƶ����ף��ÿո��ǵ�
      printf("\r");
      for (int i=1;i<=len_sequ;i++){
        printf("  ");
      }

      if (counter==1){
        printf("\n �������ִ�����Ҫ���ǿո�\n");
      }
      else
      {
          printf("\r");//�ص�����
      }
      //printf("\n�������ס������");

      //�������֣�������Ƿ���ȷ,//�ж��Ƿ���ȷ
      srand((unsigned int)seed);//�������ɺ�������ͬ���������
      for (int i=1;i<=len_sequ;i++){
        scanf("%d",&numbere);//һ��һ����������
      //  printf("numbere=%d",numbere);
        //printf("%d",rand()%10);
        sel=0;//��ʼ��
        if (numbere != rand()%10){
                printf("\n�ôμǴ��ˣ���ѡ�����֣�\n\t1-�����ù���Ϸ��2-���¿�����Ϸ��");
                scanf("%d",&sel);
                switch (sel){
            case 1:
                correct=true;
               // counter--;//���һ��û�гɹ��������ȥ����ǡ��Ϊ3����ʱ�����ط��أ��ɵ��³�������
                break;
            case 2:
                correct=false;
                break;
            default:
                printf("\n����ȷѡ��"); //�ú������޵��ô�������Ĭ��û�иı�correctֵ��Ϊture
                break;
                }
            break;
        }
      }
      //correct=true;
      if (sel==0){
        printf("%s\n",correct ? "Correct!":"Wrong!"); //��̫���ʣ��´���Ҳ�������correct��ʾ��
      }
        else{
            printf("Wrong,Continue!\n"); //��̫���ʣ��´���Ҳ�������correct��ʾ��
        }
    }
    // �������ʱ��
    time_token=(clock()-time_token)/CLOCKS_PER_SEC; //��Ϊ��λ
    printf("\n\n��ĵ÷���%d ",counter*100/time_token);
    fflush(stdin); //������̻���

    printf("�÷�=\n");
    printf("�Ƿ�����һ������Ϸ(y/n)?:");
    scanf("%c",&another_game);


   }while(toupper(another_game) =='Y');
    return 0;
}
