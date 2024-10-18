#include <iostream>
#include "clsMyQueueArr.h"


int main()
{
	system("color 5f");
	clsMyQueueArr<int> MyQueue;
	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "Queue:\n";
	MyQueue.Print();

	cout << "\nQueue size: " << MyQueue.Size() << endl;
	cout << "Queue Front: " << MyQueue.front() << endl;
	cout << "Queue Back: " << MyQueue.back() << endl;

	MyQueue.pop();

	cout << "\nMy Queue after pop() :\n";
	MyQueue.Print();
	//Extension #1
	cout << "\nGet item(2): " << MyQueue.GetItem(2) << endl;

	//Extension #2
	MyQueue.Reverse();
	cout << "\nQueue after reverse: \n";
	MyQueue.Print();

	//Extension #3
	MyQueue.UpdateItem(2, 600);
	cout << "\nQueue after updating item(2): \n";
	MyQueue.Print();

	//Extension #4
	MyQueue.InsertAfter(2, 800);
	cout << "\nQueue after inserting 800 after item(2): \n";
	MyQueue.Print();

	//Extension #5
	MyQueue.InsertAtFront(1000);
	cout << "\nQueue after inserting 1000 at beginning: \n";
	MyQueue.Print();

	//Extension #6
	MyQueue.InsertAtBack(2000);
	cout << "\nQueue after inserting 2000 at end: \n";
	MyQueue.Print();

	//Extension #7
	MyQueue.Clear();
	cout << "\nQueue after applying Clear(): \n";
	MyQueue.Print();

	system("pause > 0");
}
