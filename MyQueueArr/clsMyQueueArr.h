#pragma once
#include <iostream>
#include "D:\Prorgramming_device\programing\ProblemSolvingLevel5\MyDynamicArray\MyDynamicArray\clsMyDynamicArray.h"
using namespace std;


template <class T>
class clsMyQueueArr
{
	int _Size = 0;
protected :
	clsMyDynamicArray<T> MyList;
	
public:
	void push(T Item)
	{
		MyList.InsertAtEnd(Item);
	}
	void Print()
	{
		MyList.PrintList();
	}
	int Size()
	{
		return MyList.Size();
	}
	T front()
	{
		return MyList.GetItem(0);
	}
	T back()
	{
		return MyList.GetItem(Size() - 1);
	}
	void pop()
	{
		MyList.DeleteFirstItem();
	}
	T GetItem(int index)
	{
		return MyList.GetItem(index);
	}
	void Reverse()
	{
		MyList.Reverse();
	}
	void UpdateItem(int index, int Item)
	{
		MyList.SetItem(index, Item);
	}
	bool InsertAfter(int index, int Value)
	{
		return MyList.InsertAfter(index, Value);
	}
	void InsertAtFront(T Item)
	{
		MyList.InsertAtBeginning(Item);
	}
	void InsertAtBack(T Value)
	{
		MyList.InsertAtEnd(Value);
	}
	void Clear()
	{
		MyList.Clear();
	}
};