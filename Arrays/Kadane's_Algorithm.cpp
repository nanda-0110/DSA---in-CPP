// You are using GCC
//Time Complexity: O(N)
//Space Complexity: O(1)
#include<iostream>
using namespace std;
void kadanes(int arr[],int n){
    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum>max){
            max=sum;
        }
    }
    cout << max;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    kadanes(arr,n);
}