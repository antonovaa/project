// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class WORK_API MyMasClass
{
private:
	float xc;
	float yc;
public:
	MyMasClass(float x, float y);
	MyMasClass();
	~MyMasClass();
	void setXc(float x);
	void setYc(float y);
	float getXc();
	float getYc();
};
