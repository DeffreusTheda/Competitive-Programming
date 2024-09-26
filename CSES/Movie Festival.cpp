#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pf push_front
#define ob pop_back
#define of pop_front

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n; cin >> n;
  vector<pair<ll,ll>> v;
  while (n--) {
    pair<ll, ll> p;
    cin >> p.second >> p.first;
    v.pb(p);
  }

  sort(v.begin(), v.begin()+v.size());
  
  ll cnt = 0, last = 0;
  for (pair<ll, ll> p : v) {
    if (p.second >= last) {
      ++cnt;
      last = p.first;
    }
  }
  cout << cnt << endl;
  
  return 0;
}
