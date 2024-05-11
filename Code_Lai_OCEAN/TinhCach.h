#pragma once
#include <iostream>
using namespace std;
class TinhCach
{
private :
	int ChiSo;
public :
	bool ChiSoCao();
	bool ChiSoThap();
	virtual void Nhap();
	virtual void Xuat();
};


