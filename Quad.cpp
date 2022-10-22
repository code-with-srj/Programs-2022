#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int c = 0;
    int sum, Dum;
    string arr[t];
    while (t > 0)
    {
        int quad[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> quad[i];
        }
        for (int i = 0; i < 1; i++)
        {
            sum = quad[i] + quad[i + 2];
            Dum = quad[i + 1] + quad[i + 2];
        }
        if (sum == 180 && Dum == 180)
            cout << "Yes ";
        else
            cout << "No ";
        t--;
    }
}