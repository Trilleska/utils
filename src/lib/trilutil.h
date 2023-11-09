#include <iostream>

bool arg_check(int argc, int bad) {
    if (argc != bad) {
        return true;
    }
    return false;
}