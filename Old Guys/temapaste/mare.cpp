#include<iostream>
using namespace std;


void citvec(int &n, int *v)
{
    int i;
    cout<<"Cate elemente sa aiba vectorul: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
}

void afisvec(int &n, int *v)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void maxvec(int &n, int *v, int &maxim)
{
    int i;
    maxim = v[0];
    for(i=1;i<n;i++)
    {
        if(v[i] > maxim)
            maxim = v[i];
    }
    cout<<maxim<<endl;

}

void minvec(int &n, int *v, int &minim)
{
    int i;
    minim = v[0];
    for(i=1;i<n;i++)
    {
        if(v[i] < minim)
            minim = v[i];
    }
    cout<<minim<<endl;

}

void elx(int &n,int *v, int x)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(v[i]==x)
        {
            for(j=i;j<n-1;j++)
                v[j]=v[j+1];
            i=i-1;
            n--;
        }
    }
}

void xin(int *v, int &n, int &p,int &x)
{
    int i,j;

    if(p == n)
    {
        v[n] = x;
        n++;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(i==p)
            {
            for(j=n+1;j>i;j--)
                {
                    v[j]=v[j-1];
                }
                v[i] = x;
                n++;
            }
        }
    }
}

void buble(int *v, int &n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int aux;
            if(v[i]>v[j])
            {
                aux  = v[i];
                v[i] = v[j];
                v[j] =  aux;
            }
        }
    }
}

int prim(int &n)
{
    int i,j,ok=1;

    for(i=2;i*i<=n;i++)
    {
        if(n % i == 0)
        ok=0;
    }
    if(ok==1)
        return 1;
    else
        return 0;
}

int pali(int &n)
{
    int mn=0,cn;
    cn = n;
    while(cn!=0)
    {
        mn = mn*10 + cn%10;
        cn = cn/10;
    }

    if(n == mn)
    {
        return 1;
    }
    else
        return 0;
}

void swap(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}



int main()
{
    int n,x,minim,maxim,p;
    int v[100];
    string actiune = "nu",gata = "NU";
    

    while(gata != "Da" && gata !="DA" && gata !="da" && gata !="dA")
    {
    cout<<"\x1b[H\x1b[J"<<flush;
    
    cout<<"Ce doriti sa faceti pentru vecotrul v:"<<'\n';
    cout<<endl;
    cout<<"1. "<<"citire vector"<<endl;
    if(actiune != "nu")
    {   
        cout<<"2. "<<"afisate vector"<<endl;
        cout<<"3. "<<"val maxima din vector"<<endl;
        cout<<"4. "<<"val minima din vector"<<endl;
        cout<<"5. "<<"eliminare x din vector"<<endl;
        cout<<"6. "<<"adaugare in vector x pe poz p"<<endl;
        cout<<"7. "<<"sortare vector"<<endl;
    }

    cin>>actiune;





        if(actiune == "1")
        {
            citvec(n,v);
        }
        else
            if(actiune == "2")
            {
                afisvec(n,v);       
            }
            else
                if(actiune == "3")
                {
                    maxvec(n,v,maxim);
                }
                else
                    if(actiune == "4")
                    {
                        minvec(n,v,minim);
                    }
                    else  
                        if(actiune == "5")
                        {
                            cout<<"Ce numar doriti sa eliminati din vector?"<<endl;
                            cin>>x;
                            elx(n,v,x);
                        }
                        else
                            if(actiune == "6")
                            {
                                cout<<"Ce numar ati dori sa introduceti?"<<endl;
                                cin>>x;
                                cout<<endl<<"Pe ce pozitie de la 0-"<<n<<"?"<<endl;
                                cin>>p;
                                xin(v,n,p,x);
                            }
                            else
                                if(actiune == "7")
                                {
                                    buble(v,n);
                                }
        
        cout<<"Gata?"<<endl;
        cin>>gata;
    }


    gata = "NU";

    int ok,a,b;

    while(gata != "Da" && gata !="DA" && gata !="da" && gata !="dA")
    {
        
        cout<<"\x1b[H\x1b[J"<<flush;

        cout<<"Ce operatie doriti sa efectuati?"<<endl;


        cout<<"1. Verificare nr. prim "<<endl;
        cout<<"2. Verificare nr. palindrom"<<endl;
        cout<<"3. Interschimbare doua numere"<<endl;

        cin>>actiune;
        
        if(actiune == "1")
        {
            cout<<"Ce numar doriti sa verificati: ";
            cin>>n;
            cout<<endl;
            ok = prim(n);
            if(ok==1)
                cout<<"Este prim!"<<endl;
            else
                cout<<"Nu este prim!"<<endl;
        }
        else
            if(actiune == "2")
            {   
                cout<<"Ce numar doriti sa verificati: ";
                cin>>n;
                cout<<endl;
                ok = pali(n);
                if(ok==1)
                    cout<<"Este palindrom!"<<endl;
                else
                    cout<<"Nu este palindrom!"<<endl;
            }
            else
                if(actiune == "3")
                {
                    cout<<"primul numar: ";
                    cin>>a;
                    cout<<endl;
                    cout<<"al doilea numar: ";
                    cin>>b;
                    cout<<endl;
                }

    cout<<"Gata?"<<endl;
    cin>>gata;
    cout<<endl;
        
    }

                            


}