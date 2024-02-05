#include <iostream>

short N;
std::string s;

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> s;
        if(s.length() > 10) {
            std::cout << s[0] << s.length()-2 << s[s.length()-1] << std::endl;
        } else std::cout << s << std::endl;
    }

    return 0;
}
