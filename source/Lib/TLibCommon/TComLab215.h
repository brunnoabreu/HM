/* 
 * File:   TComCycleMonitor.h
 * Author: grellert
 *
 * Created on April 16, 2014, 1:21 PM
 */

#ifndef TCOMLAB215_H
#define	TCOMLAB215_H


#define EN_LAB215 1

#include <cstdlib>
#include <cstdio>
#include <vector>

using namespace std;


class TComLab215 {
public:
    static double counter;
    static int TZConfig;
    TComLab215();
    static void init();
    static void report();
    static void incCounter(int n);
    static void setTZConfig(int n);
};

#endif	/* TCOMLAB215_H */

