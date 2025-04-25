#include "doctorFunctions.h"
#include <iostream>
using namespace std;
int DocIndex = 2;

int main() {

	do
	{
		int ans;
		cout << "1 to edit  2 to add: ";
		cin >> ans;

		if (ans == 1)
			editTime(DocIndex);
		else
			addAvailableTimeDoc(DocIndex);

	} while (true);

}
// PLEASEEEEEEEEEEEEEEEEEEEEEEE 2E4T8ALLLLLLLLLLLLLLLL