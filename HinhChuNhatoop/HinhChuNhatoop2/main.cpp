#include"HinhChuNhat.h"

int main() {
	HinhChuNhat hcn;
	hcn.nhap();
	hcn.xuat();
	float dt = hcn.dientich();
	float cv = hcn.chuvi();
	cout << "Dien tich la: " << dt << endl;
	cout << "Chu vi la: " << cv << endl;
}