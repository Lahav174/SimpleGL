//
//  box.h
//  SimpleOpenGL
//
//  Created by Lahav Lipson on 4/6/19.
//  Copyright © 2019 Lahav Lipson. All rights reserved.
//

#ifndef box_h
#define box_h

#include "glp.h"
#include "object.h"

class Box : public Object {
public:
    
    Box(Shader *s, double w=1, double h=1, double d=1){
        this->shader = s;
        vertices = glp::box(glm::dvec3(w, h, d));
        initVAO();
    }
};

class Pyramid : public Object {
public:
    
    Pyramid(Shader *s, int sides=10, double h=3, double r=1){
        this->shader = s;
        vertices = glp::pyramid(sides, h, r);
        initVAO();
    }
};

#endif /* box_h */
