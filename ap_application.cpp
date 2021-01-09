#include "ap_application.hpp"

#include "graphics/gs_lvgl_service.hpp"
#include "logger/logger_service.hpp"

#include <optional>


Application::Application()
{
    initGraphicsStack();
}

Application::~Application() = default;

void
Application::initGraphicsStack()
{
    m_graphicsService = Graphics::createGraphicsService();
}

void
Application::runApplicationLoop()
{
    while (true)
    {
        m_graphicsService->executeGlTask();
    }
}
