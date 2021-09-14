#include <iostream>
#include "Crud.h"

int main() {
    Crud mycrud=Crud();
    mycrud.create(1);
    mycrud.create(2);
    mycrud.createatindex(1,3);
    mycrud.del(1);
    mycrud.del();
    mycrud.affichetab();
    return 0;
}
