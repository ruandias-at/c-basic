#include <stdio.h>
int main() {
    int a = 0, b = 1;
    // E lógico (&&)
    printf("a && b: %d\n", a && b);
    // Ou lógico (||)
    printf("a || b: %d\n", a || b);
    // Negação lógica (!)
    printf("NOT a: %d\n", !a);
    printf("NOT b: %d\n", !b);
    return 0;
}