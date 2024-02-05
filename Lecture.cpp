#include <bits/stdc++.h>
using namespace std;

#define ll long long
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

typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<vi> vvi;
typedef deque<ll> di;
typedef set<ll> si;
typedef set<string> ss;
typedef map<string, ll> msi;
typedef bitset<10> bit;

// sort(vi.begin(), vi.end())
// reverse(vi.begin(), vi.end())

ll A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;

unordered_map<string, string> func(string tmp1, string tmp2, unordered_map<string, string> vocab) {
  string res = tmp1.length() <= tmp2.length() ? tmp1 : tmp2;
  pair<string, string> word1 = make_pair(tmp1, res);
  pair<string, string> word2 = make_pair(tmp2, res);
  vocab.insert(word1);
  vocab.insert(word2);
  return vocab;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> N >> M;
  unordered_map<string, string> vocab;
  FOR(m,0,M) {
    string tmp1, tmp2; cin >> tmp1 >> tmp2;
    vocab = func(tmp1, tmp2, vocab);
  }
  FOR(n,0,N) {
    string tmp; cin >> tmp;
    cout << vocab[tmp] << " ";
  }

  return 0;
}