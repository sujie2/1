#include<stdio.h>
int main()
{
    int num[99999],i,n,k;
    printf("你输入几个数至少为2；");
    scanf("%d",&n);
    printf("请输入数列的元素:\n");
    for(i=0;i<n;i++)
        {
        scanf("%d",&num[i]);
    }
    for(i=1;i<n;i++)
        {
        printf("%d\n",num[i]-num[i-1]);
    }


    return 0;
}
