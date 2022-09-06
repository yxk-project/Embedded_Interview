#include<stdio.h>
#include<malloc.h>


int main(){
    // enum Weekday{Sun,mon,tue,wed,thu,fri,sat};
    // enum Weekday a;
    int a[3]={1,2,3};
    int *p;
    p=a;
    printf("%d\t",p[2]);
    printf("%d\t",sizeof(p));
    printf("%d\t",*(p+2));
    printf("%d\t",*p);
    int *q=malloc(4);
    q=a;
    printf("q=%d",*q);
}