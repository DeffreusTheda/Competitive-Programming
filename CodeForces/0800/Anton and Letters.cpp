#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char tmp[1001];
    cin.getline(tmp, 1001);
    string s(tmp);
    size_t t = 0;
    s.erase(0, 1);
    s.erase(s.length()-1, 1);
    while((t = s.find(',', t)) != string::npos) s.erase(t, 1);
    string raw;
    for (char c : s) if (!std::isspace(c)) raw += c;
    bool b[26];
    for (bool &x : b) x=false;
    ll count=0;
    for (char x : raw) b[tolower(x)-97] = true;
    for (bool x : b) if(x==true) ++count;
    cout<<count;

    return 0;
}