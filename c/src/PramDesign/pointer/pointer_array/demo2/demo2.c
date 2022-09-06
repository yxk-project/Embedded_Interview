#include<stdio.h>

int main(){
    void swap(int arr[],int n);
    int i,a[11]={3,7,9,11,0,6,7,5,4,2,8};
    printf("The original array:\n");
    for(i=0;i<11;i++){
        printf("%d\t",*(a+i));
    }
    printf("\n");
    printf("The array has been swaped\n");
    swap(a,11);
    for(i=0;i<11;i++){
         printf("%d\t",*(a+i));
    }
}

void swap(int *arr,int n){
    int *i;
    int *j;
    int temp;
    i=arr;
    j=arr+n-1;

    while (i<j)
    {
        temp=*i;
        *i=*j;
        *j=temp;
        
        i++;
        j--;
    }
    // int temp,i,j,m=(n-1)/2;
    // for(i=0;i<m;i++){
    //     j=n-1-i;
    //     temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    // }
    
}

void selectsort(int *arr,int n){
    int i,j,k,temp;
    for(i=0;i<n;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        temp=arr[k];
        arr[k]=arr[i];
        arr[i]=temp;
    }

}