// Time Complexity: O(N)
// Space Complexity: O(N)
#include<iostream>
using namespace std;
void twoSum(int nums[], int target) {
        map<int,int> mpp;
        int min=0;
        int last=0;
        for(int i=0;i<nums.size();i++){
            int eletofind=target-nums[i];
            if(mpp.find(eletofind)!=mpp.end()){
                min=mpp[eletofind];
                last=i;
                break;
            }
            mpp[nums[i]]=i;
        }
        return {min,last};
    }
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << twoSum(arr,n,k);
}
