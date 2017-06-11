custom_add_library_from_dir(libhello)
custom_enable_cxx17(libhello)
target_include_directories(libhello INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/..)
