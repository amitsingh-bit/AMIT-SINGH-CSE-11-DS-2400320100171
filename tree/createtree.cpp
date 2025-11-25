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

void inorder(node *t){
    if(t != NULL){
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }
}

/******************************************/

void preorder(node *t){
    if(t != NULL){
        cout << t->data << " ";
        preorder(t->left);
        preorder(t->right);
    }
}

/******************************************/

void postorder(node *t){
    if(t != NULL){
        postorder(t->left);
        postorder(t->right);
        cout << t->data << " ";
    }
}

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

    cout << "\nInorder Traversal: ";
    inorder(t.root);

    cout << "\nPreorder Traversal: ";
    preorder(t.root);

    cout << "\nPostorder Traversal: ";
    postorder(t.root);

    cout << endl;

    return 0;
}
