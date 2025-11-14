#include<iostream>
using namespace std;

void merge(int a[],int low,int mid,int high){
    int c[1000];
    int i=low,j=mid+1,k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=high){
        c[k]=a[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++){
        a[i]=c[i];
    }
}

void mergesort(int a[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[1000];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}