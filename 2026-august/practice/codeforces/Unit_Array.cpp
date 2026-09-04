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
    ll sum=0,neg=0,ans=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        sum+=x;
        if(x==-1)neg++;
    }
    if(sum<0){
        ans+=(abs(sum)/2)+(abs(sum)%2);
        neg-=ans;
    }
    if(neg%2)ans++;
    cout<<ans<<nl;
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