#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;
// vector<vector<int>> solve(vector<int> &v)
// {
//     vector<vector<int>> ans;

//     for (int i = 0; i < v.size(); i++)
//     {
//         vector<int> vec;
//         vec.push_back(v[i]);
//         for (int j = i + 1; j < v.size(); j++)
//         {
//             // if (v[j] >= *max_element(vec.begin(), vec.end()))
//             if(v[j]>=vec.back())
//                 vec.push_back(v[j]);
//         }
//         ans.push_back(vec);
//     }
//     return ans;
// }
map<vector<int>,int>mp;
void solve(vector<int>&v,vector<int>&vec,vector<vector<int>>&ans,int i){
    if(i>v.size())
    return ;
    if(vec.size()>=2)
    {
        if(mp[vec]>=1){
           return;
        }
        mp[vec]++;
        ans.push_back(vec);
    }
    for (int j = i; j < v.size(); j++)
    {
        if(vec.size()>=1 && v[j]<vec.back()){
            continue;
        }
       vec.push_back(v[j]);
       solve(v,vec,ans,j+1);
       vec.pop_back();
    }
    

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
   vector<int>vec;
   vector<vector<int>>ans;
   solve(v,vec,ans,0);
   for(auto a:ans){
    for(auto b:a){
        cout<<b<<" ";
    }
    cout<<endl;
   }

    return 0;
}