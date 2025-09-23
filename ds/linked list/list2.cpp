#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    char info;
    struct Node *next;
};
struct Node *START;
Node* GetNode(){
    Node *p;
    p=(Node *)malloc(sizeof(struct Node));
    return p;
}
void InsBeg(char x){
    Node *p;
    p=GetNode();
    p->info=x;
    p->next=START;
    START=p;
}
void InsEnd(char x){
    Node *p,*q;
    q=START;
    p=GetNode();
    p->info=x;
    p->next=NULL;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next=p;
}
void Traverse(){
    Node *p=START;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
}
void count(){
    Node *p=START;
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    cout<<c;
}
int main(){
    START=NULL;
    InsBeg('A');
    InsBeg('B');
    InsBeg('C');
    InsBeg('D');
    InsBeg('E');
    InsBeg('F');
    InsEnd('Z');
    Traverse();
    count();
    return 0;
}
