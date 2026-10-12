#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007

typedef vector <int> vi;
typedef long long ll;


#define it iterator
#define pb push_back
#define F first
#define S second
#define tt "\n"
#define all(v) (v).begin(),(v).end()

#define lp(i,s,f) for(ll i = s; i < ll(f); i++)
#define rlp(i,s,f) for(ll i = s; i > ll(f); i--)
//v.emplace(*,num);== v.insert (*,num); but emplace is faster than insert

ll subt(ll n, ll k){
for (ll i=0; i<k; i++){
if (n%10==0){ n/=10;}else n--;}
return n;}
int main()
{
    IOS
 ll n,k;
 cin>>n>>k;
 cout<<subt(n,k)<<tt;
 
 return 0;


}