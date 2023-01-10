// https://leetcode.com/problems/single-number/
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums={4,1,2,1,2};
    int n=nums.size();
    int res=0;
    for (int i = 0; i < n; i++)
    {
        res=res^nums[i];
    }
    cout << res;
    return 0;
}
