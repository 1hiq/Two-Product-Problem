#include <iostream>
#include <vector>
using namespace std;



vector <int> twoProducts(vector <int> arr, int n) {
	vector <int> result(2);

	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[i] * arr[j] == n) {
				result[0] = arr[i];
				result[1] = arr[j];

				return result;
			}
		}
	}

	cout << "Error, there is no two numbers in the given vector (array/list) whose product equals " << n << " .\n";
	return {};
}



int main(void){
  
  vector <int> v1 = { 1, 2, -1, 4, 5 }; // Here, two number whose product equals (20) is {4, 5}.

	vector <int> res = twoProducts(v1, 20); // So the function will return the two numbers whose product equals (20) which are {4, 5} "as a vector".
  
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}



  return 0;
}
