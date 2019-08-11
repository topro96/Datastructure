#pragma once
#include "model.h"

class Control;

class View
{
public:

	Control * control;

	
	void MainMenu();
	void MenuLop();
	void MenuSinhVien();
	void MenuMonHoc();
	void MenuDSDK();



	LopTC * TaoLop();
	SinhVien TaoSinhVien();
	void InSinhVien(SinhVien sv);
	void InMonHoc(MonHoc mh);
	MonHoc TaoMonHoc();

};

