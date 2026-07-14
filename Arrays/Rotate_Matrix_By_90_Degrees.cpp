//Time Complexity: O(N²)
//Space Complexity: O(1)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=m-1;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i], arr[i]+n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}