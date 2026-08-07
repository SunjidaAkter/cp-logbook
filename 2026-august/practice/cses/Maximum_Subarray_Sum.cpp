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
    ll neg_cnt=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0)neg_cnt++;
    }
    if(n==neg_cnt){
        cout<<*max_element(all(v))<<nl;
        return;
    }
    ll max_sum=LLONG_MIN;
    ll current_sum=0;
    for(ll i=0;i<n;i++){
        current_sum+=v[i];
        if(current_sum<0){
           current_sum=0; 
        }
        max_sum=max(max_sum,current_sum); 
    }
    cout<<max_sum<<nl;
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