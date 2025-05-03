#include<iostream>
using namespace std;
int main()
{
    long long int l,r,card;
    cin>>r>>l;
    card=(l-r);
     if(card %2 ==1)
        card = card/2+1;
    else
        card=card/2;
    
    cout<<card*card;


    

}