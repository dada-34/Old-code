#include<iostream>
using namespace std;
int main()
{
    long long int n,i,x,cm=10,min;
    cin>>n;
    cin>>x;
    min=x;
    int cx;
    for(i=1;i<n;i++)
    {   
        cx=x;
        while(x>9)
        {
           x=x/10;
        }
        if(cm>x)
        {
            cm=x;
            min=cx;
        }
        else
            if(cm==x)
                if(min<cx)
                    min=cx;
        cin>>x;
    }
    cout<<min;
}
