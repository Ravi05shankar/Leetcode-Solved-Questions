#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;
   void solve(vector<int>&v,int n,vector<int>&ans){
        for (int i = 0; i < n; i++)
        {
            ans.push_back(v[i]);
            ans.push_back(v[n+i]);

        }
        
   }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;cin>>n;
   vector<int>v(2*n);
   for (int i = 0; i <2* n; i++)
   {
    cin>>v[i];
   }
   vector<int>ans;
   solve(v,n,ans);
   for(auto a:ans)
   cout<<a<<" ";

   
    return 0;
}