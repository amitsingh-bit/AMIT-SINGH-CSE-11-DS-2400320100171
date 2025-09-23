#include<iostream>
#include<stack>
using namespace std;
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
int pop(){
    if (IsEmpty()){
        cout<<"STACK UNDERFLOW";
        exit(1);
    }
    else{
        int x=s.temp[s.top];
        s.top=s.top-1;
        return x;
    }
}
int stacktop(){
    return s.temp[s.top];
}
void decimaltobinary(int n){
    initialisation();
    while(n!=0){
        int r=n%2;
        n=n/2;
        push(r);
    }
    while(!IsEmpty()){
        int x=pop();
        cout<<x;
    }
}
void decimaltooctal(int n){
    initialisation();
    while(n!=0){
        int r=n%8;
        n=n/8;
        push(r);
    }
    while(!IsEmpty()){
        int x=pop();
        cout<<x;
    }
}
void decimaltohexadecimal(int n){
    initialisation();
    int dat[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(n!=0){
        int r=n%16;
        n=n/16;
        push(r);
    }
    while(!IsEmpty()){
        int x=pop();
        cout<<dat[x];
    }
}
int main(){
    int n;
    cout<<"ENTER THE DECIMAL NUMBER : ";
    cin>>n;
    decimaltobinary(n);
    cout<<"\n";
    decimaltooctal(n);
    cout<<"\n";
    decimaltohexadecimal(n);


}