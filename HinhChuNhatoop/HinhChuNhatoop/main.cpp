#include"HinhChuNhat.h"

int main(){
	HinhChuNhat hcn;
	hcn.input();
	hcn.output();
	float dt = hcn.dientich();
	float cv = hcn.chuvi();
	cout << "Dien tich la: " << dt << endl;
	cout << "Chu vi la: " << cv << endl;
}