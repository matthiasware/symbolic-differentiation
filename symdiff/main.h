#ifndef MAIN_H_
#define MAIN_H_

#include<string>
#include<vector>
#include<unordered_set>

std::unordered_set<std::string> toks
{
	"0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
	"(", ")", "x",
	"+", "-", "*", "/", "^",
	"sin", "cos", "tan", "exp", "ln"
};

std::vector<std::string> tokenize(std::string input)
{
	std::vector<std::string> tokens;
	std::string token = "";
	for(auto s: input)
	{
		if(s == ' ' or s == '(' or s == ')')
		{
			if(token.length() > 0)
			{
				tokens.push_back(token);
				token = "";
			}
			continue;
		}
		std::string token_new = token + s;
		if(toks.find(token_new) != toks.end())
		{
			tokens.push_back(token_new);
			token = "";
		}
		else
			token = token_new;
	}
	return tokens;
}


#endif // MAIN_H_