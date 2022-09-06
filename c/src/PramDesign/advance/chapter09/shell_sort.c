#include<stdio.h>

void shell_sort(int arr[],int len){
    int step,i,j;
    int temp;
    for(step=len>>1;step>0;step=step>>1){    //控制分组 for（step=len>>1;step>0;step=step>>1)

        for(i=step;i<len;i++){
            temp=arr[i];
            // for(j=i-step;j>=0&&arr[j]>temp;j-=step){
            //     if(arr[j]<=temp){break;}
            //     else{arr[j+step]=arr[j];}
            // }
            for(j=i-step;j>=0 && arr[j]>temp;j=j-step){
                arr[j+step]=arr[j];
            }
            arr[j+step]=temp;
        }
    }
}

int main(){
    int array[5]={1,3,5,2,4};
    int len=5;
    shell_sort(array,len);
    
    for(int i=0;i<len;++i){
        printf("%d",array[i]);
    }
    

}