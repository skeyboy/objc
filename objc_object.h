//
// Created by sk on 2020/3/3.
//

#ifndef OBJC_OBJC_OBJECT_H
#define OBJC_OBJC_OBJECT_H

#include "objc_class.h"
struct objc_object{
    Class  isa;
} objc_object;
typedef  struct objc_object *id;
#endif //OBJC_OBJC_OBJECT_H
