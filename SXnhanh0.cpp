#include<stdio.h>
int partition (int a[], int low, int high)
{
    int pivot = a[high];   
    int l = low;
    int r = high - 1;
    while(true){
        while(l <= r && a[l] < pivot) l++;
        while(r >= l && a[r] > pivot) r--;
        if (l >= r)
         break;
            int t = a[l];
                a[l] = a[r];
                a[r] = t;
        l++;
        r--;
    }
    int t = a[l];
        a[l] = a[high];
        a[high] = t;
    return l;
}
 
void SXnhanh(int a[], int low, int high)
{
    if (low < high)
    {
        int root = partition(a, low, high);
 
        SXnhanh(a, low, root - 1);
        SXnhanh(a, root + 1, high);
    }
}