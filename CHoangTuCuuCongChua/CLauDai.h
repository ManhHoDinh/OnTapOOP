#pragma once
#include"CCongSucManh.h"
#include"CCongHocThuat.h"
#include"CCongGiaoThuong.h"
#include"CHoangTu.h"

class CLauDai
{
private:
	int SoLuongCong;
	CCong** DanhSachCong;
public:
	void Nhap();
	int ktGiaiCuuCongChua(CHoangTu&);
};