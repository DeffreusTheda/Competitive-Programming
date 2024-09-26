#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pf push_front
#define ob pop_back
#define of pop_front
#define in insert

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n, x; cin >> n >> x;
  if (n == 1) {
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }

  vector<ll> v(n);
  unordered_map<ll, ll> m;

  for (ll i = 0; i < n; ++i) {
    cin >> v[i];
    if (v[i] >= x) {
      continue;
    }
    auto it = m.find(x - v[i]);
    if (it != m.end()) {
      cout << it->second + 1 << " " << i + 1 << endl;
      return 0;
    }

    m[v[i]] = i;
  }
  cout << "IMPOSSIBLE" << endl;
  
  return 0;
}
