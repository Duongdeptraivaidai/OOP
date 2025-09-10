#pragma once
#include<iostream>
#include<cmath>	
using namespace std;
class HaiToaDoKhongGian
{
private:
	float xA, yA, xB, yB;
public:
	float tinhKhoangCach();
	void nhap() {
		cout << "Nhap toa do diem A (xA, yA):" << endl;
		cout << "xA: ";
		cin >> xA;
		cout << "yA: ";
		cin >> yA;

		cout << "Nhap toa do diem B (xB, yB):" << endl;
		cout << "xB: ";
		cin >> xB;
		cout << "yB: ";
		cin >> yB;
	}

	void xuat() {
		cout << "Toa do diem A: (" << xA << ", " << yA << ")" << endl;
		cout << "Toa do diem B: (" << xB << ", " << yB << ")" << endl;
		float khoangCach = tinhKhoangCach();
		cout << "Khoang cach giua hai diem A va B la: " << khoangCach << endl;
	}

	float tinhKhoangCach() {
		return sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
	}


};


