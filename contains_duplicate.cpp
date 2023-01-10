#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums={1,2,3,1};
    sort(nums.begin(), nums.end());
    int n=nums.size();
    bool ans=false;
    for (int i = 0; i < n-1; i++)
    {
        if(nums[i]==nums[i+1])
        {
            ans=true;
        }
    }
    cout << ans;
    return 0;
}
