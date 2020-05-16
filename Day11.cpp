#include <bits/stdc++.h>
#define SIZE 6
#define SIZE_GLASS 3
using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
     int max = INT_MIN;
    for(int arr_i = 0; arr_i<SIZE-SIZE_GLASS+1; arr_i++){
       for(int arr_j=0; arr_j<SIZE-SIZE_GLASS+1; arr_j++){
           int sum = 0;
           for(int x=arr_j; x<arr_j+SIZE_GLASS; x++)
               sum += arr[arr_i][x];
           for(int x=arr_j; x<arr_j+SIZE_GLASS; x++)
               sum += arr[arr_i+SIZE_GLASS-1][x];
           sum += arr[arr_i+1][arr_j+1];

           if(sum>max){
               max = sum;
           }
       }
    }
    cout << max;
    return 0;
}
