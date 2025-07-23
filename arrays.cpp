#include <iostream>
using namespace std;
void change(int arr[], int size){
    cout<<"funnction"<< endl;
    for(int i = 0; i<size; i++){
        arr[i]=2*arr[i];

    }
}
int main()
 {
//     int marks[4] = {134, 45, 554, 32};
//     int largest = marks[0];
//      int smallest = marks[0];
//     int sizeL = 0;
//     int sizeS= 0;
//     // cout<< sizeof(marks)/sizeof(int)<<endl;
//     // all numbers in array
//     // for(int i =0; i <= size; i++){
//     //     cout<< marks[i]<<endl;

//     // }
//     //////// largest num
//     for (int i = 0; i <= 4; i++)
//     {
//         if (largest <marks[i])
//         {

//             largest = marks[i];
//             sizeL = i;
//         }
//     }
//     // smallest 
   
//     for (int i = 0; i<=  4; i++){
//         if (smallest > marks[i]){
//             smallest = marks[i];
//            sizeS = i;
//         }
//     }
//     cout << largest << endl;
//     cout << sizeL << endl;
//     cout << smallest << endl;
//     cout << sizeS << endl;
// int arr[3]={1,2,3};
//  change(arr, 3);
//  cout<< "main"<<endl;
// for(int i =0 ;i<3;i++){
//     cout<<arr[i]<<endl;
// }
int arr[]= {12,43,56,56,65,6,45,64};
int size =8;
int revers[size] ={};
for(int i = size; i>0;i--){
    revers[i] += arr[i];
}
cout<<revers<<endl;
    return 0;
}
