#include<iostream>
using namespace std;

int main()
{
    int x,c=0;
    cout<<"Enter Number ";
    cin>>x;//x=98756525
    int k=x;

    cout<<"Enter Fav Number";
    int fav;//fav=5
    cin>>fav;
    while(k>0)
    {
        if(k%10==fav)
        {
            c++;
        }
    k=k/10;
    }
    cout<<"Faveroite number occurs total  : "<<c;
    return 0;
}