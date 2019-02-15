#include<string>
#include<iostream>
#include<vector>
#include "sample_for_ranged.h"

int main() 
{
	//loop_string_w_index("john");
	//loop_string_w_auto("john");
	//loop_vector_w_index();
	std::vector<int> nums = { 1, 2, 3, 4, 5 };
	nums.push_back(25);
	nums.erase(nums.begin() + 1);//erases "2" from nums
	loop_vector_w_index(nums);

	for (auto n : nums)
	{
		std::cout << n << "\n";
	}
	return 0;
}