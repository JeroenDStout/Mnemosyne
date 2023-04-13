init_directory(mnemosyne_ui_qt)

# Define the Version project
init_project(mnemosyne_ui_qt "Mnemosyne/Qt")

# Sources
setup_project_source(mnemosyne_ui_qt "core"
  main.cpp
)
setup_project_source(mnemosyne_ui_qt "window"
  window.cpp
  window.h
)
setup_project_source_qt_ui(mnemosyne_ui_qt "window"
  window.ui
  version.ui
)

# Target
configure_project_executable(mnemosyne_ui_qt)
configure_project_console(mnemosyne_ui_qt)
configure_cxx_target(mnemosyne_ui_qt)
configure_qt_target(mnemosyne_ui_qt)
	
add_dependencies(mnemosyne_ui_qt version)
configure_asset_folder(mnemosyne_ui_qt mnemosyne_ui_qt_assets ${project_asset_dir}/sound_test assets/sound_test)
