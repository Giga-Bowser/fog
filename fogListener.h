
// Generated from fog.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "fogParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by fogParser.
 */
class  fogListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterChunk(fogParser::ChunkContext *ctx) = 0;
  virtual void exitChunk(fogParser::ChunkContext *ctx) = 0;

  virtual void enterBlock(fogParser::BlockContext *ctx) = 0;
  virtual void exitBlock(fogParser::BlockContext *ctx) = 0;

  virtual void enterStat(fogParser::StatContext *ctx) = 0;
  virtual void exitStat(fogParser::StatContext *ctx) = 0;

  virtual void enterLaststat(fogParser::LaststatContext *ctx) = 0;
  virtual void exitLaststat(fogParser::LaststatContext *ctx) = 0;

  virtual void enterLabel(fogParser::LabelContext *ctx) = 0;
  virtual void exitLabel(fogParser::LabelContext *ctx) = 0;

  virtual void enterNamelist(fogParser::NamelistContext *ctx) = 0;
  virtual void exitNamelist(fogParser::NamelistContext *ctx) = 0;

  virtual void enterExplist(fogParser::ExplistContext *ctx) = 0;
  virtual void exitExplist(fogParser::ExplistContext *ctx) = 0;

  virtual void enterExp(fogParser::ExpContext *ctx) = 0;
  virtual void exitExp(fogParser::ExpContext *ctx) = 0;

  virtual void enterPrefixexp(fogParser::PrefixexpContext *ctx) = 0;
  virtual void exitPrefixexp(fogParser::PrefixexpContext *ctx) = 0;

  virtual void enterFunctioncall(fogParser::FunctioncallContext *ctx) = 0;
  virtual void exitFunctioncall(fogParser::FunctioncallContext *ctx) = 0;

  virtual void enterVarOrExp(fogParser::VarOrExpContext *ctx) = 0;
  virtual void exitVarOrExp(fogParser::VarOrExpContext *ctx) = 0;

  virtual void enterVar(fogParser::VarContext *ctx) = 0;
  virtual void exitVar(fogParser::VarContext *ctx) = 0;

  virtual void enterVarSuffix(fogParser::VarSuffixContext *ctx) = 0;
  virtual void exitVarSuffix(fogParser::VarSuffixContext *ctx) = 0;

  virtual void enterArgs(fogParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(fogParser::ArgsContext *ctx) = 0;

  virtual void enterFuncbody(fogParser::FuncbodyContext *ctx) = 0;
  virtual void exitFuncbody(fogParser::FuncbodyContext *ctx) = 0;

  virtual void enterOperatorOr(fogParser::OperatorOrContext *ctx) = 0;
  virtual void exitOperatorOr(fogParser::OperatorOrContext *ctx) = 0;

  virtual void enterOperatorAnd(fogParser::OperatorAndContext *ctx) = 0;
  virtual void exitOperatorAnd(fogParser::OperatorAndContext *ctx) = 0;

  virtual void enterOperatorComparison(fogParser::OperatorComparisonContext *ctx) = 0;
  virtual void exitOperatorComparison(fogParser::OperatorComparisonContext *ctx) = 0;

  virtual void enterOperatorAddSub(fogParser::OperatorAddSubContext *ctx) = 0;
  virtual void exitOperatorAddSub(fogParser::OperatorAddSubContext *ctx) = 0;

  virtual void enterOperatorMul(fogParser::OperatorMulContext *ctx) = 0;
  virtual void exitOperatorMul(fogParser::OperatorMulContext *ctx) = 0;

  virtual void enterOperatorBitwise(fogParser::OperatorBitwiseContext *ctx) = 0;
  virtual void exitOperatorBitwise(fogParser::OperatorBitwiseContext *ctx) = 0;

  virtual void enterOperatorUnary(fogParser::OperatorUnaryContext *ctx) = 0;
  virtual void exitOperatorUnary(fogParser::OperatorUnaryContext *ctx) = 0;

  virtual void enterOperatorIncDec(fogParser::OperatorIncDecContext *ctx) = 0;
  virtual void exitOperatorIncDec(fogParser::OperatorIncDecContext *ctx) = 0;

  virtual void enterNumber(fogParser::NumberContext *ctx) = 0;
  virtual void exitNumber(fogParser::NumberContext *ctx) = 0;

  virtual void enterType(fogParser::TypeContext *ctx) = 0;
  virtual void exitType(fogParser::TypeContext *ctx) = 0;

  virtual void enterConstant(fogParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(fogParser::ConstantContext *ctx) = 0;


};

