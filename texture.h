#pragma once
#include"general.h"

START_NAMESPACE(NewRay)

struct Texture
{
    virtual MyGeo::Vec3f getValue(float u,float v) const=0;
    
};

struct SolidColor : public Texture
{
    SolidColor(const MyGeo::Vec3f& color):color{color}{}
    MyGeo::Vec3f color;
    MyGeo::Vec3f getValue(float u, float v) const override
    {
        return color;
    }
};



END_NAMESPACE