#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char ch,filename[30];
    char filename="G:\\c\\src\\PramDesign\\file\\test.txt";
    if((fp=fopen(filename,"w"))==NULL){
       printf("无法打开文件\n");
       exit(0);
    }
    ch=getchar();
    printf("请输入一个准备存到磁盘(以#结束）：");
    ch=getchar();
    while (ch!='#')
    {
        fputc(ch,fp);
        putchar(ch);
        ch=getchar();
    }
    fclose(fp);
    putchar(10);
    return 0;
    
}