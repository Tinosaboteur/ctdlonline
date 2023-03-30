#include <stdio.h>

void NhapMang(float a[], int n){
    for (int i = 0;i < n; i++){
        printf("a[%d] = ",i);
        scanf("%f",&a[i]);
    }
}

int dempt(float a[], int n){
    int pt = 0;
    if(n==0)
        return 0;
    if(a[n-1]>0)
        pt++;
    return pt;
    return dempt(a,n-1);
}

int main(){
    int n=0;
    float a[n];
    printf("hay nhap vao tong mang: ");
    scanf("%d",&n);
    NhapMang(a,n);
    printf("%d",dempt(a,n));
}