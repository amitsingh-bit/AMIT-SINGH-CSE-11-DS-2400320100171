#include<iostream>
using namespace std;
vector<int> countingsort(int arr[], int n, int k) {
    vector<int> count(k + 1, 0);
    vector<int> output(n);
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    
    return output;
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> sortedArray = countingsort(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;
    
    return 0;
}