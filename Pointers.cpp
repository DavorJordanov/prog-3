#include <iostream>
using namespace std;

void swapPointer(int* a, int* b) 
{
    int t=*a;
    *a=*b;
    *b=t;
}

void swapReference(int &a, int &b)
 {
    int temp=a;
    a=b;
    b=t;
}

int main() 
{
    int x,y;
    cin>>x>>y;
    
    swapPointer(&x, &y);

    cout<<x<<" "<<y<<endl;

    swapReference(x, y);

    cout<<x<<" "<<y<<endl;

    return 0;
}