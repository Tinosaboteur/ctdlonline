#include<stdio.h>
bool kiemtraam(int a[],int n){
	if (n == 0)
     return true;
	if(a[n-1]>0){
        return false;
        return 0;
    }
    return kiemtraam(a,n-1);
}
int main(){
    int a[] = {-9,-8,-3,-6};
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d",kiemtraam(a,n));
}