#include<iostream>
using namespace std;

int armonie(int x,int y)
{
    int s=0,s1=0,s2=0;
    s=x+y;
    int i;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        s1 = s1+i;
    }
    for(i=1;i<y;i++)
    {
        if(y%i==0)
        s2 = s2+i;
    }
    if(s2<=s1)
    {
        if(s>s2 && s<s1)
            return 1;
        else
            return 0;
    }
    else
    {
        if(s<s2 && s>s1)
            return 1;
        else
            return 0;
    }
    
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<armonie(x,y);
    return 0;
}