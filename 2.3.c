#include<stdio.h>
int main()
{
    float num1, num2, num3, min;
    printf("输入第一个数；");
    scanf("%f",&num1);
    printf("输入第二个数；");
    scanf("%f",&num2);
    printf("输入第三个数；");
    scanf("%f",&num3);
    min=num1;
    if(num2 < min)
    {min=num2;
    }
    if(num3<min)
    {min=num3;
    }
    printf("最小的数；%.f\n",min);
    return 0;





}
