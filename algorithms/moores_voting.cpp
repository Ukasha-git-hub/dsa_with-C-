#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
//// by brute force/////
   int BruteN(vector<int> &nums){
        int no = nums.size();
        for(int val :nums){
          int freq = 0;
          for(int el: nums){
            if (el == val){
              freq++;

            }
          
          }
         if(freq > no/2 ){
            return val;
          }
        }
           
        return -1;
       }
       /// by sorting ///
       int n (vector<int>& num){
      sort(num.begin(),num.end());
      int freq =1, ans= num[0];
      for(int i= 1; i < num.size();i++){
        if(num[ i] == num [i-1]){
          freq ++;
        }
        else {
          freq =1; 
          ans = num[i];
        }
         if (freq > num.size()/2){
         return ans;

      }
      }
     
      return -1;
    }
    //mo0re's voting
     int n (vector<int> &numb){
     int freq =0;
     int ans =0;
      for(int i =0; i<numb.size(); i++){
         if(freq == 0){
            ans = numb[i];
         }
         if (ans == numb[i]){
          freq++;
         }
         else{
          freq--;

         }
      
      }
         return ans;
    }
int main(){
    vector <int > num = {0,0,1,1,2,2,2,2,2};
cout<<BruteN(num)<<endl;
vector <int > nums = {0,0,1,1,2,2,2,2,2};
cout<<BruteN(nums)<<endl;
    return 0;
}