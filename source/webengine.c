#include "webengine.h"
#include <stdio.h>

int main() {
    printf("Hello, World %d\n", add(10, 20));
    return 0;
}

int add(x, y) {
    return x + y;
}
