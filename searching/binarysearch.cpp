#include<iostream>
using namespace std;
int BinarySearch(int arr[],int low,int high,int key){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else{
            if(key<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[1000],n,low,high,key;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>n;
    cout<<"ENTER THE NUMBER TO SEARCH: ";
    cin>>key;
    cout<<"ENTER THE SORTED ELEMENTS: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    low=arr[0];
    high=arr[n-1];
    int x = BinarySearch(arr,low,high,key);
    cout<<"at index "<<x;
    return 0;
}