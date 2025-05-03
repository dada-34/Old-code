#include <iostream>
using namespace std;

typedef struct cord
{
    int x;
    int y;
    int z;
} coordonate;

int main()
{
    int n, i;
    cin >> n;
    coordonate v[n];
    for (i = 0; i < n; i++)
    {
        cin >> v[i].x;
        cin >> v[i].y;
        cin >> v[i].z;
    }
    int ok = 0;
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i].x < v[j].x)
            {
                coordonate aux = v[j];
                v[j] = v[i];
                v[i] = aux;
                ok = 1;
            }
        }
    }
    
    if (ok == 0){
        for (i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i].y < v[j].y)
                {
                    coordonate aux = v[j];
                    v[j] = v[i];
                    v[i] = aux;
                    ok = 1;
                }
            }
        }        

    }

    if (ok == 0){
        for (i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i].z < v[j].z)
                {
                    coordonate aux = v[j];
                    v[j] = v[i];
                    v[i] = aux;
                    ok = 1;
                }
            }
        }
    }


    cout<<endl;

    for (i = 0; i < n; i++)
    {
        cout<<v[i].x<<" "<< v[i].y<<" "<< v[i].z<<endl;
    }
}