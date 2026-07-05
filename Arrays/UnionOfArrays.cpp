// Time Compleixty : O((m+n)log(m+n))
// Space Complexity : O(m+n)
// You are using GCC
#include<iostream>
#include<set>
using namespace std;
void unionarr(int arr1[],int arr2[],int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        st.insert(arr2[i]);
    }
    int size=st.size();
    int temp[size];
    int i=0;
    for(auto it:st){
        temp[i]=it;
        i++;
    }
    for(int i=0;i<n;i++){
        cout << temp[i];
    }
}
int main(){
    int n;
    cin >> n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        cin >> arr2[i];
    }
    unionarr(arr1,arr2,n);
}
