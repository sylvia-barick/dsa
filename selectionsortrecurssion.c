#include <stdio.h>
void selection(int arr[],int size,int i){
    if(i==size-1){
        return;
    }
    int min=i;
    for(int j=i+1;j<size;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    
     selection(arr,size,i+1);
}

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int size = 5;
    
    selection(arr,size,0);
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}
