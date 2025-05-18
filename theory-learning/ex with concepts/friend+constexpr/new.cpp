#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>


int main() {
    std::string str = "BSDF";
    std::cout << str << '\n';
    // Dynamically allocate memory for the initial string "Alt"
    char *some_str = malloc(4 * sizeof(char)); // "Alt" + null terminator
    if (some_str == NULL) { // Always check if malloc was successful
        printf("Memory allocation failed!\n");
        return 1;  // Exit if malloc fails
    }
    
    strcpy(some_str, "Alt");  // Copy "Alt" into allocated memory
    
    // Allocate more memory to hold the concatenated string
    some_str = realloc(some_str, 9 * sizeof(char)); // Now we need "Alt F4" + null terminator
    
    if (some_str == NULL) { // Always check if realloc was successful
        printf("Memory reallocation failed!\n");
        return 1;  // Exit if realloc fails
    }

    strcat(some_str, " F4");  // Concatenate " F4" to "Alt"
    
    printf("%s\n", some_str);  // Output: Alt F4
    
    // Don't forget to free dynamically allocated memory
    free(some_str);
    
    return 0;
}
