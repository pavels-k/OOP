﻿#pragma once
#ifndef ARRAYITEM_H
#define ARRAYITEM_H

#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapeze.h"
#include <memory>

template <class T1, class T2, class T3>
class ArrayItem
{
public:
	ArrayItem();
	ArrayItem(int index);
	ArrayItem(std::shared_ptr<T1> &pentagon, int index);
	ArrayItem(std::shared_ptr<T2> &rhombus, int index);
	ArrayItem(std::shared_ptr<T3> &trapeze, int index);

	bool IsPentagon();
	bool IsRhombus();
	bool IsTrapeze();

	std::shared_ptr<T1> GetPentagon();
	std::shared_ptr<T2> GetRhombus();
	std::shared_ptr<T3> GetTrapeze();

	void SetIndex(int index);
	int GetIndex();

	template <class T1, class T2, class T3> friend std::ostream& operator << (std::ostream &os, ArrayItem<T1, T2, T3> &item);

private:
	std::shared_ptr<T1> pentagon;
	std::shared_ptr<T2> rhombus;
	std::shared_ptr<T3> trapeze;
	int index;
};

#endif // ARRAYITEM_H