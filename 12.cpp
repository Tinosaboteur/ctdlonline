#include<stdio.h>
int xuatmang(int a[],int n){
	if (n == 0)
     return 0;
	printf("%3d",a[n-1]);
    return xuatmang(a,n-1);
}
int main(){
    int a[] = {9,8,3,6};
    int n = sizeof(a)/sizeof(a[0]);
    xuatmang(a,n);
}