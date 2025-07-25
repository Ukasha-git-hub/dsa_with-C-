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
///// home work 
int linear(vector<int> n, int target){
    for(int val : n ){
        if (val == target){
        
            return val;
        }

    }
    return -1;
}
void reverseVector(vector<int>& numss){
    int val1 = 0;
    int valLast = numss.size() -1;
    while(val1 <valLast){
        swap(numss[val1],numss[valLast]);
         val1++;
         valLast--;
    }
}
int main()
{
     vector<int> numss = {5, 2, 7,3,1};
     reverseVector(numss);
     for(int val : numss){
        cout<< val << " ";
        
     }
     cout<<endl;

     vector<int> n = {5, 5, 6, 6, 6, 5,1};
      int target = 4;
      cout<< linear(n, target)<< endl << "line break"<< endl;
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
