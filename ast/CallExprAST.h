/*
 * CallExprAST.h
 *
 *  Created on: Dec 31, 2019
 *      Author: ntrojian
 */

#ifndef AST_CALLEXPRAST_H_
#define AST_CALLEXPRAST_H_

#include "ast/ExprAST.h"

#include <memory>
#include <string>
#include <vector>

// Expression class for function calls
class CallExprAST : public ExprAST {
	std::string Callee;
	std::vector<std::unique_ptr<ExprAST>> Args;

public:
	CallExprAST(const std::string &Callee,
				std::vector<std::unique_ptr<ExprAST>> Args)
		: Callee(Callee), Args(std::move(Args)) {}
};

#endif /* AST_CALLEXPRAST_H_ */
