#pragma once
#include<iostream>
#include<string>
using namespace std;

class CSinhVien
{
protected:
	string MaSo;
	string HoTen;
	string DiaChi;
	int TongSoTinChi;
	float DiemTrungBinh;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int ktTotNghiep();
	virtual float DiemTrungBinhCuaSinhVienDaiHoc();
};

