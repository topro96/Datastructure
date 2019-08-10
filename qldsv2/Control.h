#pragma once
#include "model.h"
#include "View.h"

class Control
{
	public:
	ModelManager model;

	View *view;


	void ThemLopTC();
	void XoaLopTC(int malop);
	void SuaLopTC(int malop);
	void InDSLopTC();

	void ThemSinhVien();
	void XoaSinhVien();
	void SuaSinhVien();

	void ThemMonHoc();
	void xoaMonHoc();
	void SuaMonHoc();

	//tim kiem sinh vien
	void InDSSV(int nien_khoa);

	Control();
	~Control();
};

