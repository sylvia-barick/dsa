#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*top;
int push(){
    struct node*N;;
    N=(struct node*)malloc(sizeof(struct node));
    printf("Enter value");
    scanf("%d",&N->data);
    if(top==0){
        top=N;
        N->next=0;
    }
    else{
        N->next=top;
        top=N;
    }
}
int pop(){
    if(top==0){
        printf("nothing to delete");
    }
    else{
        printf("delete:%d",top->data);
        top=top->next;
    }
}

int display(){
    if(top==0){
        printf("nothing to delete");
    }
    else{
        struct node*temp;
    temp=top;
    while(temp->next!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    }
    
}

int main(){
    int ch=-1;
    printf("\n 1 push");
    printf("\n 2 pop");
    printf("\n 3 display");
    while(ch!=0){
        printf("enter choice");
        scanf("%d",&ch);
        if(ch==1){
            push();
        }
        else if(ch==2){
            pop();
        }
        else if(ch==3){
            display();
        }
    }
}

