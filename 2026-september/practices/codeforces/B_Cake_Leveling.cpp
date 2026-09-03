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
    vector<ll>ans;
    ans.push_back(v[0]);
    ll sum=v[0],mn=LONG_MAX;
    for(ll i=1;i<n;i++){
        // mn=min(mn,ans.back());
        // if(mn<v[i]){
        //     sum+=v[i];
        //     ans.push_back(ans.back());
        // }else{
            sum+=v[i];
            ans.push_back(sum/(i+1));
        // }
    }
    for(ll i=1;i<n;i++){
        if(ans[i-1]<ans[i])ans[i]=ans[i-1];
    }
    for(ll i=0;i<n;i++)cout<<ans[i]<<" ";
    cout<<nl;
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