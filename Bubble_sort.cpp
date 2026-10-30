#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}

void print(int *a, int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<*(a+i)<<" ";
    }
}

void bubbleSort(int *a,int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (*(a+j)>*(a+j+1))
            {
                swap(a+j,a+j+1);
            }
        }
    }
}

int main()
{
    int broevi[8]={34, 12, 56, 3, 89, 21, 7, 45};

    bubbleSort(broevi,8);

    cout<<"Podredena niza: ";
    print(broevi,8);

    return 0;
}