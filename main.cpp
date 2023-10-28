#include <iostream>

int main() {
    int* list = new int[10];
    int* ptr = list;

    for(int i = 0; i < 10; i++) {
        std::cin >> *(ptr+i);
    }

    int x, y;
    std::cin >> x >> y;


    for(int i = 0; i < 10; i++) {
        std::cout << *(ptr+i) << " ";
    }

    ptr = nullptr;
    delete[] list;
    return 0;
}

//1
//2
//3 > 5
//4
//5 > 3
//6
//7
//8
//9
//10
//2
//4

//1 2 5 4 3 6 7 8 9 10