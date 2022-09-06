#include<stdio.h>

int main(){
    char string[]="hello word!";
    char str[20];  //不赋初值时，必须明确长度
    // char *string="hello word!";
    int a[2]={1,2};

    printf("%s\t",string);   /*数组打印名为地址，字符串数组打印数组名为字符串  
                             why？由于存储按一维数组方式存储,系统按照%s读取时会自动+1读取，知道遇到\0。
                             证明，将%s换成%d将输出地址。*/
    printf("%d\t",string);
    printf("%c\n",string[0]);
    printf("%d\t",a);
    printf("%d\t",a[1]);

    test(string);
}
// 
void test(char p[]){
    printf("%c",*p);
}

