const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 317;
const signed char knockSamples[] = {
0, 4, 9, 11, 11, 12, 14, 17, 19, 22, 23, 24, 25, 24, 22, 20, 
18, 14, 12, 10, 10, 9, 9, 10, 13, 17, 21, 26, 33, 42, 46, 50, 
54, 55, 56, 57, 58, 59, 61, 62, 64, 66, 69, 73, 76, 80, 83, 85, 
86, 87, 89, 92, 94, 96, 97, 96, 95, 96, 98, 101, 104, 107, 110, 111, 
111, 111, 111, 113, 117, 119, 120, 122, 125, 127, 126, 124, 122, 118, 115, 112, 
108, 104, 100, 97, 95, 95, 95, 95, 93, 91, 90, 88, 90, 93, 97, 99, 
100, 98, 96, 93, 89, 83, 73, 67, 62, 58, 55, 53, 48, 45, 42, 38, 
34, 30, 27, 27, 26, 26, 25, 21, 19, 16, 14, 13, 14, 19, 23, 28, 
32, 35, 37, 37, 34, 30, 26, 23, 19, 18, 15, 11, 8, 5, 0, -3, 
-5, -8, -10, -10, -10, -10, -12, -14, -18, -23, -25, -27, -28, -29, -30, -31, 
-31, -30, -28, -26, -22, -21, -20, -21, -23, -25, -28, -31, -35, -38, -40, -42, 
-42, -41, -41, -42, -43, -44, -43, -42, -42, -43, -45, -48, -50, -53, -56, -58, 
-60, -59, -55, -51, -48, -47, -48, -49, -50, -50, -48, -45, -38, -34, -32, -32, 
-33, -35, -38, -39, -38, -37, -35, -33, -32, -32, -33, -32, -31, -27, -24, -21, 
-19, -17, -15, -15, -18, -21, -27, -32, -39, -43, -46, -46, -45, -43, -39, -37, 
-37, -36, -36, -35, -32, -30, -29, -29, -30, -35, -38, -40, -41, -40, -37, -33, 
-29, -26, -24, -23, -22, -25, -30, -35, -41, -47, -54, -58, -62, -65, -68, -70, 
-73, -74, -74, -73, -72, -72, -72, -72, -72, -73, -74, -75, -75, -75, -75, -74, 
-73, -69, -64, -60, -54, -49, -45, -44, -44, -45, -45, -45, -43, -39, -35, -30, 
-25, -22, -19, -17, -16, -18, -19, -21, -22, -20, -17, -8, 0, };
