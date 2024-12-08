#pragma once
#include<string>

template<class T>
struct Node
{
	T data;
	Node* next;
	Node* prev;

	//Construtor 

	Node(const T& value) :data(value), next(nullptr), prev(nullptr) {};

};