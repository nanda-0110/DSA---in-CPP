// Problem: Find Second Largest Element in an Array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int sec_largest = INT_MIN;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sec_largest) {
            sec_largest = arr[i];
        }
    }

    cout << "Second Largest: " << sec_largest;
}
