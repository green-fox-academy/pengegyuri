#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> putSaturn(const std::vector<std::string>& planets)
{
    std::vector<std::string> c_planets;
    for (int i = 0; i < planets.size(); i++) {
        c_planets.push_back(planets[i]);
    }
    c_planets.insert(c_planets.end() - 2, "Saturn");
    return c_planets;
}

int main(int argc, char* args[])
{
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune
    int s = putSaturn(planets).size();
    for(int i = 0; i < s; ++i) {
        std::cout << putSaturn(planets)[i] << " ";
    }
    return 0;
}