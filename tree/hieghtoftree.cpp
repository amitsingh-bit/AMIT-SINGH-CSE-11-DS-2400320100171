#include<iostream>
#include<stdlib.h>
using namespace std;
/******************************************/

struct node{
    int data;
    struct node* left;
    struct node* right;
};

/******************************************/

node *makeNode(int x){
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=x;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

/******************************************/

struct Tree{
    node *root;
};


/******************************************/

void CreateTree(node **t){
    int choice;
    cout<<"Enter the choice if left of "<<(*t)->data<<" exists(1/0): ";
    cin>>choice;
    if(choice==1){
        int x;
        cout<<"Enter the value to be inserted at left of "<<(*t)->data<<": ";
        cin>>x;
        node *p=makeNode(x);
        (*t)->left=p;
        CreateTree(&p);
    }
    int y;
    cout<<"Enter the choice if right of "<<(*t)->data<<" exists(1/0): ";
    cin>>y;
    if(y==1){
        int a;
        cout<<"Enter the value to be inserted at right of "<<(*t)->data<<": ";
        cin>>a;
        node *p=makeNode(a);
        (*t)->right=p;
        CreateTree(&p);
    }
}

/******************************************/


int height(node *t) {
    if (t == NULL) {
        return 0;
    }
    else if(t->left == NULL && t->right == NULL) {
        return 0;
    }
    else {
    
        return 1 + max(height(t->left), height(t->right));
    }
}

/***************************************************************/

int main() {

    Tree t;

    int rootValue;
    cout << "Enter the value of root node: ";
    cin >> rootValue;

    t.root = makeNode(rootValue);

    cout << "\n--- Start Building Your Tree ---\n";
    CreateTree(&t.root);

    cout << "\nTree created successfully!\n";

    cout << "Total height of the given tree is = " << height(t.root) << endl;

    return 0;
}
