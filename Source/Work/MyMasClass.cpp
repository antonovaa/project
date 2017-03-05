// Fill out your copyright notice in the Description page of Project Settings.

#include "Work.h"
#include "MyMasClass.h"

MyMasClass::MyMasClass(float x, float y)
{
	xc = x;
	yc = y;
}
MyMasClass::MyMasClass()
{

}

MyMasClass::~MyMasClass()
{
}

void MyMasClass::setXc(float x)
{
	xc = x;
}

void MyMasClass::setYc(float y)
{
	yc = y;
}

float MyMasClass::getXc()
{
	return xc;
}

float MyMasClass::getYc()
{
	return yc;
}
