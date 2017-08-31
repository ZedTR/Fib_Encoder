#include "Header.h"
#include <vector>
#include <iostream>

int get(int input, list my_list)
{
	for (list::reverse_iterator k = my_list.rbegin(); k != my_list.rend(); ++k){
		int outcome = (*k);
		int result = 0;
		int index = 0;
		if (input >= outcome)
		{

			result = input - outcome;
			if (result > 0)
			{
				input = input - outcome;
			}
		  	
			auto pos = my_list.rend()- k;
			
			index = pos - 1;
			std::cout << index << std::endl;
			return result;
		}


	}
	return 0;
}

