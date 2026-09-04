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
    ll sum1=0,sum2=0;
    ll i=0,j=n-1,d=1;
    while(i<=j){
        // cout<<i<<" "<<j<<" "<<d<<nl;
        if(d){
            if(i==j){
                sum1+=v[i];
                break;
            }
            if(v[i]>v[j]){
                sum1+=v[i];
                i++;
            }else{
                sum1+=v[j];
                j--;
            }
            d=0;
        }else{
            if(i==j){
                sum2+=v[i];
                break;
            }
            if(v[i]>v[j]){
                sum2+=v[i];
                i++;
            }else{
                sum2+=v[j];
                j--;
            }
            d=1;
        }
        // cout<<sum1<<" "<<sum2<<nl;
    }
    cout<<sum1<<" "<<sum2<<nl;
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