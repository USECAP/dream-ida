/*******************************************************************************
 * Copyright (C) 2011-2017 Khaled Yakdan.
 * All rights reserved.
 ******************************************************************************/
#pragma once

#include "IntermediateRepresentation/Node/OneWayNode.h"

class FallThroughNode :
	public OneWayNode
{
public:
	FallThroughNode(int _id, ea_t _startEA, ea_t _endEA, InstructionVectorPtr _instructions, int _successorID);
	virtual ~FallThroughNode(void);

	NodePtr deepCopy();
};

