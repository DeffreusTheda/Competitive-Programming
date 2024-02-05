#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

#define ll long long

ll n, cnt;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cin>>n;
    bitset<64> b(n);
    string s = b.to_string();
    for(char x : s)
        if(x=='1') ++cnt;
    cout<<cnt;

    return 0;
}
