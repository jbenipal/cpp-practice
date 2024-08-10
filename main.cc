#include <iostream>
#include <vector>
#include <string>
#include "neetcode/Palindrome.cc"
#include "neetcode/TwoIntegerSum.cc"

void testPallindrome() {
    Palindrome p;
    std::cout << std::boolalpha << p.isPalindrome("Was it a car or a cat I saw") << std::endl;
    std::cout << std::boolalpha << p.isPalindrome("0P") << std::endl;
}

void testTwoIntegerSum() {
    TwoIntegerSum t;
    std::vector<int> numbers = {2,3,4};
    std::vector<int> result = t.twoSum(numbers, 6);
    for (auto c: result) {
        std::cout << c << " ";
    }
}

int main() {
    //testPallindrome();
    //testTwoIntegerSum();  
    std::cout << "Size of int " << sizeof(int) << std::endl;
    std::cout << "Size of float " << sizeof(float) << std::endl;
    std::cout << "Size of long " << sizeof(long) << std::endl;
}
