#include<stdio.h>
#include"..\..\..\..\include\uthash.h"

struct  hashtable
{
    int key;
    int value;
    UT_hash_handle hh;
};

struct hashtable *table;
struct hashtable *find(int ikey){
    struct hashtable * tmp;
    HASH_FIND_INT(table, &ikey, tmp);
    return tmp;
}

void insert(int ikey, int ivalue){
    struct  hashtable *it;
    it=find(ikey);
    if(it==NULL){
        struct hashtable *temp=malloc(sizeof(struct hashtable));
        temp->key=ikey;
        temp->value=ivalue;
        HASH_ADD_INT(table,key,temp);   
    }
    // else{
    //     it->value=ivalue;
    // }
    
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    table=NULL;
    for (int i = 0; i < numsSize;++i)
    {
        struct hashtable *it=find(target-nums[i]);
        if(it!=NULL)
        {
          int *res=malloc(sizeof(int)*2);
          res[0]=it->value;
          res[1]=i;
          *returnSize=2;
          return res;
        }
        else
        {
            insert(nums[i],i);
        }
    }
    *returnSize=0;
    return NULL;
    
    
}


int main(){
    int a[4]={2,7,11,15};
    int numsSize=4;
    int target=9;
    int * returnSize;
    int *result;
    result=twoSum(a,numsSize,target,returnSize);
    printf(result,2);
}