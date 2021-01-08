#pragma once

#include "utils/MetaUtils.hpp"
#include <memory>

namespace Graphics
{
    class PlatformBackend;
};
namespace Graphics
{

class LvglGraphicsService
{

public:

    explicit LvglGraphicsService();

    ~LvglGraphicsService();

    void executeGlTask();

private:

    void initMainWindow();

private:

    class GSLvglServiceImpl;
    std::unique_ptr<GSLvglServiceImpl> m_pGraphicsServiceImpl;

};

std::unique_ptr<LvglGraphicsService> createGraphicsService();

};
