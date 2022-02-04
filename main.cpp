#include <iostream>

// length array
#define len 15

int main() {
    // X = 258
    int numbers[len] = {396, 836, 259, 487, 488,
                       823, 260, 746, 983, 444,
                       278, 8110, 488, 935, 233};

    for(int i=0; i<(len-1); i++)
        for(int j=(i+1); j<len; j++)
            if( numbers[i] == numbers[j] ) {
                std::cout << "Repeating number: " << numbers[i] << std::endl;
                return 0;
            }

    std::cout << "No repeating number." << std::endl;

    return 0;
}
