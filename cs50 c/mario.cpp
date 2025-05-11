#include <iostream>
#include <stdio.h>
int main() {
    int max_blocks_line = 4;
    for (int i = 1; i < (max_blocks_line+1); i++) {
        // std::cout << i << max_blocks_line << '\n';
        // std::cout << "fasd";
        std::cout << std::string((max_blocks_line-i), ' ') << std::string(i, '#') << (' ') <<  std::string(i, '#') << std::string((max_blocks_line-i), ' ') << '\n';
    }
}
