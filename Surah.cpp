#include<iostream>

using namespace std;


class Surah
{
	string _name;
	string _path;

public:
	Surah(string name = " ", string path = " ") :_name(name), _path(path) {};

	void setName(const string& name)
	{
		_name = name;
	}

	void setPath(const string& path)
	{
		_path = path;
	}

	string getName()const
	{
		return _name;
	}
	string getPath()const
	{
		return _path;
	}
};