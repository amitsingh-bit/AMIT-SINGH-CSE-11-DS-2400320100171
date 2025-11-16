#include<iostream>
#include <cstdlib>
#include "queue.h"
using namespace std;



int main(){
    Queue Q;
    initialise(&Q);
    EnQueue(&Q,'A');
    EnQueue(&Q,'B');
    EnQueue(&Q,'C');
    EnQueue(&Q,'D');
    EnQueue(&Q,'E');
    EnQueue(&Q,'F');
    EnQueue(&Q,'G');
    EnQueue(&Q,'H');
    EnQueue(&Q,'I');
    EnQueue(&Q,'J');
    char x=DeQueue(&Q);
    cout<<"Deleted item is "<<x<<endl;
    x=DeQueue(&Q);
    cout<<"Deleted item is "<<x<<endl;
    return 0;
}