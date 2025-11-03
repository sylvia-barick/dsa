#include <stdio.h>

void selectionSort(int arr[],int size){
    for (int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    
}

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int size = 5;
    selectionSort(arr, size);
}
