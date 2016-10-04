#include "obstacles/GJK_EPA.h"


SteerLib::GJK_EPA::GJK_EPA()
{
}

//Look at the GJK_EPA.h header file for documentation and instructions
bool SteerLib::GJK_EPA::intersect(float& return_penetration_depth, Util::Vector& return_penetration_vector, const std::vector<Util::Vector>& _shapeA, const std::vector<Util::Vector>& _shapeB)
{
	return false; // There is no collision
}
Util::Vector SteerLib::GJK_EPA::support(const std::vector<Util::Vector>& shapeA, Util::Vector b)
{
	double max = 0;
	int p = 0;
	for (int i = 0; i < shapeA.size(); i++) 
	{
		if (Unit::dot(shapeA[i], b) > max) 
		{
			max = Unit::dot(shapeA[i], b);
			p = i;
		}
	}
	return shapeA[p];
}
