// we create node that contains two pointer to inself and data

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};


struct node* newnodedata(int data)
{
    node *new_node = new node();
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

struct node* insert(node *root,int data)
{
    if (root == NULL)
    {
        root = newnodedata(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}

struct node* inway(node *root)
{
    node* root_bst_merged = NULL;
    if (root)
    {
        inway(root->left);
        return insert(root_bst_merged,root->data);
        inway(root->right);
    }
}

struct node* merge_BST(node *root_bst_merged,node *root_bst1, node *root_bst2)
{
    root_bst_merged = inway(root_bst1);
    root_bst_merged = inway(root_bst2);
    return root_bst_merged;
}

int main()
{
    node *root_bst1 = NULL;
    
    int array[] = {4,7,6,2,3,9};
    int n = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i<n; i++)
    {
        root_bst1 = insert(root_bst1,array[i]);
    }
    
    inorder(root_bst1);
    //----------------------------------------------
    
    node *root_bst2 = NULL;
    
    int array2[] = {22,31,56,62,15};
    int n2 = sizeof(array2)/sizeof(array2[0]);
    for (int i = 0; i<n2; i++)
    {
        root_bst2 = insert(root_bst2,array2[i]);
    }
    
    
    cout << endl;
    inorder(root_bst2);
    
    node *root_bst_merged = NULL;
    
    root_bst_merged = merge_BST(root_bst_merged,root_bst1, root_bst2);
    
    inorder(root_bst_merged);
}
