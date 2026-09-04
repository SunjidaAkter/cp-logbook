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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    if(v[0]==v[n-1])cout<<-1<<nl;
    else{
        ll cnt=1;
        for(ll i=0;i<n-1;i++){
            if(v[i]==v[n-1])cnt++;
        }
        cout<<n-cnt<<" "<<cnt<<nl;
        for(ll i=0;i<n-cnt;i++){
            cout<<v[i]<<" ";
        }
        cout<<nl;
        for(ll i=n-cnt;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<nl;
    }
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