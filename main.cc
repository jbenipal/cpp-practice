#include <iostream>
#include <vector>
#include <string>
#include "neetcode/Palindrome.cc"
#include "neetcode/TwoIntegerSum.cc"
#include "neetcode/ThreeIntegerSum.cc"

template <class T>
void printVector(std::vector<T>& vec) {
    for (auto c: vec) {
        std::cout << c << " ";
    }
}

void testPallindrome() {
    Palindrome p;
    std::cout << std::boolalpha << p.isPalindrome("Was it a car or a cat I saw") << std::endl;
    std::cout << std::boolalpha << p.isPalindrome("0P") << std::endl;
}

void testTwoIntegerSum() {
    TwoIntegerSum t;
    std::vector<int> numbers = {2,3,4};
    std::vector<int> result = t.twoSum(numbers, 6);
    printVector(result);
}

void testThreeIntegerSum() {
    ThreeIntegerSum t;
    std::vector<int> numbers {-1,0,1,2,-1,-4};
    auto result = t.threeSum(numbers);
    for (std::vector<int> res: result) {
        printVector(res);
        std::cout << std::endl;
    }

}

int main() {
    //testPallindrome();
    //testTwoIntegerSum();  
    testThreeIntegerSum();
}
