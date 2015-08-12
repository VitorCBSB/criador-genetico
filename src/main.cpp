#include <iostream>
#include <array>

int main(int argc, char* argv[]) {
	if (argc != 5) {
		std::cout << "Uso: " << argv[0] << " <num_inputs> <num_outputs> <le_num_in> <num_rows> <num_cols>" << std::endl;
		return 0;
	}

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

	return 0;
}

