// Time Complexity: O(N)
// Space Complexity: O(1)
// You are using GCC
#include<iostream>
using namespace std;
void max(int arr[],int n){
    int max=0;
    int cons=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cons++;
        }
        else{
            cons=0;
        }
        if(cons>max){
            max=cons;
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
    max(arr,n);
}
