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
  ll res = -1000000005, curmax = -1000000005;
  while(n--) {
    ll x; cin >> x;
    curmax = max(x, curmax + x);
    res = max(res, curmax);
  }
  cout << res << endl;
  
  return 0;
}
