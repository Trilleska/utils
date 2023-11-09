/*  FC.CPP
    Part of the Trilleska Software Suite
    (c) 2023 by Maxi [MIT LICENSE]
    ---
    "This program copies files."

    ***Usage directions can be found at
    section 4 of the Trilleska docs.***
*/
#include <iostream>
#include <filesystem>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cout << "insufficient arguments :3\ntry fc [file] [destination]\n";
        return 1;
    }

    std::filesystem::copy(argv[1], argv[2]);
    return 0;
}
