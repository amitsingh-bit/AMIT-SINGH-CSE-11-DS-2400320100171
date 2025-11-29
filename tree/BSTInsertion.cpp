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

void BSTInsertion(node* &t,int x){
    node *p=t,*q=NULL;
    while(p!=NULL){
        q=p;
        if(x<p->data){
            p=p->left;

        }
        else{
            p=p->right;
        }
    }
    if(q==NULL){
        t=makeNode(x);
    }
    else{
        if(x<q->data){
            q->left=makeNode(x);

        }
        else{
            q->right=makeNode(x);
        }
    }
}
/******************************************/

node *BSTMin(node *t){
    while(t->left!=NULL){
        t=t->left;
    }
    return t;
}

/******************************************/

node *BSTMax(node *t){
    while(t->right!=NULL){
        t=t->right;
    }
    return t;
}

/***************************************************************/

int main() {
    Tree t;
    t.root = NULL;
    BSTInsertion(t.root, 50);
    BSTInsertion(t.root, 30);
    BSTInsertion(t.root, 20);
    BSTInsertion(t.root, 40);
    BSTInsertion(t.root, 370);
    BSTInsertion(t.root, 160);
    BSTInsertion(t.root, 200);
    node *minNode = BSTMin(t.root);
    cout << "Minimum value in the BST: " << minNode->data << endl;
    node *maxNode = BSTMax(t.root);
    cout << "Maximum value in the BST: " << maxNode->data << endl;


    
    return 0;
}
