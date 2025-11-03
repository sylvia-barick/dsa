#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*front=0;
struct node*rear=0;
struct node*temp;

int enqueue(){
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&N->data);
    if(front==0 && rear==0){
        front=N;
        rear=N;
    }
    else{
    rear->next=N;
    rear=N;
        
    }
    
}

int dequeue(){
    temp=front;
    if(front==0 ){
        printf("empty");
    }
    else{
        front=front->next;
    }
}

int display(){
    struct node*temp;
    temp=front;
    while(temp->next!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
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
