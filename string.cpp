#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int out[test], q = 0;

    for(int i=0;i<test;i++)
    {  
        int len;
        cin>>len;
        int k;
        cin >> k;
        string str[len];
        for(int i=0;i<len;i++)
        {
            cin>>str[i];
        }
        int j=len,p=len;
        int h = 0;
                for (int i = p; i > j - k; i--)
                {
                    if (str[i] == "H")
                     h++;
                }


         int x = 0, y = 0;
                if (h % 2 == 0)
                {
                    for (int i = 0; i < j - k; i++)
                    {
                        if (str[i] == "H")
                            x++;
                    }
           
                    out[q] = x;
                }
                else
                {
                    for (int i = 0; i < j - k; i++)
                    {
                        if (str[i] == "T")
                            y++;
                    }
                    
                    out[q] = y;
                }
        q++;
        
    }
    for (int i = 0; i < q; i++)
    {
        cout << out[i] << endl;
    }
}