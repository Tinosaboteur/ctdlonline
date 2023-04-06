#include <stdio.h>
void Sapxep(int a[], int n)
{
	for (int i = 0; i < n-1;i++)
		for (int j = i + 1; j < n;j++)
		if (a[i]>a[j]){
            int t=a[i];
                a[i]=a[j];
                a[j]=t;
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
    Sapxep(a,n);
    printf("mang da sap xep lai la:");
    xuatmang(a,n);
}