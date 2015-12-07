#pragma once
#include "Project.h"
#include "Loader.h"
#include "Lexer.h"
#include "Parser.h"

class Translator {
public:
  Loader loader;
  Lexer lexer;
  Parser parser;
};
