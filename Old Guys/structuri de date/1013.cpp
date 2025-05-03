#include<iostream>
using namespace std;

struct datanastere{


        int a;
        int l;
        int z;
};

int main()
{
    int n,i,maxa,maxl,maxz,mina,minl,minz,imin,imax;
    struct datanastere om;

    cin>>n;

    cin>>om.a;
    cin>>om.l;
    cin>>om.z;

    mina=om.a;
    minl=om.l;
    minz=om.z;

    maxa=om.a;
    maxl=om.l;
    maxz=om.z;
    imin=1;
    imax=1;
    for(i=2;i<=n;i++)
    {   
        cin>>om.a>>om.l>>om.z;

        //maxim
        if(om.a == maxa)
        {
            if(om.l == maxl)
            {
                if(om.z>maxz)
                {
                    imax=i;
                    maxz=om.z;
                    maxl=om.l;
                    maxa=om.a;
                }
            }
            else
                if(om.l>maxl)
                {
                    imax=i;
                    maxz=om.z;
                    maxl=om.l;
                    maxa=om.a;
                }
        }
        else
            if(om.a > maxa)
            {
                    imax=i;
                    maxz=om.z;
                    maxl=om.l;
                    maxa=om.a;
            }


        // minim 
        if(om.a == mina)
        {
            if(om.l == minl)
            {
                if(om.z<minz)
                {
                    imin=i;
                    minz=om.z;
                    minl=om.l;
                    mina=om.a;
                }
            }
            else
                if(om.l<minl)
                {
                    imin=i;
                    minz=om.z;
                    minl=om.l;
                    mina=om.a;
                }
        }
        else
            if(om.a < mina)
            {
                    imin=i;
                    minz=om.z;
                    minl=om.l;
                    mina=om.a;
                }
    }

    cout<<imax<<" "<<imin;

    return 0;
}