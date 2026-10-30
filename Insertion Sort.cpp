#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) 
{
    for (int i=1;i<arr.size();i++) 
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key) 
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() 
{
    vector<int> arr={5, 2, 4, 1, 3};

    cout << "Pred sortiranje: ";
    for (int x: arr)
    {
    cout << x << " ";
    cout << endl;
    }
    insertionSort(arr);
    for (int x : arr) 
    {
    cout << x << " ";
    cout << endl;
    }
    return 0;
}