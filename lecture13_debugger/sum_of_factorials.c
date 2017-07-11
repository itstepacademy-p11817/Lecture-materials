#include <stdio.h>
#include <stdint.h>

// 1! + 2! + 3! + 4! + ... + 9!
int main() {
    uint64_t sum = 0;
    const uint8_t limit = 10;
    for (uint8_t num = 1; num < limit; num++) {
        uint64_t fact = 1;
        for (uint8_t mult = 2; mult <= num; mult++) {
            fact *= mult;
        }
        sum += fact;
    }
    printf("Result %llu\n", sum);
    return 0;
}