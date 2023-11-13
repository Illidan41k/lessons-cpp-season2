#include "Enemy.h"
#include <fstream>
//#include "DataBase.h"

int Enemy::s_globalId = ReadLastId();

Enemy::Enemy()
{
	m_id = s_globalId++;
}

void Enemy::Info()
{
	std::cout << m_id << std::endl;
}

int Enemy::ReadLastId()
{
	int id = 0;

	std::ifstream load("dump.txt");

	load >> id;

	return id;
}

Enemy::~Enemy()
{
	std::ofstream save("dump.txt", std::ios::trunc);
	save << s_globalId;

	std::cout << "enemy with id = " << m_id << " is dead. R.I.P" << std::endl;
}

