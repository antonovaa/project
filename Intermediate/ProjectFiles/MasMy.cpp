#include "MasMy.h"



MasMy::MasMy(float x,float y)
{
	xc = x;
	yc = y;
}


MasMy::~MasMy()
{
}

void MasMy::setXc(float x)
{
	xc = x;
}

void MasMy::setYc(float y)
{
	yc = y;
}

float MasMy::getXc()
{
	return xc;
}

float MasMy::getYc()
{
	return yc;
}
