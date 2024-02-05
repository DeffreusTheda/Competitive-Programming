#include <iostream>
#include <vector>

short N;

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

    std::string s;
    std::cin>>s;
    std::vector<bool> b(26);
    std::uint_fast8_t c=0;
    for(char x : s) {
        if(!b[static_cast<int>(x)-97]) {
            b[static_cast<int>(x)-97] = true;
            ++c;
        }
    }
    c%2==0 ? printf("CHAT WITH HER!") : printf("IGNORE HIM!");

    return 0;
}
