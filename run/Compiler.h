#pragma once
#include "Project.h"
#include "Loader.h"
#include "Preprocessor.h"
#include "Lexer.h"
#include "Parser.h"

class Compiler {
public:
  Loader loader;
  Preprocessor preprocessor;
  Lexer lexer;
  Parser parser;
};
