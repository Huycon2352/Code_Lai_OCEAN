#include "TinhCach.h"
void TinhCach::Nhap() {
	do {
		cin >> ChiSo;
	} while ((ChiSo < 0 || ChiSo >100)&& cout <<"Nhap Lai Chi So Nay di: ");
}
bool TinhCach::ChiSoCao(){
	return ChiSo > 70;
}
bool TinhCach::ChiSoThap(){
	return ChiSo < 30;
}
void TinhCach::Xuat() {
	cout << ChiSo;
}
