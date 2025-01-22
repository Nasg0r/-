
// Generated from UpdateGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "UpdateGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by UpdateGrammarParser.
 */
class  UpdateGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by UpdateGrammarParser.
   */
    virtual void visitProgram(UpdateGrammarParser::ProgramContext *context) = 0;

    virtual void visitStatement(UpdateGrammarParser::StatementContext *context) = 0;

    virtual void visitDoubleExpr(UpdateGrammarParser::DoubleExprContext *context) = 0;

    virtual void visitStringExpr(UpdateGrammarParser::StringExprContext *context) = 0;

    virtual void visitBoolExpr(UpdateGrammarParser::BoolExprContext *context) = 0;

    virtual void visitParenthesisExpr(UpdateGrammarParser::ParenthesisExprContext *context) = 0;

    virtual void visitMulDivExpr(UpdateGrammarParser::MulDivExprContext *context) = 0;

    virtual void visitIdExpr(UpdateGrammarParser::IdExprContext *context) = 0;

    virtual void visitNumExpr(UpdateGrammarParser::NumExprContext *context) = 0;

    //virtual void visitLogicExpr(UpdateGrammarParser::LogicExprContext *context) = 0;

    virtual void visitPlusMinusExpr(UpdateGrammarParser::PlusMinusExprContext *context) = 0;

    virtual void visitCompExpr(UpdateGrammarParser::CompExprContext *context) = 0;

    virtual void visitFuncCallExpr(UpdateGrammarParser::FuncCallExprContext *context) = 0;

    virtual void visitVariableDeclaration(UpdateGrammarParser::VariableDeclarationContext *context) = 0;

    virtual void visitConstDeclaration(UpdateGrammarParser::ConstDeclarationContext *context) = 0;

    virtual void visitAssignment(UpdateGrammarParser::AssignmentContext *context) = 0;

    virtual void visitCompOperator(UpdateGrammarParser::CompOperatorContext *context) = 0;

    virtual void visitPrintln(UpdateGrammarParser::PrintlnContext *context) = 0;

    virtual void visitReturnStatement(UpdateGrammarParser::ReturnStatementContext *context) = 0;

    virtual void visitBlockStatement(UpdateGrammarParser::BlockStatementContext *context) = 0;

    virtual void visitFunctionCall(UpdateGrammarParser::FunctionCallContext *context) = 0;

    virtual void visitFunctionDefinition(UpdateGrammarParser::FunctionDefinitionContext *context) = 0;

    virtual void visitIfStatement(UpdateGrammarParser::IfStatementContext *context) = 0;

    virtual void visitElseStatement(UpdateGrammarParser::ElseStatementContext *context) = 0;

    virtual void visitWhileStatement(UpdateGrammarParser::WhileStatementContext *context) = 0;


};

