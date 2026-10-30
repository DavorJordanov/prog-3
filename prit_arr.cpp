#include <iostream>
using namespace std;

void printArray(int *p, int n)
{
    for (int i=0;i<n;i++)
    {
        couт<<*(p + i)<<" ";
    }
}

int main()
{
    int broevi[5]={10, 25, 7, 34, 50};

    printArray(broevi, 5);

    return 0;
}