#include<stdio.h>
int kiemtralonnhat(int a[],int n){
	if (n == 0)
     return 0;
	int max;
    if(a[n-1]>kiemtralonnhat(a,n-1))
         return max = a[n-1];

    return kiemtralonnhat(a,n-1);


}
int main(){
    int a[] = {9,8,23,16};
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d",kiemtralonnhat(a,n));
}