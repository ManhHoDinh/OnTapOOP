#pragma once
#include"CCong.h"
class CCongSucManh :public CCong
{
private:
	float SucManh;
public:
	void Nhap();
	int ktQuaCong(CHoangTu&);
};