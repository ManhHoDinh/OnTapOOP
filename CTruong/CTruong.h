#pragma once
#include"CSinhVienCaoDang.h"
#include"CSinhVienDaiHoc.h"
class CTruong
{
private:
	int SoLuongSinhVien;
	CSinhVien** DanhSachSinhVien;
public:
	void Nhap();
	void Xuat();
	int DemTotNghiep();
	CSinhVien* SinhVienDaiHocDiemTrungBinhCaoNhat();

};

