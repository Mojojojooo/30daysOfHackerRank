#include <bits/stdc++.h>

using namespace std;

int main() {

int n;

int ar[1000];

cin >> n;

for(int i=0; i<n;i++)

{

  cin >> ar[i];
}

for(int i=n-1; i>=0; i--)

{

  cout << ar[i];
  cout << " ";
}

return 0;

}
