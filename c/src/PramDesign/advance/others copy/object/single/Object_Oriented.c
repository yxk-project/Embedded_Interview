#include<stdio.h>

// https://www.cnblogs.com/lihuidashen/p/13223429.html
//封装-Package，将数据与方法封装到一个类里

// struct Bird{
//     char name[20];//姓名
//     char color;    //颜色   
//     char addr[30];    //栖息地
//     int weight;        //体重
//     int other;      //属性
// } ;

//     struct Bird p;
//     p.name = "bird";
//     p.color = 'b';  //'b' = black; 'g' = green
//     p.addr = 'w';  
//     p.weight = 175;
//     p.other = 1;
// //-----------------------
//继承
// struct Bird_son{
//     struct Bird p;
//     char fly[20]; //飞翔
//     int scream;        //鸣叫
// };

// struct Bird_son s;
// s.p.name = "bird";
// s.p.color = 'b';
// s.p.other = 25;
// s.p.weight = 65;
// s.fly = "0618";
// s.scream = 90;
// //-------------
// //多态
// struct Bird{
//     void (*print)(void *p);
// };

// struct Bird_son{
//     struct Bird p;
// };
// void printBird(void *Bird){
//     if(NULL == Bird)
//         return ;
//     struct Bird *p = (struct Bird *)Bird;
//     printf("run in the Bird!!\n");
// }

// }
// //调用
// void print(void *Bird){
//     if(NULL == Bird)
//         return ;
//     struct Bird *p = (struct Bird *)Bird;
//     p->print(Bird);
// }
// int main(){
//     // struct Bird bird;
//     // struct Bird_son Bird_son;
//     // Bird.print = printBird;
//     // Bird_son.p.print = printBird_son;

//     // print(&bird);    //实参为Bird的对象
//     // print(&Bird_son);  //实参为Bird_son的对象

//     return 0;
// }
     
//1、结构体函数传递，与调用  2、结构体字符串赋值
struct Bird{
    char name[20];
    char sex;
    int age;
    double weght;
    void (*eat)(void);   //传递函数
    int (*sum)(int,int);
};
struct Bird_son1{
    struct Bird super;
    void (*fly)(void);
};

struct Bird_son2{
    struct Bird super;
     void (*run)(void);
};

void eat(void){
    printf("eat apple!!!\t");
}
int sum1(int x,int y){
    int s;
    s=x+y;
    printf("%d",s);
    return s;
}

int main(){
    struct Bird bird;
    struct Bird_son1 bird_son1;
    //bird.name);  //错误原因是因为在c的结构体中，字符串地址是首地址，不能赋值全部字符串，需要用到string中的拷贝语句
    strcpy(bird.name, "zhang");
    printf("%s\t",bird.name);
    bird.eat=eat;
    bird.eat();    //调用
    bird.sex='m';
    printf("%c\n",bird.sex);
    
    bird_son1.super.sum=sum1(2,3);
    return 0;
}
