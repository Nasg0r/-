grammar UpdateGrammar;

// начальное правило грамматики
program: statement* EOF;

// список возможных операторов
statement
    : variableDeclaration
    | constDeclaration
    | assignment 
    | functionDefinition 
    | functionCall 
    | println 
    | returnStatement
    | ifStatement 
    | blockStatement
    | whileStatement;

// список возможных выражений
expression
    : '(' expression ')'                               #ParenthesisExpr
    | expression op=(ASTERISK | SLASH) expression     #MulDivExpr
    | expression op=(PLUS | MINUS) expression         #PlusMinusExpr
    | expression op=(LOGICAL_OR | LOGICAL_AND) expression #LogicExpr
    | expression compOperator expression              #CompExpr
    | IDENTIFIER                                      #IdExpr
    | NUMBER                                          #NumExpr
    | DOUBLE_NUMBER                                   #DoubleExpr
    | STRING_LITERAL                                  #StringExpr
    | functionCall                                    #FuncCallExpr
    | BOOL                                           #BoolExpr;

// описание отдельных выражений и операторов
variableDeclaration: 'var' IDENTIFIER '=' expression;

constDeclaration: 'const' IDENTIFIER '=' expression;

assignment: IDENTIFIER '=' expression;

compOperator: LESS
            | LESS_OR_EQUAL
            | EQUAL
            | NOT_EQUAL
            | GREATER
            | GREATER_OR_EQUAL;

println: 'println' expression;

returnStatement: 'return' expression;

blockStatement: '{' statement* '}';

functionCall: IDENTIFIER '(' (expression (',' expression)*)? ')';

functionDefinition: 'fun' IDENTIFIER '(' (IDENTIFIER (',' IDENTIFIER)*)? ')' '{' statement* '}';

ifStatement: 'if' '(' expression ')' statement (elseStatement)?;

elseStatement: 'else' statement;

whileStatement: 'while' '(' expression ')' statement;

// список токенов
IDENTIFIER         : [a-zA-Z_] [a-zA-Z_0-9]*; 
NUMBER             : [0-9]+;
DOUBLE_NUMBER      : NUMBER '.' NUMBER; 
STRING_LITERAL     : '"' (~["])* '"';
BOOL               : 'True' | 'False';

ASTERISK           : '*';
SLASH              : '/';
PLUS               : '+';
MINUS              : '-';

LOGICAL_OR         : '||';
LOGICAL_AND        : '&&';

EQUAL              : '==';
NOT_EQUAL          : '!=';
GREATER            : '>';
GREATER_OR_EQUAL   : '>=';
LESS               : '<';
LESS_OR_EQUAL      : '<=';

SPACE              : [ \r\n\t]+ -> skip; 
NEW_LINE           : '\r'? '\n';
LINE_COMMENT       : '//' ~[\n\r]* -> skip;
MULTI_LINE_COMMENT : '/*' .*? '*/' -> skip;
