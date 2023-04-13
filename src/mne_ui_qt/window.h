#pragma once

#include "mne_ui_qt/ui_window.h"
#include "mne_ui_qt/ui_version.h"

#include <QtWidgets/QMainWindow>


namespace gaos::qt_demo {

    // Empty window
    class mne_qt_window : public QMainWindow
    {
        Q_OBJECT

      public:
        mne_qt_window();
        
      public slots:
        void uii_about();

      private:
        Ui::demo_window ui_window;
        Ui::version     ui_version;
    };

}