/*
 * VariableExprAST.h
 *
 *  Created on: Dec 31, 2019
 *      Author: ntrojian
 */

#ifndef AST_VARIABLEEXPRAST_H_
#define AST_VARIABLEEXPRAST_H_

#include "ast/ExprAST.h"

#include <string>

// Expression class for a variable - "a"
class VariableExprAST : public ExprAST {
	std::string Name;

public:
	VariableExprAST(const std::string &Name) : Name(Name) {}
};

#endif /* AST_VARIABLEEXPRAST_H_ */
