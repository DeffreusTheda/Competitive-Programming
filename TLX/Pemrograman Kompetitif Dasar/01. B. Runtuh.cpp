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
#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define RFOR(i,a,b) for (int i = a; i >= b; --i)
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

void solve() {
  cin >> N >> M;
  vector<vector<char> > board[N][M];
  FOR(n,0,N) {
    char tmp;
    cin >> tmp;
    FOR(m,0,M) {
      board[n].
    }
  }

  // Clear filed line
  RFOR(n,N,0) {
    bool clear = true;
    FOR(m,0,M) {
      if (board[n][m] = 0) {
        clear = false;
        break;
      }
    }
    if (clear) {
      FOR(m,0,M) {
        board[n][m] = 0;
//        fall(n-1, m, board);
      }
    }
  }
}

void fall(ll row, ll col) {
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