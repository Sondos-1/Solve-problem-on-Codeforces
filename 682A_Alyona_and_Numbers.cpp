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

int main()
{
    IOS
ll n,m, ans=0;
cin >>n>>m;
for (ll i=1; i<=n; i++){
            ans+=(m+i%5)/5;
}

cout<< ans<<tt;
 
 return 0;


}


// https://codeforces.com/contest/682/problem/A
// Idea: for each x, count y in [1..m] with y ≡ -x (mod 5) => (m + x%5)/5
// Time: O(n), answer needs long long