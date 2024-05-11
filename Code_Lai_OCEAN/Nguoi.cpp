#include "Nguoi.h"
bool Nguoi::Warn() { //OCEAN
	if (Nguoi[1]->ChiSoThap() || Nguoi[4]->ChiSoCao())
		return true;
	return false;
}
void Nguoi::Nhap() {
	Nguoi[0] = new CS_O;	Nguoi[0]->Nhap();
	Nguoi[1] = new CS_C;	Nguoi[1]->Nhap();
	Nguoi[2] = new CS_E;	Nguoi[2]->Nhap();
	Nguoi[3] = new CS_A;	Nguoi[3]->Nhap();
	Nguoi[4] = new CS_N;	Nguoi[4]->Nhap();
}
void Nguoi::Xuat() {
	for (int i = 0; i < 5;i++) {
		Nguoi[i]->Xuat();
	}
}
