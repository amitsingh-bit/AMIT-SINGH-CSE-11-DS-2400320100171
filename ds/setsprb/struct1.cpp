#include <iostream>
using namespace std;
struct height{
    int feet;
    int inch;
};
int main(){
    height T1;
    height T2;
    height T3;
    cout<<"ENTER THE HEIGT OF 1st TOWER";
    cin>>T1.feet>>T1.inch;
    cout<<"ENTER THE HEIGHT OF 2ND TOWER ";
    cin>>T2.feet>>T2.inch;
    T3.inch=T1.inch+T2.inch;
    T3.feet=T1.feet+T2.feet+T3.inch/12;
    T3.inch=T3.inch%12;
    cout<<T3.feet<<" feet, "<<T3.inch<<" inches";
    return 0;
}
