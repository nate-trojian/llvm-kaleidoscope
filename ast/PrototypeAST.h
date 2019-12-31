/*
 * PrototypeAST.h
 *
 *  Created on: Dec 31, 2019
 *      Author: ntrojian
 */

#ifndef AST_PROTOTYPEAST_H_
#define AST_PROTOTYPEAST_H_

#include <string>
#include <vector>

// Represents the "prototype" for a function
// Captures name and arguments
class PrototypeAST {
	std::string Name;
	std::vector<std::string> Args;

public:
	PrototypeAST(const std::string &name, std::vector<std::string> Args)
		: Name(name), Args(std::move(Args)) {}

	const std::string &getName() const { return Name; }
};



#endif /* AST_PROTOTYPEAST_H_ */
