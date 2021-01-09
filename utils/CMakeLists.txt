add_library( UtilsLibrary INTERFACE )

target_compile_features(
    UtilsLibrary
    INTERFACE
    cxx_std_17
)

target_include_directories(
    UtilsLibrary
    INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/inc
)

target_compile_definitions(
    UtilsLibrary
    INTERFACE
    USE_DESKTOP_SIMULATOR
    _CRT_SECURE_NO_WARNINGS
)

target_link_libraries(
    UtilsLibrary
    INTERFACE
    logger_service
)
