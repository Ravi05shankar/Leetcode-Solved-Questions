#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    // sort(nums.begin(),nums.end());
    vector<int> v;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {

        if (mp.find(target - nums[i]) != mp.end())
        {
            v.push_back(mp[target - nums[i]]);
            v.push_back(i);
        }
        mp[nums[i]] = i;
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    vector<int>ans=twoSum(v,target);
    for(auto a:ans){
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;
}