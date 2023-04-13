#include "mne_ui_qt/sound_test.h"


#include <iostream>


using namespace mnemosyne::ui_qt;


sound_test::sound_test()
{
    ui_sound_test.setupUi(this);
}


void sound_test::uii_test_wav()
{
    std::cout << "Playing wav" << std::endl;
}


void sound_test::uii_test_ogg()
{
    std::cout << "Playing ogg" << std::endl;
}
