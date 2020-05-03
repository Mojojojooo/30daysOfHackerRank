#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;
{
int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string s1;

    cin >>a;
    cin >>b;
    getchar();
    getline(cin,s1);

    cout << a+i << endl << fixed << setprecision(1) << b+d << endl << s+s1;

    return 0;
}
