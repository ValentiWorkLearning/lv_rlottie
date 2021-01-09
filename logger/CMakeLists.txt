add_library(
    logger_service
    logger_service_impl.cpp
)

target_include_directories(
    logger_service
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/inc
    UtilsLibrary
)

target_compile_features(
    logger_service
    PUBLIC
    cxx_std_17
)

target_link_libraries(
    logger_service
    PUBLIC
    UtilsLibrary
    PRIVATE
)
target_compile_definitions(
    logger_service
    PRIVATE
    LoggerDesktop
)