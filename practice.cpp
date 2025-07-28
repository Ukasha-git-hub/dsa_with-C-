#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
    
    
int main()
{
vector <int > numb = {1,2,2,2,1,1,1,2,2};
cout<<n(numb)<<endl;
}