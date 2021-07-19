/* C for Everyone: Structured Programming
	Week 3: Detailed binary tree code */

#include <stdio.h>
#include<stdlib.h>

typedef char DATA;
struct node {
	DATA d;
	struct node* left;
	struct node* right;
};

typedef struct node NODE;
typedef NODE* BTREE;

void inorder(BTREE root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%c ", root->d);
		inorder(root->right);
	}

}


BTREE new_node(void)
{
	return(malloc(sizeof(NODE))); // return a pointer value to the memory required
}

BTREE init_node(DATA d1, BTREE p1, BTREE p2)
{
	BTREE t;
	t = new_node(); // Create a new node
	t->d = d1;
	t->left = p1;
	t->right = p2;
	return t;
}

BTREE create_tree(DATA a[], int i, int size)
{
	if (i >= size)
		return NULL;

	else
		return(init_node(a[i],
			create_tree(a, 2 * i + 1, size), // left branch (i = 1,3,7,15...)
			create_tree(a, 2 * i + 2, size))); // right branch (i = 2,6,14,30...)
}

int main()
{
	char d[] = { 'a','b','c','d','e' };
	BTREE b;
	b = create_tree(d, 0, 5);
	inorder(b);
	printf("\n\n");
	return 0;

}