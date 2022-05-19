#pragma once
#include"CVeTronGoi.h"
#include"CVeTungPhan.h"
class CCongVien
{
private:
	int SoLuongVe;
	CVe** DanhSachVe;
public:
	void Nhap();
	void Xuat();
	long TinhTien();
	int DemVeTungPhan();
};

