#include <iostream>
#include <vector>
using namespace std;
/// leet  code 136 sungle number
int leetcodeee(vector<int> nums, int ans)
{

    for (int val : nums)
    {
        ans = ans ^ val;
    }
    return ans;
}
int main()
{
    vector<int> nums = {5, 5, 6, 6, 6, 5,1}; // if there is more than one unique nums it calculating the sum of all uniques nums and return  the final value
    int ans = 0;
    cout << "leetcode  " << leetcodeee(nums, ans) << endl;
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout << "size " << vec.size() << "\n"
         << "capacity:" << vec.capacity() << endl;
}
