#include <iostream>

int globalArray[] = {1, 2, 3, 4, 5}; 
char globalCharArray[] = {'h', 'e', 'l', 'l', 'o'}; 

int sumGlobalArray() {
    int sum = 0;
    for (int i = 0; i < sizeof(globalArray) / sizeof(globalArray[0]); i++) {
        sum += globalArray[i];
    }
    return sum;
}

void printGlobalCharArray() {
    for (int i = 0; i < sizeof(globalCharArray) / sizeof(globalCharArray[0]); i++) {
        std::cout << globalCharArray[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int sum = sumGlobalArray();
    std::cout << "Sum of global array: " << sum << std::endl;
    printGlobalCharArray();
    return 0;
}
