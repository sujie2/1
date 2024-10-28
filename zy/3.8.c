# include<stdio.h>
int main()
{
    char cha[999];
    printf("输入一个字符串；");
    scanf("%998s",cha);
    if(cha[0]=='\0')
        printf("你输入的是空串");
        else printf("%s",cha);
    return 0;
}
