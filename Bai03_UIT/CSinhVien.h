#pragma once
#include<iostream>
using namespace std;
#include<string>
class CSinhVien
{
protected:
	string MaSoSinhVien;
	string HoTen;
	string DiaChi;
	int SoTinChi;
	float DiemTrungBinh;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int DemTotNghiep();
	virtual CSinhVien* SinhVienDTBCaoNhat();
	float getDTB();
};

