#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n, m, k; cin >> n >> m >> k;
  vector<ll> a;
  while (n--) {
    ll tmp; cin >> tmp;
    a.pb(tmp);
  }
  ll as = a.size();
  sort(a.begin(), a.begin()+a.size());
  vector<ll> b;
  while (m--) {
    ll tmp; cin >> tmp;
    b.pb(tmp);
  }
  ll bs = b.size();
  sort(b.begin(), b.begin()+b.size());
  ll i = 0, j = 0, cnt = 0;
  while (i < as && j < bs) {
    if (a[i] > b[j] + k) {
      ++j;
    } else if (a[i] < b[j] - k) {
      ++i;
    } else {
      ++i;
      ++j;
      ++cnt;
    }
  }
  cout << cnt;
  
  return 0;
}