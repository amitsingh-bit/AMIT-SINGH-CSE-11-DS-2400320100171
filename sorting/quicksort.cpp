#include<iostream>
#include<algorithm>
using namespace std;

int partiton(int A[],int low,int high){
    int pivot=A[low];
    int i=low;
    int j=high+1;
    do{
        do{
            i++;
        }while(A[i]<pivot);
        do{
            j--;
        }while (A[j]>pivot);
        if(i<j){
            swap(A[i],A[j]);
        }
    }while(i<j);
    swap(A[low],A[j]);
    return j;
}

void quicksort(int A[],int low,int high){
    if(low<high){
        int j=partiton(A,low,high);
        quicksort(A,low,j-1);
        quicksort(A,j+1,high);
    }
}

int main(){
    int A[10]={34,7,23,32,5,62,32,2,12,20};
    int n=10;
    quicksort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<",";
    }
    return 0;
}