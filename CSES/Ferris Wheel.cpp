#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pf push_front
#define ob pop_back
#define of pop_front

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n, x; cin >> n >> x;
  deque<ll> v;
  while (n--) {
    ll tmp; cin >> tmp;
    v.pb(tmp);
  }
  sort(v.begin(), v.begin()+v.size());
  ll f = 0, l = v.size()-1, cnt = 0;
  while (!v.empty()) {
    if (v.size() > 1 && v.front() + v.back() <= x) {
      v.of();
    }
    v.ob();
    ++cnt;
  }
  cout << cnt;
  
  return 0;
}
