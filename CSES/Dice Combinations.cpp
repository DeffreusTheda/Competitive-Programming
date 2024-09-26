#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pf push_front
#define ob pop_back
#define of pop_front
#define in insert

ll dp(ll n) {
  ll mod = 1e9 + 7;
  ll dp[n + 1] = {};
  dp[0] = 1;
  for (ll i = 1; i <= n; ++i) {
    for (ll j = 1; j <= 6 && j <= i; ++j) {
      dp[i] = (dp[i] + dp[i - j]) % mod;
    }
  }
  return dp[n];
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n; cin >> n;
  cout << dp(n) << endl;
  
  return 0;
}
