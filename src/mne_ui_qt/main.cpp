#include "mne_ui_qt/window.h"
#include "version/git_version.h"

#include <QtWidgets/QApplication>

#include <iostream>


int main(int argc, char *argv[])
{
    std::cout
      << std::endl
      << "          * * * * * * * * * * " << std::endl
      << "         * * * Mnemosyne * * * " << std::endl
      << "          * * * * * * * * * * " << std::endl
      << std::endl
      << gaos::version::get_git_essential_version() << std::endl
      << gaos::version::get_compile_stamp() << std::endl
      << std::endl
      << gaos::version::get_git_history() << std::endl
      << std::endl;

    QApplication a(argc, argv);
    gaos::qt_demo::mne_qt_window w;
    w.setWindowTitle(QString("Mnemosyne ") + gaos::version::get_git_essential_version());
    w.show();
    return a.exec();
}
