#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
//  void p (vector<int> &nums){
//   for(int i=0; i< nums.size(); i++){
//    for(int j=i+1;j<nums.size();j++){
//       int andval= nums[i];
//       for(int k = i; k<= j; k++ ){
//         int out = andval & nums[k];
//         cout<<out<< " ";
      
//       }
   
//    }
//      cout <<endl;
//   }  
  
//  }
 int p1(double x, int n){
 int   max = 1;
   for(int i = 0; i< n ;i++){
       max *=  x;

   }
   return max;
 }
int main()
{
  //vector<int> nums = {1,2,3,4};
  double x= 5;
  int n = -3;
 cout << p1(x,n) <<endl;
   return 0;
}
//pow(x, n)