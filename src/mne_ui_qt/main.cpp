#include "mne_ui_qt/window.h"
#include "mne_ui_qt/assets.h"
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

    if (!mnemosyne::ui_qt::assets::set_asset_paths())
      return -1;

    QApplication a(argc, argv);
    mnemosyne::ui_qt::main_window w;
    w.setWindowTitle(QString("Mnemosyne ") + gaos::version::get_git_essential_version());
    w.show();
    return a.exec();
}
