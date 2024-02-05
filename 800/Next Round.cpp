#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast8_t n, k;
    scanf("%hhu %hhu", &n, &k);
    std::vector<std::uint_fast8_t> a;
    a.reserve(n);
    for(size_t i = 0; i < n; i++) {
        std::uint_fast8_t val;
        scanf("%hhu", &val);
        a.emplace_back(val);
    }
    std::sort(a.begin(), a.end());
    std::uint_fast8_t res = 0;
    if(k <= n)
        for(const std::uint_fast8_t i : a)
            if(i >= a[a.size()-k] && i > 0)
                res++;
    printf("%hhu", res);

    return 0;
}
