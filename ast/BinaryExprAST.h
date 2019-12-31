/*
 * BinaryExprAST.h
 *
 *  Created on: Dec 31, 2019
 *      Author: ntrojian
 */

#ifndef AST_BINARYEXPRAST_H_
#define AST_BINARYEXPRAST_H_

#include "ast/ExprAST.h"

#include <memory>

// Expression class for a binary operator - +
class BinaryExprAST : public ExprAST {
	char Op;
	std::unique_ptr<ExprAST> LHS, RHS;

public:
	BinaryExprAST(char op, std::unique_ptr<ExprAST> LHS, std::unique_ptr<ExprAST> RHS)
		: Op(op), LHS(std::move(LHS)), RHS(std::move(RHS)) {}
};

#endif /* AST_BINARYEXPRAST_H_ */
