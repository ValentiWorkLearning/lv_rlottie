cmake_minimum_required(VERSION 3.14)

project(rlottie-lvgl C CXX ASM)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_subdirectory(utils)
add_subdirectory(graphics)
add_subdirectory(logger)

set (APP_TARGET RlottieLvgl)
add_executable(${APP_TARGET} ${PROJECT_SOURCES})

target_sources(
    ${APP_TARGET}
    PRIVATE
    main.cpp
    ap_application.cpp
)

target_link_libraries(
    ${APP_TARGET}
    PRIVATE
    logger_service
    graphics_backend
    rlottie_graphics
)

target_compile_features(
    ${APP_TARGET}
    PRIVATE
    cxx_std_17
)