#pragma once
#include"CSinhVien.h"
class CSinhVienDaiHoc:public CSinhVien
{
private:
	string TenLuanVan;
	float DiemLuanVan;
public:
	void Nhap();
	void Xuat();
	int ktTotNghiep();
	float DiemTrungBinhCuaSinhVienDaiHoc();
};


