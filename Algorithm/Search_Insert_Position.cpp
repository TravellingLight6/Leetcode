#include <vector>
using namespace std;

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int i = 0, len = nums.size();
    while (i < len && (nums[i] < target))
      i++;
    return i;
  }
};
