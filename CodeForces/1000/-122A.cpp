/***********************************************************************************************************************
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation
 contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given
 number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the
 quotes).
***********************************************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define EACH(e,a) for (auto e : a)
#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define BR break;

string s;
bool four = false, seven = false;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cin >> s;
    EACH(c,s) {
        if (c == '4') {
            four = true;
            if (seven)
                BR
        }
        if (c == '7') {
            seven = true;
            if (four)
                BR
        }
    }
    if (four && seven)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
