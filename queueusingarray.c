#include <stdio.h>
int arr[50];
int front=-1;
int rear=-1;

int enqueue(){
    int data;
    printf("Enter data");
    scanf("%d",&data);
    if(front==-1 && rear==-1){
        rear=rear+1;
        arr[rear]=data;
        front=front+1;
    }
    else{
        rear=rear+1;
        arr[rear]=data;
    }
}

int dequeue(){
    if (front==-1 && front> rear){
        printf("empty");
    }
    else{
        printf("%d",arr[front]);
        front++;
    }
}

int display(){
    if (front==-1 && front> rear){
        printf("empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d",arr[i]);
        }
    }
}

int main(){
    int ch=-1;
    printf("\n 1 enqueue");
    printf("\n 2 dequeue");
    printf("\n 3 display");
    while(ch!=0){
        printf("enter choice");
        scanf("%d",&ch);
        if(ch==1){
            enqueue();
        }
        else if(ch==2){
            dequeue();
        }
        else if(ch==3){
            display();
        }
    }
}

