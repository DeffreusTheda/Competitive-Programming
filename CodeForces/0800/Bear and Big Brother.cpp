#include <iostream>
#include <vector>

short N;

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

    std::uint_fast16_t a, b, c=0;
    scanf("%hu %hu", &a, &b);
    while(a <= b) {
        a*=3;
        b*=2;
        ++c;
    }
    printf("%hu", c);

    return 0;
}
