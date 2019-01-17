#include <iostream>
#include <string>

void factorio(int x, int& y) {
    y = 1;
    for (int i = 1; i <= x; i++) {
        y *= i;
    }

}

int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.
    int a = 3;
    int y = 99;
    factorio(a, y);
    std::cout << y;
    return 0;
}