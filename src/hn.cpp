/*  HN.CPP
    Part of the Trilleska Software Suite
    (c) 2023 by Maxi [MIT LICENSE]
    ---
    "This program lets you change your system hostname"
*/
#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 2) { // if no hostname arg is given
        // threatening error message
        std::cout << "please supply a hostname :3\n";
        return 1; // return fail exit code
    }

    std::ofstream hostfile("/etc/hostname"); // open to file stream
    hostfile << argv[1] << "\n"; // output arg[1] (the hostname) to hostfile
    hostfile.close(); // close the hostfile
}
