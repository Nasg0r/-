#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stack>
#include "antlr4-runtime.h"
#include "C:/Users/nasgor/source/repos/ОРК/ОРК/antlr/UpdateGrammarLexer.h"
#include "C:/Users/nasgor/source/repos/ОРК/ОРК/antlr/UpdateGrammarParser.h"
#include "C:/Users/nasgor/source/repos/ОРК/ОРК/antlr/UpdateGrammarVisitor.h"

using namespace antlr4;

struct Variable {
    int i;
    float f;
    std::string s;
    bool b = false;
    bool isConst = false;
    size_t type_id;

    enum {
        INT = 14,
        FLOAT = 15,
        STRING = 16,
        BOOL = 100
    };

    void setValue(const std::string& v) {
        if (!isConst) {
            switch (type_id) {
            case INT:
                i = std::atoi(v.c_str());
                break;
            case FLOAT:
                f = std::atof(v.c_str());
                break;
            case STRING:
                s = v;
                break;
            case BOOL:
                b = (v == "True");
                break;
            default:
                std::cerr << "Unsupported type!\n";
                exit(1);
            }
        }
        else {
            std::cerr << "Attempt to modify a constant value!\n";
            exit(1);
        }
    }

    Variable operator + (const Variable& sec) const
    {
            if (type_id == sec.type_id) {
                Variable t;
                switch (type_id) {
                case INT:
                    t.type_id = INT;
                    t.i = i + sec.i;
                    return t;
                    break;
                case FLOAT:
                    t.type_id = FLOAT;
                    t.f = f + sec.f;
                    return t;
                    break;
                case STRING:
                    t.type_id = STRING;
                    t.f = f + sec.f;
                    return t;
                    break;
                }
            }
            else {
                std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
                exit(1);
            }
    }
    Variable operator - (const Variable& sec) const
    {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                t.type_id = INT;
                t.i = i - sec.i;
                return t;
                break;
            case FLOAT:
                t.type_id = FLOAT;
                t.f = f - sec.f;
                return t;
                break;
            case STRING:
                t.type_id = STRING;
                //t.i = i - sec.i;
                return t;
                break;
            }
        }
            else {
                std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
                exit(1);
            }
        
    }
    Variable operator * (const Variable& sec) const
    {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                t.type_id = INT;
                t.i = i * sec.i;
                return t;
                break;
            case FLOAT:
                t.type_id = FLOAT;
                t.f = f * sec.f;
                return t;
                break;
            }
        }
        else {
            std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    Variable operator / (const Variable& sec) const
    {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                t.type_id = INT;
                t.i = i / sec.i;
                return t;
                break;
            case FLOAT:
                t.type_id = FLOAT;
                t.f = f / sec.f;
                return t;
                break;
            }
        }
        else {
            std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
            exit(1);
        }

    }
    bool operator < (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i < sec.i;
                break;
            case FLOAT:
                return f < sec.f;
                break;
            default:
                std::cout << "Unsupported type for comparison\n";
            }
        }
        else {
            std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator <= (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i <= sec.i;
                break;
            case FLOAT:
                return f <= sec.f;
                break;
            default:
                std::cout << "Unsupported type for comparison\n";
            }
        }
        else {
            std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator > (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i > sec.i;
                break;
            case FLOAT:
                return f > sec.f;
                break;
            default:
                std::cout << "Unsupported type for comparison\n";
            }
        }
        else {
            std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator >= (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i >= sec.i;
                break;
            case FLOAT:
                return f >= sec.f;
                break;
            default:
                std::cout << "Unsupported type for comparison\n";
            }
        }
        else {
            std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator == (const Variable& sec) const {
        if (type_id == sec.type_id) {
            switch (type_id) {
            case INT:
                return i == sec.i;
                break;
            case FLOAT:
                return f == sec.f;
                break;
            case STRING:
                return s == sec.s;
                break;
            default:
                std::cout << "Unsupported type for equality chec\n";
            }
        }
        else {
            std::cout << "Unsupported type!\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }

    bool operator!=(const Variable& sec) const {
        return !(*this == sec);
    }

    std::string toString() {
        switch (type_id) {
        case INT:
            return std::to_string(i);
        case FLOAT:
            return std::to_string(f);
        case STRING:
            return s;
        case BOOL:
            return b ? "True" : "False";
        default:
            return "Unknown type";
        }
    }
    static Variable makeOperation(Variable v1, size_t op, Variable v2) {
        switch (op) {
        case UpdateGrammarLexer::PLUS:
            return v1 + v2;
        case UpdateGrammarLexer::MINUS:
            return v1 - v2;
        case UpdateGrammarLexer::ASTERISK:
            return v1 * v2;
        case UpdateGrammarLexer::SLASH:
            return v1 / v2;
        default:
            std::cout << "Unsupported operation\n";
            exit(1);
        }
    }

    static bool makeComp(Variable v1, size_t op, Variable v2) {
        switch (op) {
        case UpdateGrammarLexer::LESS:
            return v1 < v2;
        case UpdateGrammarLexer::LESS_OR_EQUAL:
            return v1 <= v2;
        case UpdateGrammarLexer::EQUAL:
            return v1 == v2;
        case UpdateGrammarLexer::NOT_EQUAL:
            return v1 != v2;
        case UpdateGrammarLexer::GREATER:
            return v1 > v2;
        case UpdateGrammarLexer::GREATER_OR_EQUAL:
            return v1 >= v2;
        default:
            std::cout << "Unsupported comparison\n";
            exit(1);
        }
    }
};

class TreeShapeListener : public UpdateGrammarVisitor {
public:
    std::map<std::string, Variable> variables;
    std::stack<Variable> expressionStack;

    void visitProgram(UpdateGrammarParser::ProgramContext* ctx) override {
        visitChildren(ctx);
    }

    void visitStatement(UpdateGrammarParser::StatementContext* ctx) override {
        visitChildren(ctx);
    }

    void visitConstDeclaration(UpdateGrammarParser::ConstDeclarationContext* ctx) override {
        Variable var;
        visit(ctx->expression());
        var = expressionStack.top();
        expressionStack.pop();
        variables[ctx->IDENTIFIER()->getText()] = var;
        var.isConst = true;
        std::cout << "SET CONST " << ctx->IDENTIFIER()->getText() << " as "
            << var.toString() << " (" << ctx->expression()->getText() << ")" << std::endl;
    }

    void visitVariableDeclaration(UpdateGrammarParser::VariableDeclarationContext* ctx) override {
        Variable var;
        visit(ctx->expression());
        var = expressionStack.top();
        expressionStack.pop();
        variables[ctx->IDENTIFIER()->getText()] = var;
        std::cout << "SET " << ctx->IDENTIFIER()->getText() << " as "
            << var.toString() << " (" << ctx->expression()->getText() << ")" << std::endl;
    }

    void visitAssignment(UpdateGrammarParser::AssignmentContext* ctx) override {
        visit(ctx->expression());
        Variable value = expressionStack.top();
        expressionStack.pop();
        variables[ctx->IDENTIFIER()->getText()] = value;
        std::cout << ctx->IDENTIFIER()->getText() << " = "
            << value.toString() << " (" << ctx->expression()->getText() << ")" << std::endl;
    }

    void visitPlusMinusExpr(UpdateGrammarParser::PlusMinusExprContext* ctx) override {
        Variable left, right, result;
        visit(ctx->left);
        left = expressionStack.top();
        expressionStack.pop();
        visit(ctx->right);
        right = expressionStack.top();
        expressionStack.pop();
        result = Variable::makeOperation(left, ctx->op->getType(), right);
        expressionStack.push(result);
    }

    void visitBoolExpr(UpdateGrammarParser::BoolExprContext* ctx) override {
        Variable num;
        num.type_id = Variable::BOOL;
        num.setValue(ctx->getText());
        expressionStack.push(num);
    }

    void visitNumExpr(UpdateGrammarParser::NumExprContext* ctx) override {
        Variable num;
        num.type_id = Variable::INT;
        num.setValue(ctx->getText());
        expressionStack.push(num);
    }

    void visitStringExpr(UpdateGrammarParser::StringExprContext* ctx) override {
        Variable str;
        str.type_id = Variable::STRING;
        str.setValue(ctx->getText());
        expressionStack.push(str);
    }

    void visitCompExpr(UpdateGrammarParser::CompExprContext* ctx) override {
        Variable left, right, result;

        visit(ctx->left);
        left = expressionStack.top();
        expressionStack.pop();

        visit(ctx->right);
        right = expressionStack.top();
        expressionStack.pop();

        bool comparisonResult = Variable::makeComp(left, ctx->op->getType(), right);

        result.type_id = Variable::BOOL;
        result.setValue(comparisonResult ? "True" : "False");
        expressionStack.push(result);
    }

    void visitIfStatement(UpdateGrammarParser::IfStatementContext* ctx) override {
        Variable condition;
        visit(ctx->expression());
        condition = expressionStack.top();
        expressionStack.pop();
        if (condition.b) {
            visit(ctx->statement());
        }
        else {
            if (ctx->elseStatement()) {
                visit(ctx->elseStatement()->statement());
            }
        }
    }

    
    void visitPrintln(UpdateGrammarParser::PrintlnContext* ctx) override {
        visit(ctx->expression());
        Variable result = expressionStack.top();
        expressionStack.pop();
        std::cout << "Println: " << result.toString() << std::endl;
    }


    void visitDoubleExpr(UpdateGrammarParser::DoubleExprContext* ctx) override {
        Variable num;
        num.type_id = Variable::FLOAT;
        num.setValue(ctx->getText());
        expressionStack.push(num);
    }

    inline void visitIdExpr(UpdateGrammarParser::IdExprContext* ctx) override {
        expressionStack.push(variables[ctx->IDENTIFIER()->getText()]);
    }
    void visitFuncCallExpr(UpdateGrammarParser::FuncCallExprContext* context) override {
        visitChildren(context);
    }

    void visitParenthesisExpr(UpdateGrammarParser::ParenthesisExprContext* context) override {
        visitChildren(context);
    }

    void visitMulDivExpr(UpdateGrammarParser::MulDivExprContext* ctx) override {
        Variable left, right, result;
        visit(ctx->left);
        left = expressionStack.top();
        expressionStack.pop();
        visit(ctx->right);
        right = expressionStack.top();
        expressionStack.pop();
        result = Variable::makeOperation(left, ctx->op->getType(), right);
        expressionStack.push(result);
    }

    void visitCompOperator(UpdateGrammarParser::CompOperatorContext* context) override {
        visitChildren(context);
    }

    void visitBlockStatement(UpdateGrammarParser::BlockStatementContext* context) override
    {
        visitChildren(context);
    }

    void visitFunctionCall(UpdateGrammarParser::FunctionCallContext* context) override
    {
        visitChildren(context);
    }

    void visitFunctionDefinition(UpdateGrammarParser::FunctionDefinitionContext* context) override
    {
        visitChildren(context);
    }

    void visitReturnStatement(UpdateGrammarParser::ReturnStatementContext* context) override
    {
        visitChildren(context);
    }

    void visitElseStatement(UpdateGrammarParser::ElseStatementContext* context) override
    {
        visitChildren(context);
    }

    void visitWhileStatement(UpdateGrammarParser::WhileStatementContext* ctx) override {
        Variable condition;
        visit(ctx->expression());
        condition = expressionStack.top();
        expressionStack.pop();
        while (condition.b) {
            visit(ctx->statement());
            visit(ctx->expression());
            condition = expressionStack.top();
            expressionStack.pop();
        }
    }

};

int main(int argc, const char* argv[]) {
    std::ifstream stream("results.txt");
    antlr4::ANTLRInputStream input(stream);
    UpdateGrammarLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    UpdateGrammarParser parser(&tokens);
    UpdateGrammarParser::ProgramContext* trees = parser.program();

    TreeShapeListener visitor;
    visitor.visit(trees);

    return 0;
}