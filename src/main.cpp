#include <iostream>
#include <stdio.h>
#include <array>
#include <string>
#include "CriadorArquivos.h"
#include "GeneticParams.h"

int main(int argc, char* argv[]) {
	if (argc != 6) {
		std::cout << "Uso: " << argv[0] << " <num_inputs> <num_outputs> <le_num_in> <num_rows> <num_cols>" << std::endl;
		return 0;
	}

	int num_inputs;
	int num_outputs;
	int le_num_in;
	int num_rows;
	int num_cols;

	sscanf(argv[1], "%d", &num_inputs);
	sscanf(argv[2], "%d", &num_outputs);
	sscanf(argv[3], "%d", &le_num_in);
	sscanf(argv[4], "%d", &num_rows);
	sscanf(argv[5], "%d", &num_cols);

	std::array<bool, 8> funcs = {
		true, // AND
		true, // OR
		true, // XOR
		true, // NOT
		true, // NAND
		true, // XNOR
		true, // NOR
		true  // BUF
	};

	GeneticParams genetic_params(num_inputs, num_outputs, funcs, le_num_in, num_rows, num_cols);

	CriadorArquivos::cria_arquivo_genetico(genetic_params, "genetico.v");
	CriadorArquivos::cria_arquivo_logic_e(genetic_params, "logic_e.v");
	CriadorArquivos::cria_arquivo_fenotipo(genetic_params, "fenotipo.v");

	return 0;
}

