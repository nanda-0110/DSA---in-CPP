//Time Complexity: O(m × n)
//Space Complexity: O(1)
#include<iostream>
using namespace std;
int arr[100][100];
void set_matrix_zero(int arr[][100], int n, int m){
    int row[n]={0};
    int col[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 || col[j]==1){
                arr[i][j]=0;
            }
        }
    }
}
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
    set_matrix_zero(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}