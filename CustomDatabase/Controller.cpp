#include "Controller.h"

Controller::Controller(std::shared_ptr<AbstractView> abstractViewPtr, std::shared_ptr<Model> modelPtr):
	abstractViewPtr(abstractViewPtr),
	modelPtr(modelPtr)
{

}
