#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<=n-1;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[1000],n,key;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>n;
    cout<<"ENTER THE NUMBER TO SEARCH: ";
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x = LinearSearch(arr, n, key);
    cout<<"at index "<<x;
    return 0;
}