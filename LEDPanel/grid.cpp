#include "Arduino.h"
#include "grid.h"
#include "vibsens.h" 
#include "controller.h"

grid::grid(int cols, int dlay)
{
  numCol = cols; 
  delay = dlay;
  colInit[numCol];
  
  for (int i = 0; i < numCol; i++)
  {
    colInit[i] = 0xFF;
    colData[i] = 0x00;
  }
  

  // vibsens vibe = vibsens(
}

int grid::getData(int i) {
	return colData[i];
}

void grid::setData(int moveMode) {
	if (moveMode) {
		for (int i = 0; i < numCol; i++) {
			colData[i] = 0x00;
		}
    colData[0] = 0x02;
	} else {
    colData[0] = 0x04;
    colData[1] = 0x0A;
    colData[2] = 0x11;
    colData[3] = 0x0A;
    colData[4] = 0x04;
	}
}
