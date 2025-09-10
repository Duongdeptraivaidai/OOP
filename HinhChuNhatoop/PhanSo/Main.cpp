#include"PhanSo.h"

int main() {
	PhanSo ps1, ps2;
    cout << "Nhap phan so thu nhat: ";
    ps1.nhap();
    cout << "Nhap phan so thu hai: " ;
    ps2.nhap();

    PhanSo psTong = ps1.cong(ps2);
    cout << "Tong hai phan so: ";
    psTong.xuat();

    PhanSo psHieu = ps1.tru(ps2);
    cout << "Hieu hai phan so: ";
    psHieu.xuat();

    PhanSo psTich = ps1.nhan(ps2);
    cout << "Tich hai phan so: ";
    psTich.xuat();

    PhanSo psThuong = ps1.chia(ps2);
    cout << "Thuong hai phan so: ";
    psThuong.xuat();

    return 0;
}