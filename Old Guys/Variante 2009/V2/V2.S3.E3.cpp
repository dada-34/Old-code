#include <iostream>
#include<fstream>
using namespace std;

int main()
{  
    ifstream fin("NR.TXT")
    int n,ok=0;
    while(fin>>n)
    {
        if(n>0)
        {
            cout<<n<<" ";
            ok=1;
        }
    }
    if(ok==0)
        cout<<"NU EXISTA";
    return 0;
}