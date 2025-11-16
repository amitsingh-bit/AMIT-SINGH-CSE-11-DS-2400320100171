#include <iostream>
#include <stdlib.h>
#include "myLLheader.h"
using namespace std;
/*******************************/

void Traverse(Node *START) {
    Node *p = START;
    while (p != NULL) {
        cout << p->info << " ";
        p = p->Next;
    }
    cout << endl;
}
/*******************************/
int main(){
    START=NULL;
    InsBeg(&START,'A');
    InsBeg(&START,'B');
    InsBeg(&START,'C');
    InsBeg(&START,'D');
    InsBeg(&START,'E');
    InsBeg(&START,'F');
    InsEnd(&START,'Z');
    Traverse(START);
    reverse();
    cout<<"\n Reversed linked list is \n";
    Traverse(START);
    count();
    cout<<"\n the count is ";
    cout<<count();
    cout << "\nDeleting from beginning: " << DelBeg(&START) << endl;
    Traverse(START);

    cout << "\nDeleting from end: " << DelEnd(&START) << endl;
    Traverse(START);

    cout << "\nDeleting after first node (" << START->info << "): "
<< DelAfter(&START) << endl;
    Traverse(START);

    return 0;
}