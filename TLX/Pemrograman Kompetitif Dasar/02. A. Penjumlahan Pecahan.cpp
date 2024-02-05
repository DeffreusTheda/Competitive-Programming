#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define FF first
#define SS second
#define PB push_back
#define POP pop_back
#define IN(a) insert(a)
#define ER(a) erase(a)
#define CNT(a) count(a)
#define MP make_pair
#define uf uint_fast64_t
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define EACH(x,a) for (auto x : a)
#define SQ(a) ((a)*(a))
#define f int_fast64_t
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define double long double
#define BUG(...) __f (#__VA_ARGS__, __VA_ARGS__)

typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<vi> vvi;
typedef deque<ll> di;
typedef set<ll> si;
typedef set<string> ss;
typedef map<string, ll> msi;

// sort(vi.begin(), vi.end())
// reverse(vi.begin(), vi.end())

ll A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;

ll gcd(ll a, ll b) {
  if (a == 0 || a == b || a % b == 0) {
    return b;
  }
  if (b == 0 || b % a == 0) {
    return a;
  }
  if (a > b) {
    return gcd(a-b, b);
  }
  return gcd(a, b-a);
}

void solve() {
  cin >> A >> B >> C >> D;
  ll b = B, d = D;
  A *= d;
  B *= d;
  C *= b;
  D *= b;
  E = A + C;
  F = D;
  ll tmp = gcd(E, F);
  E /= tmp;
  F /= tmp;
  cout << E << " " << F;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  T = 1;
//  cin >> T;
  FOR(t,0,T) {
    solve();
  }

  return 0;
}