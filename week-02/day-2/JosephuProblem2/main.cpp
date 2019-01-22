#include <iostream>

int whowillsurvive(int numberofidiots);

int main(int argc, char* args[])
{
    std::cout << "How many members does the suiced group has? ";
    int beginnumber;
    std::cin >> beginnumber;
    std::cout << "The last man standing is number " << whowillsurvive(beginnumber);
    return 0;
}

int whowillsurvive(int numberofidiots) {
    int thegroup[numberofidiots];
    for (int i = 0; i < numberofidiots; i++) {
        thegroup[i] = i + 1;
    }
    bool killer = false;
    int alive = numberofidiots;
    while (alive > 1) {
        for (int i = 0; i < numberofidiots; i++) {
            if (thegroup[i] != 0) {
                if (killer) {
                    thegroup[i] = 0;
                    alive -= 1;
                }
                killer = !killer;
            }
        }
    }
    for (int i = 0; i < numberofidiots; i++) {
        if (thegroup[i] != 0) return thegroup[i];
    }
}
