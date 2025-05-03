#include<iostream>
using namespace std;
int main()
{
    int n,max1,max2=-1,x,i;
    cin>>n;
    cin>>max1;
    for(i=1;i<n;i++)
    {
        cin>>x;
        if(x>max1)
        {
            max2=max1;
            max1=x;
        }
        else    
            if(max2<=x)
                max2=x;
    }

    cout<<max1<<" "<<max2;



    return 0;
}
