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

struct node* search(node *root, int data)      
{
    if (root == NULL) return NULL;
    if (root->data == data) return root;
    else if (data < root->data) return search(root->left, data);
    else return search(root->right, data);     // ask doubt
}

struct node* minnode(node *root)
{
    while(root && root->left != NULL)
    {
        root = root->left;                  // ask doubt
    }
    return root;
}

struct node* maxnode(node *root)
{
    while(root && root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

// struct node* deletenode(node *root, int data)
// {
//     node *ptr = search(root, data);

//     if (ptr == NULL)
//     {
//         return NULL;
//     }
//     if (ptr->left == NULL && ptr->right == NULL)
//     {
//         // node *temp = ptr;
//         delete ptr;
//         ptr == NULL;
//     }
//     else if(ptr->left == NULL)
//     {
//         node *temp = ptr;
//         ptr = ptr->right;
//         delete temp;
//     }
//     else if(ptr->right == NULL)
//     {
//         node *temp = ptr;
//         ptr = ptr->left;
//         delete temp;
//     }
//     else
//     {
//         node *min = minnode(ptr->right);
//         ptr->data = min->data;
//         ptr->right =  deletenode(ptr->right,min->data);
        
//     }
//     return root;
// }

struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL)
        return root;
  
    // If the key to be deleted is 
    // smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);
  
    // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
  
    // if key is same as root's key, then This is the node
    // to be deleted
    else {
        // node has no child
        if (root->left==NULL and root->right==NULL)
            return NULL;
        
        // node with only one child or no child
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
  
        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        struct node* temp = minnode(root->right);
  
        // Copy the inorder successor's content to this node
        root->data = temp->data;
  
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

struct node* DeleteNode(node *root, int data)
{
    //node *ptr = search(root, data);

    if (root == NULL)
        return NULL;
  
    if (data < root->data)
        root->left = DeleteNode(root->left, data);
  
    else if (data > root->data)
        root->right = DeleteNode(root->right, data);
    else {
        if (root->left == NULL && root->right == NULL)
        {
            // node *temp = ptr;
            delete root;
            root == NULL;
        }
        else if(root->left == NULL)
        {
            node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            node *min = minnode(root->right);
            root->data = min->data;
            root->right =  DeleteNode(root->right,min->data);  
        }
    }
    
    return root;
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

int height(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);
    return max(left_height,right_height)+1;
}

int main()
{
    node *root = NULL;
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 9);

    inorder(root);

    int x;
    cout << "enter to search: "; cin >> x;

    node *search_value = search(root,x);
    cout<< "data = "<<search_value->data<< ", loc = "<<search_value<<endl;

    cout << "min = "<<minnode(root)->data<<endl;
    cout << "max = "<<maxnode(root)->data<<endl;

    cout <<"height: "<< height(root)<<endl;

    root = deleteNode(root, 4);

    inorder(root);

    cout <<endl<<"height: "<< height(root);  // why it is not printing 

    return 0;
}