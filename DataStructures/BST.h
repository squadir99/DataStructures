#ifndef BST_H
#define BST_H

struct TreeNode {
	int data;
	struct TreeNode* lchild;
	struct TreeNode* rchild;
};
typedef struct TreeNode TreeNode;

TreeNode* TreeConstructor(void);

void pushToTree(TreeNode* h, int val);

void printTree(TreeNode* h);

#endif 
