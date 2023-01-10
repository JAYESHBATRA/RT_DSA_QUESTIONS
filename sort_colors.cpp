// https://leetcode.com/problems/sort-colors/
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums={2,0,2,1,1,0};
    int n=nums.size();

    for (int i = 0; i < n-1; i++)
    {
         bool swapped=false;
        for (int j = 0; j < n-1-i; j++)
        {
            if (nums[j]>nums[j+1])
            {
                swap(nums[j],nums[j+1]);
                swapped=true;
            }
        }
        if (swapped==false)
            break;
        
    }
    for (int i = 0; i < n; i++)
        {
        cout << nums[i] << " ";
        }
    return 0;
}
