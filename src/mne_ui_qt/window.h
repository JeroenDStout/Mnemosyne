#pragma once

#include "mne_ui_qt/ui_window.h"
#include "mne_ui_qt/ui_version.h"
#include "mne_ui_qt/ui_sound_test.h"

#include <QtWidgets/QMainWindow>


namespace mnemosyne::ui_qt {

    // Empty window
    class main_window : public QMainWindow
    {
        Q_OBJECT

      public:
        main_window();
        
      public slots:
        void uii_about();
        void uii_sound_test();

      private:
        Ui::mne_window  ui_window;
        Ui::version     ui_version;
    };

}