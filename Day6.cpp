#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i=0;
    int T;
    char s[1000000];
    int j=0;
    cin >> T;
    for(i=0;i<T;i++)
    {
        cin >> s;
        for(j=0;j<strlen(s);j++)
        if(j%2==0)
        {
            cout << s[j];
        }
        cout <<" ";
        for(j=0;j<strlen(s);j++)
        if (j%2!=0)
        {
            cout << s[j];
        }
        cout <<"\n";
    } 
    return 0;
}
