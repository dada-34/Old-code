#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("bac.txt");
    int n,x,ok=0;
    cin>>n;
    while(fin>>x)
    {
        if(x%n==0)
        {
            cout<<x<<" ";
            ok=1;
        }
    }
    
    if(ok==0)
        cout<<"NU EXISTA";

    return 0;
}