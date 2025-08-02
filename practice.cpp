#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
// void reverse(vector<int> &nums)
// {
//   int n = nums.size();
//   int max = INT_MIN;
//   int cs = 0;
//   for (int i = 0; i < n; i++)
//   {
//     int sum = 0;
//     for (int j = 0; j < n; j++)
//     {
//       int idx = (j + i) % n;
//       sum += nums[idx];
//       cout << sum << endl;
//     }
//   }
// }
/// rest taask
// int n (vector <int> x){
//   int xo = 0;
//   for(int i =0; i< x.size(); i++){
//     xo ^= x[i];
//   }
// return xo;
// }
// btute force
// int circular(vector<int> &num)
// {
//   int Max = INT_MIN;
//   int n = num.size();
//   for (int i = 0; i < n; i++)
//   {
//     int cs = 0;
//     for (int j = 0; j < n; j++)
//     {
//       cs += num[(i + j) % n];
//       Max = max(cs, Max);
//     }
//   }
//   return Max;
// }
// optimal
// int circular(vector<int> &nums)
// {
//   int maxS = INT_MIN;
//   int minS = INT_MAX;
//   int sum = 0;
//   int tem_maxSum = 0;
//   int tem_minSum = 0;
//   for (int i = 0; i < nums.size(); i++)
//   {
//     sum += nums[i];
//     tem_maxSum += nums[i];
//     maxS = max(maxS, tem_maxSum);
//     if (tem_maxSum < 0)
//     {
//       tem_maxSum = 0;
//     }
//     tem_minSum += nums[i];
//     minS = min(minS, tem_minSum);
//     if (tem_minSum > 0)
//     {
//       tem_minSum = 0;
//     }
//   }

//   if (sum == minS)
//   {
//     return maxS;
//   }
//   return max(maxS, sum - minS);
// }
vector<int> mejority (vector<int>&nums){
  int freq =0;
  int sum =0;
  vector<int> ans;
  for(int i =0; i< nums.size(); i++){
    if(freq == 0){
      sum = nums[i];
    }
    if(sum == nums[i] && find(ans.begin(),ans.end(),nums[i]) ==  ans.end()){
      ans.push_back(nums[i]);
      freq ++;

    }else {
      freq -- ;
    }
  }
  
  return ans;
}
int main()
{
  vector<int> nums = {3, 2, 3};
mejority(nums) ;

  return 0;
}
// pow(x, n