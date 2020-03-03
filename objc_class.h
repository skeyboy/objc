//
// Created by sk on 2020/3/3.
//

#ifndef OBJC_OBJC_CLASS_H
#define OBJC_OBJC_CLASS_H

typedef struct objc_class * Class;
struct objc_class {
    Class super_class;
    const char * name;
    long version;
    long info ;
    long instance_size;
};

#endif //OBJC_OBJC_CLASS_H