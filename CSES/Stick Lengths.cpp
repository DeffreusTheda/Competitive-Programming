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
  ll res = 0;
  nth_element(v.begin(), v.begin()+n/2, v.end());
  ll med = v[n/2];
  for (ll i = 0; i < n; ++i) {
    res += abs(v[i] - med);
  }
  cout << res << endl;
  
  return 0;
}
