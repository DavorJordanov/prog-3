#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int n, broj=0;
vector<int>kolona;

bool moze(int red, int kol)
{
    for (int i=0;i<red;i++) {
        if (kolona[i]== kol || abs(kolona[i]-kol)==abs(i-red)) 
        {
            return false;
        }
    }
    return true;
}

void resi(int red)
{
    if (red==n) 
    {
        broj++;
        return;
    }

    for (int kol=0;kol<n;kol++) 
    {
        if (moze(red, kol)) 
        {
            kolona[red]=kol;
            resi(red+1);
        }
    }
}

int main() 
{
    cin>>n;
    kolona.resize(n);

    resi(0);

    cout << broj << endl;

    return 0;
}
