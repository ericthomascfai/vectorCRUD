//
// Created by eric on 14/09/2021.
//

#include <iostream>
#include "Crud.h"
/***************insertion de données à la fin du vector***********************/
void Crud::create(int numtoinsert) {
myvector.push_back(numtoinsert); //insert à la fin du vector
}

/**************insertion de données à un indice donné************************/
void Crud::createatindex(int index,int numtoinsert) {
    auto pos=myvector.begin()+index;
    myvector.insert(pos,numtoinsert);
}
/************lecture à un indice donné***************************************/
void Crud::read(int numero) {
cout<<myvector[numero]; //identique à un tableau
}
/***********mise à jour à un indice donné************************************/
void Crud::update(int numero,int newvalue) {
myvector[numero]=newvalue; //identique à tableau
}
/***********suppression à un indice donné*************************************/
void Crud::del(int index) {
    auto pos=myvector.begin()+index;
    myvector.erase(pos);
}
/*********suppression à la fin du vector**************************************/
void Crud::del() {
myvector.pop_back();
}

/********affichage du contenu du vector****************************************/
void Crud::affichetab() {
for( int i:myvector)
{
    cout<<i<<";";
}
}




