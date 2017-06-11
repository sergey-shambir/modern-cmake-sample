custom_add_library_from_dir(libgoodbye)
custom_enable_cxx17(libgoodbye)
target_include_directories(libgoodbye INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/..)
