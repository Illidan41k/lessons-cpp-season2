#pragma once
#include <fstream>
#include <string>


std::ifstream OpenStream(const std::string& name);

char GetErrorBytes(std::ifstream& stream);
