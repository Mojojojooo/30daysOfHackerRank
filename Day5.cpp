#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int i;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(i=1;i<11;i++)
    {
        cout << n <<" x "<<i << " = " << (n*i)<<endl;
    }

    return 0;
}
