#include<stdio.h>
int main()
{
    float num1, num2, num3, min;
    printf("�����һ������");
    scanf("%f",&num1);
    printf("����ڶ�������");
    scanf("%f",&num2);
    printf("�������������");
    scanf("%f",&num3);
    min=num1;
    if(num2 < min)
    {min=num2;
    }
    if(num3<min)
    {min=num3;
    }
    printf("��С������%.f\n",min);
    return 0;





}
