#pragma once
#include <memory>
#include <string>

class TST
{
	struct Node {
		char value;
		std::unique_ptr<Node> lo;
		std::unique_ptr<Node> eq;
		std::unique_ptr<Node> hi;
	};

public: 
	TST();
	void fillTST(std::shared_ptr<std::string>, std::shared_ptr<std::string>);
	void insert(std::string);
	bool search(std::string);

private:
	std::unique_ptr<Node> root;
	std::unique_ptr<Node> insert(std::string, std::unique_ptr<Node>);
	bool search(std::string, std::unique_ptr<Node>);
	std::unique_ptr<Node> fillTree(std::shared_ptr<std::string>, std::shared_ptr<std::string>);
};

