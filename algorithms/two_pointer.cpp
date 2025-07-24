#include <iostream>
using namespace std;
void reverseArr(int arr[], int sz){
      int start = 0;
    int end = sz -1;
      while (start <= end){
        swap(arr[start], arr[end]);
            start++;
            end --;
        
    }
}
int main(){
    int arr[] = {1,3,4,5,6,7,8,2};
    int sz = 8;
  reverseArr(arr , sz);
  for(int i =0; i< sz;i++){
    cout<< arr[i]<< "";

  }
  
    
    return 0;

}