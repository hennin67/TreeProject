/**
 * \file TreeFactory.cpp
 *
 * \author Charles Owen
 *
 * You are allowed to change this file.
 */

#include "pch.h"
#include "TreeFactory.h"
#include "Tree.h"
#include "TreeObject.h"
#include "Branch.h"
#include "Basket.h"
#include "BasketObject.h"

using namespace std;

/**
 * Constructor
 */
CTreeFactory::CTreeFactory()
{
}


/**
 * Destructor
 */
CTreeFactory::~CTreeFactory()
{
}


/**
 * Create a Tree object
 * \returns Object of type CTree
 */
std::shared_ptr<CTree> CTreeFactory::CreateTree()
{
	auto tree = make_shared<CTreeObject>();
	return tree;
}


/**
 * Create a Basket object
 * \returns Object of type CBasket
 */
std::shared_ptr<CBasket> CTreeFactory::CreateBasket()
{
    return make_shared<CBasketObject>();
}

