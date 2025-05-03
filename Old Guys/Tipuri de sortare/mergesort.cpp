// Merge sort in C++

#include <iostream>
using namespace std;

void merge (int *v,int l, int r,int mij)
{
  int L[50],R[50],i,j=0,k;

  for(i=l;i<=mij;i++)
  {
    L[i]=v[i];
  }

  for(i=mij+1;i<=r;i++,j++)
  {
    R[i] = v[i];
  }

  for(i=l, j=mij+1,k=l; i<=mij, j<=r; i++, j++, k=k+2)
  {

    if(L[i]<R[j])
    {
      v[k] = L[i];
      v[k+1] = R[j];
    }
    else
    {
      v[k] = R[j];
      v[k+1] = L[i];
    }
  }
}



void divide(int *v, int l, int r)
{
  int mij;
  if(l==r)
    return;
  mij = (l+r)/2;
  
  divide(v,l,mij);
  divide(v,mij+1,r);

  merge(v,l,r,mij);

}

int main() {
  int n,i;
  int v[100];
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>v[i];
  }

  divide(v, 0, n-1);

  for(i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }

  return 0;
}
/*
15
15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
*/