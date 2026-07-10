// Time Complexity: O(N)
// Space Complexity: O(1)
// You are using GCC
#include<iostream>
using namespace std;
void count(int arr[],int n){
    int ele=arr[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(ele==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            ele=arr[i+1];
        }
    }
    int Total_Count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            Total_Count++;
        }
    }
    if(Total_Count>n/2){
        cout << ele;
    }
    else{
        cout << "No";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    count(arr,n);
}
