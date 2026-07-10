// Time Complexity: O(n)
// Space Complexity: O(1)
// You are using GCC
#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        int temp;
        if(arr[mid]==0){
            temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
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
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout  << arr[i];
    }
}
