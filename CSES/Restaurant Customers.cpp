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
  vector<pair<ll, bool>> v;
  while (n--) {
    ll a, b; cin >> a >> b;
    v.pb({a, true});
    v.pb({b, false});
  }
  sort(v.begin(), v.begin()+v.size());

  ll cnt = 0, res = 0;
  for (pair<ll, bool> c : v) {
    if (c.second) {
      ++cnt;
      res = max(res, cnt);
      continue;
    }
    --cnt;
  }
  cout << res << endl;
  
  return 0;
}
