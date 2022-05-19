#pragma once
#include"CCong.h"
class CCongGiaoThuong:public CCong
{
private:
	float DonGia;
	int SoHang;
public:
	void Nhap();
	int ktQuaCong(CHoangTu&);
};

