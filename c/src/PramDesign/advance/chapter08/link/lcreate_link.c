#include<stdio.h>
#include<string.h>
struct Link{    //定义链表结构
  int value;
  struct Link *next;
};

// typedef struct Link{    //定义链表结构
//   int value;
//   struct Link *next;
// } link;  //这样可以在后面创建时用link代替struct Link类型。

struct Link *create(){
    struct Link *head,*p,*q;    //定义头节点,要插入的节点数据p，链表节点数据q
    int x,i;                 //节点值,节点数
    head=(struct Link *)malloc(sizeof(struct Link));
    while(1){   //循环创建链表
     scanf("%d",&x);
     if(x==0){break;}   //以0为结束创建标志
     p=(struct Link *)malloc(sizeof(struct Link));   //创建要插入的节点数据
     p->value=x;        //指针结构体索引，给节点数据赋值
     if(++i==1){        //当节点数为1时将节点地址给head，这里也就没有p、q区别
         head->next=p;
     }
     else{q->next=p;}   //当节点数大于1时，需要将要插入的节点数据p的地址赋给节点q，
     q=p;               //***执行到上一行时，节点q地址仍然停留在上一个节点。由于我们将p这个数据插入，因此需要将最后的节点地址赋值p
    }
    if(i!=0){q->next=NULL;} //链表最终赋空值。 *** 加入判断避免一开始就输入0
    
    return head;

}
int linklength(struct Link *head){
  if(head->next==NULL){return 0;}     //如果只有头节点的极端情况。
  int len=0;
  struct Link *temp;
  temp=head->next;
  while(temp!=NULL){
     temp=temp->next;
     len++;
  }
  return len;
}
void printlink(struct Link *head){
  if(head->next==NULL){printf("empty link");return;};
  struct Link *temp;
  temp=head->next;
  while(temp!=NULL){
    printf("%d",temp->value);
    temp=temp->next;
  }
}

struct Link *searchnode(struct Link *head,int poss){
    if(poss<0){
      printf("poss is incorerect!");
      return NULL;
    }
    if(poss==0){
      return head;
    }
    struct Link *p;
    p=head->next;
    if(p==NULL){
      printf("link is empty!");
      return NULL;
    }
    while(--poss){
      p=p->next;
      if(p==NULL){
        printf("poss is more than link length");
      }
    }
    return p;
}

int main(){
 
  int len;
 len=linklength(create());
 printf("%d",len);
 return 0;   
}
