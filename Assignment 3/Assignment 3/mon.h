#include "systemc.h"
SC_MODULE(Mon)
{
    sc_in<bool> Clk;
    sc_in<int> A;
    sc_in<int> B;
    sc_in<int> F;
    void monitor();

    SC_CTOR(Mon)
    {
        SC_THREAD(monitor);
        sensitive << Clk.neg();
    }


};
