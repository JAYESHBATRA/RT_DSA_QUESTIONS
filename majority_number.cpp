// https://leetcode.com/problems/majority-element/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={2,2,1,1,1,2,2};
    int num=0;
    int n=nums.size();
    
    for (int i = 0; i < n; i++)
    {
        int freq=1;
        for (int j = i+1; j < n; j++)
        {
            if(nums[i]==nums[j])
            {
                freq++;
            }
        }
        if(freq>n/2)
        {
            num=nums[i];
            break;
        }
    }
    cout << num << endl;
    return 0;
}
