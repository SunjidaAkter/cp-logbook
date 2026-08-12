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
    vector<vector<ll>>v(5);
    ll x,y;
    for(ll i=0;i<5;i++){
        for(ll j=0;j<5;j++){
            ll p;cin>>p;
            v[i].push_back(p);
            if(v[i][j]==1){
                x=i+1,y=j+1;
                break;
            }
        }
    }
    cout<<abs(x-3)+abs(y-3)<<nl;
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