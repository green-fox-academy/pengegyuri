#include <iostream>
#include <string>

//int* funiq(int numbers[], int len) {

//}

int main(int argc, char* args[]) {
    //int* uniqenum;
    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    //std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`

    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int len, ulen;
    len = sizeof(numbers) / sizeof(numbers[0]);
    ulen = len;
    std::cout << len << std::endl;
    bool ifunique[len];
    for (int i = len-1; i >= 0; i--) {
        ifunique[i] = true;
        //std::cout << ifunique[i] << " ";
        for (int j = i - 1; j >= 0; j--) {
            if (numbers[i] == numbers[j]) {
                ifunique[i] = false;
                ulen -= 1;
            }
        }
    }
    int uniquenum[ulen];
    //std::cout << ulen << std::endl;
    //for (int i = 0; i < len; i++) {
    //    std::cout << ifunique[i] << " ";
    //int uniquenum[ulen];
    int q = 0;
    for (int i = 0; i < ulen; i++) {
        for (int j = i + q; j < len; j++) {
            if (ifunique[j]) {
                uniquenum[i] = numbers[j];
                break;
            } else q++;
        }
    std::cout << uniquenum[i] << " ";
    }
    //std::cout << funiq(numbers, len)[4];
    return 0;
}
