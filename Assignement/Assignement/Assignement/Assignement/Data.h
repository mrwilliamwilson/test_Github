class Data
{
private:
	double mydeltaX;
	double mydeltaT;
	int myL;
	int myT;

public:
	Data();
	Data(double mydeltaX, double mydeltaT, int myL, int myT);
	void setDeltaX(double deltaX);
	void setDeltaT(double deltaT);
	void setL(int L);
	void setT(int T);
	double getDeltaX() const;
	double getDeltaT() const;
	int getL() const;
	int getT() const;
};