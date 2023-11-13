#pragma once
#include <iostream>

class Enemy
{

public:
	Enemy();

	void Info();

	static int ReadLastId();

	~Enemy();

private:
	static int s_globalId;
	int m_id;
};
