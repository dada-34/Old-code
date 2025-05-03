#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("castel.in");
    ofstream fout("castel.out");
    int C, N;
    fin >> C;
    fin >> N;
    if (C == 1)
    {
        int s = 0, i, x;
        for (i = 0; i < N; i++)
        {
            fin >> x;
            if (x % 10 == x)
                s = s + 1;
        }
        fout << s;
    }

    if (C == 2)
    {
        int s = 0, i, x;
        for (i = 0; i <= N; i++)
        {
            s += i;
            if (s + i >= N)
            {
                fout << i;
                i = N + 1;
            }
        }
        for (i = 0; i < s; i++)
        {
            fin >> x;
        }
        fout << " " << x;
    }

    if (C == 3)
    {
        long long int s = 0, i, x, y, sa = 0, na = 0, nr, j;
        for (i = 0; i <= N; i++)
        {
            s += i;
            if (s + i >= N)
            {
                nr = i;
                i = N + 1;
            }
        }
        na = s - nr;

        for (i = 1; i < nr; i++)
        {
            for (j = i; j < nr; j++)
            {
                if (j == i)
                {
                    fin >> x;
                    fin >> y;
                }
                else
                {
                    x = y;
                    fin >> y;
                }
                sa += x + y;
            }
        }
        fout << na << " " << sa;
    }
}