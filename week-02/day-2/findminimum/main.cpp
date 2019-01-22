#include <iostream>

int len(int arr[]);
int* findmin(int arr[],int lenght);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    std::cout << findmin(numbers, len(numbers)) << std::endl;
    return 0;
}

int len(int arr[]) {
    int x;
    x = sizeof(arr)/ sizeof(arr[0]);
    return x;
}
int* findmin(int arr[],int lenght) {
    int* min = arr;
    for (int i = 1; i < lenght; i++) {
        if (*min > arr[i]) {
            min = arr+i;
        }
    }
    return min;
}