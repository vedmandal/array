#include<iostream>
#include<vector>
using namespace std;


vector<int> getConcatenation(vector<int>& nums) {
         const int n = nums.size();

    for (int i = 0; i < n; ++i)
      nums.push_back(nums[i]);

    return nums;
        
    }

int main(){
    vector<int>arr={1,2,1};
    vector<int>ans=getConcatenation(arr);
    for(int val:ans){
        cout<<val<<" ";
    }


}