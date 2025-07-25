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
    vector<int> n = {1, 2, 3, 4, 5, 6, 7, 14};
    reverse(n);
    for (int val : n)
    {
        cout << val << " ";
    }
    return 0;
}