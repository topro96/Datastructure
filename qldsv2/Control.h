#pragma once
#include "model.h"
#include "View.h"

class Control
{
	public:
	DSLopTC dslop;
	View *view;


	void ThemLopTC();
	void XoaLopTC();
	void SuaLopTC();

	Control();
	~Control();
};

