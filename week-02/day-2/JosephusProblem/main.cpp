#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* args[])
{
    std::cout << "How many members does the suiced group has? ";
    int beginnumber;
    std::cin >> beginnumber;
    std::vector<int> stillalive;
    for (int i = 1; i <= beginnumber; i++) {
        stillalive.push_back(i);
    }
    while (stillalive.size() > 1) {
        bool oddoreven = (stillalive.size() % 2 == 0);
        for (int i = 1; i < stillalive.size(); i++) {
            stillalive.erase(stillalive.begin() + i);
        }
        if (!oddoreven) {
            stillalive.erase(stillalive.begin());
        }
        /*for (int i = 0; i < stillalive.size(); i++) {
            std::cout << stillalive[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "***" << std::endl;*/
    }
    std::cout << "The last man standing is number " << stillalive[0];
    return 0;
}

