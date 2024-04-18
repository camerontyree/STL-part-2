/*
Cameron Tyree
CIS 1202 101
April 18, 2024
*/

#include "personalLibrary.h"

template <typename T>
T half(T value) {
   
    if (std::is_floating_point<T>::value) {
        return value / static_cast<T>(2);
    }

    else if (std::is_integral<T>::value) {
        return (value + static_cast<T>(1) / static_cast<T>(2));
    }
}

int main() {

    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << "Half os 7 is: " << half(a) << endl;
    cout << "Half os 5 is: " << half(b) << endl;
    cout << "Half os 3 is: " << half(c) << endl;

    endProgram();
}