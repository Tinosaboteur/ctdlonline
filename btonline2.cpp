#include<stdio.h>
#include<math.h>
int giaithua(int n){
    if(n==0 || n==1)
    return 1; 
    return n*giaithua(n-1);
}

double  Tong(double x, int n){
	if(n==1)
	  return x;
    if (n==0)
    return 1;
	return (pow(x,n) / giaithua(n)) +Tong(x,n-1);
	    
}
int main(){
	double x , s;
	int n;
	printf(" nhap x :");
	scanf("%lf", &x);
	printf("nhap n  :");
	scanf("%d", &n);
	s=Tong(x,n);
	printf(" tong la:%f",s);
}