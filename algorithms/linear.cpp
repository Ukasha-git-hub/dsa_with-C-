#include <iostream>
using namespace std;
int lin(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }

    return -2;
}
int checkInices(int arr[], int size, int target)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << i << endl;
            found = true;
        }
    }
        
        if (!found)
        {
            cout << "not founded " << endl;
            return -1;
        }

    return 0;
}
int main()
{
    //  int arr []={3,6,75,4,54,5,80};
    //  int  size =7;
    //  int target= 0;
    //  cout<< lin(arr,size,target);
    //     return 0;
    int arr[] = {5, 3, 7, 2, 9, 3};
    int size = 6;
    int target = 3;
    cout << checkInices(arr, size, target) << endl;
}