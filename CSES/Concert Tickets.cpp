#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pf push_front
#define ob pop_back
#define of pop_front

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n, m; cin >> n >> m;
  multiset<ll> h;
  while (n--) {
    ll tmp; cin >> tmp;
    h.insert(tmp);
  }
  while (m--) {
    ll tmp; cin >> tmp;
    auto ub = h.upper_bound(tmp);
    if (ub == h.begin()) {
      cout << "-1" << endl;
      continue;
    }
    --ub;
    cout << *ub << endl;
    h.erase(ub);
  }
  
  return 0;
}
