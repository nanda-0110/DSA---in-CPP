#include<iostream>
void move_nonzero(int arr[],int n){
    int x;
    int y;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            x=i;
            y=i+1;
            break;
        }
    }
    while(y<n){
        if(arr[y]!=0){
            arr[x]=arr[y];
            arr[y]=0;
            x++;
            y++;
        }
        y++;
    }
}
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    move_nonzero(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
}
