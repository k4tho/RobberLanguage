#include "FileProcessor.h"
#include <iostream>
#include <fstream>

FileProcessor::FileProcessor() {
}

FileProcessor::~FileProcessor() {
}

void FileProcessor::writeHTMLFile(std::ostream& outStream, std::string decryptedMsg, std::string encryptedMsg) {
	outStream << "<!DOCTYPE html>" << std::endl;
	outStream << "<html>" << std::endl;
	outStream << "<head>" << std::endl;
	outStream << "<title>English to Robber Translation</title>" << std::endl;
	outStream << "</head>" << std::endl;
	outStream << "<body>" << std::endl;
	outStream << "<p><b>" << encryptedMsg << "</b><br></p>" << std::endl;
	outStream << "<p><i>" << decryptedMsg << "</i><br></p>" << std::endl;
	outStream << "</body>" << std::endl;
	outStream << "</html>" << std::endl;
}

void FileProcessor::processFile(std::string inputFile, std::string outputFile) {
	Translator translator;

	std::ifstream inFS;
	std::ofstream outFS;
	std::string decryptedLine;
	std::string decryptedMsg = "";
	std::string encryptedMsg;

	inFS.open(inputFile);
	outFS.open(outputFile);

	/* BEGIN CODE FROM SOURCE: c++ zybooks */
	while (!inFS.fail()) {
		getline(inFS, decryptedLine);
		/* END OF CODE FROM SOURCE: c++ zybooks */
		decryptedMsg += "\n" + decryptedLine;
	}

	encryptedMsg = translator.translateEnglishSentence(decryptedMsg);

	writeHTMLFile(outFS, decryptedMsg, encryptedMsg);
	writeHTMLFile(std::cout, decryptedMsg, encryptedMsg);

	inFS.close();
	outFS.close();
}