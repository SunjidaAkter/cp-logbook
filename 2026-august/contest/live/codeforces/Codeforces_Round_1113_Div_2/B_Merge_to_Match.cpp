#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    vector<ll>b(m);
    for(ll i=0;i<m;i++) cin>>b[i];
    sort(all(a));
    sort(all(b));
    if(m*2>n){
        no;return;
    }
    ll j=0;
    // for(ll i=0;i<n;i++)cout<<a[i]<<" ";
    // cout<<nl;
    // for(ll i=0;i<m;i++)cout<<b[i]<<" ";
    // cout<<nl;
    if(a[0]>b[0]){
        no;return;
    }
    if(a[n-1]<b[m-1]){
        no;return;
    }
    if(a[m-1]>b[m-1]){
        no;return;
    }
    if(b[0]>a[(n-m+1)-1]){
        no;return;
    }
    yes;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}