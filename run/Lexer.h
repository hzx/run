#pragma once
#include <string>
#include <vector>


class Lexer {
public:
  void tokenize(std::string const source, std::vector<std::string>& tokens);
};
