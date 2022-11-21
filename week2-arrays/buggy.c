#include <stdio.h>

int get_negative_int(void);

int main(void) {
    int i = get_negative_int();
    printf("%i\n", i);
}

int get_negative_int(void) {
    int n;
    do {
        printf("Negative Integer: ");
        scanf("%i\n", &n);
    } while (n < 0);
    return n;
}
