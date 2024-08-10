#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

class ThreeIntegerSum {
    public:
        std::vector<std::vector<int>> threeSum(std::vector<int>& numbers) {
            std::sort(numbers.begin(), numbers.end());
            std::set<std::vector<int>> result;
            for (int i=0; i<numbers.size(); ++i) {
                int target = 0 - numbers[i];
                for (int j=i+1, k=numbers.size()-1; j<k;) {
                    int currSum = numbers[j] + numbers[k];
                    if (currSum == target) {
                        result.insert(std::vector<int>{numbers[i], numbers[j], numbers[k]});
                        --k;
                        ++j;
                    } else if (currSum > target) {
                        --k;
                    } else {
                        ++j;
                    }
                }
            }
            std::vector<std::vector<int>> output;
            for (auto res: result) {
                output.emplace_back(res);
            }
            return output;
        }
};