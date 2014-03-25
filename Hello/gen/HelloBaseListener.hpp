// Generated from Hello.g4 by ANTLR 4.x
#ifndef HELLO_BASE_LISTENER_INCLUDED
#define HELLO_BASE_LISTENER_INCLUDED

#include "Antlr4Runtime/ParserRuleContext.hpp"
#include "Antlr4Runtime/TerminalNode.hpp"
#include "Antlr4Runtime/ErrorNode.hpp"
#include "HelloListener.hpp"
#include "HelloParser.hpp"

class HelloBaseListener : public HelloListener {
    HelloBaseListener(const HelloBaseListener &other) = delete;
    HelloBaseListener(HelloBaseListener &&other) = delete;
    HelloBaseListener &operator=(const HelloBaseListener &other) = delete;
    HelloBaseListener &operator=(HelloBaseListener &&other) = delete;

public:
    virtual void enterR(const HelloParser::RContext &ctx) { }
    virtual void exitR(const HelloParser::RContext &ctx) { }

    virtual void enterEveryRule(const ParserRuleContext &ctx) { }
    virtual void exitEveryRule(const ParserRuleContext &ctx) { }
    virtual void visitTerminal(const TerminalNode &node) { }
    virtual void visitErrorNode(const ErrorNode &node) { }

protected:
    HelloBaseListener() { }
    virtual ~HelloBaseListener() { }
};

#endif
