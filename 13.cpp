#include<stdio.h>
int demsoduong(int a[],int n){
	if (n == 0)
     return 0;
	int s = demsoduong(a,n-1);
    if(a[n-1]>0)
        s+=1;
    return s;
}
int main(){
    int a[] = {9,8,3,6};
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d",demsoduong(a,n));
}