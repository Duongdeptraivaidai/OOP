#include "BaDinhTamGiac.h"

int main() {
	BaDinhTamGiac tg;
	tg.nhap();
	tg.xuat();
	float cv = tg.chuViTamGiac();
	float dt = tg.dienTichTamGiac();
	cout << "Dien tich TamGiac la: " << dt << endl;
	cout << "Chuvi TamGiac la: " << cv << endl;
	return 0;

}