#include "HinhChuNhat.h"


void HinhChuNhat::input(){
	cout << "Nhap chieu dai:"; cin >> this->Long;
	cout << "Nhap chieu rong: "; cin >> this->wide;
}
void HinhChuNhat::output() {
	cout << "Chieu dai la: " << this->Long << endl;
	cout << "Chieu rong la: " << this->wide << endl;
}
float HinhChuNhat::dientich() {
	return this->Long * this->wide;
}
float HinhChuNhat ::chuvi() {
	return (this->Long + this->wide) * 2;
}