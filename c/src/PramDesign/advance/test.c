#include<stdio.h>
#define year (1234.56789F)


int *test(void){
    int a=1;
    int *p;
    p=&a;
    return p;
}
unsigned int func(int x){
    unsigned int count=0;
    int BIT=1<<(sizeof(int)*8-2);
//    for(int i=0;i<sizeof(x)*8;i++){
//         if((x&BIT)!=0){count++;}
//         BIT=BIT>>1;
//     }
while(BIT){
    if((x&BIT)!=0){count++;}
    BIT=BIT>>1;
}
    return count;
    
}
int main(){
//     struct BBB 
// {

//   long num;

//   char *name;

//   short int data;

//   char ha;

//   short ba[5];

// }*p;
int a[3]={1,2,3};
int *p=(int *)(&a+1);
printf("%d",*p);
// while(xx){
//     printf("%d\t",xx);
//     xx=xx>>1;
// }

    // void test1(int *p);
  
    // printf("%d",sizeof(p->name));
    // int a[2][2]={{2,2},{2,3}};
    // int *p;
    // p=a;
    // printf("%d\n",a[1][1]);
    // printf("%d\n",*(*(a+1)+1));
    // printf("%d\n",*(p+3)); 
 

//-----------------------------------

    // char *str[]={"welcome","to","fodasd","nanjing"};
    // char** p=str+1;
    // str[0]=(*p++)+2   ;
    // str[1]=*(p+1);
    // str[2]=p[1]+3;
    // str[3]=p[0]+(str[2]-str[1]);
    // unsigned short int i=-1;
    // p=a;
    // printf("%s",a[0]+1);
    // printf("%d",*p);
    // printf("%s\n",str[1]);
    // printf("%s\n",str[2]);
    // printf("%s\n",str[3]);
    //-----------------------------------
    //利用可变指针间接修改常变量的值
    // const int a=1;
    // // int *p;
    // // p=&a;
    // // *p=2;
    // v(&a);
    // printf("%d",sizeof a);
    //----------------------栈返回地址，不会被消除
    // int *p;
    // p=test();
    // printf("%d",*p);
    //-----------------------
   
}
void v(int *p){
    *p=2;
}



void test1(int *p){
    printf("%d\t",*(p+1));
}
void test2(int *p){
     printf("%d",*(p+3));
}