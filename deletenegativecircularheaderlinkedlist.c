#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*header;

void createheader(){
    header=(struct node*)malloc(sizeof(struct node));
    header->data=0;
    header->next=0;
};

void insertbegin(){
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&N->data);
    if(header->next==0){
        header->next=N;
        N->next=0;
    }
    else{
        struct node*temp;
        temp=header;
        while(temp->next!=0){
            temp=temp->next;
        }
        N->next=header->next;
        header->next=N;
        
    }
}
void insertend(){
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&N->data);
    if(header->next==0){
        header->next=N;
        N->next=0;
    }
    else{
        struct node*temp;
        temp=header;
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=N;
        N->next=0;
    }
}
void insertmiddle(){
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&N->data);
    int pos;
    printf("enter pos");
    scanf("%d",&pos);
    int count=-1;
    struct node*temp;
    temp=header;
    if (pos==1){
        insertbegin();
    }
    else{
        while(temp->next!=0){
            count=count+1;
            if(count==pos-1){
                break;
            }
            temp=temp->next;
            
        }
        N->next=temp->next;
        temp->next=N;
    }
}
void deletebegin(){
    if(header->next==0){
        printf("nothing to delete");
    }
    else{
        struct node*temp;
        temp=header;
        while(temp->next!=0){
            temp=temp->next;
        }
        header->next=header->next->next;
        temp->next=0;
    }
}
void deleteend(){
    if(header->next==0){
        printf("nothing to delete");
    }
    else{
        struct node*temp;
        temp=header;
        while(temp->next->next!=0){
            temp=temp->next;
        }
        temp->next=0;
    }
}
void deletemiddle(){
    int pos;
    printf("Enter pos:");
    scanf("%d",&pos);
    int count=-1;
    if(header->next==0){
        printf("nothing to delete");
    }
    else{
        if(pos==1){
            deletebegin();
        }
        else{
            struct node*temp;
        temp=header;
        while(temp->next!=0){
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
    temp=header->next;
    while(temp->next!=0){
        printf("%d ",temp->data);   
        temp=temp->next;
    }
    printf("%d ",temp->data); 
      
}

void deletenegative(){
    struct node*temp;
    temp=header->next;
    struct node*prev;
    prev=header;
    while(temp->next!=0){
        if(temp->data<0){
            prev->next=prev->next->next;
        }
        else{
            prev=prev->next;
        }
        temp=temp->next;
    }
    temp->next=0;
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
    printf("\n8. delete negative");
    printf("\n9. exit");
    createheader();
    while (ch!=0){
        printf("\nenter choice:");
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
        else if (ch==4){
            deletebegin();
        }
        else if(ch==5){
            deleteend();
        }
        else if (ch==6){
            deletemiddle();
        }
        else if(ch==7){
            display();
        }
        else if(ch==8){
            deletenegative();
        }
        else if(ch==9){
            break;
        }
    }
}

