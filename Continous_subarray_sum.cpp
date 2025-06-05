#include<iostream> 
#include<vector> 
#include<unordered_set> 

using namespace std; 

class Solution{
public: 
     bool checkSubarraySum(vector<int>& nums, int k){
        
       if(nums.size()<2) return false; 
       if(k==1) return true; 
       unordered_set<int> s; 
       int sum =0;
       for(int x:nums){
         if(s.find((sum+x)%k)!=s.end()) return true; 
         s.insert(sum); 
         sum = (sum+x)%k; 
       }
       return false; 
     }
};
int main(){
  vector<int> nums = {23,2,4,6,7}; 
  int k=6; 
  Solution sol; 
  cout << boolalpha << sol.checkSubarraySum(nums,k) << endl; 
  return 0; 
}
