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
    ll x,y,xx,yy;cin>>xx>>yy;
    x=xx,y=yy;
    vector<ll>a(n);
    vector<ll>b(m);
    vector<pii>v;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    for(ll i=0;i<n;i++){
        v.push_back({a[i],0});
    }
    for(ll i=0;i<m;i++){
        v.push_back({b[i],1});
    }
    sort(all(v));
    ll cnt=0,rem=0;
    sort(all(b));
    for(ll i=0;i<v.size();i++){



        if(v[i].second==1){
            ll tmp=b[i]/k;
            if(b[i]%k>0){tmp++;}
            // cout<<y<<" "<<tmp<<nl;
            y-=tmp;
            if(y<0) {y+=tmp;break;}
            if(y>0){cnt++;if(b[i]%k>0)rem+=(k-(b[i]%k));}
            if(y==0){cnt++;if(b[i]%k>0)rem+=(k-(b[i]%k));break;}
        }








    }
    // cout<<cnt<<" "<<"rem"<<nl;
    x+=rem;
    x+=(y*k);
    ll i=0;
    sort(all(a));
    while(i<n){
        // cout<<x<<" "<<a[i]<<nl;
        x-=a[i];
        if(x<0)break;
        if(x==0){cnt++;break;}
        i++;
        cnt++;
    }
    // cout<<x<<" "<<i<<nl;
    cout<<cnt<<nl;
    
    
    
    
    
    x=xx,y=yy;
    // cout<<cnt<<" "<<"rem"<<nl;
    // x+=rem;
    // x+=(y*k);
    ll i=0,cnt1=0;
    sort(all(a));
    while(i<n){
        // cout<<x<<" "<<a[i]<<nl;
        x-=a[i];
        if(x<0)break;
        if(x==0){cnt++;break;}
        i++;
        cnt1++;
    }
    for(ll i=0;i<m;i++){
        ll tmp=b[i]/k;
        if(b[i]%k>0){tmp++;}
        cout<<y<<" "<<tmp<<nl;
        y-=tmp;
        if(y<0) {y+=tmp;break;}
        if(y>0){cnt++;if(b[i]%k>0)rem+=(k-(b[i]%k));}
        if(y==0){cnt++;if(b[i]%k>0)rem+=(k-(b[i]%k));break;}
    }
    sort(all(b));
    for(ll i=0;i<m;i++){
        ll tmp=b[i]/k;
        if(b[i]%k>0){tmp++;}
        cout<<y<<" "<<tmp<<nl;
        y-=tmp;
        if(y<0) {y+=tmp;break;}
        if(y>0){cnt++;if(b[i]%k>0)rem+=(k-(b[i]%k));}
        if(y==0){cnt++;if(b[i]%k>0)rem+=(k-(b[i]%k));break;}
    }
    // cout<<x<<" "<<i<<nl;
    cout<<cnt<<nl;





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