#include<stdio.h>
int main(){
    int max(int,int);
    int min(int,int);
    int (*p)(int,int);
    int a=1,b=2,c=3,n=1;
    if(n==1){
        p=max;
    }
    else if (n==2)
    {
        p=min;
    }
    c=(*p)(a,b);
    printf("a=%d,b=%d\n",a,b);
    if(n==1) printf("max=%d\n",c);
    else printf("min=%d\n",c);
    return 0;
}

int max(int x,int y){
    int z;
    if(x>y){
        z=x;
    }
    else {
        z=y;
    }
    return z;
}

int min(int x,int y){
    int z;
    if(x<y){
    z=x;
    }
    else {
        z=y;
    }
    return z;
}

//函数指针，将参数进行泛化（一般化）处理，便于应对不同情况

int max_min(int x,int y,int (*p)(int,int)){   //在传入函数指针时，需要将其需要的参数传入。
    int result;
    result=(*p)(x,y);
    printf("%d\n",result);
}

