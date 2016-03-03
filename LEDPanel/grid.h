#ifndef grid_h
#define grid_h

#include "Arduino.h"
#include "controller.h"


class grid
{
  public:
    grid(int col, int dlay);
    void setData(int moveMode);
    int adjustData(int i, int moveMode);
    int getData(int i);
  private:
    int numCol;
    int delay;
    int col[];
    int colInit[];
    int colData[];
};
#endif 

