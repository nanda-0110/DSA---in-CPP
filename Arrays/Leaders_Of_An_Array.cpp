//Time Complexity: O(N)
//Space Complexity: O(1)
// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
void Leaders_in_an_array(int arr[],int n){
    vector<int> ans;
    int max=0;
    for(int i=n;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            ans.push_back(arr[i]);
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout << ans[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Leaders_in_an_array(arr,n);
}