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
    vector<ll> axe(n);
    for(ll i=0;i<n;i++)cin>>axe[i];
    vector<ll> woodcutters(n);
    for(ll i=0;i<n;i++)cin>>woodcutters[i];
    for(ll i=0;i<n;i++){
        if(axe[woodcutters[i]-1]!=i+1){No;return;}
    }
    Yes;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}