#include<iostream>
#include"Node.h"
using namespace std;

class Playlist
{

private:
	Node* head;
	Node* tail;

	bool isEmpty()const
	{
		return head == nullptr;
	}
	
public:
	Playlist() :head(nullptr), tail(nullptr) {}

	void add_path(const string& path)
	{
		Node* newnode = new Node{path,nullptr,nullptr};
		if (isEmpty())
		{
			head = tail = newnode;
		}
		else
		{
			tail->next = newnode;
			newnode = tail;
			tail = newnode;
		}

	}

	void Next_path()
	{
		if (head->next && head->next->next)
		{
			Node* current = head;
			current = current->next;
		}
		else
		{
			return -1 ;
		}

	}

	void Previous_path()
	{
		if (tail->prev && tail->prev->prev)
		{
			Node* current = head;
			current = current->prev;
		}
	}



};