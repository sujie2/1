# include<stdio.h>
int main()
{
    char cha[999];
    printf("����һ���ַ�����");
    scanf("%998s",cha);
    if(cha[0]=='\0')
        printf("��������ǿմ�");
        else printf("%s",cha);
    return 0;
}
