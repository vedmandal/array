#include<iostream>
#include<vector>
using namespace std;

 vector<int> buildArray(vector<int>& nums) {
        const int n = nums.size();

    for (int i = 0; i < n; ++i)
      nums[i] += n * (nums[nums[i]] % n);

    for (int i = 0; i < n; ++i)
      nums[i] /= n;

    return nums;
        
    }

int main(){
    vector<int>arr={2,3,7,5,8,4,9};
    vector<int>ans=buildArray(arr);
    for(int val:ans){
        cout<<val<<" ";
    }


}