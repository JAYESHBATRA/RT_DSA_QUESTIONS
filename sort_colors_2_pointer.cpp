#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums={2,0,2,1,1,0};
    int n=nums.size();
    int i=0,j=n-1,k=0;
    while(k<=j)
    {
        if (nums[k]==0)
        {
            swap(nums[k],nums[i]);
            i++;
            k++;
        }
        else if(nums[k]==1)
        {
            k++;
        }
        else if(nums[k]==2)
        {
            swap(nums[k],nums[j]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }
    
    return 0;
}
