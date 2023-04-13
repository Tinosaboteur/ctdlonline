#include<stdio.h>
int tongchan(int a[],int n){
	if (n == 0)
     return 0;
	int s = tongchan(a,n-1);
        s=s+a[n-1];
    return s;
}
int main(){
    int a[] = {9,8,3,6};
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d",tongchan(a,n));
}