#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }

    for (int i = 0; i < max; i++){
        for (int j = 0; j < n; j++){
            if (max - arr[j] <= i){
                cout << "*\t";
            }else{
                cout << "\t";
            }
        }
        cout << endl;
    }
}