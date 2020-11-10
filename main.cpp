#include "databaseobj.h"

/**
* this function invokes the virtual function and will
* always call the correct version of display dependng
* on what object the pointer pd points to. This is called
* polymorphism. 
*/
void printData(DatabaseObject* pd)
{
	pd->display();
}
//test Joshsasa
int main()
{
	DatabaseObject* d[3];  // an array of 3 pointers to DatabaseObject's

	// Create three objects
	Painting paint("Leonardo da Vinci", "Mona Lisa", "1503", 24, 36);
	Music	 mus("Beethoven", "Symphony no 9", "1824", "D minor");
	Chamber  cham("Mozart", "Hoffmeister", "1786", "D major",4);

	// assign the pointers to the addresses of the objects
	d[0] = &paint;
	d[1] = &mus;
	d[2] = &cham;

	// call the function printData for each object pointer
	for (int i=0; i<3; i++) printData(d[i]);

	return 0;
}