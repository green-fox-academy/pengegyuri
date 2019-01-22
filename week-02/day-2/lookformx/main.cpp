#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    int len;
    std::cout << "How many numbers do you want to compare? ";
    std::cin >> len;
    int max = arr[0];
    int index = 0;
    int arr[len];
    for (int i = 0; i < len; i++) {
        std::cout << "Give me the " << i + 1 << ". number : ";
        std::cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    std::cout << "The biggest number is the " << index + 1 << ". one, " << "which is " << max << std::endl;
    std::cout << "This number lives at the memory address " << &arr[index] << std::endl;

    return 0;
}

