#include <iostream>
using namespace std;
bool check(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // int n=25;
    cout << check(25) << endl;
    cout << check(1031) << endl;
    cout << check(199) << endl;
    cout << check(193) << endl;
    cout << check(121) << endl;
    cout << check(103) << endl;
}
// checkForPrime.cpp