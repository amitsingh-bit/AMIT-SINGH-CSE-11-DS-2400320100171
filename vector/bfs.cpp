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
    queue<int> q;
    vector<int>status(n,0);
    q.push(0);
    status[0]=1;
    cout<<"BFS order is: ";
    while(!q.empty()){
        int x=q.front();
        q.pop();
        cout<<x<<", ";
        for(int j=0;j<adjlist[x].size();j++){
            int y=adjlist[x][j];
            if(status[y]==0){
                status[y]=1;
                q.push(y);
            }
        }
    }

    

}
