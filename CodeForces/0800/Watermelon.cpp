#include <iostream>

short N;

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

    std::cin >> N;
    if (N==2 || N%2==1) std::cout << "NO";
    else std::cout << "YES";

    return 0;
}
