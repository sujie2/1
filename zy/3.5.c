#include<stdio.h>
int main()
{
    int num[99999],i,n,k;
    printf("�����뼸��������Ϊ2��");
    scanf("%d",&n);
    printf("���������е�Ԫ��:\n");
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
