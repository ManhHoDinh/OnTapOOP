#pragma once

class CHoangTu
{
private:
	float TaiSan;
	float TriTue;
	float SucManh;
public:
	void Nhap();
	void Xuat();
	float GetTaiSan();
	float GetTriTue();
	float GetSucManh();
	void SetTaiSan(float);
	void SetTriTue(float);
	void SetSucManh(float);
};

