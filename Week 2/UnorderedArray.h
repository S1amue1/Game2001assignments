#pragma once
#include <cassert>
#include "Array.h"

template<class T>
class UnorderedArray: public Array<T>
{
public:
	// Constructor
	UnorderedArray(int size, int growBy = 1) : Array<T>(size,growBy)
	{
		
	}
	// Destructor
	~UnorderedArray()
	{
	
	}
};