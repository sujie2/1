#include<stdio.h>
int main()
{
    int numbers[20];
    int A=0,B=0,C=0;
    int Asum=0,Bsum=0;
    float Aaver,Baver;
    printf("������20����:\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&numbers[i]);
        if (numbers[i]>0)
        {
            A++;
            Asum+=numbers[i];
            }
        else if (numbers<0)
        {
            B++;
            Bsum+=numbers[i];
            }
        else
        C++;
    }
    Aaver=Asum/A;
    Baver=Bsum/B;
    printf("��������%d\n",A);
    printf("��������%d\n",B);
    printf("0�ĸ���%d\n",C);
    printf("������%d\n",Asum);
    printf("������%d\n",Bsum);
    printf("��ƽ��ֵ%.2f\n",Aaver);
    printf("��ƽ��ֵ%.2f\n",Baver);
    return 0;
}

