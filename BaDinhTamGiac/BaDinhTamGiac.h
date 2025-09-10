#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class BaDinhTamGiac
{
private:
	float A,B,C;
public:
	void nhap() {
		cout << "Nhap gia tri ba dinh tam giac ABC: " << endl;
		cout << "A: "; cin >> this->A;
		cout << "B: "; cin >> this->B;
		cout << "C: "; cin >> this->C;
	}
	void xuat() {
		cout << "Ba dinh tam gia lan luoc la: " << "A = " << this->A << "\n" << "B = " << this->B << "\n" << "C = " << this->C << endl;
	}

	float chuViTamGiac() {
		float chuvi = (A + B + C) / 2;
		return chuvi;
	}

	float dienTichTamGiac() {
		float x = chuViTamGiac() - A;
		float y = chuViTamGiac() - B;
		float z = chuViTamGiac() - C;
		float chuvi = sqrt((chuViTamGiac() * x * y * z));
		return chuvi;
	}
};

