#include<stdio.h>

int main(){
    int a[5]={0,1,2,3,4};
    int *p;
    p=&a[0];
    for(int i=0;i<5;++i){
      printf("%d\t",*(a+i));
    }
    // while(p<=a+4){
    //     printf("%d\t",*p);
    //     p++;
    // }
    printf("%d\t",a);
    printf("%d\t",*a);
    return 0;
}