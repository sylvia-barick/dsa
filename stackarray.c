#include<stdio.h>
int arr[100];
int top=-1;

int push(){
    int data;
    printf("Enter number to push");
    scanf("%d",&data);
    if(top==-1){
        top=top+1;
        arr[top]=data;
    }
    else{
        top=top+1;
        arr[top]=data;
    }
}
int pop(){
    if(top==-1){
        printf("empty");
    }
    else{
        printf("%d",arr[top]);
        top--;
    }
}

int display(){
    if(top==-1){
        printf("empty");
    }
    else{
        for(int i=0;i<=top;i++){
            printf("%d",arr[i]);
        }
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

