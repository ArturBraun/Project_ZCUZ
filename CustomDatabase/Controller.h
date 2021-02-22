#ifndef CONTROLLER
#define CONTROLLER

#include "Model.h"
#include "AbstractView.h"
#include <iostream>

class Controller
{
public:
	Controller(std::shared_ptr<AbstractView> abstractViewPtr, std::shared_ptr<Model> modelPtr);

private:
	std::shared_ptr<AbstractView> abstractViewPtr;
	std::shared_ptr<Model> modelPtr;
};

#endif CONTROLLER