#pragma once
#include "CS_O.h"
#include "CS_C.h"
#include "CS_E.h"
#include "CS_A.h"
#include "CS_N.h"

class Nguoi
{
private:
	TinhCach* Nguoi[5];
public:
	bool Warn();
	void Xuat();
	void Nhap();
};

