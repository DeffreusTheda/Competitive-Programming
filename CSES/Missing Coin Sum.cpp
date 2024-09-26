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

  ll n; cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  ll res = 1;
  for (ll c : v) {
    if (c > res) {
      break;
    }
    res += c;
  }
  cout << res << endl;
  
  return 0;
}
