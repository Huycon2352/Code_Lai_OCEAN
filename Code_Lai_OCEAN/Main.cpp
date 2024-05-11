#include "Nguoi.h"
int main() {

	Nguoi Human1;
	cout << "Nhap Chi So Cua 1 Nguoi\n";
	Human1.Nhap();
	int n;
	cout << "Nhom nguoi: ";
	cin >> n;
	Nguoi* Human = new Nguoi[n];
	for (int i = 0; i < n; i++) {
		cout << "Nguoi Thu " << i + 1 << "\n";
		Human[i].Nhap();
	}
	cout << "Nguoi Ban can tim: ";
	int k;
	cin >> k;
	Human[k - 1].Xuat();
	
	cout << "Nhung Nguoi Nha Tuyen Dung Can Luu Y La: ";
		for (int i = 0; i < n;i++) {
			if (Human[i].Warn()) cout << i + 1 << " ";
		}

	system("pause");
}
