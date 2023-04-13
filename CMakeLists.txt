#
#       * * * * * * * * * *
#      * * * Mnemosyne * * *
#       * * * * * * * * * *
#

cmake_minimum_required(VERSION 3.15) 

project(Mnemosyne)
include(cmake/project.cmake)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Languages
include(cmake/cxx.cmake)
include(cmake/python.cmake)

# Support
include(cmake/artefacts.cmake)
include(cmake/sources.cmake)
include(cmake/qt.cmake)

# Assets
include(cmake/assets.cmake)

# Subprojects
add_subdirectory(src/mne_ui_qt)
add_subdirectory(src/version)
