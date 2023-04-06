#include<stdio.h>
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