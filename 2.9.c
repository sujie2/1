#include <stdio.h>
int main()
{
    int number[20], Znum=0,Fnum=0,Zmax,Zmin,Fmax,Fmin;
    printf("������20��������\n");
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
    printf("���������:%d,��С��������%d,���������%d,��С��������%d",Zmax,Zmin,Fmax,Fmin);
    return 0;

}
