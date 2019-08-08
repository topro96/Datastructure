#pragma once
#include "model.h"

class Control;

class View
{
public:

	Control * control;

	LopTC * TaoLop();
	LopTC * XoaLop();
	
	void CauA();

};

