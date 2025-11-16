#include<iostream>
#include<stdlib.h>
using namespace std;


/*******************************/


struct node{
    char info;
    struct node *next;
    struct node *prev;
};


//node *dstart;


/*******************************/

node* GetNode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}

/*******************************/


node* InsBeg(node *dstart,char x){
    node *p;
    p=GetNode();
    p->info=x;
    p->next=dstart;
    p->prev=NULL;
    if(dstart!=NULL)
        dstart->prev=p;
    dstart=p;
    return dstart;
}


/*******************************/


void traverse(node *dstart){
    node *p;
    p=dstart;
    while(p!=NULL){
        cout<<p->info<<", ";
        p=p->next;
    }
}


/*******************************/


node* InsEnd(node *dstart,char x){
    node *p,*q;
    p=GetNode();
    p->info=x;
    p->next=NULL;
    if(dstart==NULL){
        p->prev=NULL;
        dstart=p;
        return dstart;
    }
    q=dstart;
    while(q->next!=NULL)
        q=q->next;
    q->next=p;
    p->prev=q;
    return dstart;
}


/*******************************/


node* InsAft(node *dstart,node*q,char x){
    node *p;
    p=GetNode();
    p->info=x;
    node *r;
    r=q->next;
    q->next=p;
    p->next=r;
if (r!=NULL){
    r->prev=p;
}
return dstart;
}

/*******************************/


node* InsBef(node *dstart, node *q, char x) {
    node *p = GetNode();
    p->info = x;
    node *r = q->prev;
    p->prev = r;
    p->next = q;
    q->prev = p;
    if (r != NULL) {
        r->next = p;
    } else {
        dstart = p;
    }
    return dstart;
}


/*******************************/
/*******************************/
/*******************************/
/*******************************/
/*******************************/
/*******************************/
/*******************************/
/*******************************/


int main(){
    node *dstart;
    dstart=NULL;
    dstart=InsBeg(dstart,'A');
    dstart=InsBeg(dstart,'B');
    dstart=InsBeg(dstart,'C');
    dstart=InsBeg(dstart,'D');
    dstart=InsBeg(dstart,'E');
    dstart=InsBeg(dstart,'F');
    dstart=InsBeg(dstart,'G');
    dstart=InsBeg(dstart,'H');
    dstart=InsEnd(dstart,'Z');
    node *temp=dstart;
    while(temp->info!='C'){
        temp=temp->next;
    }
    cout<<"The doubly linked list is: ";

    traverse(dstart);
    dstart=InsAft(dstart,temp,'+');
    dstart=InsBef(dstart,temp,'-');
    cout<<"\nThe modified doubly linked list is: ";
    traverse(dstart);
    return 0;
}