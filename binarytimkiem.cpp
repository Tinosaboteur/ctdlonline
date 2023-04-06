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

int main()
{
    int a[] = {2, 3, 4, 10, 40};
    int n = sizeof(a)/sizeof(a[0]);
    int x = 10;
    int KQ = TKnhiphan(a, 0, n - 1, x);
    if(KQ == -1)
        printf("%d xuat hien tai chi so %d", x, KQ);
    else
        printf("%d xuat hien tai chi so %d", x, KQ);
    return 0;
}