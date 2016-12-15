#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include <vector>
#include <random>
using namespace std;

int main()
{

	//***DISCLAIMER THIS PROGRAM IS NOT AS STREAMLINE AS IT COULD BE, THIS WAS A HOBBY PROJECT

	vector<int>	arryVec[20];

	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(1, 20);
	int dice_roll;  

	//SouceCode from above code taken from http://www.cplusplus.com/reference/random/

	int max, random_num, count;

	max = 20;

	cout << "How many random numbers do you want to generate?\n";

	cin >> count;

	
	for (int i = 0; i < count; i++){

		

		dice_roll = distribution(generator); // generates number in the range 1..20


		//I was debating using a switch case here, but it wasn't pushing the number into the vector array correctly. 
		if (dice_roll == 1) {

			arryVec[0].push_back(dice_roll);
		}
		else if (dice_roll == 2) {

			arryVec[1].push_back(dice_roll);
		}
		else if (dice_roll == 3) {

			arryVec[2].push_back(dice_roll);
		}
		else if (dice_roll == 4) {

			arryVec[3].push_back(dice_roll);
		}
		else if (dice_roll == 5) {

			arryVec[4].push_back(dice_roll);
		}
		else if (dice_roll == 6) {

			arryVec[5].push_back(dice_roll);
		}
		else if (dice_roll == 7) {

			arryVec[6].push_back(dice_roll);
		}
		else if (dice_roll == 8) {

			arryVec[7].push_back(dice_roll);
		}
		else if (dice_roll == 9) {

			arryVec[8].push_back(dice_roll);
		}
		else if (dice_roll == 10) {

			arryVec[9].push_back(dice_roll);
		}
		else if (dice_roll == 11) {

			arryVec[10].push_back(dice_roll);
		}
		else if (dice_roll == 12) {

			arryVec[11].push_back(dice_roll);
		}
		else if (dice_roll == 13) {

			arryVec[12].push_back(dice_roll);
		}
		else if (dice_roll == 14) {

			arryVec[13].push_back(dice_roll);
		}
		else if (dice_roll == 15) {

			arryVec[14].push_back(dice_roll);
		}
		else if (dice_roll == 16) {

			arryVec[15].push_back(dice_roll);
		}
		else if (dice_roll == 17) {

			arryVec[16].push_back(dice_roll);
		}
		else if (dice_roll == 18) {

			arryVec[17].push_back(dice_roll);
		}
		else if (dice_roll == 19) {

			arryVec[18].push_back(dice_roll);
		}
		else if (dice_roll == 20) {

			arryVec[19].push_back(dice_roll);
		}
		else {
			cerr << "Tell a developer 'Error Code 00X0-A1\n";
		}
		
		

	}


	cout << "\n***Results***\n";

	for (int j = 0; j < 20; j++) {

		if (arryVec[j].size() != 0) {

			cout << "Number : " << j + 1 << "\tAmount of times generated : " << arryVec[j].size() << endl;


		}
		else {

			cout << "Number : " << j + 1 << " Not Generated!\n";

		}

	}

	int avg = 0;

	for (int p = 0; p < 20; p++) {

		avg += arryVec[p].size();


	}

	avg = avg / 20;

	cout << "\nAVERAGE SCORE : " << avg << endl;

	for (int q = 0; q < 20; q++) {

		if (arryVec[q].size() < avg) {

			cout << q + 1 << " is below the average\n";

		}
		else if (arryVec[q].size() == avg) {

			cout << q + 1 << " is average\n";

		}
		else if (arryVec[q].size() > avg) {

			cout << q + 1 << " is above average\n";

		}
		else {

			cerr << "Tell a developer 'Error Code 00X0-A2\n";
		}

	}

}

