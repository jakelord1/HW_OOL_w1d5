#pragma once
class Car
{
	char* model;
	char* color;
	int year;
	double price;
public:
	Car();
	Car(const char* m, const char* c, int y, double p);
	~Car();
	void Input();
	void Print();
	//inspect
	char* GetModel();
	char* GetColor();
	int GetYear();
	double GetPrice();
	//modificate
	void SetModel(const char* m);
	void SetColor(const char* m);
	void SetYear(int m);
	void SetPrice(double m);
};

