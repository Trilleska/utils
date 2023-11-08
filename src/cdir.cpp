/*  CDIR.CPP
    Part of the Trilleska Software Suite
    (c) 2023 by Maxi [MIT LICENSE]
    ---
    "This program serves as an alternative to mkdir
    and creates/removes directories."
*/
#include <iostream>
#include <filesystem>
#include "lib/trilutil.h" // no-arg handling

int main(int argc, char *argv[]) { 
  if (arg_check(argc, 2) == false) {
        std::cout << "[FATAL] no directory name supplied :3\n";
        return 1;
    }
    std::filesystem::create_directory(argv[1]);

    return 0;
}
