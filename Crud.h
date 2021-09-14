//
// Created by eric on 14/09/2021.
//

#ifndef VECTORCRUD_CRUD_H
#define VECTORCRUD_CRUD_H
#include <vector>
using namespace std;
class Crud {
private:
    vector<int> myvector;

public :
    void create(int numtoinsert);
    void createatindex(int index,int numtoinsert);
    void read(int numerotoinsert);
    void update(int numero,int newvalue);
    void del(int index);
    void del();
    void affichetab();

};


#endif //VECTORCRUD_CRUD_H
