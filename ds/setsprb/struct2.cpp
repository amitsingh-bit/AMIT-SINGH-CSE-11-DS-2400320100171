#include <iostream>
using namespace std;
struct dist{
    int km;
    int m;
};
int main(){
    dist d1;
    dist d2;
    dist d3;
    cout<<"ENTER THE 1ST DISTANCE : ";
    cin>>d1.km>>d1.m;
    cout<<"ENTER THE 2ND DISTANCE : ";
    cin>>d2.km>>d2.m;
    d3.m=d1.m+d2.m;
    d3.km=d1.km+d2.km+d3.m/1000;
    d3.m=d3.m%1000;
    cout<<d3.km<<" km, "<<d3.m<<" m";
    return 0;
}
