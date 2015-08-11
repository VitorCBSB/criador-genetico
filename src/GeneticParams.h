/*
 * GeneticParams.h
 *
 *  Created on: 08/05/2015
 *      Author: Vitor
 */

#ifndef GENETICPARAMS_H_
#define GENETICPARAMS_H_

#include <algorithm>

class GeneticParams {
public:
	unsigned int num_in;
	unsigned int num_out;
	std::array<bool, 8> funcs;
	unsigned int le_num_in;
	unsigned int r;
	unsigned int c;

	GeneticParams(unsigned int num_in, unsigned int num_out,
			std::array<bool, 8> funcs, unsigned int le_num_in, unsigned int r,
			unsigned int c) :
			num_in(num_in), num_out(num_out), funcs(funcs), le_num_in(
					le_num_in), r(r), c(c) {
	}

	int num_funcs() {
		int num_funcs = 0;
		for (auto func : funcs) {
			if (func) {
				num_funcs++;
			}
		}
		return num_funcs;
	}
};

#endif /* GENETICPARAMS_H_ */
