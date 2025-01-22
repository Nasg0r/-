
// Generated from UpdateGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "UpdateGrammarListener.h"


/**
 * This class provides an empty implementation of UpdateGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  UpdateGrammarBaseListener : public UpdateGrammarListener {
public:

  virtual void enterProgram(UpdateGrammarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(UpdateGrammarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(UpdateGrammarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(UpdateGrammarParser::StatementContext * /*ctx*/) override { }

  virtual void enterDoubleExpr(UpdateGrammarParser::DoubleExprContext * /*ctx*/) override { }
  virtual void exitDoubleExpr(UpdateGrammarParser::DoubleExprContext * /*ctx*/) override { }

  virtual void enterStringExpr(UpdateGrammarParser::StringExprContext * /*ctx*/) override { }
  virtual void exitStringExpr(UpdateGrammarParser::StringExprContext * /*ctx*/) override { }

  virtual void enterBoolExpr(UpdateGrammarParser::BoolExprContext * /*ctx*/) override { }
  virtual void exitBoolExpr(UpdateGrammarParser::BoolExprContext * /*ctx*/) override { }

  virtual void enterParenthesisExpr(UpdateGrammarParser::ParenthesisExprContext * /*ctx*/) override { }
  virtual void exitParenthesisExpr(UpdateGrammarParser::ParenthesisExprContext * /*ctx*/) override { }

  virtual void enterMulDivExpr(UpdateGrammarParser::MulDivExprContext * /*ctx*/) override { }
  virtual void exitMulDivExpr(UpdateGrammarParser::MulDivExprContext * /*ctx*/) override { }

  virtual void enterIdExpr(UpdateGrammarParser::IdExprContext * /*ctx*/) override { }
  virtual void exitIdExpr(UpdateGrammarParser::IdExprContext * /*ctx*/) override { }

  virtual void enterNumExpr(UpdateGrammarParser::NumExprContext * /*ctx*/) override { }
  virtual void exitNumExpr(UpdateGrammarParser::NumExprContext * /*ctx*/) override { }

  virtual void enterLogicExpr(UpdateGrammarParser::LogicExprContext * /*ctx*/) override { }
  virtual void exitLogicExpr(UpdateGrammarParser::LogicExprContext * /*ctx*/) override { }

  virtual void enterPlusMinusExpr(UpdateGrammarParser::PlusMinusExprContext * /*ctx*/) override { }
  virtual void exitPlusMinusExpr(UpdateGrammarParser::PlusMinusExprContext * /*ctx*/) override { }

  virtual void enterCompExpr(UpdateGrammarParser::CompExprContext * /*ctx*/) override { }
  virtual void exitCompExpr(UpdateGrammarParser::CompExprContext * /*ctx*/) override { }

  virtual void enterFuncCallExpr(UpdateGrammarParser::FuncCallExprContext * /*ctx*/) override { }
  virtual void exitFuncCallExpr(UpdateGrammarParser::FuncCallExprContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(UpdateGrammarParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(UpdateGrammarParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterConstDeclaration(UpdateGrammarParser::ConstDeclarationContext * /*ctx*/) override { }
  virtual void exitConstDeclaration(UpdateGrammarParser::ConstDeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(UpdateGrammarParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(UpdateGrammarParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterCompOperator(UpdateGrammarParser::CompOperatorContext * /*ctx*/) override { }
  virtual void exitCompOperator(UpdateGrammarParser::CompOperatorContext * /*ctx*/) override { }

  virtual void enterPrintln(UpdateGrammarParser::PrintlnContext * /*ctx*/) override { }
  virtual void exitPrintln(UpdateGrammarParser::PrintlnContext * /*ctx*/) override { }

  virtual void enterReturnStatement(UpdateGrammarParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(UpdateGrammarParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterBlockStatement(UpdateGrammarParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(UpdateGrammarParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterFunctionCall(UpdateGrammarParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(UpdateGrammarParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(UpdateGrammarParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(UpdateGrammarParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterIfStatement(UpdateGrammarParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(UpdateGrammarParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterElseStatement(UpdateGrammarParser::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(UpdateGrammarParser::ElseStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(UpdateGrammarParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(UpdateGrammarParser::WhileStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

