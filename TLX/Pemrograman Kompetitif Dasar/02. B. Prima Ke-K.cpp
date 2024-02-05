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

vector<ll> sieveOfAtkin(ll limit) {
  bool sieve[limit+1];
  for (int i = 0; i <= limit; ++i) {
    sieve[i] = false;
  }
  if (limit > 2) {
    sieve[2] = true;
  }
  if (limit > 3) {
    sieve[3] = true;
  }
  for (int x = 1; x * x <= limit; ++x) {
    for (int y = 1; y * y <= limit; ++y) {
      int n = (4 * x * x) + (y * y);
      if (n <= limit && (n % 12 == 1 || n % 12 == 5)) {
        sieve[n] ^= true;
      }
      n = (3 * x * x) + (y * y);
      if (n <= limit && n % 12 == 7) {
        sieve[n] ^= true;
      }
      n = (3 * x * x) + (y * y);
      if (x > y && n <= limit && n % 12 == 11) {
        sieve[n] ^= true;
      }
    }
  }
  for (int r = 5; r * r <= limit; ++r) {
    if (sieve[r]) {
      for (int i = r * r; i < limit; i += r * r) {
        sieve[i] = false;
      }
    }
  }
  vi res;
  for (int a = 2; a <= limit; ++a) {
    if (sieve[a]) {
      res.PB(a);
    }
  }
  return res;
}

vi sieveOfErathosthenes(ll limit) {
  bool prime[limit+1];
  for (ll i = 0; i <= limit; ++i) {
    prime[i] = true;
  }
  ll p = 2;
  while (p * p <= limit) {
    if (prime[p]) {
      for (ll i = p * p; i <= limit; i += p) {
        prime[i] = false;
      }
    }
    p += 1;
  }
  vi res;
  for (ll p = 2; p < limit; ++p) {
    if (prime[p]) {
      res.PB(p);
    }
  }
  return res;
}

void solve() {
  cin >> N;
  vi request;
  FOR(n,0,N) {
    ll tmp; 
    cin >> tmp;
    request.PB(tmp);
  }
  vector<ll> primeSet = sieveOfErathosthenes(999999);
  EACH(x, request) {
    cout << primeSet[x-1] << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
//  clock_t startTime = clock();
  T = 1;

//  cin >> T;
  FOR(t,0,T) {
    solve();
  }

//  clock_t endTime = clock(); cout << endl << "Run Time : " << endTime - startTime << endl;
  return 0;
}
