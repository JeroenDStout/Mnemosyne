#pragma once

#include "mne_ui_qt/ui_window.h"
#include "mne_ui_qt/ui_version.h"
#include "mne_ui_qt/ui_sound_test.h"

#include <QtWidgets/QMainWindow>


namespace mnemosyne::ui_qt {

    // Empty window
    class sound_test : public QDialog
    {
        Q_OBJECT

      public:
        sound_test();
        
      public slots:
        void uii_test_wav();
        void uii_test_ogg();

      private:
        Ui::sound_test  ui_sound_test;
    };

}
