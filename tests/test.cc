#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <algorithm>
#include <string>
#include <symdiff/main.h>
#include <vector>


TEST_CASE("Tokenizer") {
  std::vector<std::pair<std::string, std::vector<std::string>>> test_inputs
  {
  	{"(* 2 4)", {"*", "2", "4"}},
  	{"(sin x)", {"sin", "x"}},
  	{"(- x (^  x (ln 2)))", {"-", "x", "^", "x", "ln", "2"}},
  	{"(exp 2)", {"exp", "2"}}
  };
  for(auto &tc: test_inputs)
	  CHECK(std::equal(tc.second.begin(), tc.second.end(), tokenize(tc.first).begin()));
}