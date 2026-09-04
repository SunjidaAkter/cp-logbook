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
    ll n;cin>>n;
    ll x=10;
    vector<ll>v;
    while(x<=n){
        if(n%x>0){
            v.push_back(n%x);
            // cout<<v.back()<<" ";
            n/=x;
            n*=x;
        }
        x*=10;
    }
    v.push_back(n%x);
    cout<<v.size()<<nl;
    reverse(all(v));
    for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<nl;
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