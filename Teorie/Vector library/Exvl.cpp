#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<dataType> name(size,value);
    vector<int> vec(10/*,5(poti sa pui valoare ce se pune in fiecare element al vectorului)*/);
    for(int i=0;i<10;i++)
    {
        cout<<vec[i]<<" ";
    }
}