#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*builttree(){
    int d;
    printf("Enter node(-1 to stop)");
    scanf("%d",&d);
    
    if(d==-1){
        return 0;
    }
    
    struct node*N;
    N=(struct node*)malloc(sizeof(struct node));
    N->data=d;
    
    printf("Enter left of %d",d);
    N->left=builttree();
    
    printf("Enter right of %d",d);
    N->right=builttree();
    return N;
    
};

void preorder(struct node*root){
    
    if(root==0){
        return ;
    }
    
    else{
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node*root){
    
    if(root==0){
        return ;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        printf(" %d",root->data);
    }
}

int main(){
    struct node*root;
    printf("Binary tree:");
    root=builttree();
    printf("Preorder");
    preorder(root);
    printf("Postorder");
    postorder(root);
    printf("\n");
}
