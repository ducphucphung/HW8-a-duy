//Ham chen:
#include <stdio.h>
#define MAX 1000

void ThemPhanTu(int a[], int &n, int val, int pos){
    if(n >= MAX){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos > n){
        pos = n;
    }
    for(int i = n; i > pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = val;
    ++n;
}

int main(){
    int a[]={1,2,3,4};
    int n=4;
    printf("\n=======THEM PHAN TU======\n");
    int val, pos;
    printf("\nNhap so can them: ");
    scanf("%d", &val);
    printf("\nNhap vi tri muon chen: ");
    scanf("%d", &pos);
    ThemPhanTu(a, n, val, pos);
    printf("\nMang sau khi them: ");
}

