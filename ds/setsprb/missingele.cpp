#include <iostream>
#include<vector>
using namespace std;

int main() {
    int x;
    cout << "Enter the total count (including missing number): ";
    cin >> x;
    int a[x-1];
    cout << "Enter " << x-1 << " numbers: ";
    for (int i = 0; i < x-1; i++) {
        cin >> a[i];
    }
    vector<int>DAT(x+1,0);
    for (int i = 0; i < x-1; i++) {
        DAT[a[i]] = 1;
    }
 for (int i = 1; i <= x; i++) {
        if (DAT[i] == 0) {
            cout << "The missing number is: " << i;
            break;
        }
    }

    return 0;
}
