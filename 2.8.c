#include<stdio.h>
int main()
{
    int numbers[20];
    int A=0,B=0,C=0;
    int Asum=0,Bsum=0;
    float Aaver,Baver;
    printf("请输入20个数:\n");
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
    printf("正数个数%d\n",A);
    printf("负数个数%d\n",B);
    printf("0的个数%d\n",C);
    printf("正数和%d\n",Asum);
    printf("负数和%d\n",Bsum);
    printf("正平均值%.2f\n",Aaver);
    printf("负平均值%.2f\n",Baver);
    return 0;
}

