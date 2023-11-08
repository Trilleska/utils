#include <iostream>

bool arg_check(int argc, int expected) {
    if (argc == expected) {
        return true;
    }
    return false;
}