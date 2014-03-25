#pragma once

#include "HelloBaseListener.hpp"

class TestListener : public HelloBaseListener
{
    TestListener(const TestListener &other) = delete;
    TestListener(TestListener &&other) = delete;
    TestListener &operator=(const TestListener &other) = delete;
    TestListener &operator=(TestListener &&other) = delete;

public:
    TestListener() { }
    ~TestListener() { }

public:
    virtual void enterR(const HelloParser::RContext &ctx) { }
};

