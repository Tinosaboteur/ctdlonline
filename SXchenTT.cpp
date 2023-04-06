#include <stdio.h>
#include <math.h>
 
void sapxep(int a[], int n)
{
   int i, root, j;
   for (i = 1; i < n; i++)
   {
       root = a[i];
       j = i-1;
 
       while (j>=0 && a[j] > root)
       {
           a[j+1]=a[j];
           j = j-1;
       }
       a[j+1] = root;
   }
}
 
void xuatmang(int a[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%3d", a[i]);
}
 
int main()
{
    int a[] = {12, 11, 13, 5, 6};
    int n = sizeof(a)/sizeof(a[0]);
 
    sapxep(a, n);
    printf("mang da sap xep lai la: \n");
    xuatmang(a, n);
    return 0;
}