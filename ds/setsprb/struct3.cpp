#include <iostream>
using namespace std;
struct time{
    int h;
    int min;
    int sec;
};
int main(){
    struct time t1;
    struct time t2;
    struct time t3;
    cout<<"ENTER THE 1ST TIME IN H MIN SEC : ";
    cin>>t1.h>>t1.min>>t1.sec;
    cout<<"ENTER THE 2ND TIME IN H MIN SEC : ";
    cin>>t2.h>>t2.min>>t2.sec;
    t3.sec=t1.sec+t2.sec;
    t3.min=t1.min+t2.min+t3.sec/60;
    t3.sec=t3.sec%60;
    t3.h=t1.h+t2.h+t3.min/60;
    t3.min=t3.min%60;
    cout<<t3.h<<" hr, "<<t3.min<<" min "<<t3.sec<<" sec";
    return 0;
}
