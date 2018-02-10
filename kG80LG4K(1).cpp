#include <iostream>

using namespace std;
int main() {

	char arr1[20] = { 'b','e','i','c','a','f','i','e','h','a','d','f','b','d','g','c','g','j','h','j' };
	int arr2[20] = { 1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0 };
	//Printing Code-----------------
	for (int x = 0; x < 20; x++) {
		cout << arr2[x] << " ";
	}
	cout << endl;
	//------------------------------
	int score1 = 0;
	int score2 = 0;
	int changer = 1;
	while (true) {
		int a;
		int b;
		if (changer == 1) {
			cout << "player1_" << "score" << score1 << endl;
			cout << "enter number\n";
			cin >> a;
			cout << "enter another number\n";
			cin >> b;
			changer = 2;
		}
		else {
			cout << "player2_" << "score" << score2 << endl;
			cout << "enter number\n";
			cin >> a;
			cout << "enter another number\n";
			cin >> b;
			changer = 1;
		}if (arr1[a] != arr1[b]) {
			int temp1 = arr2[a];
			int temp2 = arr2[b];
			arr2[a] = arr1[a];
			arr2[b] = arr1[b];
			for (int x = 1; x <= 20; x++)
				cout << arr2[x] << endl;
			arr2[a] = temp1;
			arr2[b] = temp2;
		}
		else {

			arr2[a] = -1;
			arr2[b] = -1;
			for (int x = 1; x <= 20; x++) {
				if (arr2[x] == -1) {
					cout << '*' << endl;
				}
				else {
					cout << arr2[x] << endl;
				}

				if (changer == 2) {
					score1 += 1;
				}
				else {
					score2 += 1;
				}
			}
		}return 0;
	}
}