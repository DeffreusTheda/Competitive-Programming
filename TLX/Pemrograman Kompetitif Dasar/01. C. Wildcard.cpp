#include <bits/stdc++.h>
#include <string.h>
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

void solve() {
  string input, pre, suf;
  cin >> input >> N;
  bool afterWild = false;
  ll p, s;

  for (auto c : input) {
    if (c == '*') {
      afterWild = true;
    } else if (!afterWild) {
      pre += c;
      ++p;
    } else {
      suf += c;
      ++s;
    }
  }

  FOR(n,0,N) {
    bool valid = true;
    string tmp; cin >> tmp;

    for (int i = 0; i < sizeof(pre); ++i) {
      if (tmp[i] != input[i]) {
        valid = false;
        break;
      }
    }

    if (valid) {
      for (int i = 0; i < sizeof(suf); ++i) {
        if (tmp[sizeof(tmp) - i - 1] != input[sizeof(input) - i - 1]) {
          valid = false;
          break;
        }
      }
    }

    if (valid) {
      cout << tmp;
    }
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