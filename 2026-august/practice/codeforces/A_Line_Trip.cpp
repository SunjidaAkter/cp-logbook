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
    ll n,x;cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll mx=max(2*(x-v.back()),v[0]-0);
    for(ll i=1;i<n;i++){
        ll tmp=abs(v[i]-v[i-1]);
        mx=max(mx,tmp);
    }
    cout<<mx<<nl;
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