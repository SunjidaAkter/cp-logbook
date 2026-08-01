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
    ll n,k;cin>>n>>k;
    vector<ll>weights(n);
    for(ll i=0;i<n;i++)cin>>weights[i];
    sort(all(weights));
    ll i=0,j=n-1,ans=0;
    while(i<j){
        if(weights[i]+weights[j]<=k){
            ans++,i++,j--;
        }else ans++,j--;
    }
    if(i==j)ans++;
    cout<<ans<<nl;
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