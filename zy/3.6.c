#include <stdio.h>
int main()
{
    char Z[999999],maxchar;
    int i;
    printf("�����ַ�����");
    scanf("%99999s",Z);
    maxchar=Z[0];
    for (i=1;Z[i]!='\0';i++){
        if(Z[i]>maxchar){
            maxchar=Z[i];
        }
    }
    printf("�����ַ���%c",maxchar);
    return 0;
}
