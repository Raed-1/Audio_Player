#include<iostream>
#include"Node.h"
using namespace std;
template<class T>
class Playlist
{

private:
	Node<T> *head,  *tail, *current;
	

	bool isEmpty()const
	{
		return head == nullptr;
	}
	
public:
	Playlist() :head(nullptr), tail(nullptr),current(nullptr) {}

	void add_playlist(const T& ppath)
	{
		Node* newnode = new Node(ppath);
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