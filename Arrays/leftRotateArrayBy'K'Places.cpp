#include<iostream>
using namespace std;
void Kby1(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    // Time Complexity: O(N)
    // Space Complexity: O(1)
}
void movebyk(int arr[],int n,int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
}
void movebykreverse(int arr[],int start,int end){
    int i=start;
    int j=end-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // Kby1(arr,n);
    int k;
    cin >> k;
    movebyk(arr,n,k);
    // movebykreverse(arr,0,k);
    // movebykreverse(arr,k,n);
    // movebykreverse(arr,0,n);
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
}
