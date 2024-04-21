//Two number sum

/*
We can use two pointers to iterate through the array

We can use two for loops to achieve this, the inner loop can be the second pointer
which will iterate based off of the first pointer so we do not 
iterate through a number twice

*/


#include <iostream>
#include <vector>

class Solution {
public:

	//We want to return a vector, return an empty vector if 
	//there arent two elements that equal target
	std::vector<int> twoNumberSum(std::vector<int> array, int targetSum);

};

std::vector<int> Solution::twoNumberSum(std::vector<int> array, int targetSum) {

	//Create a vector array for result
	std::vector<int> result;


	//First thing we want to do is assign two pointers to iterate through the array
	//i and j can serve as our two pointers

	//Create a for loop to iterate through the full array
	//Since we have a second pointer which will also be iterating, we can stop at
	//n - 1 since our second pointer will record the last element
	for (int i = 0; i < array.size() - 1; i++) {

		//Now that we are going to iterate through each element,
		//we need a second for loop which our second pointer(tail) will iterate
		//the second element to check if the sum is equal to target
		//This can just be i+1
		for (int j = i + 1; j < array.size(); j++) {

			if (array[i] + array[j] == targetSum) {
				std::cout << "match found!" << std::endl;
				result.push_back(array[i]);
				result.push_back(array[j]);

				return result;
			}

		}

	}

	std::cout << "No match found, returning empty array" << std::endl;
	return result;


}



int main() {

	std::vector<int> array = { 3, 5, -4, 8, 11, 1, -1, 6 };
	int targetSum = 10;

	Solution solution;



	std::vector<int> answer = solution.twoNumberSum(array, targetSum);

	for (int i = 0; i < answer.size(); i++) {
		std::cout << answer[i] << ' ';
	}


	return 0;

}





