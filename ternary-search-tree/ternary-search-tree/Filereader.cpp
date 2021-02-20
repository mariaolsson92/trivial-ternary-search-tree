#include "Filereader.h"

void Filereader::readFile(std::vector<std::string>& vec, std::string filename) {
	std::ifstream fileStream(filename);

	if (fileStream.is_open()) {
		std::string line;
		while (std::getline(fileStream, line)) {
			if (line.size() > 0) {
				vec.push_back(line);
			}
		}
	}
	fileStream.close();
}