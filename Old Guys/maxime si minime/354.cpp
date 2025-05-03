#include<iostream>
using namespace std;
int main()
{
    int n,MAX,x;
	cin>>n;
    cin>>MAX;
    while(n>1)
    {
        cin>>x;
        if(x>MAX)
            MAX=x;
            n--;
    }
    cout<<MAX;
    return 0;
}
