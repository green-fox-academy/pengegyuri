#include <iostream>

int findnum(int arr[], int len, int num);

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0
    int numbers[5] = {1, 2, 3, 4, 5};
    int y = findnum(numbers, sizeof(numbers) / sizeof(numbers[0]), 3);
    std::cout << y;
    return 0;
}

int findnum(int* arr, int len, int num) {
    int x =0;
    for (int i = 0; i < len; i++) {
        if (num == *(arr + i)) x =i;
    }
    return x;
}