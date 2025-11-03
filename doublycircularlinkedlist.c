#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node*prev;
    struct node*next;
    int data;
};
struct node*head=0;
int insertbeg()
{
    printf("Enter data:");
    struct node*N;
    N=(struct node*)malloc (sizeof(struct node));
    scanf("%d",&N->data);
    if (head==0)
    {
        head=N;
        N->next=head;
        N->prev=0;
    }
    else
    {
        struct node*temp;
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        head->prev=N;
        N->next=head;
        head=N;
        temp->next=head;
        
    }
}

int insertmid()
{
    printf("Enter any data:");
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&N->data);
    
    struct node*temp;
    temp=head;
    int pos;
    printf("Enter position to insert:");
    scanf("%d",&pos);
    int count=0;
    while(temp->next!=head)
    {
        count=count+1;
        if(count==pos-1)
        {
            break;
        }
        temp=temp->next;
    }
    N->next=temp->next;
    N->prev=temp;
    temp->next=N;
}

int insertend()
{
    printf("Enter any data:");
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&N->data);
    if(head==0)
    {
        head=N;
        N->next=0;
        N->prev=0;
    }
    else
    {
        struct node*temp;
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;   
        }
        temp->next=N;
        N->prev=temp;
        N->next=head;
    }
}

int deletebeg()
{
    if(head==0)
    {
        printf("Nothing to be deleted");
    }
    else
    {
        struct node*temp;
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;   
        }
        head=head->next;
        head->prev=0;
        temp->next=head;
    }
}

int deletemid()
{
    int pos;
    printf("Enter position you want to delete:");
    scanf("%d",&pos);
    int count=0;
    struct node*temp;
    temp=head;
    if(pos==1)
    {
        deletebeg();
    }
    else
    {
    while(temp->next!=head)
    {
        count=count+1;
        if(count==pos-1)
        {
            break;
        }
        temp=temp->next;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;
    }
    
}
int deleteend()
{
    struct node*temp;
    temp=head;
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head;
}
void display()
{
    struct node*temp;
    temp=head;
    while(temp->next!=head)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
    printf("%d\n",temp->next->data);
}


int main()
{
    printf("1: Insert at beginning\n");
    printf("2: Insert at middle\n");
    printf("3: Insert at end\n");
    printf("4: Delete from beginning\n");
    printf("5: Delete from middle\n");
    printf("6: Delete from end\n");
    printf("7: Display\n");
    printf("8:Exit\n");
    int ch=-1;
    while(ch!=0)
    {
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            insertbeg();
        }
        else if(ch==2)
        {
            insertmid();
        }
        else if(ch==3)
        {
            insertend();
        }
        else if(ch==4)
        {
            deletebeg();
        }
        else if(ch==5)
        {
            deletemid();
        }
        else if(ch==6)
        {
            deleteend();
        }
        else if(ch==7)
        {
            display();
        }
        else if(ch==8)
        {
            ch=0;
            break;
        }
    }
}

