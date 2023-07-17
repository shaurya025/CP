#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define r_rep(i,a,b) for(ll i = a; i >= b; i--)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

//SHAURYA     SHAURYA      SHAURYA      SHAURYA        SHAURYA         SHAURYA        SHAURYA  //

void dfs(ll node, ll par, vector<vector<ll>>&adj,vector<ll>&dp){

dp[node]=1;

for(auto child: adj[node]){

if(child!=par){

dfs(child,node,adj,dp);
dp[node]+=dp[child];

}

}
//dp[node]++;


}


void solve(){

ll n;cin>>n; vector<ll>v(n-1); vector<vector<ll>>adj(n+1);
rep(i,0,n-1){
ll x;
cin>>x;
adj[i+2].push_back(x);
adj[x].push_back(i+2);

}
vector<ll>dp(n+1);
//cout<<dfs()
dfs(1,0,adj,dp);
rep(i,1,n+1){

cout<<dp[i]-1<<" ";

}
cout<<endl;

}
int main()
{
	fast_cin();
	solve();
	
}
