#include "mne_ui_qt/assets.h"

#include <filesystem>
#include <iostream>


using namespace mnemosyne::ui_qt;


std::filesystem::path assets::sound_test_path("");


auto assets::set_asset_paths() -> bool {
	// We try to find the /assets folder
	// We will walk backwards from the working directory to find it;
	// in a proper build it ought to be in the same folder, but in
	// dev it will (probably) be higher up the tree

	namespace fs = std::filesystem;

	fs::path base_path  = fs::current_path();
	fs::path asset_path = base_path;

	// Walk down the tree until we find the folder or fail
	for (;;) {
		asset_path /= "assets";

		if (fs::exists(asset_path))
		  break;

		if (base_path.parent_path() == base_path) {
			std::cout << "ERROR: Could not find base asset path" << std::endl;
			return false;
		}

		base_path  = base_path.parent_path();
		asset_path = base_path;
	}

	std::cout << "Assets located at " << asset_path << std::endl;

	// Set sound test asset path
	assets::sound_test_path = asset_path;
	assets::sound_test_path /= "sound_test";
	if (!fs::exists(sound_test_path)) {
		std::cout << "ERROR: Could not find sound test asset path" << std::endl;
		return false;
	}
	std::cout << "Sound test located at " << assets::sound_test_path << std::endl;

	return true;
}