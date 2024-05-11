#include "CS_E.h"
void CS_E::Nhap() {
	cout << "Chi So E: ";
	TinhCach::Nhap();
}
void CS_E::Xuat() {
	cout << "Chi So E: ";	TinhCach::Xuat();
	if (ChiSoCao()) cout << ", Day La Chi So Cao";
	else if (ChiSoThap()) cout << ", Day La Chi So Thap";
	else cout << ", Chi So Khong Xac Dinh";
	cout << '\n';
}