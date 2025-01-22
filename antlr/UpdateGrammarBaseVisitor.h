
// Generated from UpdateGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "UpdateGrammarVisitor.h"


/**
 * This class provides an empty implementation of UpdateGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  UpdateGrammarBaseVisitor : public UpdateGrammarVisitor {
public:

  virtual std::any visitProgram(UpdateGrammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(UpdateGrammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleExpr(UpdateGrammarParser::DoubleExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringExpr(UpdateGrammarParser::StringExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolExpr(UpdateGrammarParser::BoolExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesisExpr(UpdateGrammarParser::ParenthesisExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivExpr(UpdateGrammarParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExpr(UpdateGrammarParser::IdExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumExpr(UpdateGrammarParser::NumExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicExpr(UpdateGrammarParser::LogicExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlusMinusExpr(UpdateGrammarParser::PlusMinusExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompExpr(UpdateGrammarParser::CompExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCallExpr(UpdateGrammarParser::FuncCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(UpdateGrammarParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDeclaration(UpdateGrammarParser::ConstDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(UpdateGrammarParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompOperator(UpdateGrammarParser::CompOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintln(UpdateGrammarParser::PrintlnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(UpdateGrammarParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStatement(UpdateGrammarParser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(UpdateGrammarParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(UpdateGrammarParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(UpdateGrammarParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStatement(UpdateGrammarParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(UpdateGrammarParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }


};

