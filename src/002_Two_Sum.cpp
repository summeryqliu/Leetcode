#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        vector<int> index;
        index.clear();
        for (i = 0; i < nums.size(); ++i) {
            for (j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target)
                {
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
            }
        }
        //no answer
        throw - 1;
    }
};

class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        vector<int> result;
        map<int, int> map_i_num;
        map<int, int>::iterator miter1;
        result.clear();
        for (i = 0; i < nums.size(); ++i) {
            if ((miter1 = map_i_num.find(target - nums[i])) != map_i_num.end())
            {
                result.push_back(miter1->second);
                result.push_back(i);
                return result;
            }
            map_i_num.insert(pair<int, int>(nums[i], i));
        }
        //no answer
        throw - 1;
    }
};

int main() {
    int t[3] = {3, 2, 4};
    vector<int> vt(t, t + 3);
    vector<int> test_result;
    int sum;

    cin >> sum ;
    Solution1 s;
    test_result = s.twoSum(vt, sum);

    for (int i = 0; i < test_result.size(); ++i)
    {
        cout << test_result[i] << "\t" << endl;
    }
    return 0;
}
