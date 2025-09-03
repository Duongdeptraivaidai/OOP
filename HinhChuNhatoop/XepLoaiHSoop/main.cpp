#include"XepLoaiHS.h"

int main() {
	XepLoaiHS xl;
	xl.nhap();
	xl.xuat();
	float dtb = xl.diemTB();
	string xeploai = xl.xepLoai();
	cout << "Diem trung binh la: " << dtb << endl;
	cout << "Xep loai: " << xeploai << endl;
	return 0;
}