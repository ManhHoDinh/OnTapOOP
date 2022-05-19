#pragma once
#include"CCong.h"
class CCongHocThuat :public CCong
{
private:
	float TriTueCauHoi;
public:
	void Nhap();
	int ktQuaCong(CHoangTu&);
};

