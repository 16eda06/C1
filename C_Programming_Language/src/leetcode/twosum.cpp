#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> mymap;
        int i;
        for (i=0; i<nums.size(); i++) {
            if (mymap.find(target - nums[i]) != mymap.end()) {
                result.push_back(mymap[target-nums[i]]);
                result.push_back(i);
                break;
            }
            mymap[nums[i]] = i;
        }
        return result;
    }    
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q{1,2,3,4};
    vector<int> r = s.twoSum(q, 5);
    cout << r.front() << r.back() << endl;
    return 0;
}
