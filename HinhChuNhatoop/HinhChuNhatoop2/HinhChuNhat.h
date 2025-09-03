#pragma once
#include<iostream>
using namespace std;
class HinhChuNhat
{
private:
	float chieuDai;
	float chieuRong;
public:
	void nhap() {
		cout << "Nhat chieu dai: ";
		cin >> this->chieuDai;
		cout << "Nhat chieu rong: ";
		cin >> this->chieuRong;
	}
	void xuat() {
		cout << "Chieu dai la: " << this->chieuDai << endl;
		cout << "Chieu rong la: " << this->chieuRong << endl;
	}
	float dientich() {
		return this->chieuDai * this->chieuRong;
	}
	float chuvi() {
		return (this->chieuDai + this->chieuRong) * 2;
	}
};

