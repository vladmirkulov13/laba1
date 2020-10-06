 
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <cmath>
#include "laba1.h"



using namespace std;

//����� ��� �������� ���� ��������� ����� � ����� �������
class Point
{
public:
	int x, y;
};



  

// ������� ���������� ���������� ����� ����� �������
float dist(Point p1, Point p2)
{
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) +
		(p1.y - p2.y) * (p1.y - p2.y));
}

// ������� ��������� ������ ����� � ��� �����, ���������� ���������� ���������� ����� ����� ��� �������
float bruteForce(Point P[], int n)
{
	float min = FLT_MAX;
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
			if (dist(P[i], P[j]) < min)
				min = dist(P[i], P[j]);
	return min;
}



