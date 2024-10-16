#include <stdio.h>
int main()
{
    int number[20], Znum=0,Fnum=0,Zmax,Zmin,Fmax,Fmin;
    printf("请输入20个整数：\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&number[i]);
        if(number[i]>0)
        {
            Znum++;
            if(Znum==1) Zmax=number[i],Zmin=number[i];
            else if(number[i]>Zmax) Zmax=number[i];
            else if(number[i]<Zmin) Zmin=number[i];
                    }
        else if(number[i]<0)
            {Fnum++;
        if(Fnum==1) Fmax=number[i],Fmin=number[i];
        else if(number[i]>Fmax) Fmax=number[i];
        else if(number[i]<Fmin) Fmin=number[i];
        }
    }
    printf("最大正整数:%d,最小正整数；%d,最大负整数：%d,最小负整数：%d",Zmax,Zmin,Fmax,Fmin);
    return 0;

}
