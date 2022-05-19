#pragma once
#include"CSinhVien.h"
#include"CSinhVienCaoDang.h"
#include"CSinhVienDaiHoc.h"
class C_UIT
{
private:
	int SoLuongSinhVien;
	CSinhVien** DanhSachSinhVien;
public:
	void Nhap();
	void Xuat();
	int DemTotNghiep();
	CSinhVien* SinhVienDTBCaoNhat();
};

