//Time Complexity: O(n log n)
//Space Complexity: O(1)
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void Longest_Consecutive_Sequence(int arr[],int n){
    int last_smaller=INT_MIN;
    int curr_count=0;
    int longest=0;
    for(int i=0;i<n;i++){
        if(arr[i]-1==last_smaller){
            last_smaller=arr[i];
            curr_count++;
            longest=max(curr_count,longest);
        }
        else if(arr[i]!=last_smaller){
            last_smaller=arr[i];
            curr_count=1;
            longest=max(curr_count,longest);
        }
    }
    cout << longest;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    Longest_Consecutive_Sequence(arr,n);
}