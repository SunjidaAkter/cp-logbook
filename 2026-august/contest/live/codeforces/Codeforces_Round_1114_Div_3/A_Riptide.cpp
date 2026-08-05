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
    // ll n;cin>>n;
    vector<ll>v(3);
    for(ll i=0;i<3;i++)cin>>v[i];
    if(v[0]==v[1] || v[1]==v[2] || v[0]==v[2]){
        cout<<0<<nl;
        return;
    }
    sort(all(v));
    cout<<min({v[2]-v[1], v[1]-v[0], v[2]-v[0]})<<nl;
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