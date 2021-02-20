// ternary-search-tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Filereader.h"
#include "TST.h"

int main()
{
	std::vector<std::string> wordVector;

	Filereader::readFile(wordVector, "data/words_alpha.txt");
	
	TST tst;

	auto vecStart = std::make_shared<std::string>(wordVector.front());
	auto vecEnd = std::make_shared<std::string>(wordVector.back());

	tst.fillTST(vecStart, vecEnd);

	std::cout << *vecEnd << std::endl;
	return 0;
}