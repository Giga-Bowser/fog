
// Generated from fog.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "fogListener.h"


/**
 * This class provides an empty implementation of fogListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  fogBaseListener : public fogListener {
public:

  virtual void enterChunk(fogParser::ChunkContext * /*ctx*/) override { }
  virtual void exitChunk(fogParser::ChunkContext * /*ctx*/) override { }

  virtual void enterBlock(fogParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(fogParser::BlockContext * /*ctx*/) override { }

  virtual void enterStat(fogParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(fogParser::StatContext * /*ctx*/) override { }

  virtual void enterLaststat(fogParser::LaststatContext * /*ctx*/) override { }
  virtual void exitLaststat(fogParser::LaststatContext * /*ctx*/) override { }

  virtual void enterLabel(fogParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(fogParser::LabelContext * /*ctx*/) override { }

  virtual void enterNamelist(fogParser::NamelistContext * /*ctx*/) override { }
  virtual void exitNamelist(fogParser::NamelistContext * /*ctx*/) override { }

  virtual void enterExplist(fogParser::ExplistContext * /*ctx*/) override { }
  virtual void exitExplist(fogParser::ExplistContext * /*ctx*/) override { }

  virtual void enterExp(fogParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(fogParser::ExpContext * /*ctx*/) override { }

  virtual void enterPrefixexp(fogParser::PrefixexpContext * /*ctx*/) override { }
  virtual void exitPrefixexp(fogParser::PrefixexpContext * /*ctx*/) override { }

  virtual void enterFunctioncall(fogParser::FunctioncallContext * /*ctx*/) override { }
  virtual void exitFunctioncall(fogParser::FunctioncallContext * /*ctx*/) override { }

  virtual void enterVarOrExp(fogParser::VarOrExpContext * /*ctx*/) override { }
  virtual void exitVarOrExp(fogParser::VarOrExpContext * /*ctx*/) override { }

  virtual void enterVar(fogParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(fogParser::VarContext * /*ctx*/) override { }

  virtual void enterVarSuffix(fogParser::VarSuffixContext * /*ctx*/) override { }
  virtual void exitVarSuffix(fogParser::VarSuffixContext * /*ctx*/) override { }

  virtual void enterArgs(fogParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(fogParser::ArgsContext * /*ctx*/) override { }

  virtual void enterFuncbody(fogParser::FuncbodyContext * /*ctx*/) override { }
  virtual void exitFuncbody(fogParser::FuncbodyContext * /*ctx*/) override { }

  virtual void enterOperatorOr(fogParser::OperatorOrContext * /*ctx*/) override { }
  virtual void exitOperatorOr(fogParser::OperatorOrContext * /*ctx*/) override { }

  virtual void enterOperatorAnd(fogParser::OperatorAndContext * /*ctx*/) override { }
  virtual void exitOperatorAnd(fogParser::OperatorAndContext * /*ctx*/) override { }

  virtual void enterOperatorComparison(fogParser::OperatorComparisonContext * /*ctx*/) override { }
  virtual void exitOperatorComparison(fogParser::OperatorComparisonContext * /*ctx*/) override { }

  virtual void enterOperatorAddSub(fogParser::OperatorAddSubContext * /*ctx*/) override { }
  virtual void exitOperatorAddSub(fogParser::OperatorAddSubContext * /*ctx*/) override { }

  virtual void enterOperatorMul(fogParser::OperatorMulContext * /*ctx*/) override { }
  virtual void exitOperatorMul(fogParser::OperatorMulContext * /*ctx*/) override { }

  virtual void enterOperatorBitwise(fogParser::OperatorBitwiseContext * /*ctx*/) override { }
  virtual void exitOperatorBitwise(fogParser::OperatorBitwiseContext * /*ctx*/) override { }

  virtual void enterOperatorUnary(fogParser::OperatorUnaryContext * /*ctx*/) override { }
  virtual void exitOperatorUnary(fogParser::OperatorUnaryContext * /*ctx*/) override { }

  virtual void enterOperatorIncDec(fogParser::OperatorIncDecContext * /*ctx*/) override { }
  virtual void exitOperatorIncDec(fogParser::OperatorIncDecContext * /*ctx*/) override { }

  virtual void enterNumber(fogParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(fogParser::NumberContext * /*ctx*/) override { }

  virtual void enterType(fogParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(fogParser::TypeContext * /*ctx*/) override { }

  virtual void enterConstant(fogParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(fogParser::ConstantContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

