#include<iostream>
#include<stdlib.h>
using namespace std;
/******************************************/

struct node{
    int data;
    struct node* left;
    struct node* right;
    struct node* father;
};

/******************************************/

node *makeNode(int x){
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=x;
    newNode->left=NULL;
    newNode->right=NULL;
    newNode->father = NULL;
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
    node* newNode = makeNode(x);
    if(q==NULL){
        t = newNode;
    }
    else{
        newNode->father = q;
        if(x < q->data){
            q->left = newNode;
        }
        else{
            q->right = newNode;
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

void inorder(node *t){
    if(t != NULL){
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }
}


/******************************************/

node *BSTPredeccessor(node *t){
    if(t->left != NULL){
        return BSTMin(t->left);
    }
    else{
        node *q=t->father;;
        while(q != NULL && q->left==t){
            t=q;
            q=q->father;
        }
        return q;
    }
}

/******************************************/

node *BSTSearch(node *t, int x){
    if(t == NULL || t->data == x){
        return t;
    }
    else if(x < t->data){
        return BSTSearch(t->left, x);
    }
    else{
        return BSTSearch(t->right, x);
    }
}

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
    cout << "\nInorder Traversal: ";
    inorder(t.root);
    node* x = t.root->left->right;
    node* s = BSTPredeccessor(x);

    if(s) cout << "\nPredeccessor of " << x->data << " is: " << s->data << endl;
    else cout << "\nNo predeccessor for " << x->data << endl;


    
    return 0;
}
