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
void xuatmang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%3d",a[i]);
    }
}
int main(){
	int a[]={2 ,8 ,3 ,6 ,1};
    int n = sizeof(a)/sizeof(a[0]);
	sapxep(a,n);
	printf("Mang da sap xep la: ");
	xuatmang(a,n);
}