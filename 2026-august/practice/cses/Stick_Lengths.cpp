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
    vector<ll>sticks(n);
    for(ll i=0;i<n;i++)cin>>sticks[i];
    sort(all(sticks));
    ll median=sticks[n/2];
    if(n%2==0){
        median=(sticks[n/2]+sticks[n/2-1])/2;
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=abs(sticks[i]-median);
    }
    cout<<sum<<nl;
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