#include <stdio.h>
#include <stdlib.h>

int charnum(char *filename)     //统计字符数 
{
	FILE *fp;
	char ch;
	int numc=0;
	fp=fopen(filename,"r");
	ch = fgetc(fp);
	while(ch != EOF)
	{
	  	numc++;
	  	ch=fgetc(fp);
	}
    printf("该文件的字符数为:%d\n",numc);
    fclose(fp);
    return 0;
}
int linenum(char *filename)    //统计行数 
{
	FILE *fp;
    char lp;
    int linenum = 0;
    fp = fopen(filename,"r");
    lp = fgetc(fp);
    while(lp != EOF)
    {
        if(lp == '\n')             
          {
			 linenum++;
		}
        lp = fgetc(fp);
    }
    linenum++; 
    printf("该文件行数为:%d\n",linenum);
    fclose(fp);
    return 0;    
}
int wordnum(char *filename)              //统计单词数 
{
	FILE *fp;
    char wp;
    int wordnum=0;
    fp = fopen(filename,"r");
    wp = fgetc(fp);
    while (wp != EOF)   
    {
        if((wp>='a'&&wp<='z') || (wp>='A'&&wp<='Z'))
        {
             wp = fgetc(fp);    
        }
        else
		{
            wordnum++;
            wp = fgetc(fp);
        }
    }
    wordnum++; 
    printf("该文件中单词数为:%d\n",wordnum);
    fclose(fp);
    return 0;
}

 int main()
 {
 	int countc=0;
 	FILE *file;
 	char filename[50];
 	printf("请输入将要查询的文件名:");
 	scanf("%s",filename);
    charnum(filename);
    linenum(filename); 
    wordnum(filename);
	return 0;
}
