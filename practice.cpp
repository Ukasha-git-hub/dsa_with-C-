#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &n)
{
    int Si = 0;
    int Li = n.size() - 1;
    while (Si < Li)
    {
        swap(n[Si], n[Li]);
      Si++;
      Li--;
    }
     
}
int main()
{
     int n =5;
     int arr[5]={1,2,3,4,5};
     for(int i = 0; i< n ; i++){
        for(int j =i ; j <n ;j++ ){
            for (int k =i; k<= j; k++){
                cout<< k;
            }
            cout<< " ";
        }
        cout<< endl;
     }
    return 0;
}