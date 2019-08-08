#include <iostream>
#include "datastructure.h"
#include "Control.h"
#include "View.h"

int main()
{
	
	View * view = new View();
	Control * control = new Control();

	view->control = control;
	control->view = view;

	view->CauA();

	system("pause");
	return 0;
}
