#include<iostream>
#include<stack>
#include<vector>
#include<math.h>
#include<string.h>
#include "myFirstStack.h"
using namespace std;
int main(){
    stk mS;

    initialisation(&ms);
    int d;
    cin>>d;
    while(d!=0){
        push(&ms,d%2);
        d=d/2;
    }
    while(!IsEmpty(&ms2)){
        cout<<pop(&ms2);
    }
    return 0;
}
struct stk{
    int temp[100];
    int top;
};
struct stk s;
void initialisation(stk *fs){
    fs->top=-1;
}
bool IsEmpty(){
    if (fs->top==-1){
        return true;
    }
    else{
        return false;
    }
}
void push(stk *fs,int x){
    if (fs->top==99){
        cout<<"stack overflow";
        exit(1);
    }
    else{
        fs->top=fs->top+1;
        fs->temp[fs->top]=x;
    }
}
char pop(stk *fs){
    if (IsEmpty()){
        cout<<"STACK UNDERFLOW";
        exit(1);
    }
    else{
        char x=s.temp[s.top];
        fs->top=fs->top-1;
        return x;
    }
}
char stacktop(stk *fs){
    return fs->temp[fs->top];
}
