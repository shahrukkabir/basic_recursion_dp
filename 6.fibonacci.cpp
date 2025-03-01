#include <bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a))
typedef long long ll;
const   int  mod = 1e7+7;
const   int  mx  = 1e5+123;

ll dp[mx];

int fib (ll n){
    if(n==0 || n==1) return n;
    if(dp[n]!=-1) return dp[n];
    int res = (fib(n-1) + fib(n-2))%mod;
    return dp[n] = res;
}

int main(){
    
    mem(dp,-1);
    ll n; cin>>n;
    cout<<fib(10000)<<endl;

    return 0;
}

   
// O(n)