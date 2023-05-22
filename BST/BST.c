#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data)
{
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

struct node *insert(struct node *node, int data)
{
	if (node == NULL)
		return newNode(data);
	if (data < node->data)
		node->left = insert(node->left, data);
	else if (data > node->data)
		node->right = insert(node->right, data);
	return node;
}

struct node *search(struct node *root, int data)
{
	if (root == NULL || root->data == data)
		return root;
	if (root->data < data)
		return search(root->right, data);
	return search(root->left, data);
}

void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if (root != NULL)
	{
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}

struct node* minValueNode(struct node* node)
{
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct node* deleteNode(struct node *root, int data)
{
	if (root == NULL)
	{
		return root;
	}
	if (data < root->data)
	{
		root->left = deleteNode(root->left, data);
	}
	else if (data > root->data)
	{
		root->right = deleteNode(root->right, data);
	}
	else
	{
	if (root->left == NULL && root->right == NULL)
            return NULL;
    else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
    else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
}
     return root;
}

int main()
{
	struct node *root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	printf("Inorder traversal of the BST: ");
	inorder(root);
	printf("\nPreorder traversal of the BST: ");
	preorder(root);
	printf("\nPostorder traversal of the BST: ");
	postorder(root);
	int value = 60;
	struct node *result = search(root, value);
	if (result != NULL)
		printf("\n%d is present in the BST.", value);
	else
		printf("\n%d is not present in the BST.", value);
	int data = 50;
	deleteNode(root, data);
	printf("\nInorder traversal of the BST after deletion: ");
	inorder(root);
	return 0;
}
