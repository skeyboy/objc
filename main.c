#include <stdio.h>
#include "objc_class.h"
#include "objc_object.h"

/**/
typedef id (*IMP)(id, SEL, ...);

typedef struct objc_method *Method;

typedef struct objc_selector *SEL;

typedef struct objc_selector {
//此处安防未知的灵魂吧
};
struct objc_method {
    SEL method_name;
    char *method_types;
    IMP method_imp
};

int main() {
    printf("Hello, World!\n");
    struct objc_class instance;
    instance.name = "objc_class";
    instance.version = 0.01;
    instance.info = 1.0;
    Class aClass = &instance;
    struct objc_object obj;
    obj.isa = aClass;
    printf("%s %d %d %d %d",
           obj.isa->name,
           obj.isa->version,
           obj.isa->info,
           obj.isa->super_class);
    id idValue;
    idValue = &obj;
    return 0;
}
