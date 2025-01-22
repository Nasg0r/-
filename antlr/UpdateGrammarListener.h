
// Generated from UpdateGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "UpdateGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by UpdateGrammarParser.
 */
class  UpdateGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(UpdateGrammarParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(UpdateGrammarParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(UpdateGrammarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(UpdateGrammarParser::StatementContext *ctx) = 0;

  virtual void enterDoubleExpr(UpdateGrammarParser::DoubleExprContext *ctx) = 0;
  virtual void exitDoubleExpr(UpdateGrammarParser::DoubleExprContext *ctx) = 0;

  virtual void enterStringExpr(UpdateGrammarParser::StringExprContext *ctx) = 0;
  virtual void exitStringExpr(UpdateGrammarParser::StringExprContext *ctx) = 0;

  virtual void enterBoolExpr(UpdateGrammarParser::BoolExprContext *ctx) = 0;
  virtual void exitBoolExpr(UpdateGrammarParser::BoolExprContext *ctx) = 0;

  virtual void enterParenthesisExpr(UpdateGrammarParser::ParenthesisExprContext *ctx) = 0;
  virtual void exitParenthesisExpr(UpdateGrammarParser::ParenthesisExprContext *ctx) = 0;

  virtual void enterMulDivExpr(UpdateGrammarParser::MulDivExprContext *ctx) = 0;
  virtual void exitMulDivExpr(UpdateGrammarParser::MulDivExprContext *ctx) = 0;

  virtual void enterIdExpr(UpdateGrammarParser::IdExprContext *ctx) = 0;
  virtual void exitIdExpr(UpdateGrammarParser::IdExprContext *ctx) = 0;

  virtual void enterNumExpr(UpdateGrammarParser::NumExprContext *ctx) = 0;
  virtual void exitNumExpr(UpdateGrammarParser::NumExprContext *ctx) = 0;

  virtual void enterLogicExpr(UpdateGrammarParser::LogicExprContext *ctx) = 0;
  virtual void exitLogicExpr(UpdateGrammarParser::LogicExprContext *ctx) = 0;

  virtual void enterPlusMinusExpr(UpdateGrammarParser::PlusMinusExprContext *ctx) = 0;
  virtual void exitPlusMinusExpr(UpdateGrammarParser::PlusMinusExprContext *ctx) = 0;

  virtual void enterCompExpr(UpdateGrammarParser::CompExprContext *ctx) = 0;
  virtual void exitCompExpr(UpdateGrammarParser::CompExprContext *ctx) = 0;

  virtual void enterFuncCallExpr(UpdateGrammarParser::FuncCallExprContext *ctx) = 0;
  virtual void exitFuncCallExpr(UpdateGrammarParser::FuncCallExprContext *ctx) = 0;

  virtual void enterVariableDeclaration(UpdateGrammarParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(UpdateGrammarParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterConstDeclaration(UpdateGrammarParser::ConstDeclarationContext *ctx) = 0;
  virtual void exitConstDeclaration(UpdateGrammarParser::ConstDeclarationContext *ctx) = 0;

  virtual void enterAssignment(UpdateGrammarParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(UpdateGrammarParser::AssignmentContext *ctx) = 0;

  virtual void enterCompOperator(UpdateGrammarParser::CompOperatorContext *ctx) = 0;
  virtual void exitCompOperator(UpdateGrammarParser::CompOperatorContext *ctx) = 0;

  virtual void enterPrintln(UpdateGrammarParser::PrintlnContext *ctx) = 0;
  virtual void exitPrintln(UpdateGrammarParser::PrintlnContext *ctx) = 0;

  virtual void enterReturnStatement(UpdateGrammarParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(UpdateGrammarParser::ReturnStatementContext *ctx) = 0;

  virtual void enterBlockStatement(UpdateGrammarParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(UpdateGrammarParser::BlockStatementContext *ctx) = 0;

  virtual void enterFunctionCall(UpdateGrammarParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(UpdateGrammarParser::FunctionCallContext *ctx) = 0;

  virtual void enterFunctionDefinition(UpdateGrammarParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(UpdateGrammarParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterIfStatement(UpdateGrammarParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(UpdateGrammarParser::IfStatementContext *ctx) = 0;

  virtual void enterElseStatement(UpdateGrammarParser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(UpdateGrammarParser::ElseStatementContext *ctx) = 0;

  virtual void enterWhileStatement(UpdateGrammarParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(UpdateGrammarParser::WhileStatementContext *ctx) = 0;


};

