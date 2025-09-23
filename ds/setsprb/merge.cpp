#include <iostream>
#include<vector>
using namespace std;
/************************************* */
void traverse(vector<int>&c){
    for (auto  x : c) {
        cout << x << " ";
    }
}
/*******************************************/
void mergearray(vector<int>&a,vector<int>&b,int m,int n){
    int i=0,j=0;
    vector<int>c;

    while(i<m && j<n){
        if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }
        else {
            c.push_back(b[j]);
            j++;
        }
    }
    while(i<m){
        c.push_back(a[i]);
        i++;
    }
     while(j<n){
        c.push_back(b[j]);
        j++;
    }
    traverse(c);

}
/***************** ****************************/

int main(){
    int m,n;
    cout<<"ENTER THE SIZE OF SET A:=";
    cin>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"ENTER THE SIZE OF SET B:=";
    cin>>n;
    vector<int>b(n);
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    mergearray(a,b,m,n);
}