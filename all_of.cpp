#include <iostream>     // std::cout
#include <algorithm>    // std::all_of
#include <array>        // std::array

int main() {
    std::array<int, 8> foo{};

    std::cout << "Enter 8 numbers (separated by a space): \n";
    for (int i = 0; i < foo.size(); ++i) {
        std::cin >> foo[i];
    }

    if (std::all_of(foo.begin(), foo.end(), [](int i) {return i % 2; })) // Checking if all elements of the vector "foo" are odd
        std::cout << "Great! The check was successful!\n";

    else {
        std::cout << "An even value is present. Check failed!\n";
    }

    return 0;
}