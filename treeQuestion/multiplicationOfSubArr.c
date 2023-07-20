#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* left; 
    struct node* right;
} node;

node *root;
int array[100],size, inorder_array[100], inorder_index;

node* insert(int value, node *tnode)
{
    if(tnode==NULL){
      node *new_node = (struct node *)malloc(sizeof(struct node));
      (*new_node).value = value; 
      (*new_node).left =NULL; 
      (*new_node).right = NULL;
      return new_node;
    }
    else
        if(tnode->value > value)
            tnode->left = insert(value, tnode->left);
        else
            tnode->right = insert(value, tnode->right);
    return tnode;
}

void inorder(node *tnode){
    if(tnode==NULL)
        return;
    inorder(tnode->left);
    inorder_array[inorder_index]=tnode->value;
    inorder_index++;
    inorder(tnode->right);
}


int main(){
    printf("\nEnter size : ");
    scanf("%d",&size);
    printf("\nEnter array \n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\nOUTPUT \n");
    for(int i=0;i<size;i++){
        if(i<2){
            printf("-1\n");
            root = insert(array[i], root);
        }
        else{
          inorder_index=0;
          root = insert(array[i], root);
          inorder(root);
          int multiplication = inorder_array[inorder_index-1]*inorder_array[inorder_index-2]*inorder_array[inorder_index-3];
          printf("%d\n",multiplication);
        }
    }
    return 0;
}