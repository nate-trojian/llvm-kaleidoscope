/*
 * FunctionAST.h
 *
 *  Created on: Dec 31, 2019
 *      Author: ntrojian
 */

#ifndef AST_FUNCTIONAST_H_
#define AST_FUNCTIONAST_H_

#include "ast/ExprAST.h"
#include "ast/PrototypeAST.h"

#include <memory>

// Function definition
class FunctionAST {
	std::unique_ptr<PrototypeAST> Proto;
	std::unique_ptr<ExprAST> Body;

public:
	FunctionAST(std::unique_ptr<PrototypeAST> Proto,
				std::unique_ptr<ExprAST> Body)
		: Proto(std::move(Proto)), Body(std::move(Body)) {}
};

#endif /* AST_FUNCTIONAST_H_ */
