uint8_t physicalToFibonacci[NUM_LEDS] = { 0, 13, 26, 39, 52, 65, 78, 91, 104, 117, 122, 109, 96, 83, 70, 57, 44, 31, 18, 5, 10, 23, 36, 49, 62, 75, 88, 101, 114, 127, 119, 106, 93, 80, 67, 54, 41, 28, 15, 2, 7, 20, 33, 46, 59, 72, 85, 98, 111, 124, 116, 103, 90, 77, 64, 51, 38, 25, 12, 4, 17, 30, 43, 56, 69, 82, 95, 108, 121, 126, 113, 100, 87, 74, 61, 48, 35, 22, 9, 1, 14, 27, 40, 53, 66, 79, 92, 105, 118, 123, 110, 97, 84, 71, 58, 45, 32, 19, 6, 11, 24, 37, 50, 63, 76, 89, 102, 115, 120, 107, 94, 81, 68, 55, 42, 29, 16, 3, 8, 21, 34, 47, 60, 73, 86, 99, 112, 125 };
uint8_t fibonacciToPhysical[NUM_LEDS] = { 0, 79, 39, 117, 59, 19, 98, 40, 118, 78, 20, 99, 58, 1, 80, 38, 116, 60, 18, 97, 41, 119, 77, 21, 100, 57, 2, 81, 37, 115, 61, 17, 96, 42, 120, 76, 22, 101, 56, 3, 82, 36, 114, 62, 16, 95, 43, 121, 75, 23, 102, 55, 4, 83, 35, 113, 63, 15, 94, 44, 122, 74, 24, 103, 54, 5, 84, 34, 112, 64, 14, 93, 45, 123, 73, 25, 104, 53, 6, 85, 33, 111, 65, 13, 92, 46, 124, 72, 26, 105, 52, 7, 86, 32, 110, 66, 12, 91, 47, 125, 71, 27, 106, 51, 8, 87, 31, 109, 67, 11, 90, 48, 126, 70, 28, 107, 50, 9, 88, 30, 108, 68, 10, 89, 49, 127, 69, 29 };
uint8_t coordsX[NUM_LEDS] = { 137, 170, 182, 186, 182, 172, 156, 135, 110, 83, 26, 49, 74, 99, 121, 141, 155, 164, 164, 151, 145, 141, 129, 112, 91, 69, 47, 27, 11, 0, 9, 11, 19, 33, 50, 70, 90, 108, 123, 130, 114, 96, 77, 58, 43, 32, 25, 25, 32, 45, 85, 65, 51, 43, 42, 47, 58, 74, 94, 105, 81, 68, 62, 63, 70, 84, 103, 127, 154, 218, 193, 167, 142, 119, 101, 89, 83, 84, 96, 118, 104, 106, 116, 132, 152, 175, 198, 221, 241, 255, 248, 236, 219, 199, 178, 158, 140, 126, 121, 140, 157, 176, 195, 213, 227, 237, 241, 239, 193, 210, 221, 225, 222, 214, 201, 184, 164, 142, 160, 181, 196, 204, 206, 202, 191, 174, 152, 125 };
uint8_t coordsY[NUM_LEDS] = { 130, 121, 105, 86, 66, 47, 31, 19, 13, 13, 55, 39, 30, 28, 33, 43, 57, 75, 95, 115, 96, 75, 60, 50, 46, 49, 59, 74, 96, 122, 166, 139, 114, 93, 78, 69, 67, 72, 85, 112, 102, 90, 89, 96, 110, 129, 152, 177, 203, 227, 247, 228, 207, 184, 161, 140, 123, 112, 109, 126, 132, 146, 165, 185, 206, 225, 240, 251, 255, 224, 235, 240, 237, 229, 216, 199, 181, 161, 143, 139, 166, 186, 202, 215, 221, 222, 216, 204, 185, 115, 142, 166, 184, 197, 203, 202, 195, 181, 158, 167, 180, 182, 178, 166, 148, 126, 101, 74, 21, 42, 66, 91, 114, 134, 150, 159, 160, 147, 141, 137, 124, 106, 85, 63, 42, 24, 9, 0 };
uint8_t angles[NUM_LEDS] = { 0, 247, 239, 230, 221, 212, 203, 194, 186, 177, 154, 163, 171, 180, 189, 198, 207, 216, 224, 233, 210, 201, 192, 184, 175, 166, 157, 148, 139, 131, 116, 125, 134, 143, 152, 160, 169, 178, 187, 196, 173, 164, 155, 146, 137, 129, 120, 111, 102, 93, 79, 88, 97, 105, 114, 123, 132, 141, 150, 135, 126, 118, 109, 100, 91, 82, 73, 65, 56, 33, 42, 50, 59, 68, 77, 86, 95, 103, 112, 98, 89, 80, 71, 63, 54, 45, 36, 27, 18, 252, 4, 13, 22, 31, 39, 48, 57, 66, 75, 52, 43, 34, 25, 16, 8, 255, 246, 237, 214, 223, 232, 241, 250, 2, 11, 20, 29, 37, 14, 5, 253, 244, 235, 226, 218, 209, 200, 191 };

void anglePalette() {
  uint8_t hues = 1;

  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t x = angles[i];

    leds[i] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - (x * hues));
  }
}

void radiusPalette() {
  uint8_t hues = 1;

  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t r = physicalToFibonacci[i];
    
    leds[i] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - (r * hues));
  }
}

void xPalette() {
  uint8_t hues = 1;

  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t x = coordsX[i];

    leds[i] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - (x * hues));
  }
}

void yPalette() {
  uint8_t hues = 1;

  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t y = coordsY[i];

    leds[i] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - (y * hues));
  }
}

void xyPalette() {
  uint8_t hues = 1;

  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t x = coordsX[i];
    uint8_t y = coordsY[i];

    leds[i] = ColorFromPalette(palettes[currentPaletteIndex], beat8(speed) - ((x + y) * hues));
  }
}

void angleGradientPalette() {
  uint8_t hues = 1;

  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t x = angles[i];

    leds[i] = ColorFromPalette(gCurrentPalette, beat8(speed) - (x * hues));
  }
}

void radiusGradientPalette() {
  uint8_t hues = 1;

  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t r = physicalToFibonacci[i];
    
    leds[i] = ColorFromPalette(gCurrentPalette, beat8(speed) - (r * hues));
  }
}

void xGradientPalette() {
  uint8_t hues = 1;
  
  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t x = coordsX[i];

    leds[i] = ColorFromPalette(gCurrentPalette, beat8(speed) - (x * hues));
  }
}

void yGradientPalette() {
  uint8_t hues = 1;
  
  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t y = coordsY[i];

    leds[i] = ColorFromPalette(gCurrentPalette, beat8(speed) - (y * hues));
  }
}

void xyGradientPalette() {
  uint8_t hues = 1;
  
  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    uint8_t x = coordsX[i];
    uint8_t y = coordsY[i];

    leds[i] = ColorFromPalette(gCurrentPalette, beat8(speed) - ((x + y) * hues));
  }
}
