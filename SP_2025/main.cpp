#include "doctorFunctions.h"
#include "patientFunctions.h"
#include "otherFunctions.h"
#include <iostream>
using namespace std;
int DocIndex = 0;
int patientIndex = 2;

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