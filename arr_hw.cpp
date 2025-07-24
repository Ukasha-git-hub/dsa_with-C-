#include <iostream>
using namespace std;
int sumOfarr(int arr[], int sz)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < sz; i++)
    {
        product *= arr[i];
    }
    cout << product << endl;
    return sum;
}
void swapMinandMax(int arrM[], int szO)
{
    int max = 0;
    int min = 0;
    for (int i = 0; i < szO; i++)
    {
        if (arrM[i] < arrM[min])
        {
            min = i;
        }
        if (arrM[i] > arrM[max])
        {
            max = i;
        }
    }
    swap(arrM[max], arrM[min]);
}
void unqiueVal(int arrU[], int szU)
{
    int unIndex = 0;

    for (int i = 0; i < szU; i++)
    {
        bool unique = true;
        for (int j = 0; j < szU; j++)
        {
            if (i != j && arrU[i] == arrU[j])
            {

                unique = false;
                break;
            }
        }
        if (unique)
        {
            cout << arrU[i] << endl;
        }
    }
    // cout << unIndex << endl;
}
void interSection(int arr1[], int arr2[], int s1, int s2)
{
    for (int i = 0; i < s1; i++)
    {
        bool interSec = true;
        for (int j = 0; j < s2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                   cout << arr1[i] << " ";
            }
        }
        
    }
}

int main()
{
    int arr1[] = {21, 4, 5, 3, 6, 3, 5, 6};
    int s1 = 8;
    int arr2[] = {21, 4, 52, 3, 16, 3, 45, 6};
    int s2 = 8;
    interSection(arr1, arr2, s1, s2);
    cout << endl;
    int arrU[] = {1, 4, 5, 3, 6, 3, 5, 6};
    int szU = 8;
    unqiueVal(arrU, szU);
    int arrM[] = {311, 13, 4, 5, 31, 2};
    int szO = 6;
    swapMinandMax(arrM, szO);
    for (int i = 0; i < szO; i++)
    {
        cout << arrM[i] << " ";
    }
    cout << endl;

    int arr[] = {3, 3, 4, 5, 3, 2};
    int sz = 6;
    cout << sumOfarr(arr, sz) << endl;

    return 0;
}