#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int v1[n + 1], v2[n + 1];

//citire
    for (i = 1; i <= n; i++)
        cin >> v1[i];

    v2[1] = v1[1];
    int ok = 1;


// creare B

    for (i = 2; i <= n && ok == 1; i++)
    {   
        int j;
        if (v1[i] > v2[i - 1])
            v2[i] = v1[i];
        else
        {
                int aux[100], cop, cnt = 0,mc=0,pc,k=0;
                cop = v1[i];


                while (cop != 0)
                {
                    cnt++;
                    cop /= 10;
                }
                cop = v1[i];
                
                for(j=cnt-1;j>=0;j--){
                    aux[j] = cop%10;
                    cop /= 10;
                    if(mc<aux[j]){
                        mc = aux[j];
                        pc = j;
                    } 
                }

                    
                cop=0;

                while(k!=cnt){
                    if(pc >= cnt){
                        pc = 0;
                        cop = cop*10+aux[pc];
                        pc++;
                    }
                    else{
                        cop = cop*10 + aux[pc];
                        pc++;
                    }
                    k++;            
                }

                if(cop >= v2[i-1])
                    v2[i] = cop;

                else
                    ok=0;
        }
    }
if(ok==1){
    cout<<"DA"<<endl;
    for(i=1;i<=n;i++){
        cout<<v2[i]<<" ";
    }
}
else
    cout<<"NU";

return 0;
}
