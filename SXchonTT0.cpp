#include <stdio.h>
void sapxep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[min]>a[j]){
                int t = a[min];
                a[min] = a[j];
                a[j] = t;
            }
	}
}