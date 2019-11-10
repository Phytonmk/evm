#include "../cursor/cursor.h"
#include "../coloredOutput/coloredOutput.h"
#include <iostream>

void drawChart(char *binary, int leftX, int topY, int scalingKey)
{
   float scale = float(scalingKey) / 20;
   int length = 0;
   while (*(binary + length) != '\0')
      length++;

   if (length == 0)
      return;


   int lastX = 0;
   for (int i = 1; i <= length ; i++) {
      int currentX = float(i) * 2 * scale;
      for (int x = lastX; x < currentX; x++) {
         if (i != 0 && x == lastX && (*(binary + i) != *(binary + i - 1))) {
            if (*(binary + i) == '0') {
               moveCursor(leftX + x, topY);
               std::cout << "╗" << std::flush;
               moveCursor(leftX + x, topY + 1);
               std::cout << "║" << std::flush;
               moveCursor(leftX + x, topY + 2);
               std::cout << "║" << std::flush;
               moveCursor(leftX + x, topY + 3);
               std::cout << "╚" << std::flush;
            } else if (*(binary + i) == '1') {
               moveCursor(leftX + x, topY);
               std::cout << "╔" << std::flush;
               moveCursor(leftX + x, topY + 1);
               std::cout << "║" << std::flush;
               moveCursor(leftX + x, topY + 2);
               std::cout << "║" << std::flush;
               moveCursor(leftX + x, topY + 3);
               std::cout << "╝" << std::flush;
            }
         } else {
            if (*(binary + i) == '0') {
               moveCursor(leftX + x, topY + 3);
               std::cout << "═" << std::flush;
            } else if (*(binary + i) == '1') {
               moveCursor(leftX + x, topY);
               std::cout << "═" << std::flush;
            }
         }
      }
      int charX = float(currentX + lastX) / 2;
      char label[2] = {*(binary + i), '\0'};
      coloredOutput(label, leftX + charX, topY + 5);
      lastX = currentX;
   }
}