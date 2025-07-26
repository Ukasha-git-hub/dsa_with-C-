#include <iostream>
using namespace std;
// printing all possible sub arrays
//int main()
// {
//      int n =5;
//      int arr[5]={1,2,3,4,5};
//      for(int i = 0; i< n ; i++){
//         for(int j =i ; j <n ;j++ ){
//             for (int k =i; k<= j; k++){
//                 cout<< k;
//             }
//             cout<< " ";
//         }
//         cout<< endl;
//      }
//     return 0;
// }
// sum of max subArrays by Brute force
//int main(){
//     int n =7;
//     int arr[7] ={3,-4,5,4,-1,7,-8};
//     int ms = INT_MIN;
//     for(int i =0;i<n ;i++){
//         int cm =0;
//         for(int j =i; j< n;j++){
//             cm += arr[j];
//              ms = max(cm,ms);
//         }
//     }
//     cout<< "max sum of sub arrays :"<<ms<<endl;
//     return 0;
// }
// kadanes algorithms
int main(){
//      int n =7;
//    int arr[7] ={3,-4,5,4,-1,7,-8};
//     int cm =0;
//     int ms = INT_MIN;
//     for(int i =0;i<n ;i++){
//         cm += arr[i];
//         ms = max(cm,ms);
//             if(cm <0){

//             cm = 0;
//         }
//     }
//      cout<< "max sum of sub arrays :"<<ms<<endl;
/// similar approach/////
     int n =10;
   int arr[10] ={0,1,1,1,1,1,1,0,1,1};
   int cm =0;
   int ms = INT_MIN;
   for (int i =0 ; i<n; i++){
    if (arr[i] == 0){
        cm = 0;
     
    }
       cm += arr[i];
        ms = max(cm,ms);
   }
   cout<<ms<<endl;
    return 0;
}
