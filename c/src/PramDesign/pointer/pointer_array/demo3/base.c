#include<stdio.h>

int main(){
    // int a[2][2]={{1,2},{3,4}};
    // int *p;
    // p=a;
    // printf("%d\t",*(*(a+1)+1));//注意将a换成p报错,a虽然代表首地址，但本质上处理和p仍然有不同。*(*(a+1)+1)==*（p+3）
    // printf("%d\t",*(p+7));
    // printf("%d\t",a+1);
    // printf("%d",*(a+1));
    //--------------------
     char *name[2]={"he","llo"};
     char **p;
     char *q;

     q=name[0];
     p=name;
     printf("%s\n",q);
     printf("%c\t",q[3]);
     printf("%c",name[0][1]);
     //-----------------
    // int (*p)[2];
    // p=a;
    
    // // printf("a[1,1]=%d",*(*(p+1)+1));   
    // printf("a[1,1]=%d\n",*(*(a+1)+1));
    // //此时p与a等价，且p所指对象是有4个整型元素的数组。验证，若等价则a+i=p+i。此时p长度为8字节
    // printf("%d,%d\n",a+1,p+1);
    // test1(*a);
    // test2(a);
    }
    void test1(int *p){
        printf("%d\t",*p);
    }
    void test2(int (*p)[2]){
        printf("%d",*(*(p+1)+1));
    }


