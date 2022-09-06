#include<stdio.h>


void a(void){
    printf("hahah");
}
void *b(void){
    printf("luelue");
}

// void (*c)(){
//     printf("dasl");
// }  错误，不能构建函数
int test(int x,int y){
    int s;
    s=x+y;
    return s;
}
int main(){
    a();
    b();
    int (*p)(int,int);
    p=test;
    printf("%d",p(3,2));
    // c();
    return 0;
}