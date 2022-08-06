
// Generated from fog.g4 by ANTLR 4.10.1


#include "fogListener.h"

#include "fogParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct FogParserStaticData final {
  FogParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FogParserStaticData(const FogParserStaticData&) = delete;
  FogParserStaticData(FogParserStaticData&&) = delete;
  FogParserStaticData& operator=(const FogParserStaticData&) = delete;
  FogParserStaticData& operator=(FogParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag fogParserOnceFlag;
FogParserStaticData *fogParserStaticData = nullptr;

void fogParserInitialize() {
  assert(fogParserStaticData == nullptr);
  auto staticData = std::make_unique<FogParserStaticData>(
    std::vector<std::string>{
      "chunk", "block", "stat", "laststat", "label", "namelist", "explist", 
      "exp", "prefixexp", "functioncall", "varOrExp", "var", "varSuffix", 
      "args", "funcbody", "operatorOr", "operatorAnd", "operatorComparison", 
      "operatorAddSub", "operatorMul", "operatorBitwise", "operatorUnary", 
      "number", "type", "constant"
    },
    std::vector<std::string>{
      "", "';'", "'break'", "'goto'", "'while'", "'{'", "'}'", "'if'", "'} elseif'", 
      "'} else {'", "'for'", "'='", "','", "'inline {'", "'void'", "'++'", 
      "'return'", "'continue'", "'label'", "':'", "'false'", "'true'", "'('", 
      "')'", "'['", "']'", "'or'", "'and'", "'<'", "'>'", "'<='", "'>='", 
      "'!='", "'=='", "'+'", "'-'", "'*'", "'&'", "'|'", "'^'", "'<<'", 
      "'>>'", "'!'", "'~'", "'i8'", "'i16'", "'i32'", "'byte'", "'short'", 
      "'long'", "'con'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "NAME", "INT", "HEX", "BINARY", "COMMENT", "LINE_COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,57,283,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,1,1,5,1,55,8,1,10,1,12,1,
  	58,9,1,1,1,3,1,61,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,84,8,2,10,2,12,2,87,9,2,1,2,1,
  	2,3,2,91,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,104,8,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,116,8,2,1,2,1,2,1,2,3,2,121,
  	8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,136,8,2,1,
  	3,1,3,3,3,140,8,3,1,3,1,3,1,3,3,3,145,8,3,3,3,147,8,3,1,4,1,4,1,4,1,4,
  	1,5,1,5,1,5,1,5,1,5,1,5,5,5,159,8,5,10,5,12,5,162,9,5,1,6,1,6,1,6,5,6,
  	167,8,6,10,6,12,6,170,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,
  	182,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,208,8,7,10,7,12,7,211,9,7,1,8,1,
  	8,3,8,215,8,8,1,9,1,9,4,9,219,8,9,11,9,12,9,220,1,10,1,10,1,10,1,10,1,
  	10,3,10,228,8,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,236,8,11,1,11,5,11,
  	239,8,11,10,11,12,11,242,9,11,1,12,1,12,1,12,1,12,1,13,1,13,3,13,250,
  	8,13,1,13,1,13,1,14,1,14,3,14,256,8,14,1,14,1,14,1,14,1,14,1,14,1,15,
  	1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,
  	1,22,1,23,1,23,1,24,1,24,1,24,0,1,14,25,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,40,42,44,46,48,0,6,1,0,28,33,1,0,34,35,1,0,37,
  	41,2,0,35,35,42,43,1,0,52,54,1,0,44,49,300,0,50,1,0,0,0,2,56,1,0,0,0,
  	4,135,1,0,0,0,6,146,1,0,0,0,8,148,1,0,0,0,10,152,1,0,0,0,12,168,1,0,0,
  	0,14,181,1,0,0,0,16,214,1,0,0,0,18,216,1,0,0,0,20,227,1,0,0,0,22,235,
  	1,0,0,0,24,243,1,0,0,0,26,247,1,0,0,0,28,253,1,0,0,0,30,262,1,0,0,0,32,
  	264,1,0,0,0,34,266,1,0,0,0,36,268,1,0,0,0,38,270,1,0,0,0,40,272,1,0,0,
  	0,42,274,1,0,0,0,44,276,1,0,0,0,46,278,1,0,0,0,48,280,1,0,0,0,50,51,3,
  	2,1,0,51,52,5,0,0,1,52,1,1,0,0,0,53,55,3,4,2,0,54,53,1,0,0,0,55,58,1,
  	0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,59,61,3,
  	6,3,0,60,59,1,0,0,0,60,61,1,0,0,0,61,3,1,0,0,0,62,136,5,1,0,0,63,136,
  	3,18,9,0,64,136,3,8,4,0,65,136,5,2,0,0,66,67,5,3,0,0,67,136,5,51,0,0,
  	68,69,5,4,0,0,69,70,3,14,7,0,70,71,5,5,0,0,71,72,3,2,1,0,72,73,5,6,0,
  	0,73,136,1,0,0,0,74,75,5,7,0,0,75,76,3,14,7,0,76,77,5,5,0,0,77,85,3,2,
  	1,0,78,79,5,8,0,0,79,80,3,14,7,0,80,81,5,5,0,0,81,82,3,2,1,0,82,84,1,
  	0,0,0,83,78,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,90,1,
  	0,0,0,87,85,1,0,0,0,88,89,5,9,0,0,89,91,3,2,1,0,90,88,1,0,0,0,90,91,1,
  	0,0,0,91,92,1,0,0,0,92,93,5,6,0,0,93,136,1,0,0,0,94,95,5,10,0,0,95,96,
  	3,46,23,0,96,97,5,51,0,0,97,98,5,11,0,0,98,99,3,14,7,0,99,100,5,12,0,
  	0,100,103,3,14,7,0,101,102,5,12,0,0,102,104,3,14,7,0,103,101,1,0,0,0,
  	103,104,1,0,0,0,104,105,1,0,0,0,105,106,5,5,0,0,106,107,3,2,1,0,107,108,
  	5,6,0,0,108,136,1,0,0,0,109,110,5,13,0,0,110,111,3,2,1,0,111,112,5,6,
  	0,0,112,136,1,0,0,0,113,116,3,46,23,0,114,116,5,14,0,0,115,113,1,0,0,
  	0,115,114,1,0,0,0,116,117,1,0,0,0,117,118,5,51,0,0,118,136,3,28,14,0,
  	119,121,3,48,24,0,120,119,1,0,0,0,120,121,1,0,0,0,121,122,1,0,0,0,122,
  	123,3,46,23,0,123,124,5,51,0,0,124,125,5,11,0,0,125,126,3,14,7,0,126,
  	136,1,0,0,0,127,128,5,51,0,0,128,129,5,11,0,0,129,136,3,14,7,0,130,131,
  	5,15,0,0,131,136,3,22,11,0,132,133,3,22,11,0,133,134,5,15,0,0,134,136,
  	1,0,0,0,135,62,1,0,0,0,135,63,1,0,0,0,135,64,1,0,0,0,135,65,1,0,0,0,135,
  	66,1,0,0,0,135,68,1,0,0,0,135,74,1,0,0,0,135,94,1,0,0,0,135,109,1,0,0,
  	0,135,115,1,0,0,0,135,120,1,0,0,0,135,127,1,0,0,0,135,130,1,0,0,0,135,
  	132,1,0,0,0,136,5,1,0,0,0,137,139,5,16,0,0,138,140,3,14,7,0,139,138,1,
  	0,0,0,139,140,1,0,0,0,140,147,1,0,0,0,141,147,5,2,0,0,142,144,5,17,0,
  	0,143,145,5,1,0,0,144,143,1,0,0,0,144,145,1,0,0,0,145,147,1,0,0,0,146,
  	137,1,0,0,0,146,141,1,0,0,0,146,142,1,0,0,0,147,7,1,0,0,0,148,149,5,18,
  	0,0,149,150,5,51,0,0,150,151,5,19,0,0,151,9,1,0,0,0,152,153,3,46,23,0,
  	153,160,5,51,0,0,154,155,5,12,0,0,155,156,3,46,23,0,156,157,5,51,0,0,
  	157,159,1,0,0,0,158,154,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,
  	1,0,0,0,161,11,1,0,0,0,162,160,1,0,0,0,163,164,3,14,7,0,164,165,5,12,
  	0,0,165,167,1,0,0,0,166,163,1,0,0,0,167,170,1,0,0,0,168,166,1,0,0,0,168,
  	169,1,0,0,0,169,171,1,0,0,0,170,168,1,0,0,0,171,172,3,14,7,0,172,13,1,
  	0,0,0,173,174,6,7,-1,0,174,182,5,20,0,0,175,182,5,21,0,0,176,182,3,44,
  	22,0,177,182,3,16,8,0,178,179,3,42,21,0,179,180,3,14,7,7,180,182,1,0,
  	0,0,181,173,1,0,0,0,181,175,1,0,0,0,181,176,1,0,0,0,181,177,1,0,0,0,181,
  	178,1,0,0,0,182,209,1,0,0,0,183,184,10,6,0,0,184,185,3,38,19,0,185,186,
  	3,14,7,7,186,208,1,0,0,0,187,188,10,5,0,0,188,189,3,36,18,0,189,190,3,
  	14,7,6,190,208,1,0,0,0,191,192,10,4,0,0,192,193,3,34,17,0,193,194,3,14,
  	7,5,194,208,1,0,0,0,195,196,10,3,0,0,196,197,3,32,16,0,197,198,3,14,7,
  	4,198,208,1,0,0,0,199,200,10,2,0,0,200,201,3,30,15,0,201,202,3,14,7,3,
  	202,208,1,0,0,0,203,204,10,1,0,0,204,205,3,40,20,0,205,206,3,14,7,2,206,
  	208,1,0,0,0,207,183,1,0,0,0,207,187,1,0,0,0,207,191,1,0,0,0,207,195,1,
  	0,0,0,207,199,1,0,0,0,207,203,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,
  	209,210,1,0,0,0,210,15,1,0,0,0,211,209,1,0,0,0,212,215,3,20,10,0,213,
  	215,3,18,9,0,214,212,1,0,0,0,214,213,1,0,0,0,215,17,1,0,0,0,216,218,3,
  	20,10,0,217,219,3,26,13,0,218,217,1,0,0,0,219,220,1,0,0,0,220,218,1,0,
  	0,0,220,221,1,0,0,0,221,19,1,0,0,0,222,228,3,22,11,0,223,224,5,22,0,0,
  	224,225,3,14,7,0,225,226,5,23,0,0,226,228,1,0,0,0,227,222,1,0,0,0,227,
  	223,1,0,0,0,228,21,1,0,0,0,229,236,5,51,0,0,230,231,5,22,0,0,231,232,
  	3,14,7,0,232,233,5,23,0,0,233,234,3,24,12,0,234,236,1,0,0,0,235,229,1,
  	0,0,0,235,230,1,0,0,0,236,240,1,0,0,0,237,239,3,24,12,0,238,237,1,0,0,
  	0,239,242,1,0,0,0,240,238,1,0,0,0,240,241,1,0,0,0,241,23,1,0,0,0,242,
  	240,1,0,0,0,243,244,5,24,0,0,244,245,3,14,7,0,245,246,5,25,0,0,246,25,
  	1,0,0,0,247,249,5,22,0,0,248,250,3,12,6,0,249,248,1,0,0,0,249,250,1,0,
  	0,0,250,251,1,0,0,0,251,252,5,23,0,0,252,27,1,0,0,0,253,255,5,22,0,0,
  	254,256,3,10,5,0,255,254,1,0,0,0,255,256,1,0,0,0,256,257,1,0,0,0,257,
  	258,5,23,0,0,258,259,5,5,0,0,259,260,3,2,1,0,260,261,5,6,0,0,261,29,1,
  	0,0,0,262,263,5,26,0,0,263,31,1,0,0,0,264,265,5,27,0,0,265,33,1,0,0,0,
  	266,267,7,0,0,0,267,35,1,0,0,0,268,269,7,1,0,0,269,37,1,0,0,0,270,271,
  	5,36,0,0,271,39,1,0,0,0,272,273,7,2,0,0,273,41,1,0,0,0,274,275,7,3,0,
  	0,275,43,1,0,0,0,276,277,7,4,0,0,277,45,1,0,0,0,278,279,7,5,0,0,279,47,
  	1,0,0,0,280,281,5,50,0,0,281,49,1,0,0,0,23,56,60,85,90,103,115,120,135,
  	139,144,146,160,168,181,207,209,214,220,227,235,240,249,255
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fogParserStaticData = staticData.release();
}

}

fogParser::fogParser(TokenStream *input) : fogParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

fogParser::fogParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  fogParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *fogParserStaticData->atn, fogParserStaticData->decisionToDFA, fogParserStaticData->sharedContextCache, options);
}

fogParser::~fogParser() {
  delete _interpreter;
}

const atn::ATN& fogParser::getATN() const {
  return *fogParserStaticData->atn;
}

std::string fogParser::getGrammarFileName() const {
  return "fog.g4";
}

const std::vector<std::string>& fogParser::getRuleNames() const {
  return fogParserStaticData->ruleNames;
}

const dfa::Vocabulary& fogParser::getVocabulary() const {
  return fogParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView fogParser::getSerializedATN() const {
  return fogParserStaticData->serializedATN;
}


//----------------- ChunkContext ------------------------------------------------------------------

fogParser::ChunkContext::ChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::BlockContext* fogParser::ChunkContext::block() {
  return getRuleContext<fogParser::BlockContext>(0);
}

tree::TerminalNode* fogParser::ChunkContext::EOF() {
  return getToken(fogParser::EOF, 0);
}


size_t fogParser::ChunkContext::getRuleIndex() const {
  return fogParser::RuleChunk;
}

void fogParser::ChunkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChunk(this);
}

void fogParser::ChunkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChunk(this);
}

fogParser::ChunkContext* fogParser::chunk() {
  ChunkContext *_localctx = _tracker.createInstance<ChunkContext>(_ctx, getState());
  enterRule(_localctx, 0, fogParser::RuleChunk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    block();
    setState(51);
    match(fogParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

fogParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fogParser::StatContext *> fogParser::BlockContext::stat() {
  return getRuleContexts<fogParser::StatContext>();
}

fogParser::StatContext* fogParser::BlockContext::stat(size_t i) {
  return getRuleContext<fogParser::StatContext>(i);
}

fogParser::LaststatContext* fogParser::BlockContext::laststat() {
  return getRuleContext<fogParser::LaststatContext>(0);
}


size_t fogParser::BlockContext::getRuleIndex() const {
  return fogParser::RuleBlock;
}

void fogParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void fogParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

fogParser::BlockContext* fogParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, fogParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(53);
        stat(); 
      }
      setState(58);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fogParser::T__1)
      | (1ULL << fogParser::T__15)
      | (1ULL << fogParser::T__16))) != 0)) {
      setState(59);
      laststat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

fogParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::FunctioncallContext* fogParser::StatContext::functioncall() {
  return getRuleContext<fogParser::FunctioncallContext>(0);
}

fogParser::LabelContext* fogParser::StatContext::label() {
  return getRuleContext<fogParser::LabelContext>(0);
}

tree::TerminalNode* fogParser::StatContext::NAME() {
  return getToken(fogParser::NAME, 0);
}

std::vector<fogParser::ExpContext *> fogParser::StatContext::exp() {
  return getRuleContexts<fogParser::ExpContext>();
}

fogParser::ExpContext* fogParser::StatContext::exp(size_t i) {
  return getRuleContext<fogParser::ExpContext>(i);
}

std::vector<fogParser::BlockContext *> fogParser::StatContext::block() {
  return getRuleContexts<fogParser::BlockContext>();
}

fogParser::BlockContext* fogParser::StatContext::block(size_t i) {
  return getRuleContext<fogParser::BlockContext>(i);
}

fogParser::TypeContext* fogParser::StatContext::type() {
  return getRuleContext<fogParser::TypeContext>(0);
}

fogParser::FuncbodyContext* fogParser::StatContext::funcbody() {
  return getRuleContext<fogParser::FuncbodyContext>(0);
}

fogParser::ConstantContext* fogParser::StatContext::constant() {
  return getRuleContext<fogParser::ConstantContext>(0);
}

fogParser::VarContext* fogParser::StatContext::var() {
  return getRuleContext<fogParser::VarContext>(0);
}


size_t fogParser::StatContext::getRuleIndex() const {
  return fogParser::RuleStat;
}

void fogParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void fogParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}

fogParser::StatContext* fogParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 4, fogParser::RuleStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(62);
      match(fogParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(63);
      functioncall();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(64);
      label();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(65);
      match(fogParser::T__1);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(66);
      match(fogParser::T__2);
      setState(67);
      match(fogParser::NAME);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(68);
      match(fogParser::T__3);
      setState(69);
      exp(0);
      setState(70);
      match(fogParser::T__4);
      setState(71);
      block();
      setState(72);
      match(fogParser::T__5);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(74);
      match(fogParser::T__6);
      setState(75);
      exp(0);
      setState(76);
      match(fogParser::T__4);
      setState(77);
      block();
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == fogParser::T__7) {
        setState(78);
        match(fogParser::T__7);
        setState(79);
        exp(0);
        setState(80);
        match(fogParser::T__4);
        setState(81);
        block();
        setState(87);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(90);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fogParser::T__8) {
        setState(88);
        match(fogParser::T__8);
        setState(89);
        block();
      }
      setState(92);
      match(fogParser::T__5);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(94);
      match(fogParser::T__9);
      setState(95);
      type();
      setState(96);
      match(fogParser::NAME);
      setState(97);
      match(fogParser::T__10);
      setState(98);
      exp(0);
      setState(99);
      match(fogParser::T__11);
      setState(100);
      exp(0);
      setState(103);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fogParser::T__11) {
        setState(101);
        match(fogParser::T__11);
        setState(102);
        exp(0);
      }
      setState(105);
      match(fogParser::T__4);
      setState(106);
      block();
      setState(107);
      match(fogParser::T__5);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(109);
      match(fogParser::T__12);
      setState(110);
      block();
      setState(111);
      match(fogParser::T__5);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(115);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case fogParser::T__43:
        case fogParser::T__44:
        case fogParser::T__45:
        case fogParser::T__46:
        case fogParser::T__47:
        case fogParser::T__48: {
          setState(113);
          type();
          break;
        }

        case fogParser::T__13: {
          setState(114);
          match(fogParser::T__13);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(117);
      match(fogParser::NAME);
      setState(118);
      funcbody();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(120);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fogParser::T__49) {
        setState(119);
        constant();
      }
      setState(122);
      type();
      setState(123);
      match(fogParser::NAME);
      setState(124);
      match(fogParser::T__10);
      setState(125);
      exp(0);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(127);
      match(fogParser::NAME);
      setState(128);
      match(fogParser::T__10);
      setState(129);
      exp(0);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(130);
      match(fogParser::T__14);
      setState(131);
      var();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(132);
      var();
      setState(133);
      match(fogParser::T__14);
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

//----------------- LaststatContext ------------------------------------------------------------------

fogParser::LaststatContext::LaststatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::ExpContext* fogParser::LaststatContext::exp() {
  return getRuleContext<fogParser::ExpContext>(0);
}


size_t fogParser::LaststatContext::getRuleIndex() const {
  return fogParser::RuleLaststat;
}

void fogParser::LaststatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLaststat(this);
}

void fogParser::LaststatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLaststat(this);
}

fogParser::LaststatContext* fogParser::laststat() {
  LaststatContext *_localctx = _tracker.createInstance<LaststatContext>(_ctx, getState());
  enterRule(_localctx, 6, fogParser::RuleLaststat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fogParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(137);
        match(fogParser::T__15);
        setState(139);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << fogParser::T__19)
          | (1ULL << fogParser::T__20)
          | (1ULL << fogParser::T__21)
          | (1ULL << fogParser::T__34)
          | (1ULL << fogParser::T__41)
          | (1ULL << fogParser::T__42)
          | (1ULL << fogParser::NAME)
          | (1ULL << fogParser::INT)
          | (1ULL << fogParser::HEX)
          | (1ULL << fogParser::BINARY))) != 0)) {
          setState(138);
          exp(0);
        }
        break;
      }

      case fogParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(141);
        match(fogParser::T__1);
        break;
      }

      case fogParser::T__16: {
        enterOuterAlt(_localctx, 3);
        setState(142);
        match(fogParser::T__16);
        setState(144);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == fogParser::T__0) {
          setState(143);
          match(fogParser::T__0);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

fogParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fogParser::LabelContext::NAME() {
  return getToken(fogParser::NAME, 0);
}


size_t fogParser::LabelContext::getRuleIndex() const {
  return fogParser::RuleLabel;
}

void fogParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void fogParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

fogParser::LabelContext* fogParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 8, fogParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(fogParser::T__17);
    setState(149);
    match(fogParser::NAME);
    setState(150);
    match(fogParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamelistContext ------------------------------------------------------------------

fogParser::NamelistContext::NamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fogParser::TypeContext *> fogParser::NamelistContext::type() {
  return getRuleContexts<fogParser::TypeContext>();
}

fogParser::TypeContext* fogParser::NamelistContext::type(size_t i) {
  return getRuleContext<fogParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> fogParser::NamelistContext::NAME() {
  return getTokens(fogParser::NAME);
}

tree::TerminalNode* fogParser::NamelistContext::NAME(size_t i) {
  return getToken(fogParser::NAME, i);
}


size_t fogParser::NamelistContext::getRuleIndex() const {
  return fogParser::RuleNamelist;
}

void fogParser::NamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamelist(this);
}

void fogParser::NamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamelist(this);
}

fogParser::NamelistContext* fogParser::namelist() {
  NamelistContext *_localctx = _tracker.createInstance<NamelistContext>(_ctx, getState());
  enterRule(_localctx, 10, fogParser::RuleNamelist);
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
    setState(152);
    type();
    setState(153);
    match(fogParser::NAME);
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fogParser::T__11) {
      setState(154);
      match(fogParser::T__11);
      setState(155);
      type();
      setState(156);
      match(fogParser::NAME);
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplistContext ------------------------------------------------------------------

fogParser::ExplistContext::ExplistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fogParser::ExpContext *> fogParser::ExplistContext::exp() {
  return getRuleContexts<fogParser::ExpContext>();
}

fogParser::ExpContext* fogParser::ExplistContext::exp(size_t i) {
  return getRuleContext<fogParser::ExpContext>(i);
}


size_t fogParser::ExplistContext::getRuleIndex() const {
  return fogParser::RuleExplist;
}

void fogParser::ExplistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplist(this);
}

void fogParser::ExplistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplist(this);
}

fogParser::ExplistContext* fogParser::explist() {
  ExplistContext *_localctx = _tracker.createInstance<ExplistContext>(_ctx, getState());
  enterRule(_localctx, 12, fogParser::RuleExplist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(168);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(163);
        exp(0);
        setState(164);
        match(fogParser::T__11); 
      }
      setState(170);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(171);
    exp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

fogParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::NumberContext* fogParser::ExpContext::number() {
  return getRuleContext<fogParser::NumberContext>(0);
}

fogParser::PrefixexpContext* fogParser::ExpContext::prefixexp() {
  return getRuleContext<fogParser::PrefixexpContext>(0);
}

fogParser::OperatorUnaryContext* fogParser::ExpContext::operatorUnary() {
  return getRuleContext<fogParser::OperatorUnaryContext>(0);
}

std::vector<fogParser::ExpContext *> fogParser::ExpContext::exp() {
  return getRuleContexts<fogParser::ExpContext>();
}

fogParser::ExpContext* fogParser::ExpContext::exp(size_t i) {
  return getRuleContext<fogParser::ExpContext>(i);
}

fogParser::OperatorMulContext* fogParser::ExpContext::operatorMul() {
  return getRuleContext<fogParser::OperatorMulContext>(0);
}

fogParser::OperatorAddSubContext* fogParser::ExpContext::operatorAddSub() {
  return getRuleContext<fogParser::OperatorAddSubContext>(0);
}

fogParser::OperatorComparisonContext* fogParser::ExpContext::operatorComparison() {
  return getRuleContext<fogParser::OperatorComparisonContext>(0);
}

fogParser::OperatorAndContext* fogParser::ExpContext::operatorAnd() {
  return getRuleContext<fogParser::OperatorAndContext>(0);
}

fogParser::OperatorOrContext* fogParser::ExpContext::operatorOr() {
  return getRuleContext<fogParser::OperatorOrContext>(0);
}

fogParser::OperatorBitwiseContext* fogParser::ExpContext::operatorBitwise() {
  return getRuleContext<fogParser::OperatorBitwiseContext>(0);
}


size_t fogParser::ExpContext::getRuleIndex() const {
  return fogParser::RuleExp;
}

void fogParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void fogParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


fogParser::ExpContext* fogParser::exp() {
   return exp(0);
}

fogParser::ExpContext* fogParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fogParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  fogParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, fogParser::RuleExp, precedence);

    

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
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fogParser::T__19: {
        setState(174);
        match(fogParser::T__19);
        break;
      }

      case fogParser::T__20: {
        setState(175);
        match(fogParser::T__20);
        break;
      }

      case fogParser::INT:
      case fogParser::HEX:
      case fogParser::BINARY: {
        setState(176);
        number();
        break;
      }

      case fogParser::T__21:
      case fogParser::NAME: {
        setState(177);
        prefixexp();
        break;
      }

      case fogParser::T__34:
      case fogParser::T__41:
      case fogParser::T__42: {
        setState(178);
        operatorUnary();
        setState(179);
        exp(7);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(209);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(207);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(183);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(184);
          operatorMul();
          setState(185);
          exp(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(187);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(188);
          operatorAddSub();
          setState(189);
          exp(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(191);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(192);
          operatorComparison();
          setState(193);
          exp(5);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(195);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(196);
          operatorAnd();
          setState(197);
          exp(4);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(199);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(200);
          operatorOr();
          setState(201);
          exp(3);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(203);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(204);
          operatorBitwise();
          setState(205);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(211);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrefixexpContext ------------------------------------------------------------------

fogParser::PrefixexpContext::PrefixexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::VarOrExpContext* fogParser::PrefixexpContext::varOrExp() {
  return getRuleContext<fogParser::VarOrExpContext>(0);
}

fogParser::FunctioncallContext* fogParser::PrefixexpContext::functioncall() {
  return getRuleContext<fogParser::FunctioncallContext>(0);
}


size_t fogParser::PrefixexpContext::getRuleIndex() const {
  return fogParser::RulePrefixexp;
}

void fogParser::PrefixexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixexp(this);
}

void fogParser::PrefixexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixexp(this);
}

fogParser::PrefixexpContext* fogParser::prefixexp() {
  PrefixexpContext *_localctx = _tracker.createInstance<PrefixexpContext>(_ctx, getState());
  enterRule(_localctx, 16, fogParser::RulePrefixexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(212);
      varOrExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(213);
      functioncall();
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

//----------------- FunctioncallContext ------------------------------------------------------------------

fogParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::VarOrExpContext* fogParser::FunctioncallContext::varOrExp() {
  return getRuleContext<fogParser::VarOrExpContext>(0);
}

std::vector<fogParser::ArgsContext *> fogParser::FunctioncallContext::args() {
  return getRuleContexts<fogParser::ArgsContext>();
}

fogParser::ArgsContext* fogParser::FunctioncallContext::args(size_t i) {
  return getRuleContext<fogParser::ArgsContext>(i);
}


size_t fogParser::FunctioncallContext::getRuleIndex() const {
  return fogParser::RuleFunctioncall;
}

void fogParser::FunctioncallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctioncall(this);
}

void fogParser::FunctioncallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctioncall(this);
}

fogParser::FunctioncallContext* fogParser::functioncall() {
  FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, getState());
  enterRule(_localctx, 18, fogParser::RuleFunctioncall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(216);
    varOrExp();
    setState(218); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(217);
              args();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(220); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarOrExpContext ------------------------------------------------------------------

fogParser::VarOrExpContext::VarOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::VarContext* fogParser::VarOrExpContext::var() {
  return getRuleContext<fogParser::VarContext>(0);
}

fogParser::ExpContext* fogParser::VarOrExpContext::exp() {
  return getRuleContext<fogParser::ExpContext>(0);
}


size_t fogParser::VarOrExpContext::getRuleIndex() const {
  return fogParser::RuleVarOrExp;
}

void fogParser::VarOrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarOrExp(this);
}

void fogParser::VarOrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarOrExp(this);
}

fogParser::VarOrExpContext* fogParser::varOrExp() {
  VarOrExpContext *_localctx = _tracker.createInstance<VarOrExpContext>(_ctx, getState());
  enterRule(_localctx, 20, fogParser::RuleVarOrExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(222);
      var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(223);
      match(fogParser::T__21);
      setState(224);
      exp(0);
      setState(225);
      match(fogParser::T__22);
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

//----------------- VarContext ------------------------------------------------------------------

fogParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fogParser::VarContext::NAME() {
  return getToken(fogParser::NAME, 0);
}

fogParser::ExpContext* fogParser::VarContext::exp() {
  return getRuleContext<fogParser::ExpContext>(0);
}

std::vector<fogParser::VarSuffixContext *> fogParser::VarContext::varSuffix() {
  return getRuleContexts<fogParser::VarSuffixContext>();
}

fogParser::VarSuffixContext* fogParser::VarContext::varSuffix(size_t i) {
  return getRuleContext<fogParser::VarSuffixContext>(i);
}


size_t fogParser::VarContext::getRuleIndex() const {
  return fogParser::RuleVar;
}

void fogParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void fogParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}

fogParser::VarContext* fogParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 22, fogParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(235);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fogParser::NAME: {
        setState(229);
        match(fogParser::NAME);
        break;
      }

      case fogParser::T__21: {
        setState(230);
        match(fogParser::T__21);
        setState(231);
        exp(0);
        setState(232);
        match(fogParser::T__22);
        setState(233);
        varSuffix();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(237);
        varSuffix(); 
      }
      setState(242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarSuffixContext ------------------------------------------------------------------

fogParser::VarSuffixContext::VarSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::ExpContext* fogParser::VarSuffixContext::exp() {
  return getRuleContext<fogParser::ExpContext>(0);
}


size_t fogParser::VarSuffixContext::getRuleIndex() const {
  return fogParser::RuleVarSuffix;
}

void fogParser::VarSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarSuffix(this);
}

void fogParser::VarSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarSuffix(this);
}

fogParser::VarSuffixContext* fogParser::varSuffix() {
  VarSuffixContext *_localctx = _tracker.createInstance<VarSuffixContext>(_ctx, getState());
  enterRule(_localctx, 24, fogParser::RuleVarSuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(fogParser::T__23);
    setState(244);
    exp(0);
    setState(245);
    match(fogParser::T__24);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

fogParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::ExplistContext* fogParser::ArgsContext::explist() {
  return getRuleContext<fogParser::ExplistContext>(0);
}


size_t fogParser::ArgsContext::getRuleIndex() const {
  return fogParser::RuleArgs;
}

void fogParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void fogParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}

fogParser::ArgsContext* fogParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 26, fogParser::RuleArgs);
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
    setState(247);
    match(fogParser::T__21);
    setState(249);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fogParser::T__19)
      | (1ULL << fogParser::T__20)
      | (1ULL << fogParser::T__21)
      | (1ULL << fogParser::T__34)
      | (1ULL << fogParser::T__41)
      | (1ULL << fogParser::T__42)
      | (1ULL << fogParser::NAME)
      | (1ULL << fogParser::INT)
      | (1ULL << fogParser::HEX)
      | (1ULL << fogParser::BINARY))) != 0)) {
      setState(248);
      explist();
    }
    setState(251);
    match(fogParser::T__22);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncbodyContext ------------------------------------------------------------------

fogParser::FuncbodyContext::FuncbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fogParser::BlockContext* fogParser::FuncbodyContext::block() {
  return getRuleContext<fogParser::BlockContext>(0);
}

fogParser::NamelistContext* fogParser::FuncbodyContext::namelist() {
  return getRuleContext<fogParser::NamelistContext>(0);
}


size_t fogParser::FuncbodyContext::getRuleIndex() const {
  return fogParser::RuleFuncbody;
}

void fogParser::FuncbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncbody(this);
}

void fogParser::FuncbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncbody(this);
}

fogParser::FuncbodyContext* fogParser::funcbody() {
  FuncbodyContext *_localctx = _tracker.createInstance<FuncbodyContext>(_ctx, getState());
  enterRule(_localctx, 28, fogParser::RuleFuncbody);
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
    setState(253);
    match(fogParser::T__21);
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fogParser::T__43)
      | (1ULL << fogParser::T__44)
      | (1ULL << fogParser::T__45)
      | (1ULL << fogParser::T__46)
      | (1ULL << fogParser::T__47)
      | (1ULL << fogParser::T__48))) != 0)) {
      setState(254);
      namelist();
    }
    setState(257);
    match(fogParser::T__22);
    setState(258);
    match(fogParser::T__4);
    setState(259);
    block();
    setState(260);
    match(fogParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorOrContext ------------------------------------------------------------------

fogParser::OperatorOrContext::OperatorOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::OperatorOrContext::getRuleIndex() const {
  return fogParser::RuleOperatorOr;
}

void fogParser::OperatorOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorOr(this);
}

void fogParser::OperatorOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorOr(this);
}

fogParser::OperatorOrContext* fogParser::operatorOr() {
  OperatorOrContext *_localctx = _tracker.createInstance<OperatorOrContext>(_ctx, getState());
  enterRule(_localctx, 30, fogParser::RuleOperatorOr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(262);
    match(fogParser::T__25);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorAndContext ------------------------------------------------------------------

fogParser::OperatorAndContext::OperatorAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::OperatorAndContext::getRuleIndex() const {
  return fogParser::RuleOperatorAnd;
}

void fogParser::OperatorAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorAnd(this);
}

void fogParser::OperatorAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorAnd(this);
}

fogParser::OperatorAndContext* fogParser::operatorAnd() {
  OperatorAndContext *_localctx = _tracker.createInstance<OperatorAndContext>(_ctx, getState());
  enterRule(_localctx, 32, fogParser::RuleOperatorAnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(fogParser::T__26);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorComparisonContext ------------------------------------------------------------------

fogParser::OperatorComparisonContext::OperatorComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::OperatorComparisonContext::getRuleIndex() const {
  return fogParser::RuleOperatorComparison;
}

void fogParser::OperatorComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorComparison(this);
}

void fogParser::OperatorComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorComparison(this);
}

fogParser::OperatorComparisonContext* fogParser::operatorComparison() {
  OperatorComparisonContext *_localctx = _tracker.createInstance<OperatorComparisonContext>(_ctx, getState());
  enterRule(_localctx, 34, fogParser::RuleOperatorComparison);
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
    setState(266);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fogParser::T__27)
      | (1ULL << fogParser::T__28)
      | (1ULL << fogParser::T__29)
      | (1ULL << fogParser::T__30)
      | (1ULL << fogParser::T__31)
      | (1ULL << fogParser::T__32))) != 0))) {
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

//----------------- OperatorAddSubContext ------------------------------------------------------------------

fogParser::OperatorAddSubContext::OperatorAddSubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::OperatorAddSubContext::getRuleIndex() const {
  return fogParser::RuleOperatorAddSub;
}

void fogParser::OperatorAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorAddSub(this);
}

void fogParser::OperatorAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorAddSub(this);
}

fogParser::OperatorAddSubContext* fogParser::operatorAddSub() {
  OperatorAddSubContext *_localctx = _tracker.createInstance<OperatorAddSubContext>(_ctx, getState());
  enterRule(_localctx, 36, fogParser::RuleOperatorAddSub);
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
    setState(268);
    _la = _input->LA(1);
    if (!(_la == fogParser::T__33

    || _la == fogParser::T__34)) {
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

//----------------- OperatorMulContext ------------------------------------------------------------------

fogParser::OperatorMulContext::OperatorMulContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::OperatorMulContext::getRuleIndex() const {
  return fogParser::RuleOperatorMul;
}

void fogParser::OperatorMulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorMul(this);
}

void fogParser::OperatorMulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorMul(this);
}

fogParser::OperatorMulContext* fogParser::operatorMul() {
  OperatorMulContext *_localctx = _tracker.createInstance<OperatorMulContext>(_ctx, getState());
  enterRule(_localctx, 38, fogParser::RuleOperatorMul);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(fogParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorBitwiseContext ------------------------------------------------------------------

fogParser::OperatorBitwiseContext::OperatorBitwiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::OperatorBitwiseContext::getRuleIndex() const {
  return fogParser::RuleOperatorBitwise;
}

void fogParser::OperatorBitwiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorBitwise(this);
}

void fogParser::OperatorBitwiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorBitwise(this);
}

fogParser::OperatorBitwiseContext* fogParser::operatorBitwise() {
  OperatorBitwiseContext *_localctx = _tracker.createInstance<OperatorBitwiseContext>(_ctx, getState());
  enterRule(_localctx, 40, fogParser::RuleOperatorBitwise);
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
    setState(272);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fogParser::T__36)
      | (1ULL << fogParser::T__37)
      | (1ULL << fogParser::T__38)
      | (1ULL << fogParser::T__39)
      | (1ULL << fogParser::T__40))) != 0))) {
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

//----------------- OperatorUnaryContext ------------------------------------------------------------------

fogParser::OperatorUnaryContext::OperatorUnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::OperatorUnaryContext::getRuleIndex() const {
  return fogParser::RuleOperatorUnary;
}

void fogParser::OperatorUnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorUnary(this);
}

void fogParser::OperatorUnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorUnary(this);
}

fogParser::OperatorUnaryContext* fogParser::operatorUnary() {
  OperatorUnaryContext *_localctx = _tracker.createInstance<OperatorUnaryContext>(_ctx, getState());
  enterRule(_localctx, 42, fogParser::RuleOperatorUnary);
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
    setState(274);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fogParser::T__34)
      | (1ULL << fogParser::T__41)
      | (1ULL << fogParser::T__42))) != 0))) {
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

//----------------- NumberContext ------------------------------------------------------------------

fogParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fogParser::NumberContext::INT() {
  return getToken(fogParser::INT, 0);
}

tree::TerminalNode* fogParser::NumberContext::HEX() {
  return getToken(fogParser::HEX, 0);
}

tree::TerminalNode* fogParser::NumberContext::BINARY() {
  return getToken(fogParser::BINARY, 0);
}


size_t fogParser::NumberContext::getRuleIndex() const {
  return fogParser::RuleNumber;
}

void fogParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void fogParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

fogParser::NumberContext* fogParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 44, fogParser::RuleNumber);
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
    setState(276);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fogParser::INT)
      | (1ULL << fogParser::HEX)
      | (1ULL << fogParser::BINARY))) != 0))) {
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

//----------------- TypeContext ------------------------------------------------------------------

fogParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::TypeContext::getRuleIndex() const {
  return fogParser::RuleType;
}

void fogParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void fogParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

fogParser::TypeContext* fogParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 46, fogParser::RuleType);
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
    setState(278);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fogParser::T__43)
      | (1ULL << fogParser::T__44)
      | (1ULL << fogParser::T__45)
      | (1ULL << fogParser::T__46)
      | (1ULL << fogParser::T__47)
      | (1ULL << fogParser::T__48))) != 0))) {
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

//----------------- ConstantContext ------------------------------------------------------------------

fogParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fogParser::ConstantContext::getRuleIndex() const {
  return fogParser::RuleConstant;
}

void fogParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void fogParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fogListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

fogParser::ConstantContext* fogParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 48, fogParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(fogParser::T__49);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool fogParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool fogParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void fogParser::initialize() {
  std::call_once(fogParserOnceFlag, fogParserInitialize);
}
