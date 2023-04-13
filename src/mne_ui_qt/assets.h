#pragma once

#include <filesystem>


namespace mnemosyne::ui_qt::assets {

	auto set_asset_paths() -> bool /* success */;

	extern std::filesystem::path sound_test_path;

}