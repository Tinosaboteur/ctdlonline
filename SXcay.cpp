#include<stdio.h>

void xuatMang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}

void cay(int a[],int n,int i){
	int max=i;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n && a[l]<a[max]){
		max=l;
	}
	
	if(r<n && a[r]<a[max]){
		max=r;
	}
	
	if(max!=i ){
		int t = a[max];
            a[max] = a[i];
            a[i] = t;
		cay(a,n,max);
	}
}

void SXcay(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		cay(a,n,i);
	}
	
	for(int i=n-1;i>=0;i--){
		int t = a[i];
            a[i] = a[0];
            a[0] = t;
		cay(a,i,0);
	}
}

int main(){
	int a[] = {1,4,3,7,2};
    int n =sizeof(a)/sizeof(a[0]) ;
	SXcay(a,n);	
    printf("mang da duoc xep la:");
	xuatMang(a,n);
}