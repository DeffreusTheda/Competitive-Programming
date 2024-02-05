#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    printf("std::uint_fast8_t -> %d - %d\n", 0, UINT_FAST8_MAX);
    printf("std::int_fast8_t -> %d - %d\n", INT_FAST8_MIN, INT_FAST8_MAX);
    printf("std::uint_fast16_t -> %d - %d\n", 0, UINT_FAST16_MAX);
    printf("std::int_fast16_t -> %d - %d\n", INT_FAST16_MIN, INT_FAST16_MAX);
    printf("std::uint_fast32_t -> %d - ", 0); std::cout<<UINT_FAST32_MAX<<std::endl;
    printf("std::int_fast32_t -> %i - %i\n", INT_FAST32_MIN, INT_FAST32_MAX);
    printf("std::uint_fast64_t -> %d - %lli\n", 0, UINT_FAST64_MAX);
    printf("std::int_fast64_t -> %lld - %lld\n", INT_FAST64_MIN, INT_FAST64_MAX);

    printf("\nforlooptest: \n");
    std::uint8_t i=0;
    for(; i<5; ++i)
        printf("%hhu\n", i);

    printf("\nEnter a negative number: ");
    long long l;
    scanf("%lld", &l);
    // Convert the absolute value to binary
    std::bitset<8> const bs = std::abs(l);
    std::bitset<8> const tr = ~std::abs(l);
    // Take the two's complement
    std::bitset<8> const tc = ~std::abs(l+1);

    std::cout << "\nDecimal: " << l << std::endl;
    std::cout << "Binary (absolute value)   : " << bs << std::endl;
    std::cout << "Binary (transition)       : " << tr << std::endl;
    std::cout << "Binary (two's complement) : " << tc << std::endl;

    printf("\nConverting back...");
    printf("\n-> %s (%lld)", tc.to_string().c_str(), l);
    std::bitset<8> const q = static_cast<int>(tc.to_ulong())-1;
    printf("\n-> %s (%lld)", q.to_string().c_str(), l-1);
    std::bitset<8> const w = ~q;
    printf("\n-> %s (%lld)\n", w.to_string().c_str(), std::abs(l));

    printf("\nchar 'a' -> %d", static_cast<int>('a'));
    printf("\nchar 'z' -> %d", static_cast<int>('z'));
    printf("\nchar 'A' -> %d", static_cast<int>('A'));
    printf("\nchar 'Z' -> %d", static_cast<int>('Z'));

    return 0;
}
