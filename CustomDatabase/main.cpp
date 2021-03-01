#include "MainWindow.h"
#include "Model/Model.h"
#include "Controller/Controller.h"
#include <memory>
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    std::shared_ptr<MainWindow> mainWindowPtr = std::make_shared<MainWindow>();
    std::shared_ptr<Model> modelPtr = std::make_shared<Model>();
    std::shared_ptr<Controller> controllerPtr = std::make_shared<Controller>();

    controllerPtr->setModel(modelPtr);
    controllerPtr->setView(mainWindowPtr);
    mainWindowPtr->setController(controllerPtr);

    mainWindowPtr->show();
    return a.exec();
}
