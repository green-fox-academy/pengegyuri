#include <iostream>
#include <string>

    int main(int argc, char* args[]) {

        // - Create an array variable named `p1`
        //   with the following content: `[1, 2, 3]`
        // - Create an array variable named `p2`
        //   with the following content: `[4, 5]`
        // - Print if `p2` has more elements than `p1`
        int p1[3] = {1, 2, 3};
        int p2[2] = {4, 5};
        int nep1 = sizeof(p1) / sizeof(p1[0]);
        int nep2 = sizeof(p2) / sizeof(p2[0]);
        std::cout << (nep2 > nep1);
        return 0;
    }