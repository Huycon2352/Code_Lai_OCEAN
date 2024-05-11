#include "CS_N.h"
void CS_N::Nhap() {
	cout << "Chi So N: ";
	TinhCach::Nhap();
}
void CS_N::Xuat() {
	cout << "Chi So N: ";	TinhCach::Xuat();
	if (ChiSoCao()) cout << ", Day La Chi So Cao";
	else if (ChiSoThap()) cout << ", Day La Chi So Thap";
	else cout << ", Chi So Khong Xac Dinh";
	cout << '\n';
}