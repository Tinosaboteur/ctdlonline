#include <stdio.h>
int TKnhiphan(int a[], int l, int r, int x)
{
    if(r >= l)
    {
        int m = (l + r) / 2;

        if(a[m] == x)
            return m;

        if(a[m] > x)
            return TKnhiphan(a, l, m - 1, x);

        return TKnhiphan(a, m + 1, r, x);
    }

    return -1;
}