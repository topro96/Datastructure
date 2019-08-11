#pragma once
#include "model.h"
#include "View.h"

class Control
{
	public:
	ModelManager model;

	View *view;

	//LOP TC
	void ThemLopTC();
	void XoaLopTC(int malop);
	void SuaLopTC(int malop);
	void InDSLopTC();

	//SINH VIEN
	void ThemSinhVien();
	//tim kiem sinh vien
	void InDSSV(int nien_khoa);


	//MON HOC
	void ThemMonHoc();
	void XoaMonHoc(string mamh);
	void InDSMH();

	Control();
	~Control();
};

