#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define PB(a) push_back(a)
#define POP(a) pop_back(a)
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

string solve() {
  string target;
  cin >> N >> M >> target;
  vector< pair< ull, pair< ull, pair < ull, string > > > > data;
  FOR(n,0,N) {
    string nama;
    ull s1, s2, s3;
    cin >> nama >> s1 >> s2 >> s3;
    data.PB(make_pair(s3, make_pair(s2, make_pair(s1, nama))));
  }
  sort(data.rbegin(), data.rend());
  FOR(m,0,M) {
    if (data[m].second.second.second == target) {
      return "YA";
    }
  }
  return "TIDAK";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  T = 1;
  cin >> T;
  FOR(t,0,T) {
    cout << solve() << endl;
  }

  return 0;
}