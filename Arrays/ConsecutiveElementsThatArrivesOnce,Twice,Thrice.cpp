// Time Complexity: O(N)+O(N)
// Space Complexity: O(maxElement+1) 
#include<iostream>
using namespace std;
void fndcons(int arr[],int n){
    int one;
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
            one=it.first;
        }
   }
    }
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    fndcons(arr,n);
}
