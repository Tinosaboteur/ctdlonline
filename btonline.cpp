// Cho mảng 1 chiều các số nguyên. Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy
#include <stdio.h>

void NhapMang(int a[], int n){
    for (int i = 0;i < n; i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

int tongchan(int a[], int n){
        if(n==0)
        return 0;
        int s = tongchan(a,n-1);
        if(a[n-1]%2==0)
        s += a[n-1];
        return s;
}

int main(){
    int n = 0;
    int a[n];

    do{
        printf("Nhap vao n:  ");
        scanf("%d", &n);
    } while (n <= 0);

    NhapMang(a, n);

    printf("\nTong so chan = %d", tongchan(a, n));
}