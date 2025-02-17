
// Generated from UpdateGrammar.g4 by ANTLR 4.13.2


#include "UpdateGrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct UpdateGrammarLexerStaticData final {
  UpdateGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UpdateGrammarLexerStaticData(const UpdateGrammarLexerStaticData&) = delete;
  UpdateGrammarLexerStaticData(UpdateGrammarLexerStaticData&&) = delete;
  UpdateGrammarLexerStaticData& operator=(const UpdateGrammarLexerStaticData&) = delete;
  UpdateGrammarLexerStaticData& operator=(UpdateGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag updategrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<UpdateGrammarLexerStaticData> updategrammarlexerLexerStaticData = nullptr;

void updategrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (updategrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(updategrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UpdateGrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "IDENTIFIER", "NUMBER", 
      "DOUBLE_NUMBER", "STRING_LITERAL", "BOOL", "ASTERISK", "SLASH", "PLUS", 
      "MINUS", "LOGICAL_OR", "LOGICAL_AND", "EQUAL", "NOT_EQUAL", "GREATER", 
      "GREATER_OR_EQUAL", "LESS", "LESS_OR_EQUAL", "SPACE", "NEW_LINE", 
      "LINE_COMMENT", "MULTI_LINE_COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,35,229,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,
  	1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,14,1,14,5,14,129,8,14,10,14,12,14,132,9,14,
  	1,15,4,15,135,8,15,11,15,12,15,136,1,16,1,16,1,16,1,16,1,17,1,17,5,17,
  	145,8,17,10,17,12,17,148,9,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,3,18,161,8,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,
  	1,23,1,23,1,23,1,24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,
  	1,28,1,28,1,28,1,29,1,29,1,30,1,30,1,30,1,31,4,31,194,8,31,11,31,12,31,
  	195,1,31,1,31,1,32,3,32,201,8,32,1,32,1,32,1,33,1,33,1,33,1,33,5,33,209,
  	8,33,10,33,12,33,212,9,33,1,33,1,33,1,34,1,34,1,34,1,34,5,34,220,8,34,
  	10,34,12,34,223,9,34,1,34,1,34,1,34,1,34,1,34,1,221,0,35,1,1,3,2,5,3,
  	7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,
  	33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,
  	28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,1,0,6,3,0,65,90,95,95,97,
  	122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,1,0,34,34,3,0,9,10,13,13,32,
  	32,2,0,10,10,13,13,236,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,
  	0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,
  	0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,1,71,1,0,0,0,
  	3,73,1,0,0,0,5,75,1,0,0,0,7,79,1,0,0,0,9,81,1,0,0,0,11,87,1,0,0,0,13,
  	95,1,0,0,0,15,102,1,0,0,0,17,104,1,0,0,0,19,106,1,0,0,0,21,108,1,0,0,
  	0,23,112,1,0,0,0,25,115,1,0,0,0,27,120,1,0,0,0,29,126,1,0,0,0,31,134,
  	1,0,0,0,33,138,1,0,0,0,35,142,1,0,0,0,37,160,1,0,0,0,39,162,1,0,0,0,41,
  	164,1,0,0,0,43,166,1,0,0,0,45,168,1,0,0,0,47,170,1,0,0,0,49,173,1,0,0,
  	0,51,176,1,0,0,0,53,179,1,0,0,0,55,182,1,0,0,0,57,184,1,0,0,0,59,187,
  	1,0,0,0,61,189,1,0,0,0,63,193,1,0,0,0,65,200,1,0,0,0,67,204,1,0,0,0,69,
  	215,1,0,0,0,71,72,5,40,0,0,72,2,1,0,0,0,73,74,5,41,0,0,74,4,1,0,0,0,75,
  	76,5,118,0,0,76,77,5,97,0,0,77,78,5,114,0,0,78,6,1,0,0,0,79,80,5,61,0,
  	0,80,8,1,0,0,0,81,82,5,99,0,0,82,83,5,111,0,0,83,84,5,110,0,0,84,85,5,
  	115,0,0,85,86,5,116,0,0,86,10,1,0,0,0,87,88,5,112,0,0,88,89,5,114,0,0,
  	89,90,5,105,0,0,90,91,5,110,0,0,91,92,5,116,0,0,92,93,5,108,0,0,93,94,
  	5,110,0,0,94,12,1,0,0,0,95,96,5,114,0,0,96,97,5,101,0,0,97,98,5,116,0,
  	0,98,99,5,117,0,0,99,100,5,114,0,0,100,101,5,110,0,0,101,14,1,0,0,0,102,
  	103,5,123,0,0,103,16,1,0,0,0,104,105,5,125,0,0,105,18,1,0,0,0,106,107,
  	5,44,0,0,107,20,1,0,0,0,108,109,5,102,0,0,109,110,5,117,0,0,110,111,5,
  	110,0,0,111,22,1,0,0,0,112,113,5,105,0,0,113,114,5,102,0,0,114,24,1,0,
  	0,0,115,116,5,101,0,0,116,117,5,108,0,0,117,118,5,115,0,0,118,119,5,101,
  	0,0,119,26,1,0,0,0,120,121,5,119,0,0,121,122,5,104,0,0,122,123,5,105,
  	0,0,123,124,5,108,0,0,124,125,5,101,0,0,125,28,1,0,0,0,126,130,7,0,0,
  	0,127,129,7,1,0,0,128,127,1,0,0,0,129,132,1,0,0,0,130,128,1,0,0,0,130,
  	131,1,0,0,0,131,30,1,0,0,0,132,130,1,0,0,0,133,135,7,2,0,0,134,133,1,
  	0,0,0,135,136,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,32,1,0,0,0,
  	138,139,3,31,15,0,139,140,5,46,0,0,140,141,3,31,15,0,141,34,1,0,0,0,142,
  	146,5,34,0,0,143,145,8,3,0,0,144,143,1,0,0,0,145,148,1,0,0,0,146,144,
  	1,0,0,0,146,147,1,0,0,0,147,149,1,0,0,0,148,146,1,0,0,0,149,150,5,34,
  	0,0,150,36,1,0,0,0,151,152,5,84,0,0,152,153,5,114,0,0,153,154,5,117,0,
  	0,154,161,5,101,0,0,155,156,5,70,0,0,156,157,5,97,0,0,157,158,5,108,0,
  	0,158,159,5,115,0,0,159,161,5,101,0,0,160,151,1,0,0,0,160,155,1,0,0,0,
  	161,38,1,0,0,0,162,163,5,42,0,0,163,40,1,0,0,0,164,165,5,47,0,0,165,42,
  	1,0,0,0,166,167,5,43,0,0,167,44,1,0,0,0,168,169,5,45,0,0,169,46,1,0,0,
  	0,170,171,5,124,0,0,171,172,5,124,0,0,172,48,1,0,0,0,173,174,5,38,0,0,
  	174,175,5,38,0,0,175,50,1,0,0,0,176,177,5,61,0,0,177,178,5,61,0,0,178,
  	52,1,0,0,0,179,180,5,33,0,0,180,181,5,61,0,0,181,54,1,0,0,0,182,183,5,
  	62,0,0,183,56,1,0,0,0,184,185,5,62,0,0,185,186,5,61,0,0,186,58,1,0,0,
  	0,187,188,5,60,0,0,188,60,1,0,0,0,189,190,5,60,0,0,190,191,5,61,0,0,191,
  	62,1,0,0,0,192,194,7,4,0,0,193,192,1,0,0,0,194,195,1,0,0,0,195,193,1,
  	0,0,0,195,196,1,0,0,0,196,197,1,0,0,0,197,198,6,31,0,0,198,64,1,0,0,0,
  	199,201,5,13,0,0,200,199,1,0,0,0,200,201,1,0,0,0,201,202,1,0,0,0,202,
  	203,5,10,0,0,203,66,1,0,0,0,204,205,5,47,0,0,205,206,5,47,0,0,206,210,
  	1,0,0,0,207,209,8,5,0,0,208,207,1,0,0,0,209,212,1,0,0,0,210,208,1,0,0,
  	0,210,211,1,0,0,0,211,213,1,0,0,0,212,210,1,0,0,0,213,214,6,33,0,0,214,
  	68,1,0,0,0,215,216,5,47,0,0,216,217,5,42,0,0,217,221,1,0,0,0,218,220,
  	9,0,0,0,219,218,1,0,0,0,220,223,1,0,0,0,221,222,1,0,0,0,221,219,1,0,0,
  	0,222,224,1,0,0,0,223,221,1,0,0,0,224,225,5,42,0,0,225,226,5,47,0,0,226,
  	227,1,0,0,0,227,228,6,34,0,0,228,70,1,0,0,0,9,0,130,136,146,160,195,200,
  	210,221,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  updategrammarlexerLexerStaticData = std::move(staticData);
}

}

UpdateGrammarLexer::UpdateGrammarLexer(CharStream *input) : Lexer(input) {
  UpdateGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *updategrammarlexerLexerStaticData->atn, updategrammarlexerLexerStaticData->decisionToDFA, updategrammarlexerLexerStaticData->sharedContextCache);
}

UpdateGrammarLexer::~UpdateGrammarLexer() {
  delete _interpreter;
}

std::string UpdateGrammarLexer::getGrammarFileName() const {
  return "UpdateGrammar.g4";
}

const std::vector<std::string>& UpdateGrammarLexer::getRuleNames() const {
  return updategrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& UpdateGrammarLexer::getChannelNames() const {
  return updategrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& UpdateGrammarLexer::getModeNames() const {
  return updategrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& UpdateGrammarLexer::getVocabulary() const {
  return updategrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView UpdateGrammarLexer::getSerializedATN() const {
  return updategrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& UpdateGrammarLexer::getATN() const {
  return *updategrammarlexerLexerStaticData->atn;
}




void UpdateGrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  updategrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(updategrammarlexerLexerOnceFlag, updategrammarlexerLexerInitialize);
#endif
}
