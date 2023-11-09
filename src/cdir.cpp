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
    if (arg_check(argc, 1) == false) {
        std::cout << "[FATAL] most likely no directory name supplied :3\n";
        return 1;
    }
    std::string dir_arg = argv[1];
    if (dir_arg == "-r") {
        // remove empty directory if -r option supplied
        try {
            std::filesystem::remove(argv[2]);
        } catch (std::filesystem::filesystem_error const& ex) {
            std::cerr << "error removing directory '" << argv[2] << "'\n";
            std::cerr << "what(): " << ex.what() << "\n";
            return 1;
        }
        return 0;
    } else if (dir_arg == "-f") {
        try {
            std::filesystem::remove_all(argv[2]);
        } catch (std::filesystem::filesystem_error const& ex) {
            std::cerr << "error removing directory '" << argv[2] << "'\n";
            std::cerr << "what(): " << ex.what() << "\n";
            return 1;
        }
        return 0;
    }

    std::filesystem::create_directory(dir_arg);
    return 0;
}
