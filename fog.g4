grammar fog;

chunk: block EOF;

block: stat* laststat?;

stat:
    ';'
    | functioncall
    | label
    | 'break'
    | 'goto' NAME
    | 'while' exp '{' block '}'
    | 'if' exp '{' block 
        ('} elseif' exp '{' block)* 
        ('} else {' block)? '}'
    | 'for' type NAME '=' exp ',' exp (',' exp)? '{' block '}'
	| 'inline {' .*? '}'
    | (type | 'void') NAME funcbody
    | constant? type NAME '=' exp
    | NAME '=' exp;

laststat: 'return' exp? | 'break' | 'continue' ';'?;

label: 'label' NAME ':';

namelist: type NAME (',' type NAME)*;

explist: (exp ',')* exp;

exp:
    'false'
    | 'true'
    | number
	| prefixexp
	| exp operatorOr exp
	| exp operatorAnd exp
    | exp operatorComparison exp
	| exp operatorBitwise exp
	| exp operatorAddSub exp
	| exp operatorMul exp
	| operatorUnary exp
	| operatorIncDec exp
	| exp operatorIncDec;

prefixexp: varOrExp | functioncall;

functioncall: varOrExp args+;

varOrExp: var | '(' exp ')';

var: (NAME | '(' exp ')' varSuffix) varSuffix*;

varSuffix: '[' exp ']';

args: '(' explist? ')';

funcbody: '(' namelist? ')' '{' block '}';

operatorOr: 'or';

operatorAnd: 'and';

operatorComparison: '<' | '>' | '<=' | '>=' | '!=' | '==';

operatorAddSub: '+' | '-';

operatorMul: '*';

operatorBitwise: '&' | '|' | '^' | '<<' | '>>';

operatorUnary: '!' | '-' | '~';

operatorIncDec: '++' | '--';

number: INT | HEX | BINARY;

type: 'i8' | 'i16' | 'i32' | 'byte' | 'short' | 'long';

constant: 'con';

// LEXER

NAME: [a-zA-Z_][a-zA-Z_0-9]*;

INT: Digit+;

HEX: '$' HexDigit+;

BINARY: '%' BinDigit+;

fragment Digit: [0-9];

fragment HexDigit: [0-9a-fA-F];

fragment BinDigit: '0' | '1';

fragment SingleLineInputCharacter: ~[\r\n\u0085\u2028\u2029];

COMMENT: '/*' .+? '*/' -> channel(HIDDEN);

LINE_COMMENT: '//' SingleLineInputCharacter* -> channel(HIDDEN);

WS: [ \t\u000C\r\n]+ -> skip;
