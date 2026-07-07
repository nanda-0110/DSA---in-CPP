// Time Complexity: O(n)
// Space Complexity: O(1)
// You are using GCC
#include<iostream>
using namespace std;
void findlongest(int arr[],int n,int k){
    int left=0;
    int right=0;
    int sum=arr[0];
    int len=0;
    while(right<n){
        while(sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            len=max(len,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    }
    cout << len;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    findlongest(arr,n,k);
}
