#include "Header.h"
#include <vector>

using namespace std;
 
int fib_i(long long int num_i)
{
	int a = 0;
	int b = 1;
	while (num_i-- > 1) {
		int t = a;
		a = b;
		b += t;
	}
	return b;

}




int main()
{
	int result=0, result1=0, result2=0 ,result3= 0,result4=0 ,result5=0,result6=0,
		result7=0,result8 =0,result9 =0,result10 =0 ,result11=0,result12=0,
		result13= 0,result14=0, result15=0,result16 =0;
    long long int input = 918228872;
	list my_list;
	int i = 0;
	int temp;
	

	
	for (; i < 45; ++i)
	{

		temp =fib_i(i);
		my_list.push_back(temp);
	
	}
	
	result =get(input, my_list);
	if (result != 0)
	{
		result1 = get(result, my_list);
	   result2 = get(result1, my_list);
	   result3 = get(result2, my_list);
	   result4 = get(result3, my_list);
	   result5 = get(result4, my_list);
	   result6 = get(result5, my_list);
	   result7 = get(result6, my_list);
	   result8 = get(result7, my_list);
	   result9 = get(result8, my_list);
	   result10 = get(result9, my_list);
	   result11 = get(result10, my_list);
	   result12 = get(result11, my_list);
	   result13 = get(result12, my_list);
	   result14 = get(result13, my_list);
	   result15 = get(result14, my_list);
	   result16 = get(result15, my_list);
	}
	
	
	system("pause");
}
