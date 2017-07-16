#include "factorial.h"

long factorial(long num) {
    if (num == 1 || num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}
