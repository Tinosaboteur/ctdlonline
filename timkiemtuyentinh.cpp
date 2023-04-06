#include <stdio.h>

int TK(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main()
{
    int a[] = {2, 3, 4, 1, 6};
    int x = 3;
    int n = sizeof(a) / sizeof(a[0]);
    int KQ = TK(a, n, x);
    (KQ == -1) ? printf("khong co phan tu") : printf("phan tu o vi tri: %d", KQ);
    return 0;
}