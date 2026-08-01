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
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>applicants(n);
    vector<ll>apartments(m);
    for(ll i=0;i<n;i++)cin>>applicants[i];
    for(ll i=0;i<m;i++)cin>>apartments[i];
    sort(all(applicants));
    sort(all(apartments));
    ll i=0,j=0,ans=0;
    while(i<n && j<m){
        if(abs(applicants[i]-apartments[j])>k){
            if(applicants[i]>apartments[j])j++;
            else i++;
        }
        else{
            ans++;
            i++;
            j++;
        }
    }
    cout<<ans<<nl;
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