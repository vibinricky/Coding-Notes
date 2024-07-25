#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
node *temp, *tail;

void create_new_node(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = 0;
    newnode->prev = 0;

    if(head == NULL){
        head = newnode;
        temp = newnode;
    } else {
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
    tail = temp;
}

void display()
{
    temp = head;

    while(temp != NULL){
        cout <<temp->data<<endl;
        temp = temp->next;
    }
}

int len_lst(){
    int count = 0;
    temp = head;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

void insert_beg(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    newnode->prev = NULL;
    head->prev = newnode;
    head = newnode;
} 

void insert_end(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void insert(int value, int pos)
{
    if (pos == 1) {
        insert_beg(value);
    } else if (pos == len_lst()+1){              // change this
        insert_end(value);
    } else if (pos<0 || pos>len_lst()){
        cout << "Enter the valid position";
    } else {
        temp = head;
        int i = 1;
        node *newnode = (struct node *)malloc(sizeof(struct node));

        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->data = value;
        newnode->prev = temp;
        newnode->next = temp->next;
        (temp->next)->prev = newnode;
        temp->next  = newnode;
    }  
}

void delete_beg()
{
    temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void delete_end()
{
    temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    free(temp);
}

void delete_node(int pos)
{
    if (pos == 1) {
        delete_beg();
    } else if (pos == len_lst()+1) {
        delete_end();
    } else if (pos < 0 || pos>len_lst()) {
        cout << "Enter the valid position";
    } else {
        int i = 1;
        temp = head;
        node *next_node;
        while(i < pos-1){
            temp = temp->next;
            i++;
        }
        next_node = temp->next;

        // deleting node 
        temp->next = next_node->next;
        (next_node->next)->prev = temp; 
        free(next_node);
    }
}

void reverse()
{
    temp = head;
   
    node *current, *nextnode;
    current = head;
    while(current != NULL)
    {
        nextnode = current->next;         // swapping
        current->next = current->prev;    // current->next and
        current->prev = nextnode;         // current->prev

        current = nextnode;
    }

    swap(head, tail);

}

int main(){
    create_new_node(1);
    create_new_node(2);
    create_new_node(3);
    create_new_node(4);

    display();
    cout << "---------------"<<endl;
    insert(49,3); 
    display();
    cout << "---------------"<<endl;
    delete_node(2);
    display();
    cout << "---------------"<<endl;
    insert(100,1);
    insert(200,6);
    display();
    cout << "---------------"<<endl;
    delete_node(1);
    delete_end();
    display();
    cout << "---------------"<<endl;
    reverse();
    display();  
}
