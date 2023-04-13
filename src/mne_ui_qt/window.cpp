#include "mne_ui_qt/window.h"
#include "version/git_version.h"


#include <iostream>


using namespace gaos::qt_demo;


mne_qt_window::mne_qt_window()
{
    ui_window.setupUi(this);
}


void mne_qt_window::uii_about()
{
    QDialog *about = new QDialog();

    ui_version.setupUi(about);
    ui_version.version_main->setText(QString("Mnemosyne\n") + gaos::version::get_git_essential_version());
    ui_version.version_compile->setText(gaos::version::get_compile_stamp());
    ui_version.version_git->setText(gaos::version::get_git_history());

    about->setWindowModality(Qt::WindowModality::ApplicationModal);
    about->show();
}