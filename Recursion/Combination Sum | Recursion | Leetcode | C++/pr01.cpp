#include<iostream>
#include<vector>
using namespace std;


class Solution {
    
    public:
    void findCom(int ind,int target,vector <int> &arr,vector<vector<int>> &ans,vector <int> &ds)
    {
        if(ind==arr.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target)
        {
            ds.push_back(arr[ind]);
            findCom(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        findCom(ind+1,target,arr,ans,ds);
        
    }
    
public:
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //here candidates means arr
        vector <vector<int>> ans;
        vector <int> ds;
        findCom(0,target,candidates,ans,ds);
        return ans;
    }
};
