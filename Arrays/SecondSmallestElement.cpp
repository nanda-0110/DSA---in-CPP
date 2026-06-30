// Problem: Find Second Smallest Element in an Array
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

    int smallest = arr[0];
    int sec_smallest = INT_MAX;

    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < sec_smallest) {
            sec_smallest = arr[i];
        }
    }

    cout << "Second Smallest: " << sec_smallest;
}
