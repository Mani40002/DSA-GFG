#include <iostream>
#include <math.h>
using namespace std;
void reversearr(int arr[], int n, int k)
{
    int i = 0;
    while (i < n)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1];
        arr[n - 1] = temp;
        i++;
        n--;
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "reverse array: ";
    reversearr(arr, n, 13);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}