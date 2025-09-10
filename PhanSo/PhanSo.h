	#pragma once
	#include<iostream>
	using namespace std;
	class PhanSo
	{
	private:
		int tuso;
		int mauso;
		int timUCLN(int a, int b) {
			while (b != 0) {
				int temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}
	public:
		void nhap() {
			cout << "Nhap tu so: "; cin >> this->tuso;
			cout << "Nhap mau so: "; cin >> this->mauso;
		}
		void xuat() {
			cout << this->tuso <<"/" << this->mauso<< endl;
		}
		PhanSo cong(PhanSo ps2) {
			PhanSo tong;
			tong.tuso = this->tuso * ps2.mauso + this->mauso * ps2.tuso;
			tong.mauso = this->mauso * ps2.mauso;
			PhanSo ketQua = tong.rutGon();
			return ketQua;
		}
		PhanSo tru(PhanSo ps2) {
			PhanSo hieu;
			hieu.tuso = this->tuso * ps2.mauso - this->mauso * ps2.tuso;
			hieu.mauso = this->mauso * ps2.mauso;
			PhanSo ketQua = hieu.rutGon();
			return ketQua;
		}
	
		PhanSo nhan(PhanSo ps2) {
			PhanSo tich;
			tich.tuso = this->tuso * ps2.mauso;
			tich.mauso = this->mauso * ps2.tuso;
			PhanSo ketQua = tich.rutGon();
			return ketQua;
		}
		PhanSo chia(PhanSo ps2) {
			PhanSo thuong;
			thuong.tuso = this->tuso * ps2.mauso;
			thuong.mauso = this->mauso * ps2.tuso;
			PhanSo ketQua = thuong.rutGon();
			return ketQua;
		}


		PhanSo rutGon() {
			int ucln = timUCLN(this->tuso, this->mauso);
			PhanSo ketQua;
			ketQua.tuso = this->tuso / ucln;
			ketQua.mauso = this->mauso / ucln;
			return ketQua;
		}

	};

