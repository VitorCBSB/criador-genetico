/*
 * Utils.cpp
 *
 *  Created on: 14/05/2015
 *      Author: vitor
 */

#include "Utils.h"

void replace(std::string& source, const std::string& to_replace,
		const std::string& replace_with) {
	auto replace_point = source.find(to_replace);
	if (replace_point == std::string::npos) {
		std::cerr << "Could not find string " << to_replace << " in " << std::endl << source << std::endl;
		exit(1);
	}
	source.replace(replace_point, to_replace.length(), replace_with);
}

std::string le_conteudo_arquivo(const std::string& nome_arquivo) {
	std::ifstream arquivo_modelo(nome_arquivo);
	std::stringstream buffer;
	buffer << arquivo_modelo.rdbuf();
	return buffer.str();
}


