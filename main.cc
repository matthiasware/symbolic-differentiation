#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<symdiff/main.h>

template<typename T>
std::ostream &operator <<(std::ostream &os, const std::vector<T> &v) {
   os << "(";
   for(auto &e: v) os << e << ",";
   os << ")";
   return os;
}

std::unordered_set<std::string> unary_operators
{
	"sin", "cos", "tan", "exp", "ln"
};
std::unordered_set<std::string> binary_operators
{
	"+", "-", "*", "/", "^"
};
std::unordered_set<std::string> operand
{
	"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "x"
};

struct Node
{
	std::string token;
	Node *right{nullptr};
	Node *left{nullptr};
};

// Node* parse(std::vector<std::string>::iterator begin, std::string>::iterator end)
// {
// 	// if(begin == end)
// 	Node *n = new Node;
// 	return  n;
// };


int main()
{
	std::string input = "(* (+ 2 x) (sin x))";
	std::cout << input << std::endl;
	std::vector<std::string> tokens = tokenize(input);
	for(auto t : tokens)
		std::cout << t << std::endl;
	// std::cout << tokens << std::endl;

}