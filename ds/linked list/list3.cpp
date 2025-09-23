#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    char info;
    struct Node *next;
};
struct stk{
    int temp[100];
    int top;
};
struct stk s;
void initialisation(){
    s.top=-1;
}
bool IsEmpty(){
    if (s.top==-1){
        return true;
    }
    else{
        return false;
    }
}
void push(int x){
    if (s.top==99){
        cout<<"stack overflow";
        exit(1);
    }
    else{
        s.top=s.top+1;
        s.temp[s.top]=x;
    }
}
char pop(){
    if (IsEmpty()){
        cout<<"STACK UNDERFLOW";
        exit(1);
    }
    else{
        char x=s.temp[s.top];
        s.top=s.top-1;
        return x;
    }
}
char stacktop(){
    return s.temp[s.top];
}
/*******************************************/

struct Node *START;
Node* GetNode(){
    Node *p;
    p=(Node *)malloc(sizeof(struct Node));
    return p;
}
/*******************************************/

void InsBeg(char x){
    Node *p;
    p=GetNode();
    p->info=x;
    p->next=START;
    START=p;
}
/*******************************************/
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
/*******************************************/

void Traverse(){
    Node *p=START;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
}
/*******************************************/

int count(){
    Node *p=START;
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
/*******************************************/

void MiddleElementing(){
    int c=count();
    int i=1;
    Node *p=START;
    for(i=1;i<=(c/2);i++){
        p=p->next;
    }
    cout<<"\n Middle elemnt is ="<<p->info;
}
/*******************************************/
void MiddleElementing2(){
    Node *t, *r;
    t=START;
    r=START->next;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next->next;
    }
    cout<<"\n Middle elemnt 2 is ="<<t->info;

}
/*******************************************/
void reverse(){
    Node *p,*q,*r;
    p=START;
    q=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    START=q;
}
/*******************************************/
char reverse2(Node *START){
    stack Node;
    initialisation();
    Node *p=START;
    while(p!=NULL){
        push(stk,p->info);
        p=p->next;
    }
    p=START;
    while(!IsEmpty()){
        x=pop(stk);
        p=p->next;
    }
}
/*******************************************/


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
    cout<<"\n the count is "<<count();
    MiddleElementing();
    MiddleElementing2();
   Traverse();
    return 0;
}
