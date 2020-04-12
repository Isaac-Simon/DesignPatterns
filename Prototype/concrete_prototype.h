#pragma once

#include "prototype.h"
#include <iostream>
#include <string>

using namespace std;

class SunWuKong :public Monkey
{
public:
	SunWuKong(string name) { m_stringName = name; }
	~SunWuKong() {}

	SunWuKong(const SunWuKong &other) {
		m_stringName = other.m_stringName;
	}
	Monkey* Clone() {
		return new SunWuKong(*this);
	}
	void Play() {
		cout << m_stringName << "play Golden-Hoop-Stick" << endl;
	}

private:
	string m_stringName;
};
