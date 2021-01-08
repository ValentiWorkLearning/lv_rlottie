cmake_minimum_required(VERSION 3.14)

set (TARGET_NAME lvgl_fs_api)

add_library( ${TARGET_NAME} STATIC )

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_C_STANDARD 11)

target_include_directories(
    ${TARGET_NAME}
    PUBLIC
    "lv_fs_if/lv_fs_if.h"
    "lv_fs_if/win_drv.h"
    ${CMAKE_CURRENT_LIST_DIR}
)

set ( TARGET_SOURCE_LIST
    "lv_fs_if/lv_fs_fatfs.c"
    "lv_fs_if/lv_fs_if.c"
    "lv_fs_if/lv_fs_pc.c"
    "lv_fs_if/lv_fs_posix.c"
)
target_sources(
    ${TARGET_NAME}
    PRIVATE
    ${TARGET_SOURCE_LIST}
)


set_source_files_properties(
    ${TARGET_SOURCE_LIST}
    PROPERTIES LANGUAGE C
)

target_link_libraries(${TARGET_NAME} PUBLIC lvgl_lib)
