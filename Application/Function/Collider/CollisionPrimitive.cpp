﻿#include "CollisionPrimitive.h"

void Triangle::ComputeNormal() {
	Vector3 p0_p1 = p1_ - p0_;
	Vector3 p0_p2 = p2_ - p0_;

	//外積により、2偏に垂直なベクトルを算出する
	normal_ = Vector3Cross(p0_p1, p0_p2);

	normal_ = Vector3Normalize(normal_);
}
