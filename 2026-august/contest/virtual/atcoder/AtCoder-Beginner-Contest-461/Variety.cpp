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
    ll n,k,m;cin>>n>>k>>m;
    vector<pii>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i].second>>a[i].first;
    }
    sort(all(a));
    reverse(all(a));
    vector<ll>ans;
    ll sum=a[0].first,cnt=k-1,clr=m-1;
    for(ll i=1;i<n;i++){
        if(cnt<=0)break;
        if(cnt==clr){
            if(a[i-1].second==a[i].second)continue;
            else{
                sum+=a[i].first;
                cnt--;
                clr--;
            }
        }else{
            if(a[i-1].second==a[i].second){
                sum+=a[i].first;
                cnt--;
            }else{
                    sum+=a[i].first;
                    clr--;
                    cnt--;
                }
            }

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