/*
 * NumberExprAst.h
 *
 *  Created on: Dec 31, 2019
 *      Author: ntrojian
 */

#ifndef AST_NUMBEREXPRAST_H_
#define AST_NUMBEREXPRAST_H_

#include "ast/ExprAST.h"

// Expression class for numeric literals - 1.0
class NumberExprAST : public ExprAST {
	double Val;

public:
	NumberExprAST(double Val) : Val(Val) {}
};

#endif /* AST_NUMBEREXPRAST_H_ */
