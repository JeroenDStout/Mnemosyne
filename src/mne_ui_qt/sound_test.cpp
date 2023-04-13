#include "mne_ui_qt/sound_test.h"

#include "mne_ui_qt/assets.h"

#include <iostream>
#include <filesystem>


using namespace mnemosyne::ui_qt;


sound_test::sound_test()
{
    ui_sound_test.setupUi(this);

    media_player = new QMediaPlayer(this);
    audio_output = new QAudioOutput(this);

    media_player->setAudioOutput(audio_output);
}


void sound_test::uii_test_wav()
{
    namespace fs = std::filesystem;
    
    std::cout << assets::sound_test_path << std::endl;

    fs::path wav_path = assets::sound_test_path;
    wav_path /= "Hello.wav";

    std::cout << "Playing wav (" << wav_path << ")" << std::endl;
    
    media_player->stop();
    media_player->setSource(QUrl::fromLocalFile(QString::fromStdString(wav_path.string())));
    media_player->play();
}


void sound_test::uii_test_ogg()
{
    namespace fs = std::filesystem;
    
    std::cout << assets::sound_test_path << std::endl;

    fs::path ogg_path = assets::sound_test_path;
    ogg_path /= "Hello.ogg";

    std::cout << "Playing ogg (" << ogg_path << ")" << std::endl;
    
    media_player->stop();
    media_player->setSource(QUrl::fromLocalFile(QString::fromStdString(ogg_path.string())));
    media_player->play();
}
