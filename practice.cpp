#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> n(vector<int> &dupN)
{
   vector<int> ans;
   for (int num : dupN)
   {
      int freq = 0;
      for (int el : dupN)
      {
         if (el == num)
         {
            freq++;
         }
      }
      if (freq >= 2 && find(ans.begin(),ans.end(),num) == ans.end())
      {
         ans.push_back(num);
      }
   }
   return ans;
}

int main()
{
   vector<int> dupN = {
       1,
       2,
       2,
       4,
       5,
       5,
       5,
   };

  vector <int> result = n(dupN) ;
 for(int nums : result){
   cout << nums<<" ";
 }
}