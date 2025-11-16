#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    char info;
    struct Node *Next;
};

struct Node *START;

/*******************************/
Node* GetNode() {
    Node *p;
    p = (Node*)malloc(sizeof(struct Node));
    return p;
}

/*******************************/
void InsBeg(Node **START, char x) {
    Node *p = GetNode();
    p->info = x;
    p->Next = *START;
    *START = p;
}

/*******************************/
void InsEnd(Node **START, char x) {
    Node *p = GetNode();
    p->info = x;
    p->Next = NULL;

    if (*START == NULL) {  // handle empty list
        *START = p;
        return;
    }

    Node *q = *START;   
    while (q->Next != NULL) {
        q = q->Next;
    }
    q->Next = p;
}

/*******************************/

void InsAft(Node **Q, char x) {
    Node *P,*R;
    P = GetNode();
    P->info = x;
    R=(*Q)->Next;
    (*Q)->Next = P;
    P->Next=R;
}
/*******************************/
int count(){
    Node *p=START;
    int c=0;
    while(p!=NULL){
        c++;
        p=p->Next;
    }
    return c;
}
/*******************************/
void reverse(){
    Node *p,*q,*r;
    p=START;
    q=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->Next;
        q->Next=r;
    }
    START=q;
}
/*******************************/
void MiddleElementing(){
    int c=count();
    int i=1;
    Node *p=START;
    for(i=1;i<=(c/2);i++){
        p=p->Next;
    }
    cout<<"\n Middle elemnt is ="<<p->info;
}
/*******************************/
void MiddleElementing2(){
    Node *t, *r;
    t=START;
    r=START->Next;
    while(r!=NULL && r->Next!=NULL){
        t=t->Next;
        r=r->Next->Next;
    }
    cout<<"\n Middle elemnt 2 is ="<<t->info;

}
/*******************************/
char DelBeg(Node **START){
    Node *p=*START;
    (*START)=(*START)->Next;
    char x=p->info;
    free(p);
    return x;
}
/*******************************/
char DelAfter(Node **START){
    Node *p,*q,*r;
    p=*START;
    r=p->Next;
    q->Next=r;
    char x=p->info;
    free(p);
    return x;
}
/*******************************/
char DelEnd(Node **START) {
    if (*START == NULL) {
        cout << "List is empty\n";
        return -1;
    }
    Node *p = *START, *q = NULL;
    while (p->Next != NULL) {
        q = p;
        p = p->Next;
    }
    int x = p->info;
    if (q == NULL) { // only one element
        *START = NULL;
    } else {
        q->Next = NULL;
    }
    free(p);
    return x;
}
/*******************************/

/*******************************/
/*******************************/
/*******************************/
/*******************************/
