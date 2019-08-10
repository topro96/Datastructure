#pragma once
#include "model.h"

class Control;

class View
{
public:

	Control * control;

	LopTC * TaoLop();
	LopTC * XoaLop();
	
	void MainMenu();
	void MenuLop();
	void View::MenuSinhVien();
	void View::MenuMonHoc();
	void View::MenuDSDK();

	SinhVien TaoSinhVien();

	void InSinhVien(SinhVien sv);

};

