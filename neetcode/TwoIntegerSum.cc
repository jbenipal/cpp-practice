#include <iostream>
#include <vector>


class TwoIntegerSum {
    public:
        std::vector<int> twoSum(std::vector<int>& numbers, int target) {
            for (int i=0, j=numbers.size()-1; i<j;) {
                int currSum = numbers[i] + numbers[j];
                if (currSum == target) {
                    return std::vector<int> {i+1,j+1};
                } else if (currSum > target) {
                    --j;
                } else {
                    ++i;
                }
            }
            return std::vector<int>{};
        }
};