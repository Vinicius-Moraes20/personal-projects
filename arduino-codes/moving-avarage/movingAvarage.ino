int n = 6;
int movingAvarage[7][n];

void setup() {}

void loop() {
    for(int i = 0; i < 7; i++) {
        for(int ii = n-1; ii > 0; ii--) {
            movingAvarage[i][ii] = movingAvarage[i][ii - 1];
        }
    }

    //Leitura de dados na primeira coluna de movingAvarage

    float sum[7] = {0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 7; i++) {
        for (int ii = 0; ii < n; ii++) {
             sum[i] += movingAvarage[i][ii];
        }
    }

    for(int i = 0; i < 7; i++) sum[i] = sum[i] / n;
}
