#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;
int solve(vector<int>&v){
    int totsum=0;
    int maxi=0,currmax=v[0],mini=0,currmini=v[0];
    for(auto a:v){
        totsum+=a;
        maxi=max(maxi+a,a);
        mini=min(mini+a,a);
        currmax=max(currmax,maxi);
        currmini=min(currmini,mini);
    }
    return currmax>0?max(currmax,totsum-currmini):currmax;

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
   cout<<solve(v);
   
    return 0;
}