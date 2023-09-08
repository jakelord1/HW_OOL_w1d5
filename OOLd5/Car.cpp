#include "Car.h"
#include <iostream>
using namespace std;
Car::Car()
{
	model = nullptr;
	color = nullptr;
	year = 0;
	price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double p)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m + 1), m);
	this->color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c + 1), c);
	this->year = y;
	this->price = p;
}

Car::~Car()
{
	delete[] model;
	delete[] color;
}

void Car::Input()
{
	char buff[20];
	cout << "Enter Model name:";
	cin >> buff;
	if (model != nullptr) {
		delete[] model;
	}
	this->model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff + 1), buff);
	cout << endl << "Enter Color:";
	cin >> buff;
	if (color != nullptr) {
		delete[] color;
	}
	this->color = new char[strlen(buff) + 1];
	strcpy_s(color, strlen(buff + 1), buff);
	cout << endl << "Enter Year:";
	cin >> year;
	cout << endl << "Enter Price:";
	cin >> price;
}

void Car::Print()
{
	cout << "Car:\nModel: " << this->model << "\tColor: " << this->color << "\tYear: " << this->year << "\tPrice: " << this->price << "$." << endl;
}

char* Car::GetModel()
{
	return model;
}

char* Car::GetColor()
{
	return color;
}

int Car::GetYear()
{
	return year;
}

double Car::GetPrice()
{
	return price;
}

void Car::SetModel(const char* m)
{
	if (model != nullptr) {
		delete[] model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m + 1), m);
}

void Car::SetColor(const char* c)
{
	if (color != nullptr) {
		delete[] color;
	}
	this->color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c + 1), c);
}

void Car::SetYear(int y)
{
	this->year = y;
}

void Car::SetPrice(double p)
{
	this->price = p;
}
