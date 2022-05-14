#include "stim.h"

void Stim::stimulus()

{
    wait();
    A = 1;
    B = 6;
    wait();
    A = 2;
    B = 6;
    wait();
    A = 3;
    B = 6;
    wait();
    wait();
    A = 4;
    B = 6;
    wait();
    wait();
    A = 5;
    B = 6;
    wait();
    wait();
    A = 6;
    B = 6;
    wait();
    wait();
    A = 7;
    B = 6;
    wait();
    sc_stop();
}
