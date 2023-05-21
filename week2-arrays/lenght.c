#include <stdio.h>
#include <string.h>


int main(void) {
    char name[16];

    printf("Name: ");
    scanf("%s", &name);

    int lenght = strlen(name);
    printf("%i\n", lenght);

} 


