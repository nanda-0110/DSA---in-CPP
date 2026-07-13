//Time Complexity: O(N)
//Space Complexity: O(1)
#include<iostream>
using namespace std;
void stock(int arr[],int n){
    int minn=arr[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int cost=arr[i]-minn;
        profit=max(profit,cost);
        minn=min(minn,arr[i]);
    }
    //2 9 1 8 2 4 5
    cout << profit;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    stock(arr,n);
}