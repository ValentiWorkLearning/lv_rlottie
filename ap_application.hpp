#pragma once

#include "graphics/gs_lvgl_service.hpp"

class Application
{

public:

    Application();

    ~Application();

public:

    void runApplicationLoop();

private:

    void initGraphicsStack();

private:
    std::unique_ptr<Graphics::LvglGraphicsService> m_graphicsService;
};
