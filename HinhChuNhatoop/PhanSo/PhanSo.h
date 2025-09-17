#pragma once
#include<iostream>
using namespace std;
class PhanSo
{
private:
	int tuSo;
	int mauSo;
	int timUCLN(int a, int b) {
		while (b != 0) {
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
public:
	PhanSo() {
		this->tuSo = 0;
		this->mauSo = 0;
	}
	PhanSo(int tuso, int mauso) {
		this->tuSo = tuso;
		this->mauSo = mauso;
	}
	~PhanSo() {
		cout << "Huy phan so" << tuSo << " " << mauSo << endl;
	}

	void nhap() {
		cout << "Nhap tu so: "; cin >> this->tuSo;
		cout << "Nhap mau so: "; cin >> this->mauSo;
	}
	void xuat() {
		cout << this->tuSo << "/" << this->mauSo << endl;
	}
	PhanSo cong(PhanSo ps2) {
		PhanSo tong;
		tong.tuSo = this->tuSo * ps2.mauSo + this->mauSo * ps2.tuSo;
		tong.mauSo = this->mauSo * ps2.mauSo;
		PhanSo ketQua = tong.rutGon();
		return ketQua;
	}
	PhanSo tru(PhanSo ps2) {
		PhanSo hieu;
		hieu.tuSo = this->tuSo * ps2.mauSo - this->mauSo * ps2.tuSo;
		hieu.mauSo = this->mauSo * ps2.mauSo;
		PhanSo ketQua = hieu.rutGon();
		return ketQua;
	}

	PhanSo nhan(PhanSo ps2) {
		PhanSo tich;
		tich.tuSo = this->tuSo * ps2.tuSo;
		tich.mauSo = this->mauSo * ps2.mauSo;
		return tich.rutGon();
	}
	PhanSo chia(PhanSo ps2) {
		if (ps2.tuSo == 0) {
			cout << "Khong the chia cho phan so 0!" << endl;
			return PhanSo(0, 1);
		}
		PhanSo thuong;
		thuong.tuSo = this->tuSo * ps2.mauSo;
		thuong.mauSo = this->mauSo * ps2.tuSo;
		return thuong.rutGon();
	}

	PhanSo rutGon() {
		int ucln = timUCLN(abs(this->tuSo), abs(this->mauSo));
		PhanSo ketQua;
		ketQua.tuSo = this->tuSo / ucln;
		ketQua.mauSo = this->mauSo / ucln;
		if (ketQua.mauSo < 0) {
			ketQua.mauSo = -ketQua.mauSo;
			ketQua.tuSo = -ketQua.tuSo;
		}
		return ketQua;
	}

};
