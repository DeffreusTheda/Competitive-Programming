#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define FOR(a,b) for (int i = a; a < b; ++a)

string s, r;

char myToLower(char c) {
    char res;
    if (c >= 65 && c <= 90) {
        res = char(tolower(c));
    } else {
        res = c;
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    string vowels = "auioey";
    cin >> s;
    for (char c : s) {
        bool isVowel = false;
        for (char x : vowels) {
            if (myToLower(c) == x) {
                isVowel = true;
                break;
            }
        }
        if (!isVowel) {
            r.append(".");
            r += myToLower(c);
        }
    }
    cout << r;

    return 0;
}
