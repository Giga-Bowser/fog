#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "fogLexer.h"
#include "fogParser.h"

using namespace antlr4;

int main(int, const char** argv) {
	std::ifstream file(argv[1]);
	std::stringstream buffer;
	buffer << file.rdbuf();
	std::string code = buffer.str();


    ANTLRInputStream input(code);
    fogLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    fogParser parser(&tokens);
    tree::ParseTree* tree = parser.chunk();

    std::cout << tree->toStringTree(&parser, true) << std::endl << std::endl;

    return 0;
}
