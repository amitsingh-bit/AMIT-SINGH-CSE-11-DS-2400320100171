#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    cout<<"the vector elements are:"<<endl;
    int i=0;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}