

#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `t`
    //    with the following content: `[1, 2, 3, 4, 5]`
    // - Increment the third element
    // - Print the third element
    int t[5];
    for (int i = 0; i < 5; i++) {
        t[i] = i + 1;
    }
    t[2] += 1;
    std::cout << t[2];

    return 0;
}