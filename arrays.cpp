#include <iostream>
using namespace std;
int main()
{
	char vowels[]{ 'a','e','i','o','u' };
	cout << "\nThe first vowel is: " << vowels[0] << endl;
	cout << "The last vowel is: " << vowels[4] << endl;
	//cin >> vowels[5]; out of bounds
	double hi_temp[]{ 90.1,89.8,77.5,81.6 };
	cout << "The first high temperature is " << hi_temp[0] << endl;
	hi_temp[0] = 100.7;
	cout << "The first high temperature is " << hi_temp[0] << endl;


	int test_scores[]{ 100,90,80,70,60 };
	cout << "\nFirst score at index 0: " << test_scores[0] << endl;
	cout << "First score at index 1: " << test_scores[1] << endl;
	cout << "First score at index 2: " << test_scores[2] << endl;
	cout << "First score at index 3: " << test_scores[3] << endl;
	cout << "First score at index 4: " << test_scores[4] << endl;

	cout << "\nEnter 5 test scores: ";
	cin >> test_scores[0];
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];
	cout << "\nThe updated array is:" << endl;
	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "First score at index 1: " << test_scores[1] << endl;
	cout << "First score at index 2: " << test_scores[2] << endl;
	cout << "First score at index 3: " << test_scores[3] << endl;
	cout << "First score at index 4: " << test_scores[4] << endl;
	cout << "\nNotice what the value of array name is: " << test_scores << endl;
	int movie_rating[3][4]
	{
		{4,5,3,2},
		{2,4,3,2},
		{3,5,1,0}
	};
	return 0;


}