#include<stdio.h>
int main(){
    char a[]="I am handsome very much!",b[20],*p1,*p2;
    p1=a,p2=b;
    while(*p1!='\0'){
      *p2=*p1;
      p1++,p2++;
    }
    *p2='\0';
    printf("string b is %s",b);
    return 0;
}