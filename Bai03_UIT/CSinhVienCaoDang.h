#pragma once
#include"CSinhVien.h"
class CSinhVienCaoDang :public CSinhVien
{
private:
	float DiemThiTotNghiep;
public:
	void Nhap();
	void Xuat();
	int DemTotNghiep();
};

