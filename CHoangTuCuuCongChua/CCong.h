#pragma once
#include<iostream>
using namespace std;
#include"CHoangTu.h"
class CCong
{
public:
	virtual void Nhap();
	virtual int ktQuaCong(CHoangTu&);
};