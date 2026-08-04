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
    for(ll i=0;i<m;i++){
        ll small=a[i];
        if(small>b[i]){
            no;return;
        }
    }
    reverse(all(b));
    reverse(all(a));
    for(ll i=0;i<m;i++){
        ll big=a[i];
        if(big<b[i]){
            no;return;
        }
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