#include "CS_A.h"
void CS_A::Nhap() {
	cout << "Chi So A: ";
	TinhCach::Nhap();
}
void CS_A::Xuat() {
	cout << "Chi So A: ";	TinhCach::Xuat();
	if (ChiSoCao()) cout << ", Day La Chi So Cao";
	else if (ChiSoThap()) cout << ", Day La Chi So Thap";
	else cout << ", Chi So Khong Xac Dinh";
	cout << '\n';
}