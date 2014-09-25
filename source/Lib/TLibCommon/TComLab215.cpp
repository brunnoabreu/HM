
#include <vector>
#include <cstdlib>
#include <fstream>
#include <cstdio>
#include <iostream>

#include "TComLab215.h"
using namespace std;

double TComLab215::counter;
int TComLab215::TZConfig;


TComLab215::TComLab215() {

}


void TComLab215::init(){
    counter = 0;
}

void TComLab215::incCounter(int n){
    counter += (n/1000.0);
}

void TComLab215::report(){
    cout << counter << " kcycles" << endl;
    init();
}

void TComLab215::setTZConfig(int n){
    TZConfig = n;
}