#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*header;

void createheader(){
    header=(struct node*)malloc(sizeof(struct node));
    header->data=0;
    header->next=header;
}

void insertbegin(){
    int data;
    printf("enter data");
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&N->data);
    if (header->next==header){
        header->next=N;
        N->next=header;
    }
    else{
        struct node*temp;
        temp=header;
        while(temp->next!=header){
            temp=temp->next;
        }
        N->next=header->next;
        header->next=N;
        
        temp->next=header;
    }
    
}
void insertend(){
    int data;
    printf("enter data");
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&N->data);
    if (header->next==header){
        header->next=N;
        N->next=header;
    }
    else{
        struct node*temp;
    temp=header;
    while(temp->next!=header){
        temp=temp->next;
    }
    temp->next=N;
    N->next=header;
    }
    
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
    temp=header;
    int count=-1;
    if(pos==1){
        insertbegin();
    }
    
    else{
        while(temp->next!=header){
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
    if(header->next==header){
        printf("nothing to delete");
    }
    else{
        
        struct node*temp;
        temp=header;
        while(temp->next!=header){
            temp=temp->next;
        }
        header->next=header->next->next;
        
        temp->next=header;
    }
}

void deleteend(){
    
    if(header->next==header){
        printf("nothing to delete");
    }
    else{
        struct node*temp;
        temp=header;
        while(temp->next->next!=header){
            temp=temp->next;
        }
        
        temp->next=header;
    }
}

void deletemiddle(){
    if(header->next==header){
        printf("nothing to delete");
    }
    else{
        int pos;
        printf("Enter pos:");
        scanf("%d",&pos);
        int count=-1;
        struct node*temp;
        temp=header;
        if (pos==1){
            deletebegin();
        }
        else{
        while(temp->next!=header){
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
    while(temp->next!=header){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    printf("%d",temp->next->next->data);
}
 void deletenegative(){
    struct node*temp;
    temp=header->next;
    struct node*prev;
    prev=header;
    while(temp->next!=header){
        if(temp->data<0){
            prev->next=prev->next->next;
        }
        else{
            prev=prev->next;
        }
        temp=temp->next;
    }
    temp->next=header;
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
    createheader();
    
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


