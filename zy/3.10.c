#include <stdio.h>
#include <stdlib.h>
int main()
{
    char z[9999];
    int i ,n;
    FILE*infile;
    infile=fopen("3.txt","w");
    printf("输入几个字符：");
    scanf("%d\n",n);
    printf("输入字符串；");
    for(i=0;i<n;i++)
    {
    scanf("%9999s\n",z[i]);
    }
    for (i=0 ;i<n ;i++)
    {
        fscanf(infile,"%s\n",z[i]);
    }
    return 0;
}
