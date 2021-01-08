add_library(
    graphics_backend
    gs_platform_layer.cpp
)

target_link_libraries(
    graphics_backend
    PRIVATE
    lvgl_lib
    UtilsLibrary
    logger_service
)

target_compile_definitions(
    graphics_backend
    PRIVATE
    USE_WINSDL_BACKEND
)
target_link_libraries(
    graphics_backend
    PRIVATE
    lvgl_drivers
)

