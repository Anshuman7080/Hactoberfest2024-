#include <unordered_map>
#include <vector>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        std::unordered_map<int, int> count;
        int res = 0;
        for (int num : nums) {
            res += count[num]++;
        }
        return res;
    }
};
