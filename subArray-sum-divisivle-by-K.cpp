#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;


//this is basic approach we traverse all possible subarray and try to find sum which is equal to K or not 
// time  complexity => O(n2)
// int solve(vector<int>&v,int k){
//     int cnt=0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         int sum=0;
//         for (int j = i; j < v.size(); j++)
//         {
//             sum+=v[j];
//             if(sum%k==0)
//             cnt++;
            
//         }
        
//     }
//     return cnt;
    
// }

// prefix sum method 
// time complexity => O(n)
int solve1(vector<int>&v,int k){
    unordered_map<int ,int >mp;
    int cnt=0;
    mp.insert(make_pair(0,1));
    int sum=0,rem=0;
    for(auto a:v){
        sum+=a;
        rem=sum%k;
        if(rem<0)
        {
            rem+=k;
        }
       if(mp.find(rem)!=mp.end())
         cnt+=mp[rem];
         mp[rem]++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;cin>>n;
   vector<int>v(n);
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
   }
   int k;cin>>k;
   cout<<solve1(v,k);
   
    return 0;
}