#include "CS_C.h"
void CS_C::Nhap() {
	cout << "Chi So C: ";
	TinhCach::Nhap();
}
void CS_C::Xuat() {
	cout << "Chi So C: ";	TinhCach::Xuat();
	if (ChiSoCao()) cout << ", Day La Chi So Cao";
	else if (ChiSoThap()) cout << ", Day La Chi So Thap";
	else cout << ", Chi So Khong Xac Dinh";
	cout << '\n';
}