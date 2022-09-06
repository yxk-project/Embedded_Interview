#include<stdio.h>

// int main(){
//     int a=1;
//     // int *p=&a; 等价
//     int *p;
//     p=&a;
//     printf("%d",p);
// }
int main(){
    void swap(int *p1,int *p2);
    int a=5,b=9;
    if(a<b){
        swap(&a,&b);
    }
    printf("max=%d,min=%d\n",a,b);
    return 0;
}

void swap(int *p1,int *p2){
    // int *p;
    // p=p1;
    // p1=p2;
    // p2=p;
    //  说明：a-地址1->值1 b-地址2->值2，在这个过程中变量名与地址绑定不可更改，要想改变值只能根据地址重新赋值。如
    //      给a赋值应该是 a对应的地址p1  *p1=*p2；这一点可以根据在编译过程中将变量名替换为地址理解。
    //     *p1=*p2与a=b的区别，前者操纵实参。后者只操纵形参，想要操纵实参需要返回接收。
    int p;
    p=*p1;
    *p1=*p2;
    *p2=p;
}
