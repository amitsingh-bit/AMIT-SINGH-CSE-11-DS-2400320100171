#include<iostream>
#include <cstdlib>
#include "myLLheader.h"
using namespace std;

void initialise(Node *Front,Node *Rear){
    Front=NULL;
    Rear=NULL;
}

void EnQueue(Node *Front,Node *Rear, char x){
    Node *p;
    p=GetNode();
    p->info=x;
    p->Next=NULL;
    if(Rear!=NULL){
        Rear->Next=p;
    }
    else{
        Front=p;
    }
    Rear=p;
}


char DeQueue(Node *Front,Node *Rear){
    Node *p;
    char x;
    if(Front==NULL){
        cout<<"Queue Overflow\n";
        exit(1);
    }
    p=Front;
    Front=Front->Next;
    if(Front==NULL){
        Rear=NULL;
    }
    free(p);
    return x;
}
bool IsEmpty(Node *Front,Node *Rear){
    if(Front==NULL){
        return true;
    }
    else{
        return false;
    }
}

