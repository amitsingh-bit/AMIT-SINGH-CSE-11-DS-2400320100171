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
int HashFolding(int num,int TS){
    int d=digits(TS-1);
    int M=power(10,d);
    int sum=0;
    while(num>0){
        int part=num%M;
        sum=sum+part;
        num=num/M;
    }
    return sum%TS;
}
int main(){
    long long int num,TS;
    cout<<"ENTER THE num: ";
    cin>>num;
    cout<<"ENTER THE TABLE SIZE: ";
    cin>>TS;
    int index=HashFolding(num,TS);
    cout<<"INDEX IS: "<<index;
    return 0;
}