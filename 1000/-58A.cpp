#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define FOR(i,a,b) for (int i = a; i < b; ++i)

string s;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cin >> s;
    bool isHello = false;
    FOR(i,0,s.length()) {
        if (s[i] == 'h') {
            ++i;
            FOR(j, i, s.length()) {
                if (s[j] == 'e') {
                    ++j;
                    FOR(z, j, s.length()) {
                        if (s[z] == 'l') {
                            ++z;
                            FOR(x, z, s.length()) {
                                if (s[x] == 'l') {
                                    ++x;
                                    FOR(y, x, s.length()) {
                                        if (s[y] == 'o') {
                                            isHello = true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (isHello) cout << "YES";
    else cout << "NO";

    return 0;
}
