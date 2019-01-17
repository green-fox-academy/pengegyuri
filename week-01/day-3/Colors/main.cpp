
#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create a two dimensional array
    //   which can contain the different shades of specified colors
    // - In `colors[0]` store the shades of green:
    //   `"lime", "forest green", "olive", "pale green", "spring green"`
    // - In `colors[1]` store the shades of red:
    //   `"orange red", "red", "tomato"`
    // - In `colors[2]` store the shades of pink:
    //   `"orchid", "violet", "pink", "hot pink"`
    std::string * colors[3];
    std::string green[5] = {"lime", "forest green", "olive", "pale green", "spring green"};
    std::string red[3] = {"orange red", "red", "tomato"};
    std::string pink[4] = {"orchid", "violet", "pink", "hot pink"};
    colors[0] = green;
    colors[1] = red;
    colors[2] = pink;

    return 0;
}