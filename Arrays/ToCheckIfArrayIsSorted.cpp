// Problem: Check if an Array is Sorted
// Time Complexity: O(n)
// Space Complexity: O(1)
bool sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
}
