#include <iostream>
#include <string.h>
using namespace std;
bool isAnagram(string a, string b)
{
    int d1['z'+1] = {0};
    for (int i = 0; i < a.length()&&i<b.length(); i++)
    {
        d1[a[i]]++;
        d1[b[i]]--;
    }
    for (int i = 0; i < 'z'; i++)
    {
        if (d1[i] < 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string a, b;
    cin >> a >> b;
    if (isAnagram(a, b))
    {
        cout << "true" << endl;
    }
    else
    { 
        cout << "flase" << endl;
    }
    return 0;
}
