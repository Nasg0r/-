
// Generated from UpdateGrammar.g4 by ANTLR 4.13.2


#include "UpdateGrammarListener.h"
#include "UpdateGrammarVisitor.h"

#include "UpdateGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct UpdateGrammarParserStaticData final {
  UpdateGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UpdateGrammarParserStaticData(const UpdateGrammarParserStaticData&) = delete;
  UpdateGrammarParserStaticData(UpdateGrammarParserStaticData&&) = delete;
  UpdateGrammarParserStaticData& operator=(const UpdateGrammarParserStaticData&) = delete;
  UpdateGrammarParserStaticData& operator=(UpdateGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag updategrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<UpdateGrammarParserStaticData> updategrammarParserStaticData = nullptr;

void updategrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (updategrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(updategrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UpdateGrammarParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "expression", "variableDeclaration", "constDeclaration", 
      "assignment", "compOperator", "println", "returnStatement", "blockStatement", 
      "functionCall", "functionDefinition", "ifStatement", "elseStatement", 
      "whileStatement"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'var'", "'='", "'const'", "'println'", "'return'", 
      "'{'", "'}'", "','", "'fun'", "'if'", "'else'", "'while'", "", "", 
      "", "", "", "'*'", "'/'", "'+'", "'-'", "'||'", "'&&'", "'=='", "'!='", 
      "'>'", "'>='", "'<'", "'<='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", 
      "NUMBER", "DOUBLE_NUMBER", "STRING_LITERAL", "BOOL", "ASTERISK", "SLASH", 
      "PLUS", "MINUS", "LOGICAL_OR", "LOGICAL_AND", "EQUAL", "NOT_EQUAL", 
      "GREATER", "GREATER_OR_EQUAL", "LESS", "LESS_OR_EQUAL", "SPACE", "NEW_LINE", 
      "LINE_COMMENT", "MULTI_LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,35,167,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,5,0,32,8,0,10,0,12,0,35,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,3,1,49,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	3,2,62,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,77,
  	8,2,10,2,12,2,80,9,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,5,9,106,8,9,10,9,12,9,
  	109,9,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,5,10,118,8,10,10,10,12,10,121,
  	9,10,3,10,123,8,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,5,11,133,8,
  	11,10,11,12,11,136,9,11,3,11,138,8,11,1,11,1,11,1,11,5,11,143,8,11,10,
  	11,12,11,146,9,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,3,12,156,8,
  	12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,0,1,4,15,0,2,4,6,
  	8,10,12,14,16,18,20,22,24,26,28,0,4,1,0,20,21,1,0,22,23,1,0,24,25,1,0,
  	26,31,178,0,33,1,0,0,0,2,48,1,0,0,0,4,61,1,0,0,0,6,81,1,0,0,0,8,86,1,
  	0,0,0,10,91,1,0,0,0,12,95,1,0,0,0,14,97,1,0,0,0,16,100,1,0,0,0,18,103,
  	1,0,0,0,20,112,1,0,0,0,22,126,1,0,0,0,24,149,1,0,0,0,26,157,1,0,0,0,28,
  	160,1,0,0,0,30,32,3,2,1,0,31,30,1,0,0,0,32,35,1,0,0,0,33,31,1,0,0,0,33,
  	34,1,0,0,0,34,36,1,0,0,0,35,33,1,0,0,0,36,37,5,0,0,1,37,1,1,0,0,0,38,
  	49,3,6,3,0,39,49,3,8,4,0,40,49,3,10,5,0,41,49,3,22,11,0,42,49,3,20,10,
  	0,43,49,3,14,7,0,44,49,3,16,8,0,45,49,3,24,12,0,46,49,3,18,9,0,47,49,
  	3,28,14,0,48,38,1,0,0,0,48,39,1,0,0,0,48,40,1,0,0,0,48,41,1,0,0,0,48,
  	42,1,0,0,0,48,43,1,0,0,0,48,44,1,0,0,0,48,45,1,0,0,0,48,46,1,0,0,0,48,
  	47,1,0,0,0,49,3,1,0,0,0,50,51,6,2,-1,0,51,52,5,1,0,0,52,53,3,4,2,0,53,
  	54,5,2,0,0,54,62,1,0,0,0,55,62,5,15,0,0,56,62,5,16,0,0,57,62,5,17,0,0,
  	58,62,5,18,0,0,59,62,3,20,10,0,60,62,5,19,0,0,61,50,1,0,0,0,61,55,1,0,
  	0,0,61,56,1,0,0,0,61,57,1,0,0,0,61,58,1,0,0,0,61,59,1,0,0,0,61,60,1,0,
  	0,0,62,78,1,0,0,0,63,64,10,10,0,0,64,65,7,0,0,0,65,77,3,4,2,11,66,67,
  	10,9,0,0,67,68,7,1,0,0,68,77,3,4,2,10,69,70,10,8,0,0,70,71,7,2,0,0,71,
  	77,3,4,2,9,72,73,10,7,0,0,73,74,3,12,6,0,74,75,3,4,2,8,75,77,1,0,0,0,
  	76,63,1,0,0,0,76,66,1,0,0,0,76,69,1,0,0,0,76,72,1,0,0,0,77,80,1,0,0,0,
  	78,76,1,0,0,0,78,79,1,0,0,0,79,5,1,0,0,0,80,78,1,0,0,0,81,82,5,3,0,0,
  	82,83,5,15,0,0,83,84,5,4,0,0,84,85,3,4,2,0,85,7,1,0,0,0,86,87,5,5,0,0,
  	87,88,5,15,0,0,88,89,5,4,0,0,89,90,3,4,2,0,90,9,1,0,0,0,91,92,5,15,0,
  	0,92,93,5,4,0,0,93,94,3,4,2,0,94,11,1,0,0,0,95,96,7,3,0,0,96,13,1,0,0,
  	0,97,98,5,6,0,0,98,99,3,4,2,0,99,15,1,0,0,0,100,101,5,7,0,0,101,102,3,
  	4,2,0,102,17,1,0,0,0,103,107,5,8,0,0,104,106,3,2,1,0,105,104,1,0,0,0,
  	106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,110,1,0,0,0,109,107,
  	1,0,0,0,110,111,5,9,0,0,111,19,1,0,0,0,112,113,5,15,0,0,113,122,5,1,0,
  	0,114,119,3,4,2,0,115,116,5,10,0,0,116,118,3,4,2,0,117,115,1,0,0,0,118,
  	121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,123,1,0,0,0,121,119,1,
  	0,0,0,122,114,1,0,0,0,122,123,1,0,0,0,123,124,1,0,0,0,124,125,5,2,0,0,
  	125,21,1,0,0,0,126,127,5,11,0,0,127,128,5,15,0,0,128,137,5,1,0,0,129,
  	134,5,15,0,0,130,131,5,10,0,0,131,133,5,15,0,0,132,130,1,0,0,0,133,136,
  	1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,
  	0,137,129,1,0,0,0,137,138,1,0,0,0,138,139,1,0,0,0,139,140,5,2,0,0,140,
  	144,5,8,0,0,141,143,3,2,1,0,142,141,1,0,0,0,143,146,1,0,0,0,144,142,1,
  	0,0,0,144,145,1,0,0,0,145,147,1,0,0,0,146,144,1,0,0,0,147,148,5,9,0,0,
  	148,23,1,0,0,0,149,150,5,12,0,0,150,151,5,1,0,0,151,152,3,4,2,0,152,153,
  	5,2,0,0,153,155,3,2,1,0,154,156,3,26,13,0,155,154,1,0,0,0,155,156,1,0,
  	0,0,156,25,1,0,0,0,157,158,5,13,0,0,158,159,3,2,1,0,159,27,1,0,0,0,160,
  	161,5,14,0,0,161,162,5,1,0,0,162,163,3,4,2,0,163,164,5,2,0,0,164,165,
  	3,2,1,0,165,29,1,0,0,0,12,33,48,61,76,78,107,119,122,134,137,144,155
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  updategrammarParserStaticData = std::move(staticData);
}

}

UpdateGrammarParser::UpdateGrammarParser(TokenStream *input) : UpdateGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

UpdateGrammarParser::UpdateGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  UpdateGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *updategrammarParserStaticData->atn, updategrammarParserStaticData->decisionToDFA, updategrammarParserStaticData->sharedContextCache, options);
}

UpdateGrammarParser::~UpdateGrammarParser() {
  delete _interpreter;
}

const atn::ATN& UpdateGrammarParser::getATN() const {
  return *updategrammarParserStaticData->atn;
}

std::string UpdateGrammarParser::getGrammarFileName() const {
  return "UpdateGrammar.g4";
}

const std::vector<std::string>& UpdateGrammarParser::getRuleNames() const {
  return updategrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& UpdateGrammarParser::getVocabulary() const {
  return updategrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView UpdateGrammarParser::getSerializedATN() const {
  return updategrammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

UpdateGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UpdateGrammarParser::ProgramContext::EOF() {
  return getToken(UpdateGrammarParser::EOF, 0);
}

std::vector<UpdateGrammarParser::StatementContext *> UpdateGrammarParser::ProgramContext::statement() {
  return getRuleContexts<UpdateGrammarParser::StatementContext>();
}

UpdateGrammarParser::StatementContext* UpdateGrammarParser::ProgramContext::statement(size_t i) {
  return getRuleContext<UpdateGrammarParser::StatementContext>(i);
}


size_t UpdateGrammarParser::ProgramContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleProgram;
}

void UpdateGrammarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void UpdateGrammarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any UpdateGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::ProgramContext* UpdateGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, UpdateGrammarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 55784) != 0)) {
      setState(30);
      statement();
      setState(35);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(36);
    match(UpdateGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

UpdateGrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UpdateGrammarParser::VariableDeclarationContext* UpdateGrammarParser::StatementContext::variableDeclaration() {
  return getRuleContext<UpdateGrammarParser::VariableDeclarationContext>(0);
}

UpdateGrammarParser::ConstDeclarationContext* UpdateGrammarParser::StatementContext::constDeclaration() {
  return getRuleContext<UpdateGrammarParser::ConstDeclarationContext>(0);
}

UpdateGrammarParser::AssignmentContext* UpdateGrammarParser::StatementContext::assignment() {
  return getRuleContext<UpdateGrammarParser::AssignmentContext>(0);
}

UpdateGrammarParser::FunctionDefinitionContext* UpdateGrammarParser::StatementContext::functionDefinition() {
  return getRuleContext<UpdateGrammarParser::FunctionDefinitionContext>(0);
}

UpdateGrammarParser::FunctionCallContext* UpdateGrammarParser::StatementContext::functionCall() {
  return getRuleContext<UpdateGrammarParser::FunctionCallContext>(0);
}

UpdateGrammarParser::PrintlnContext* UpdateGrammarParser::StatementContext::println() {
  return getRuleContext<UpdateGrammarParser::PrintlnContext>(0);
}

UpdateGrammarParser::ReturnStatementContext* UpdateGrammarParser::StatementContext::returnStatement() {
  return getRuleContext<UpdateGrammarParser::ReturnStatementContext>(0);
}

UpdateGrammarParser::IfStatementContext* UpdateGrammarParser::StatementContext::ifStatement() {
  return getRuleContext<UpdateGrammarParser::IfStatementContext>(0);
}

UpdateGrammarParser::BlockStatementContext* UpdateGrammarParser::StatementContext::blockStatement() {
  return getRuleContext<UpdateGrammarParser::BlockStatementContext>(0);
}

UpdateGrammarParser::WhileStatementContext* UpdateGrammarParser::StatementContext::whileStatement() {
  return getRuleContext<UpdateGrammarParser::WhileStatementContext>(0);
}


UpdateGrammarParser::StatementContext::StatementContext(antlr4::ParserRuleContext* parent, size_t invokingState)
{
}

size_t UpdateGrammarParser::StatementContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleStatement;
}

void UpdateGrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void UpdateGrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any UpdateGrammarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::StatementContext* UpdateGrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, UpdateGrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      constDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(40);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(41);
      functionDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(42);
      functionCall();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(43);
      println();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(44);
      returnStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(45);
      ifStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(46);
      blockStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(47);
      whileStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

UpdateGrammarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t UpdateGrammarParser::ExpressionContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleExpression;
}

void UpdateGrammarParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DoubleExprContext ------------------------------------------------------------------

tree::TerminalNode* UpdateGrammarParser::DoubleExprContext::DOUBLE_NUMBER() {
  return getToken(UpdateGrammarParser::DOUBLE_NUMBER, 0);
}

UpdateGrammarParser::DoubleExprContext::DoubleExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::DoubleExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoubleExpr(this);
}
void UpdateGrammarParser::DoubleExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoubleExpr(this);
}

std::any UpdateGrammarParser::DoubleExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitDoubleExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringExprContext ------------------------------------------------------------------

tree::TerminalNode* UpdateGrammarParser::StringExprContext::STRING_LITERAL() {
  return getToken(UpdateGrammarParser::STRING_LITERAL, 0);
}

UpdateGrammarParser::StringExprContext::StringExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::StringExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringExpr(this);
}
void UpdateGrammarParser::StringExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringExpr(this);
}

std::any UpdateGrammarParser::StringExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitStringExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolExprContext ------------------------------------------------------------------

tree::TerminalNode* UpdateGrammarParser::BoolExprContext::BOOL() {
  return getToken(UpdateGrammarParser::BOOL, 0);
}

UpdateGrammarParser::BoolExprContext::BoolExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::BoolExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpr(this);
}
void UpdateGrammarParser::BoolExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpr(this);
}

std::any UpdateGrammarParser::BoolExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitBoolExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisExprContext ------------------------------------------------------------------

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::ParenthesisExprContext::expression() {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(0);
}

UpdateGrammarParser::ParenthesisExprContext::ParenthesisExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::ParenthesisExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesisExpr(this);
}
void UpdateGrammarParser::ParenthesisExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesisExpr(this);
}

std::any UpdateGrammarParser::ParenthesisExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitParenthesisExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<UpdateGrammarParser::ExpressionContext *> UpdateGrammarParser::MulDivExprContext::expression() {
  return getRuleContexts<UpdateGrammarParser::ExpressionContext>();
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::MulDivExprContext::expression(size_t i) {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* UpdateGrammarParser::MulDivExprContext::ASTERISK() {
  return getToken(UpdateGrammarParser::ASTERISK, 0);
}

tree::TerminalNode* UpdateGrammarParser::MulDivExprContext::SLASH() {
  return getToken(UpdateGrammarParser::SLASH, 0);
}

UpdateGrammarParser::MulDivExprContext::MulDivExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}
void UpdateGrammarParser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
}

std::any UpdateGrammarParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdExprContext ------------------------------------------------------------------

tree::TerminalNode* UpdateGrammarParser::IdExprContext::IDENTIFIER() {
  return getToken(UpdateGrammarParser::IDENTIFIER, 0);
}

UpdateGrammarParser::IdExprContext::IdExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::IdExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdExpr(this);
}
void UpdateGrammarParser::IdExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdExpr(this);
}

std::any UpdateGrammarParser::IdExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitIdExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprContext ------------------------------------------------------------------

tree::TerminalNode* UpdateGrammarParser::NumExprContext::NUMBER() {
  return getToken(UpdateGrammarParser::NUMBER, 0);
}

UpdateGrammarParser::NumExprContext::NumExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::NumExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumExpr(this);
}
void UpdateGrammarParser::NumExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumExpr(this);
}

std::any UpdateGrammarParser::NumExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitNumExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicExprContext ------------------------------------------------------------------

std::vector<UpdateGrammarParser::ExpressionContext *> UpdateGrammarParser::LogicExprContext::expression() {
  return getRuleContexts<UpdateGrammarParser::ExpressionContext>();
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::LogicExprContext::expression(size_t i) {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* UpdateGrammarParser::LogicExprContext::LOGICAL_OR() {
  return getToken(UpdateGrammarParser::LOGICAL_OR, 0);
}

tree::TerminalNode* UpdateGrammarParser::LogicExprContext::LOGICAL_AND() {
  return getToken(UpdateGrammarParser::LOGICAL_AND, 0);
}

UpdateGrammarParser::LogicExprContext::LogicExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::LogicExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicExpr(this);
}
void UpdateGrammarParser::LogicExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicExpr(this);
}

std::any UpdateGrammarParser::LogicExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitLogicExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusMinusExprContext ------------------------------------------------------------------

std::vector<UpdateGrammarParser::ExpressionContext *> UpdateGrammarParser::PlusMinusExprContext::expression() {
  return getRuleContexts<UpdateGrammarParser::ExpressionContext>();
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::PlusMinusExprContext::expression(size_t i) {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* UpdateGrammarParser::PlusMinusExprContext::PLUS() {
  return getToken(UpdateGrammarParser::PLUS, 0);
}

tree::TerminalNode* UpdateGrammarParser::PlusMinusExprContext::MINUS() {
  return getToken(UpdateGrammarParser::MINUS, 0);
}

UpdateGrammarParser::PlusMinusExprContext::PlusMinusExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::PlusMinusExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusMinusExpr(this);
}
void UpdateGrammarParser::PlusMinusExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusMinusExpr(this);
}

std::any UpdateGrammarParser::PlusMinusExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitPlusMinusExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompExprContext ------------------------------------------------------------------

std::vector<UpdateGrammarParser::ExpressionContext *> UpdateGrammarParser::CompExprContext::expression() {
  return getRuleContexts<UpdateGrammarParser::ExpressionContext>();
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::CompExprContext::expression(size_t i) {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(i);
}

UpdateGrammarParser::CompOperatorContext* UpdateGrammarParser::CompExprContext::compOperator() {
  return getRuleContext<UpdateGrammarParser::CompOperatorContext>(0);
}

UpdateGrammarParser::CompExprContext::CompExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::CompExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompExpr(this);
}
void UpdateGrammarParser::CompExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompExpr(this);
}

std::any UpdateGrammarParser::CompExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitCompExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallExprContext ------------------------------------------------------------------

UpdateGrammarParser::FunctionCallContext* UpdateGrammarParser::FuncCallExprContext::functionCall() {
  return getRuleContext<UpdateGrammarParser::FunctionCallContext>(0);
}

UpdateGrammarParser::FuncCallExprContext::FuncCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void UpdateGrammarParser::FuncCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCallExpr(this);
}
void UpdateGrammarParser::FuncCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCallExpr(this);
}

std::any UpdateGrammarParser::FuncCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitFuncCallExpr(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::expression() {
   return expression(0);
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  UpdateGrammarParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  UpdateGrammarParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, UpdateGrammarParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenthesisExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(51);
      match(UpdateGrammarParser::T__0);
      setState(52);
      expression(0);
      setState(53);
      match(UpdateGrammarParser::T__1);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IdExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(55);
      match(UpdateGrammarParser::IDENTIFIER);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(56);
      match(UpdateGrammarParser::NUMBER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<DoubleExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(57);
      match(UpdateGrammarParser::DOUBLE_NUMBER);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StringExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      match(UpdateGrammarParser::STRING_LITERAL);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<FuncCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(59);
      functionCall();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<BoolExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(60);
      match(UpdateGrammarParser::BOOL);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(78);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(76);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(63);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(64);
          antlrcpp::downCast<MulDivExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == UpdateGrammarParser::ASTERISK

          || _la == UpdateGrammarParser::SLASH)) {
            antlrcpp::downCast<MulDivExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(65);
          expression(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusMinusExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(66);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(67);
          antlrcpp::downCast<PlusMinusExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == UpdateGrammarParser::PLUS

          || _la == UpdateGrammarParser::MINUS)) {
            antlrcpp::downCast<PlusMinusExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(68);
          expression(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<LogicExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(69);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(70);
          antlrcpp::downCast<LogicExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == UpdateGrammarParser::LOGICAL_OR

          || _la == UpdateGrammarParser::LOGICAL_AND)) {
            antlrcpp::downCast<LogicExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(71);
          expression(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<CompExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(72);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(73);
          compOperator();
          setState(74);
          expression(8);
          break;
        }

        default:
          break;
        } 
      }
      setState(80);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

UpdateGrammarParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UpdateGrammarParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(UpdateGrammarParser::IDENTIFIER, 0);
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::VariableDeclarationContext::expression() {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(0);
}


size_t UpdateGrammarParser::VariableDeclarationContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleVariableDeclaration;
}

void UpdateGrammarParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void UpdateGrammarParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


std::any UpdateGrammarParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::VariableDeclarationContext* UpdateGrammarParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, UpdateGrammarParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(UpdateGrammarParser::T__2);
    setState(82);
    match(UpdateGrammarParser::IDENTIFIER);
    setState(83);
    match(UpdateGrammarParser::T__3);
    setState(84);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclarationContext ------------------------------------------------------------------

UpdateGrammarParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UpdateGrammarParser::ConstDeclarationContext::IDENTIFIER() {
  return getToken(UpdateGrammarParser::IDENTIFIER, 0);
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::ConstDeclarationContext::expression() {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(0);
}


size_t UpdateGrammarParser::ConstDeclarationContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleConstDeclaration;
}

void UpdateGrammarParser::ConstDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDeclaration(this);
}

void UpdateGrammarParser::ConstDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDeclaration(this);
}


std::any UpdateGrammarParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitConstDeclaration(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::ConstDeclarationContext* UpdateGrammarParser::constDeclaration() {
  ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, UpdateGrammarParser::RuleConstDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(UpdateGrammarParser::T__4);
    setState(87);
    match(UpdateGrammarParser::IDENTIFIER);
    setState(88);
    match(UpdateGrammarParser::T__3);
    setState(89);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

UpdateGrammarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UpdateGrammarParser::AssignmentContext::IDENTIFIER() {
  return getToken(UpdateGrammarParser::IDENTIFIER, 0);
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::AssignmentContext::expression() {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(0);
}


size_t UpdateGrammarParser::AssignmentContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleAssignment;
}

void UpdateGrammarParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void UpdateGrammarParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any UpdateGrammarParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::AssignmentContext* UpdateGrammarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 10, UpdateGrammarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(UpdateGrammarParser::IDENTIFIER);
    setState(92);
    match(UpdateGrammarParser::T__3);
    setState(93);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompOperatorContext ------------------------------------------------------------------

UpdateGrammarParser::CompOperatorContext::CompOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UpdateGrammarParser::CompOperatorContext::LESS() {
  return getToken(UpdateGrammarParser::LESS, 0);
}

tree::TerminalNode* UpdateGrammarParser::CompOperatorContext::LESS_OR_EQUAL() {
  return getToken(UpdateGrammarParser::LESS_OR_EQUAL, 0);
}

tree::TerminalNode* UpdateGrammarParser::CompOperatorContext::EQUAL() {
  return getToken(UpdateGrammarParser::EQUAL, 0);
}

tree::TerminalNode* UpdateGrammarParser::CompOperatorContext::NOT_EQUAL() {
  return getToken(UpdateGrammarParser::NOT_EQUAL, 0);
}

tree::TerminalNode* UpdateGrammarParser::CompOperatorContext::GREATER() {
  return getToken(UpdateGrammarParser::GREATER, 0);
}

tree::TerminalNode* UpdateGrammarParser::CompOperatorContext::GREATER_OR_EQUAL() {
  return getToken(UpdateGrammarParser::GREATER_OR_EQUAL, 0);
}


size_t UpdateGrammarParser::CompOperatorContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleCompOperator;
}

void UpdateGrammarParser::CompOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompOperator(this);
}

void UpdateGrammarParser::CompOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompOperator(this);
}


std::any UpdateGrammarParser::CompOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitCompOperator(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::CompOperatorContext* UpdateGrammarParser::compOperator() {
  CompOperatorContext *_localctx = _tracker.createInstance<CompOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, UpdateGrammarParser::RuleCompOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4227858432) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintlnContext ------------------------------------------------------------------

UpdateGrammarParser::PrintlnContext::PrintlnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::PrintlnContext::expression() {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(0);
}


size_t UpdateGrammarParser::PrintlnContext::getRuleIndex() const {
  return UpdateGrammarParser::RulePrintln;
}

void UpdateGrammarParser::PrintlnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintln(this);
}

void UpdateGrammarParser::PrintlnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintln(this);
}


std::any UpdateGrammarParser::PrintlnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitPrintln(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::PrintlnContext* UpdateGrammarParser::println() {
  PrintlnContext *_localctx = _tracker.createInstance<PrintlnContext>(_ctx, getState());
  enterRule(_localctx, 14, UpdateGrammarParser::RulePrintln);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(UpdateGrammarParser::T__5);
    setState(98);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

UpdateGrammarParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::ReturnStatementContext::expression() {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(0);
}


size_t UpdateGrammarParser::ReturnStatementContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleReturnStatement;
}

void UpdateGrammarParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void UpdateGrammarParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


std::any UpdateGrammarParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::ReturnStatementContext* UpdateGrammarParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, UpdateGrammarParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(UpdateGrammarParser::T__6);
    setState(101);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

UpdateGrammarParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<UpdateGrammarParser::StatementContext *> UpdateGrammarParser::BlockStatementContext::statement() {
  return getRuleContexts<UpdateGrammarParser::StatementContext>();
}

UpdateGrammarParser::StatementContext* UpdateGrammarParser::BlockStatementContext::statement(size_t i) {
  return getRuleContext<UpdateGrammarParser::StatementContext>(i);
}


size_t UpdateGrammarParser::BlockStatementContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleBlockStatement;
}

void UpdateGrammarParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void UpdateGrammarParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}


std::any UpdateGrammarParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::BlockStatementContext* UpdateGrammarParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, UpdateGrammarParser::RuleBlockStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(UpdateGrammarParser::T__7);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 55784) != 0)) {
      setState(104);
      statement();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    match(UpdateGrammarParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

UpdateGrammarParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UpdateGrammarParser::FunctionCallContext::IDENTIFIER() {
  return getToken(UpdateGrammarParser::IDENTIFIER, 0);
}

std::vector<UpdateGrammarParser::ExpressionContext *> UpdateGrammarParser::FunctionCallContext::expression() {
  return getRuleContexts<UpdateGrammarParser::ExpressionContext>();
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(i);
}


size_t UpdateGrammarParser::FunctionCallContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleFunctionCall;
}

void UpdateGrammarParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void UpdateGrammarParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any UpdateGrammarParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::FunctionCallContext* UpdateGrammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 20, UpdateGrammarParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(UpdateGrammarParser::IDENTIFIER);
    setState(113);
    match(UpdateGrammarParser::T__0);
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1015810) != 0)) {
      setState(114);
      expression(0);
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == UpdateGrammarParser::T__9) {
        setState(115);
        match(UpdateGrammarParser::T__9);
        setState(116);
        expression(0);
        setState(121);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(124);
    match(UpdateGrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

UpdateGrammarParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> UpdateGrammarParser::FunctionDefinitionContext::IDENTIFIER() {
  return getTokens(UpdateGrammarParser::IDENTIFIER);
}

tree::TerminalNode* UpdateGrammarParser::FunctionDefinitionContext::IDENTIFIER(size_t i) {
  return getToken(UpdateGrammarParser::IDENTIFIER, i);
}

std::vector<UpdateGrammarParser::StatementContext *> UpdateGrammarParser::FunctionDefinitionContext::statement() {
  return getRuleContexts<UpdateGrammarParser::StatementContext>();
}

UpdateGrammarParser::StatementContext* UpdateGrammarParser::FunctionDefinitionContext::statement(size_t i) {
  return getRuleContext<UpdateGrammarParser::StatementContext>(i);
}


size_t UpdateGrammarParser::FunctionDefinitionContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleFunctionDefinition;
}

void UpdateGrammarParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void UpdateGrammarParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


std::any UpdateGrammarParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::FunctionDefinitionContext* UpdateGrammarParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, UpdateGrammarParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(UpdateGrammarParser::T__10);
    setState(127);
    match(UpdateGrammarParser::IDENTIFIER);
    setState(128);
    match(UpdateGrammarParser::T__0);
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == UpdateGrammarParser::IDENTIFIER) {
      setState(129);
      match(UpdateGrammarParser::IDENTIFIER);
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == UpdateGrammarParser::T__9) {
        setState(130);
        match(UpdateGrammarParser::T__9);
        setState(131);
        match(UpdateGrammarParser::IDENTIFIER);
        setState(136);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(139);
    match(UpdateGrammarParser::T__1);
    setState(140);
    match(UpdateGrammarParser::T__7);
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 55784) != 0)) {
      setState(141);
      statement();
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(147);
    match(UpdateGrammarParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

UpdateGrammarParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::IfStatementContext::expression() {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(0);
}

UpdateGrammarParser::StatementContext* UpdateGrammarParser::IfStatementContext::statement() {
  return getRuleContext<UpdateGrammarParser::StatementContext>(0);
}

UpdateGrammarParser::ElseStatementContext* UpdateGrammarParser::IfStatementContext::elseStatement() {
  return getRuleContext<UpdateGrammarParser::ElseStatementContext>(0);
}


size_t UpdateGrammarParser::IfStatementContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleIfStatement;
}

void UpdateGrammarParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void UpdateGrammarParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any UpdateGrammarParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::IfStatementContext* UpdateGrammarParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, UpdateGrammarParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(UpdateGrammarParser::T__11);
    setState(150);
    match(UpdateGrammarParser::T__0);
    setState(151);
    expression(0);
    setState(152);
    match(UpdateGrammarParser::T__1);
    setState(153);
    statement();
    setState(155);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(154);
      elseStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

UpdateGrammarParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UpdateGrammarParser::StatementContext* UpdateGrammarParser::ElseStatementContext::statement() {
  return getRuleContext<UpdateGrammarParser::StatementContext>(0);
}


size_t UpdateGrammarParser::ElseStatementContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleElseStatement;
}

void UpdateGrammarParser::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}

void UpdateGrammarParser::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}


std::any UpdateGrammarParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::ElseStatementContext* UpdateGrammarParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, UpdateGrammarParser::RuleElseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(UpdateGrammarParser::T__12);
    setState(158);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

UpdateGrammarParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UpdateGrammarParser::ExpressionContext* UpdateGrammarParser::WhileStatementContext::expression() {
  return getRuleContext<UpdateGrammarParser::ExpressionContext>(0);
}

UpdateGrammarParser::StatementContext* UpdateGrammarParser::WhileStatementContext::statement() {
  return getRuleContext<UpdateGrammarParser::StatementContext>(0);
}


size_t UpdateGrammarParser::WhileStatementContext::getRuleIndex() const {
  return UpdateGrammarParser::RuleWhileStatement;
}

void UpdateGrammarParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void UpdateGrammarParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UpdateGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any UpdateGrammarParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UpdateGrammarVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

UpdateGrammarParser::WhileStatementContext* UpdateGrammarParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, UpdateGrammarParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(UpdateGrammarParser::T__13);
    setState(161);
    match(UpdateGrammarParser::T__0);
    setState(162);
    expression(0);
    setState(163);
    match(UpdateGrammarParser::T__1);
    setState(164);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool UpdateGrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool UpdateGrammarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

void UpdateGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  updategrammarParserInitialize();
#else
  ::antlr4::internal::call_once(updategrammarParserOnceFlag, updategrammarParserInitialize);
#endif
}
