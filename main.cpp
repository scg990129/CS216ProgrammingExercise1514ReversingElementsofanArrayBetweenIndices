#include <iostream>

void swap(int* intArray, int low, int high);

int main() {
    int length = 10;
    int* intArray = new int[length];
    int* ptr = intArray;

    for(int i = 0; i < 10; i++) {
        std::cin >> *(ptr+i);
    }

    int low, high;
    std::cin >> low >> high;
    swap(intArray, low, high);

    for(int i = 0; i < 10; i++) {
        std::cout << *(ptr+i) << " ";
    }

    ptr = nullptr;
    delete[] intArray;
    return 0;
}

void swap(int* intArray, int low, int high) {
//    if (low > high) {
//        swap(intArray, low, high);
//    }
    if (low > high){
        return;
    }
    else {
        int temp = *(intArray+low);
        *(intArray+low) = *(intArray+high);
        *(intArray+high) = temp;
        swap(intArray, low+1, high-1);
    }
}

//1
//2
//3 > 5
//4 > 4
//5 > 3
//6
//7
//8
//9
//10
//2
//4

//1 2 5 4 3 6 7 8 9 10

//1
//2
//3 > 10
//4 > 9
//5 > 8
//6 > 7
//7 > 6
//8 > 5
//9 > 4
//10 > 3
//2
//9