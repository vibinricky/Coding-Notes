#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node *left; 
    Node *right;

// constructor 
    Node(int v = 0)
    {
        data = v;
        left = NULL;
        right = NULL;
    }

// Member functions
    Node* newNodeData(int data)
    {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }

    int height(Node *root)
    {
        if (root == NULL) 
        { 
            return -1;
        }
        int left_height = height(root->left);
        int right_height = height(root->right);
        return max(left_height,right_height)+1;
    }

    int getbalance(Node *root)
    {
        return (height(root->left) - height(root->right));
    }

    Node *rightRotate(Node *root)
    {
        Node *x = root->left;
        Node *subTree = x->right;

        x->right = root;
        root->left = subTree;
        return x;
    }

    Node *leftRotate(Node *root)
    {
        Node *x = root->right;
        Node *subTree = x->left;

        x->left = root;
        root->right = subTree;
        return x;
    }

    Node* insert(Node *root,int data)
    {
        if(root == NULL)
        {
            root = newNodeData(data);
        }
        else if(data <= root->data)
        {
            root->left = insert(root->left, data);
        } 
        else 
        {
            root->right = insert(root->right, data);
        }
        return root;
    }

};
