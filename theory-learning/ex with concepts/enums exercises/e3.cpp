#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <type_traits>
using std::cout, std::cin, std::endl, std::string;

enum class ErrorCode{
    SUCCESS = 0, NOT_FOUND = 404, SERVER_ERROR = 500
};

int main() {
    std::underlying_type_t<ErrorCode>::(SUCCESS);
    return 0;
}

