#include"data.h"

Data::Data()
{

}

Data::Data(double mydeltaX, double mydeltaT, int myL, int myT)
{

}

void Data::setDeltaX(double deltaX) 
{
	mydeltaX = deltaX;
}

void Data::setDeltaT(double deltaT)
{
	mydeltaT = deltaT;
}

void Data::setL(int L)
{
	myL = L;
}

void Data::setT(int T)
{
	myT = T;
}

double Data::getDeltaX() const 
{
	return mydeltaX;
}

double Data::getDeltaT() const
{
	return mydeltaT;
}

int Data::getL() const
{
	return myL;
}

int Data::getT() const
{
	return myT;
}

