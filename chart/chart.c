#include "../cursor/cursor.h"
#include "../coloredOutput/coloredOutput.h"
#include <iostream>

void drawChart(char *binary, int leftX, int topY, int scalingKey)
{
   float scale = float(scalingKey) / 20;
   int length = 0;
   while (*(binary + length) != '\0')
   {
      int one = 1;
      __asm__(
          "add %0, %1\n\t"
          : "+r"(one), "+r"(length));
   }

   if (length == 0)
      return;

   int lastX = 0;
   for (int i = 0; i <= length; i++)
   {
      int currentX = float(i + 1) * 2 * scale;
      for (int x = lastX; x < currentX; x++)
      {
         if (i != 0 && x == lastX && (*(binary + i) != *(binary + i - 1)))
         {
            if (*(binary + i) == '0')
            {
               moveCursor(leftX + x, topY);
               std::cout << "╗" << std::flush;
               moveCursor(leftX + x, topY + 1);
               std::cout << "║" << std::flush;
               moveCursor(leftX + x, topY + 2);
               std::cout << "║" << std::flush;
               moveCursor(leftX + x, topY + 3);
               std::cout << "╚" << std::flush;
            }
            else if (*(binary + i) == '1')
            {
               moveCursor(leftX + x, topY);
               std::cout << "╔" << std::flush;
               moveCursor(leftX + x, topY + 1);
               std::cout << "║" << std::flush;
               moveCursor(leftX + x, topY + 2);
               std::cout << "║" << std::flush;
               moveCursor(leftX + x, topY + 3);
               std::cout << "╝" << std::flush;
            }
         }
         else
         {
            if (*(binary + i) == '0')
            {
               moveCursor(leftX + x, topY + 3);
               std::cout << "═" << std::flush;
            }
            else if (*(binary + i) == '1')
            {
               moveCursor(leftX + x, topY);
               std::cout << "═" << std::flush;
            }
         }
      }
      int charX = float(currentX + lastX) / 2;
      char label[2] = {*(binary + i), '\0'};
      coloredOutput(label, leftX + charX, topY + 5, i, length);
      moveCursor(leftX, topY + 7);
      std::cout << "Use arrow keys (←/→) to scale chart. Current size: " << int(scale * 100) << "%";
      lastX = currentX;
   }
}