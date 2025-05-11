#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;
using std::cout, std::cin, std::endl, std::string;


// int main() {
//     int n_array[] = {1,45,2,7};
//     int * ptr = n_array;
//     for (int i = *n_array; i < sizeof(n_array)/sizeof(int); i++) {
//         cout << i << '\n';
//     }
//     return 0;
// }



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
            for (int j = 0; j < sizeof(nums)/sizeof(int); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {}; 
    }
};

int main() {
    vector<int> nums = {3,2,4};
    int target = 6;
    Solution sum_of_two;
    vector<int> ans = sum_of_two.twoSum(nums, target);
    cout << '[';
    for (int & element : ans) {
        cout << element << ',';
    }
    cout << ']';
}
