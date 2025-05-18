#include "Log.hpp"
#include <iostream>

void Log(const char* message) {
    std::cout << message;
}

void InitLog() {
    Log("Initing Log");
}
