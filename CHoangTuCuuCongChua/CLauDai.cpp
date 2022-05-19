#include "CLauDai.h"
void CLauDai::Nhap()
{
	cout << "\nNhap so luong cong : ";
	cin >> SoLuongCong;
	
	DanhSachCong = new CCong * [SoLuongCong];
	
	for (int i = 0; i < SoLuongCong; i++)
	{
		cout << "Nhap thong tin cong thu " << i + 1 << " : ";
		cout << "\n0.Cong Giao Thuong";
		cout << "\n1.Cong Hoc Thuat";
		cout << "\n2.Cong Suc Manh";
		cout << "\nNhap lua chon : ";
		
		int LuaChon;
		cin >> LuaChon;
		
		if (LuaChon == 0)
			DanhSachCong[i] = new CCongGiaoThuong;
		else if (LuaChon == 1)
			DanhSachCong[i] = new CCongHocThuat;
		else
			DanhSachCong[i] = new CCongSucManh;
		
		DanhSachCong[i]->Nhap();
	}
}

int CLauDai::ktGiaiCuuCongChua(CHoangTu&x)
{
	for (int i = 0; i < SoLuongCong; i++)
		if (DanhSachCong[i]->ktQuaCong(x) == 0)
			return 0;
	return 1;
}