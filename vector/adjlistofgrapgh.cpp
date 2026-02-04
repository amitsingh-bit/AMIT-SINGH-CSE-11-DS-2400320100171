#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int e;
    cout<<"enter the number of vertices:"<<"\n";
    cin>>n;
    cout<<"enter the number of edges:"<<"\n";
    cin>>e;
    vector<int> adjlist[n];
    for(int i=1;i<=e;i++){
        int a,b;
        cout<<"enter the end points of edge "<<i<<": ";
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }

    cout<<"the elements of array of vectors are:"<<"\n";
    
    for(int i=0;i<n;i++){
        cout<<i<<": ";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<", ";
        }
        cout<<"\n";
    }

}
