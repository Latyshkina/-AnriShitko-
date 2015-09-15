#pragma once 
#include <iostream>
 class rectangle 
 {
	 double width, height;
 public:
	 double S();
	 double P();
	 rectangle();
	 rectangle(double width, double height);
	 rectangle( const rectangle &);
	 ~rectangle();
	 int Type();
	static enum {
		square,
		rect
	 };
	void print();
	void Setwidth(double wi);
	void Setheight(double hei);
	double Getwidth();
	double Getheight();

 };