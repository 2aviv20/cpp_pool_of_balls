#ifndef COLLISION_DETECTION_H
#define COLLISION_DETECTION_H
#include "Body.h"
#include "Contact.h"
#include "./Shapes/CircleShape.h"
class CollisionDetection {
public:
	static bool IsColliding(Body* a, Body* b, Contact& contact);
	static bool IsCollidingCircleCircle(Body* a, Body* b, Contact& contact);
	static bool IsCollidingPolygonPolygon(Body* a, Body* b, Contact& contact);
	static bool IsCollidingPolygonCircle(Body* polygon, Body* circle, Contact& contact);
};
#endif