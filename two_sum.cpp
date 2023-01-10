// https://leetcode.com/problems/two-sum/
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int>nums={2,7,11,15};
    int n=nums.size();
    int target=13;
    vector<int> idx(2,0);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (target==nums[i]+nums[j])
            {
                idx[0]=i;
                idx[1]=j;
            }  
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << idx[i];
    }
    
    return 0;
}
