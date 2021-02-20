#pragma once
#include <fstream>
#include <vector>
#include <string>

class Filereader
{
public:
	static void readFile(std::vector<std::string>& vec, std::string filename);
};

