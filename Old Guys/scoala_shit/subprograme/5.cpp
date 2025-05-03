
//                                                      x fara cifre pare sa fie oglinditul lui y fara cifre pare



#include<iostream>
using namespace std;
void imog (int x, int y, int &rez)
{
    int cx,cy,p;
    cx=0; cy=0;
    while(x!=0)
    {
        if(x%10%2==1)
        {
            cx = cx +x%10*p;
            p*=10;
        }
        x=x/10;
    }
    while(y)
    {
        if(y%10%2 == 1)
            cy = cy*10+y%10;
        
        y/=10;
        
    }
    if(cx ==cy && cx!=0)
        rez=1;
    else
        rez=0;
}
int main()
{
    int x,y,rez;
    cin>>x>>y;
    imog(x,y,rez);
    cout<<rez;
    return 0;
}