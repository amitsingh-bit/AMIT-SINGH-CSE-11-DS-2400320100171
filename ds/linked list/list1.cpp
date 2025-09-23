#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *ptr;
    int x=10;
    int N;
    cin>>N;
    ptr=(int *)malloc(sizeof(int)*5);
    for(int i=0;i<N;i++){
        *(ptr+i)=x;
        x+=10;
    }
    for(int i=0;i<N;i++){
        cout<<*(ptr+i)<<" ";
    }
    free(ptr);
    return 0;
}