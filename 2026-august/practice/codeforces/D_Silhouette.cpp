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
    vector<pii>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(all(v));
    ll cnt=1,prev=v[0].first,sum=0,last=0;
    vector<ll>ans;
    for(ll i=1;i<n;i++){
        if(v[i].first==v[i-1].first) cnt++;
        else{
            // cout<<"cnt "<<cnt<<" prev "<<prev<<" v[i].first "<<v[i].first<<nl;
            if((v[i].first-v[i-1].first)%cnt!=0){
                cout<<-1<<nl;return;
            }
            ll tmp=(v[i].first-v[i-1].first)/cnt;
            if(tmp<=last){
                cout<<-1<<nl;return;
            }
            // sum+=tmp*cnt;
            last=tmp;
            while(cnt--){
                ans.push_back(tmp);
            }
            cnt=1;
            prev=v[i].first;
        }
    }
    if(v[0].first!=0){
        cout<<-1<<nl;return;
    }
    if(cnt==n){
        for(ll i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<nl;return;
    }
    // ll ans_size=ans.size();
    while(cnt--){
        ans.push_back(last+1);
    }
    vector<ll>temp(n);;
    for(ll i=0;i<ans.size();i++){
        temp[v[i].second-1]=ans[i];
    }
    for(ll i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
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