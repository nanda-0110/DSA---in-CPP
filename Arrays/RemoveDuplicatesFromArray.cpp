// Problem: Remove Duplicates from Sorted Array
// Technique: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<iostream>
using namespace std;
void rem_duplicates(int arr[],int n){
    int x=0;
    int y=1;
    for(int i=0;i<n;i++){
        if(arr[y]==arr[x]){
            y++;
        }
        else{
            arr[x+1]=arr[y];
            x++;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
}
