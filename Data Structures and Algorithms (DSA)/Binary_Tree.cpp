#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    node *newnode = (struct node*)malloc(sizeof(struct node));
    cout << "Enter the data: "<<endl; // -1 to end
    cin >> x;
    newnode->data = x;
    if (x == -1){
        return NULL;
    }

    cout << "Enter the left child of "<<x<<endl;
    newnode->left = create();
    cout << "Enter the right child of "<<x<<endl;
    newnode->right = create();
    return newnode;
}

void preorder(node *root)  // root left right
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)   // left root right
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}

void postorder(node *root)  // left right root
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data<<" ";
}


int main()
{
    node *root = create();

    preorder(root);
    cout<<endl;
    inorder(root); 
    cout<<endl;
    postorder(root);

    return 0;
}
