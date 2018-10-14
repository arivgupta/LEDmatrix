
// Adafruit_NeoMatrix example for single NeoPixel Shield.
// Scrolls 'Howdy' across the matrix in a portrait (vertical) orientation.

#include <Adafruit_NeoMatrix.h>

#define PIN 6
#define MAT_ROW 8
#define MAT_COL 8
int i = 0; //declaration, allocation, initialization

float value;  //declaration, allocation


// MATRIX DECLARATION:
// Parameter 1 = width of NeoPixel matrix
// Parameter 2 = height of matrix
// Parameter 3 = pin number (most are valid)
// Parameter 4 = matrix layout flags, add together as needed:
//   NEO_MATRIX_TOP, NEO_MATRIX_BOTTOM, NEO_MATRIX_LEFT, NEO_MATRIX_RIGHT:
//     Position of the FIRST LED in the matrix; pick two, e.g.
//     NEO_MATRIX_TOP + NEO_MATRIX_LEFT for the top-left corner.
//   NEO_MATRIX_ROWS, NEO_MATRIX_COLUMNS: LEDs are arranged in horizontal
//     rows or in vertical columns, respectively; pick one or the other.
//   NEO_MATRIX_PROGRESSIVE, NEO_MATRIX_ZIGZAG: all rows/columns proceed
//     in the same order, or alternate lines reverse direction; pick one.
//   See example below for these values in action.
// Parameter 5 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)


// Example for NeoPixel Shield.  In this application we'd like to use it
// as a 5x8 tall matrix, with the USB port positioned at the top of the
// Arduino.  When held that way, the first pixel is at the top right, and
// lines are arranged in columns, progressive order.  The shield uses
// 800 KHz (v2) pixels that expect GRB color data.
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(MAT_ROW, MAT_COL, PIN,
                            NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
                            NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
                            NEO_GRB            + NEO_KHZ800);

void draw_A() {
  int A[MAT_ROW][MAT_COL] =
  { {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (A[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_B() {
  int B[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (B[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_C() {
  int C[MAT_ROW][MAT_COL] =
  { {0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (C[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_D() {
  int D[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (D[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_E() {
  int E[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (E[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_F() {
  int F[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (F[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}


void draw_G() {
  int G[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (G[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_H() {
  int H[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (H[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_I() {
  int I[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (I[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_J() {

  int J[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (J[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_K() {
  int K[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (K[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_L() {
  int L[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (L[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_M() {
  int M[MAT_ROW][MAT_COL] =
  { {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 1, 0, 1, 1, 1, 0},
    {1, 1, 1, 0, 1, 1, 1, 0},
    {1, 1, 0, 1, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (M[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_N() {
  int N[MAT_ROW][MAT_COL] =
  { {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 1, 0, 0, 1, 1, 0},
    {1, 1, 1, 1, 0, 1, 1, 0},
    {1, 1, 0, 1, 1, 1, 1, 0},
    {1, 1, 0, 0, 1, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (N[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_O() {
  int O[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (O[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_P() {
  int P[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (P[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_Q() {
  int Q[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 1, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (Q[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}
void draw_R() {
  int R[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (R[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_S() {
  int S[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (S[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_T() {

  int T[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (T[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_U() {
  int U[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (U[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_V() {

  int V[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (V[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_W() {
  int W[MAT_ROW][MAT_COL] =
  { {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 1, 0, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 0, 1, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (W[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_X() {
  int X[MAT_ROW][MAT_COL] =
  { {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 1, 0, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (X[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_Y() {
  int Y[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (Y[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_Z() {
  int Z[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (Z[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_0() {
  int zero[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 1, 1, 1, 0},
    {0, 1, 1, 1, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (zero[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_1() {
  int one[MAT_ROW][MAT_COL] =
  { {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (one[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_2() {
  int two[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (two[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_3() {
  int three[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 0, 1, 0},
    {0, 0, 1, 1, 1, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (three[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_4() {
  int four[MAT_ROW][MAT_COL] =
  { {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 1, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (four[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_5() {
  int five[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (five[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_6() {
  int six[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (six[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_7() {
  int seven[MAT_ROW][MAT_COL] =
  { {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (seven[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_8() {
  int eight[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (eight[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void draw_9() {
  int nine[MAT_ROW][MAT_COL] =
  { {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0},
  };
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (nine[j][i] == 1) {
        matrix.drawPixel(j, i, matrix.Color(100, 186, 77));
      }
    }
  }
  matrix.show();
}

void eraseBOARD() {
  matrix.fillRect(0, 0, 8, 8, matrix.Color(0, 0, 0));
}

void writeTextWithLights(str) {
  // parse the string and examine each character of the string
  // erase
  // for each character in the string, call one of your draw_ functions
  // delay


  // NOTE to save you some headache... you havent written all the draw_ functions this code needs. so write them.
  // ASCII characcter set
}

void setup() {
  matrix.begin();
  matrix.setBrightness(40);
  Serial.begin(9600);
}

void loop() {

}
