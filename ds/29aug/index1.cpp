// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v1(3,1);
    vector<int>v2(3,2);
    vector<int>v3(3,3);
    vector<int>v4(5,10);
    vector<vector<int>>vv;
    vv.push_back(v1);
    vv.push_back(v2);
    vv.push_back(v3);
    vv.push_back(v4);
    for(int i=0;i<vv.size();i++){
        for(int j=0;j<vv[i].size();j++){
            cout<<vv[i][j]<<" ";
            
        }
        cout<<"\n";
    }

    return 0;
}