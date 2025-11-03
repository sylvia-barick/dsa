#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*prev;
    struct node*next;
};

struct node*head=0;
void insertstart(){
    printf("enter value");
    struct node*N;
    N=(struct node*)malloc (sizeof(struct node));
    
    scanf("%d",&N->data);
    if (head==0){
        head=N;
        N->next=0;
        N->prev=0;
    }
    else{
        N->prev=0;
        
        N->next=head;
        head=N;
    }
}

void insertend(){
    struct node*temp;
    temp=head;
    struct node*N;
    N=(struct node*)malloc (sizeof(struct node));
    
    printf("enter value");
    scanf("%d",&N->data);
    if(head==0){
        head=N;
        N->next=0;
        N->prev=0;
    }
    else{
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=N;
        N->next=0;
        N->prev=temp;
    }
    
}

void insertmiddle(){
    int pos;
    
    printf("Enter pos");
    scanf("%d",&pos);
    struct node*temp;
     temp=head;
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&N->data);
    int count=0;
    if (head==0){
        head=N;
        N->next= 0;
        N->prev=0;
    }
    else{
        while(temp!=0){
            count=count+1;
            if(count==pos-1){
                break;
            }
            temp=temp->next;
            
        }
        N->next=temp->next;
        temp->next=N;
        N->prev=temp;
       
    }
}

void deletebegin(){
    if(head==0){
        printf("nothing to delete");
    }
    else{
        
        head=head->next;
        head->prev=0;
    }
}

int deleteend(){
    if(head==0){
        printf("nothing to delete");
    }
    else{
        struct node*temp;
        temp=head;
        while(temp->next->next!=0){
            temp=temp->next;
        }
        temp->next=0;
    
    }
}

void deletemiddle(){
    if(head==0){
        printf("nothing to delete");
    }
    else{
        int pos;
        printf("Enter pos:");
        scanf("%d",&pos);
        int count=0;
        struct node*temp;
        temp=head;
        while(temp!=0){
            count=count+1;
            if(count==pos-1){
                break;
                
            }
            temp=temp->next;
            
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
    }
}

void display(){
    struct node*temp;
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    
        
    }


int main(){
    int  choice=-1;
    
    printf("1.Enter data at begin");
    printf("\n 2.Enter data at end");
    printf("\n 3.Enter data at any point");
    printf("\n6. delete from beginning");
    printf("\n 7. delete at end");
    printf("\n 8. delete at any point");
    printf("\n 4.display");
    printf("\n 5.Exit");
    
    
    while (choice!=0){
        printf("\n Enter ur choice :");
        scanf("%d",&choice);
        if(choice==1){
            insertstart();
        }
        else if(choice==4){
            display();
        }
        else if(choice==2){
            insertend();
        }
        else if (choice==3){
            insertmiddle();
        }
        else if(choice==5){
            choice=0;
            break;
        }
        else if (choice==6){
            deletebegin();
        }
        else if (choice==7){
            deleteend();
        }
        else if (choice==8){
            deletemiddle();
        }
    }
}
