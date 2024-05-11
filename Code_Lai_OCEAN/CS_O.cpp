#include "CS_O.h"
void CS_O::Nhap() {
	cout << "Chi So O: ";
	TinhCach::Nhap();
}
void CS_O::Xuat() {
	cout << "Chi So O: ";	TinhCach::Xuat();
	if (ChiSoCao()) cout << ", Day La Chi So Cao";
	else if (ChiSoThap()) cout << ", Day La Chi So Thap";
	else cout << ", Chi So Khong Xac Dinh";
	cout << '\n';
}