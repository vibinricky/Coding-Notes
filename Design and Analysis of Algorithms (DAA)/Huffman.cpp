#include <iostream>
#include <queue>
using namespace std;

struct minheap_node 
{
    char data;
    unsigned freq;
    minheap_node *left, *right;

    minheap_node(char data, unsigned freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

struct compare
{
    bool operator()(minheap_node *l, minheap_node *r)
    {
        return (l->freq > r->freq);                                            // Why we use greater than
    }
};

void printCodes(struct minheap_node *root, string codestr) 
{
    if(!root)
        return;

    if (root->data != '$'){
        cout << root->data<< " : "<< codestr<<endl;
    }

    printCodes(root->left, codestr+"0");
    printCodes(root->right, codestr+"1");
    

}

void Huffmancodes(char data[], int freq[], int size)
{
    minheap_node *top, *l, *r;

    priority_queue<minheap_node*, vector<minheap_node*>, compare> minheap;

    for (int i = 0; i < size; i++){
        minheap.push(new minheap_node(data[i], freq[i]));
    }

    while(minheap.size() != 1) {
        l = minheap.top();
        minheap.pop();

        r = minheap.top();
        minheap.pop();

        top = new minheap_node('$',l->freq + r->freq);
        
        top->left = l;
        top->right = r;

        minheap.push(top);
        
    }

    printCodes(minheap.top(), "");
    
}

int main()
{
    char data[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};

    int size = sizeof(data) / sizeof(data[0]);

    Huffmancodes(data, freq, size);

    return 0;
}