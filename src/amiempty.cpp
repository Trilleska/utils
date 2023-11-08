/*  AMIEMPTY.CPP
    Part of the Trilleska Software Suite
    (c) 2023 by Maxi [MIT LICENSE]
    ---
    "This program tells you if a given directory is empty or not"
*/


#include <iostream>
#include <filesystem>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Not enough arguments given.\n";
        std::cout << "Expected folder path :(\n";
        return 1;
    }

    std::string folder = argv[1]; // set folder to argument 1

    int dirstat = std::filesystem::is_empty(folder);
    if (dirstat == 1) {
        std::cout << folder << " is empty.\n";
    } else {
        std::cout << folder << " is *not* empty.\n";
    }

    return 0;
}
