#include <stdio.h>

int main() {
    double num;
    printf("Pass a num: ");
    scanf("%ld", &num);
    printf("Your num is: %ld\n", num);
    printf("%ld", num);
    char string1[] = "Why not";
    char string2[] = "I like my cheese drippy";
    // string1 = string2;
    printf("%s, %s", string2, string1);
}