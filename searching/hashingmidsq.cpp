#include<iostream>
#include<math.h>
using namespace std;
int digits(int num){
    int d=0;
    while(num>0){
        d++;
        num=num/10;
    }
    return d;
}
int power(int base,int exp){
    int pw=pow(base,exp);
    return pw;
}
int HashMidSquare(int key,int tableSize){
    int m=digits(tableSize-1);
    int M=power(10,m);
    int y=key*key;
    int n=digits(key);
    int x=(2*n-m)/2;
    int d=power(10,x);
    y=y/d;
    int L=y%M;
    return L%tableSize;
}
int main(){
    int key,TS;
    cout<<"ENTER THE KEY: ";
    cin>>key;
    cout<<"ENTER THE TABLE SIZE: ";
    cin>>TS;
    int index=HashMidSquare(key,TS);
    cout<<"INDEX IS: "<<index;
    return 0;
}