//Ham xoa
#include <stdio.h>
#define MAX 1000

void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("%4d", a[i]);
    }
}

void XoaPhanTu(int a[], int &n, int pos){
    // Mang rong, khong the xoa.
    if(n <= 0){
        return;
    }
    // Neu pos <= 0 => Xoa dau
    if(pos < 0){
        pos = 0;
    }
    // Neu pos >= n => Xoa cuoi
    else if(pos >= n){
        pos = n-1;
    }
    // Dich chuyen mang
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    // Giam so luong phan tu sau khi xoa.
    --n;
}
int main(){
    int a[]={1,2,3,5};	
    int n=2;
    printf("\n=======XOA PHAN TU======\n");
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &pos);
    XoaPhanTu(a, n, pos);
    printf("\nMang sau khi xoa: ");
    XuatMang(a, n);
    printf("\nDone!");
}
