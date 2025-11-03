#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*head=0;

void insertbegin(){
    int data;
    printf("enter data");
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&N->data);
    if(head==0){
        head=N;
        N->next=head;
    }
    else{
        struct node*temp;
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        N->next=head;
        head=N;
        
        temp->next=head;
    }
}
void insertend(){
    int data;
    printf("enter data");
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&N->data);
    struct node*temp;
    temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=N;
    N->next=head;
}
void insertmiddle(){
    int data,pos;
    printf("enter data");
    
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&N->data);
    printf("enter pos");
    scanf("%d",&pos);
    struct node*temp;
    temp=head;
    int count=0;
    while(temp->next!=head){
        count=count+1;
        if(count==pos-1){
            break;
        }
        temp=temp->next;
    }
    N->next=temp->next;
    temp->next=N;
}

void deletebegin(){
    if(head==0){
        printf("nothing to delete");
    }
    else{
        
        struct node*temp;
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        head=head->next;
        
        temp->next=head;
    }
}

void deleteend(){
    
    if(head==0){
        printf("nothing to delete");
    }
    else{
        struct node*temp;
        temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        
        temp->next=head;
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
        if (pos==1){
            deletebegin();
        }
        else{
        while(temp!=head){
            count=count+1;
            if(count==pos-1){
                break;
                
            }
            temp=temp->next;
            
        }
        temp->next=temp->next->next;
        }
    }
}

void display(){
    struct node*temp;
    temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    printf("%d",temp->next->data);
}

int main(){
    int ch=-1;
    
    printf("1. insert begin");
    printf("\n2. insert end");
    printf("\n3. insert mid");
    printf("\n4. delete begin");
    printf("\n5. delete end");
    printf("\n6. delete mid");
    printf("\n7. display");
    printf("\n8. exit");
    
    
    while(ch!=0){
        printf("\n enter choice");
        scanf("%d",&ch);
        if(ch==1){
            insertbegin();
        }
        else if(ch==2){
            insertend();
        }
        else if(ch==3){
            insertmiddle();
        }
        else if(ch==4){
            deletebegin();
        }
        else if(ch==5){
            deleteend();
        }
        else if(ch==6){
            deletemiddle();
        }
        else if (ch==7){
            display();
        }
        else if (ch==8){
            break;
        }
    }
    
}
