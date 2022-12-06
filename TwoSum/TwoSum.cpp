#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> ret;
            int size = nums.size();
            int diff;
            unordered_map<int,int>m;
            for(int i = 0; i < size; i++) {
                diff = target - nums[i];

                if(m.find(diff) != m.end() && m.find(diff)->second != i) {
                    ret.push_back(i);
                    ret.push_back(m.find(diff)->second);
                    return ret;
                }
                m[nums[i]] = i;
            }
            return ret;
        }
};

int main() {
    vector<int> nums;
    Solution mySolution;

    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    vector<int> ret = mySolution.twoSum(nums, 9);

    for (auto element : ret) {
        cout << element << " ";
    }
}