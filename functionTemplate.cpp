// Function Templates in CPP

#include <iostream>
template <typename T> // from T onwardds

T max (T x, T y) {
    return x > y ? x : y;
}
template <typename T>
T min (T x, T y) {
    return x < y ? x : y;
}

template <typename T, typename U>
auto max2 (T x, U y) {
    return x > y ? x : y; // this fn can take two different datatypes
}

// T can be any datatype


int main() {

    std::cout << max('a', 'b') << std::endl;
    std::cout << max2(2, 'b') << std::endl;

    return 0;
}