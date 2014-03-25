// Generated from Hello.g4 by ANTLR 4.x
#ifndef HELLO_LISTENER_INCLUDED
#define HELLO_LISTENER_INCLUDED

#include "Antlr4Runtime/ParseTreeListener.hpp"
#include "HelloParser.hpp"

class HelloListener : public ParseTreeListener {
    HelloListener(const HelloListener &other) = delete;
    HelloListener(HelloListener &&other) = delete;
    HelloListener &operator=(const HelloListener &other) = delete;
    HelloListener &operator=(HelloListener &&other) = delete;

public:
    virtual void enterR(const HelloParser::RContext &ctx) = 0;
    virtual void exitR(const HelloParser::RContext &ctx) = 0;

protected:
    HelloListener() { }
    virtual ~HelloListener() { }
};

#endif
