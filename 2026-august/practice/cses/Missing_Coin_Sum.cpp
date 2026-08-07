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
    vector<ll>coins(n);
    for(ll i=0;i<n;i++){
        cin>>coins[i];
    }   
    sort(all(coins));
    ll sum=1;
    if(coins[0]>1){
        cout<<1<<nl;
        return;
    }
    for(ll i=1;i<n;i++){
        if(coins[i]>sum+1){
            cout<<sum+1<<nl;
            return;
        }else{
            sum+=coins[i];
        }
    }
    cout<<sum+1<<nl;
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