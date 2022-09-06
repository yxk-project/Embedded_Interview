#include<stdio.h>
#include<assert.h>

void insert_sort(int arr[],int len){
    int i,j,temp;
    for(i=1;i<len;++i){
        temp=arr[i];    //要插入的第i个数字
        // for(j=i;j>0&&arr[j-1]>temp;--j){
        //     arr[j]=arr[j-1];
        // }
        // arr[j]=temp;
        // for(j=i;j>0;--j){   //将有序区域从右向左查找
        //     if(arr[j-1]<=temp){continue;}   //如果第一个数字，小于有序数列中最右边的数字则表明需要往左找，跳出本次循环,--j继续往下找
        //     else{arr[j]=arr[j-1];   //在找的途中移动元素
        //     }
        //     arr[j-1]=temp;
        // }   

        //推荐
        for(j=i-1;j>0 && arr[j]>temp;--j){
            arr[j+1]=arr[j];    //在找的途中移动元素
        } 
        arr[j+1]=temp;
    }
}
int main(){
    int array[5]={1,3,5,2,4};
    int len=5;
    insert_sort(array,len);
    assert(array!=NULL);
    for(int i=0;i<len;++i){
        printf("%d",array[i]);
    }
    

}