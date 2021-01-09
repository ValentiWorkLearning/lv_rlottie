cmake_minimum_required(VERSION 3.14)
set (TARGET_NAME rlottie_graphics)

add_library( ${TARGET_NAME} STATIC )

add_subdirectory (lvgl_lib)
add_subdirectory (platform)
add_subdirectory (rlottie_samsung)
add_subdirectory (lv_rlottie)

target_include_directories(
    ${TARGET_NAME}
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

target_sources(
    ${TARGET_NAME}
    PRIVATE
    gs_lvgl_service.cpp
    lvgl_test.hpp
    lvgl_material_loader.hpp
)

target_link_libraries(
    ${TARGET_NAME}
    PRIVATE
    lvgl_lib
    UtilsLibrary
    logger_service
    graphics_backend
    lv_rlottie
)

target_link_options(
    ${TARGET_NAME}
    PUBLIC
    ${CPU_FLAGS}
)

target_compile_options(
    ${TARGET_NAME}
    PUBLIC
    $<$<CONFIG:Debug>:-Os>
    $<$<CONFIG:Release>:-Os>
    ${COMMON_FLAGS}
)

set( EXAMPLES_PATH ${CMAKE_CURRENT_LIST_DIR}//rlottie_samsung//rlottie//example )
get_filename_component(EXAMPLES_PATH_NORMALIZED "${EXAMPLES_PATH}" ABSOLUTE)

target_compile_definitions(${TARGET_NAME} PRIVATE EXAMPLES_DIR="${EXAMPLES_PATH_NORMALIZED}" )