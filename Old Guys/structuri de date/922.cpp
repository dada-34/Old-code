#include<iostream>
#include<math.h>
using namespace std;

struct coordonate{

    int x,y;
};







int main()
{
    int n,k;
    float max=-1,d;
    struct coordonate pct;
    cin>>n;

    while(n!=0)
    {
        cin>>pct.x;
        cin>>pct.y;

        d = sqrt(pct.x*pct.x + pct.y*pct.y);

        if(d>max)
        {
            max=d;
            k=1;
        }
        else    
            if(max==d)
                k++;


        d=0;


        n--;
    }

    cout<<max<<" "<<k;

}