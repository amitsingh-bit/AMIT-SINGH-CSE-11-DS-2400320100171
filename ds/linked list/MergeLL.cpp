#include<iostream>
#include<stdlib.h>
#include"myLLheader.h"
using namespace std;

Node* mergeLL(Node* S1, Node* S2) {
    Node* START3 = NULL;
    Node* p = S1;
    Node* q = S2;
    while (p != NULL && q != NULL) {
        if (p->info < q->info) {
            InsEnd(&START3, p->info);
            p = p->Next;
        } else {
            InsEnd(&START3, q->info);
            q = q->Next;
        }
    }
    while (p != NULL) {
        InsEnd(&START3, p->info);
        p = p->Next;
    }
    while (q != NULL) {
        InsEnd(&START3, q->info);
        q = q->Next;
    }
    return START3;
}




int main(){
    Node *s1=NULL;
    
}