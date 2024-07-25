#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *head = NULL;
node *temp;


void create_new_node(int new_data)
{
    node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = new_data;
    
    newnode->next = NULL;
    

    if (head == NULL){
        head = newnode;
        temp = newnode;
    } else {
         temp->next = newnode;
         temp = newnode;
    }
    
    
}

void display() 
{
    temp = head;
    while(temp != NULL) {
        cout << temp->data<<endl;
        temp = temp->next;

    }
}

int len_lst(){
    int count = 0;
    temp = head;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

void insert_beg(int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void insert_end(int data)
{
    node *newnode = new node();
    temp = head;
    newnode->data = data;
    newnode->next = NULL;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insert(int data, int pos) 
{
    if (pos == 1){
        insert_beg(data);
    } else if (pos == len_lst()+1){
        insert_end(data);
    } else if (pos>len_lst() || pos < 0){
        cout << "Enter the valid value: ";
    } else {
        node *newnode = (struct node *)malloc(sizeof(struct node));
        int i = 1;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->data = data;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void delete_beg()
{
    temp = head;
    head = head->next;
    free(temp);
}

void delete_end()
{
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    // method 2: take previous node
}

void delete_node(int pos)
{
    if (pos == 1) {
        delete_beg(); 
    } else if(pos == len_lst()+1){
        delete_end();
    } else if (pos > len_lst() || pos <= 0) {
        cout << "Enter the valid value: ";
    } else {
        int i = 1;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }

        node *next_node = temp->next;
        temp->next = next_node->next;
        free(next_node);
    }
    
}

void reverse()
{
    node *current_node = head;
    node *next_node = head;
    node *prev_node = NULL;

    while(next_node != 0){
        next_node = next_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }

    head = prev_node;
     
}

int main(){
    int choice = 1;
    int value;
    while(choice) 
    {
        cout<< "Enter data: ";
        cin>> value;
        create_new_node(value);
        cout << "Do you want to continue: ";
        cin >> choice;
    }
    display();
    cout << "------------------"<<endl;
    insert(99,3);
    display();
    cout << "------------------"<<endl;
    delete_node(5);  // pos
    display();
    cout << "------------------"<<endl;
    insert(100,1);
    insert(200,7);  // insert_end(200); end position will always change
    display();
    cout << "------------------"<<endl;
    delete_node(1);
    delete_node(6);  // delete_end();
    display();
    cout << "------------------"<<endl;
    reverse();
    display();
    return 0;
}
