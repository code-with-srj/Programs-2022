#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int r;
    cin>>r;
    while(r>0)
    {
        int n1,n2;
      cin>>n1>>n2;
        int x1,x2,y1,y2;
        x1=n1/10;
        x2=n1%10;
        y1=n2/10;
        y2=n2%10;
int s1,s2,s3,s4;
s1=(x1*10+x2)+(y1*10+y2);
s2=(y1*10+x2)+(x1*10+y2);
s3=(y2*10+x2)+(y1*10+x1);
s4=(x1*10+y1)+(x2*10+y2);

int max=s1;
if(x1==0 && y1==0)
{
    int k=n1+n2;
    cout<<k;
}
else
{
if(max<s2)
    max=s2;
if(max<s3)
    max=s3;
if(max<s4)
    max=s4;
cout<<max<<endl;
}

r--;
    }
    
    return 0;
}