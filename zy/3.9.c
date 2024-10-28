#include <stdio.h>
#include <stdlib.h>
#define N 5
/*int main()
{
    char stuid[10], name[20];
    float score;
    FILE*outfile;
    int i;
    outfile=fopen ("scores.txt","w");
    if (outfile==NULL)
    {
        printf("不能创建文件！");
        exit(0);
    }
    fprintf(outfile,"学号\t姓名\t入学成绩\n");
    for(i=0;i<N;i++)
    {
        printf("请输入学生学号、姓名和入学成绩（空格分开）:");
        scanf("%s%s%f",stuid,name,&score);
        fprintf(outfile,"%s\t%s\t%f\n",stuid,name,score);
    }
    fclose(outfile);
    return 0;
}*/
int main ()
{
    char file[999999];
    FILE*infile;
    infile=fopen("scores.txt","r");
    printf(" %s\n",file);
    while (fgets(file, 99999, infile) != NULL)
        {
        printf("%s", file);
    }
    return 0;
}
