#include<stdio.h>
void heapify(int a[],int n,int i){
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
		swap(a[max],a[i]);
		heapify(a,n,max);
	}
}

void heap_Sort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(a,n,i);
	}
	
	for(int i=n-1;i>=0;i--){
		swap(a[i],a[0]);
		heapify(a,i,0);
	}
}