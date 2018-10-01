#include <stdio.h>

void Nhap(int m, int a[]) {
    for (int i = 0; i < m; ++i) {
        printf("Mon thu %d \n", i + 1);
        scanf("%d", &a[i]);
    }
}

void Xuat(int m, int a[]) {
    for (int i = 0; i < m; ++i) {
        printf("Mon thu %d la : %d \n", i + 1, a[i]);
    }

}

int Tinhtongdiemcacmon(int m, int a[]) {
    int tongdiemcacmon = 0;
    for (int i = 0; i < m; ++i) {
        tongdiemcacmon += a[i];
    }
    return tongdiemcacmon;
}

float Tinhdiemtrungbinhccacmon(int m, int n) {
    return (float) m / n;

}


int main() {
    int m;
    printf("Nhap so luong cac mon: \n");
    scanf("%d", &m);
    int a[m];
    printf("Nhap diem cho tung mon : \n");
    Nhap(m, a);
    printf("In danh sach diem tung mon : \n");
    Xuat(m, a);
    printf("Tong diem cac mon la: \n");
    printf("%d\n", Tinhtongdiemcacmon(m, a));
    printf("Diem trung binh cac mon la : \n");
    printf("%.2f", Tinhdiemtrungbinhccacmon(Tinhtongdiemcacmon(m, a), m));
}

void DiemvaCacmon() {
    int m, diemcacmon[100], tongdiem = 0;
    printf("Hay nhap so luong cac mon : \n");
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {

        scanf("%d", &diemcacmon[i]);
        tongdiem += diemcacmon[i];
    }
    printf("Danh sach diem cua cac mon: \n");
    for (int i = 0; i < m; ++i) {
        printf("Diem mon thu %d la : %d \n", i + 1, diemcacmon[i]);
    }
    printf("Diem trung binh cac mon la : %.2f\n", (float) tongdiem / m);
}
