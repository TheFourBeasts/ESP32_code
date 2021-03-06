const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 1213;
const signed char knockSamples[] = {
0, -4, -4, -5, -4, -3, -2, -1, -1, -1, -2, -1, 6, 13, 21, 27,
29, 30, 28, 22, 13, 10, 9, 5, 4, 8, 11, 11, 14, 17, 16, 16, 
17, 19, 19, 19, 20, 22, 25, 26, 27, 29, 34, 40, 42, 40, 35, 36, 
39, 44, 51, 59, 59, 57, 57, 57, 56, 54, 53, 51, 47, 44, 44, 41, 
38, 37, 37, 36, 34, 28, 17, 8, 6, 2, -10, -10, -9, -12, -16, -12, 
-5, -5, -3, 5, 12, 13, 12, 14, 16, 13, 7, 1, -5, -15, -26, -35, 
-44, -53, -58, -60, -62, -62, -61, -61, -62, -63, -64, -65, -70, -70, -66, -61, 
-55, -50, -50, -53, -53, -52, -52, -55, -58, -61, -65, -72, -79, -83, -81, -78, 
-80, -86, -87, -79, -75, -72, -64, -50, -33, -26, -18, -16, -21, -24, -13, -9, 
-11, -11, -11, -21, -30, -31, -30, -33, -38, -36, -31, -27, -21, -13, -9, -4, 
2, 5, 3, 0, 1, -2, -6, -8, -11, -14, -21, -28, -34, -35, -33, -31, 
-26, -19, -7, 3, 11, 23, 28, 34, 40, 47, 48, 36, 33, 33, 30, 25, 
25, 26, 23, 21, 22, 22, 21, 22, 19, 13, 10, 11, 11, 10, 11, 17, 
23, 29, 40, 49, 54, 57, 62, 63, 58, 51, 45, 39, 33, 26, 23, 23, 
24, 25, 30, 38, 42, 48, 54, 58, 63, 68, 72, 72, 72, 70, 58, 53, 
49, 45, 41, 37, 39, 41, 41, 38, 36, 39, 40, 36, 28, 18, 14, 12, 
11, 11, 15, 24, 35, 51, 57, 58, 57, 54, 46, 37, 28, 17, 2, -15, 
-39, -49, -55, -59, -58, -54, -51, -51, -46, -36, -30, -21, -13, -6, -1, 0, 
-1, -4, -11, -20, -27, -33, -42, -46, -47, -49, -53, -58, -58, -51, -39, -26, 
-20, -22, -25, -24, -19, -14, -10, -11, -9, -3, 4, 9, 9, 6, 4, -1, 
-11, -20, -26, -27, -24, -20, -17, -12, -2, 3, 11, 20, 25, 25, 24, 25, 
29, 35, 39, 38, 41, 42, 38, 30, 24, 21, 20, 19, 18, 18, 18, 18, 
20, 22, 23, 25, 27, 34, 39, 43, 44, 40, 33, 24, 13, 4, -2, -4, 
-1, 2, 0, -2, 1, 9, 13, 10, 3, -5, -12, -13, -9, -8, -15, -23, 
-27, -29, -30, -31, -30, -31, -30, -21, -15, -11, -10, -11, -13, -19, -30, -39, 
-39, -36, -35, -32, -24, -15, -6, 0, 1, 2, 2, -1, -10, -25, -32, -38, 
-42, -43, -39, -26, -15, -10, -7, -1, 6, 11, 12, 11, 6, 0, -7, -6, 
-5, -3, 2, 9, 16, 15, 8, 1, -1, 4, 4, 2, 3, 2, -3, -5, 
4, 14, 20, 19, 14, 8, 6, 5, 5, 7, 5, 1, -4, -13, -24, -34, 
-46, -49, -47, -44, -42, -42, -46, -46, -41, -34, -34, -37, -36, -36, -34, -27, 
-22, -25, -27, -27, -30, -37, -42, -48, -52, -53, -52, -52, -52, -52, -52, -51, 
-47, -41, -35, -33, -31, -31, -33, -34, -30, -29, -29, -28, -29, -33, -34, -35, 
-38, -41, -41, -45, -51, -57, -60, -59, -53, -41, -36, -34, -34, -36, -41, -43, 
-44, -44, -41, -38, -34, -34, -33, -30, -31, -33, -27, -22, -17, -14, -12, -10, 
-6, 2, 10, 16, 21, 24, 24, 24, 19, 11, 6, 11, 17, 18, 22, 29, 
40, 46, 49, 47, 45, 47, 54, 58, 60, 63, 70, 80, 97, 105, 108, 108, 
111, 115, 112, 103, 94, 87, 81, 73, 74, 76, 77, 78, 86, 92, 96, 103, 
112, 119, 126, 127, 125, 124, 120, 112, 105, 104, 103, 101, 103, 107, 103, 93, 
83, 72, 62, 50, 43, 33, 23, 16, 13, 19, 29, 34, 39, 46, 54, 54, 
53, 51, 43, 30, 10, -2, -16, -29, -38, -42, -42, -44, -46, -48, -47, -42, 
-40, -41, -42, -43, -45, -45, -39, -32, -27, -21, -14, -7, -7, -5, -2, -4, 
-10, -15, -24, -37, -50, -57, -59, -56, -52, -51, -52, -48, -34, -23, -12, -2, 
1, -6, -7, -7, -11, -20, -30, -43, -52, -57, -55, -50, -43, -37, -35, -33, 
-24, -15, -12, -15, -19, -24, -27, -26, -23, -22, -13, 3, 13, 15, 24, 32, 
31, 23, 19, 15, 8, 0, -3, -4, -4, 1, 6, 13, 21, 27, 31, 34, 
35, 34, 29, 21, 10, 6, 2, 1, 4, 8, 6, 5, 9, 13, 12, 7, 
8, 8, 8, 10, 16, 23, 27, 28, 26, 22, 17, 11, 6, -5, -18, -26, 
-30, -31, -32, -33, -37, -42, -39, -36, -40, -45, -44, -46, -61, -70, -76, -84, 
-90, -95, -98, -101, -98, -90, -86, -84, -81, -79, -80, -80, -78, -75, -77, -77, 
-74, -71, -71, -70, -66, -61, -56, -51, -41, -38, -40, -42, -38, -33, -36, -41, 
-42, -40, -40, -41, -39, -36, -31, -27, -26, -29, -32, -29, -24, -22, -22, -23, 
-21, -20, -20, -19, -19, -17, -15, -12, -11, -13, -12, -6, 1, 6, 12, 17, 
20, 21, 22, 26, 29, 29, 25, 23, 21, 13, 1, -8, -5, -6, -10, -12, 
-13, -23, -29, -31, -36, -45, -54, -54, -54, -54, -51, -46, -37, -33, -25, -14, 
-2, 5, 4, 0, -5, -13, -18, -27, -34, -41, -45, -51, -61, -66, -65, -66, 
-67, -65, -64, -66, -63, -56, -50, -45, -35, -29, -27, -27, -25, -23, -29, -39, 
-43, -47, -53, -53, -51, -53, -58, -61, -63, -70, -68, -61, -57, -57, -60, -65, 
-67, -65, -60, -57, -54, -52, -51, -50, -48, -42, -35, -35, -34, -33, -34, -37, 
-40, -38, -38, -38, -36, -26, -23, -24, -24, -19, -15, -19, -23, -23, -21, -18, 
-18, -20, -18, -13, -10, -10, -13, -14, -14, -13, -11, -12, -21, -25, -22, -15, 
-9, -3, 16, 28, 34, 38, 43, 49, 55, 56, 53, 48, 42, 32, 28, 27, 
27, 32, 45, 73, 85, 92, 99, 104, 109, 117, 123, 121, 114, 106, 93, 80, 
71, 68, 67, 63, 59, 58, 56, 56, 58, 69, 74, 79, 84, 91, 97, 104, 
108, 109, 106, 105, 109, 113, 112, 111, 106, 95, 76, 68, 59, 50, 43, 37, 
26, 23, 25, 30, 36, 43, 43, 40, 35, 29, 27, 28, 23, 17, 17, 21, 
23, 18, 16, 18, 22, 25, 30, 31, 33, 35, 38, 41, 40, 33, 24, 16, 
12, 11, 11, 10, 9, 6, 4, 7, 10, 11, 12, 14, 18, 21, 26, 36, 
48, 53, 52, 52, 54, 54, 54, 52, 42, 31, 21, 15, 13, 16, 26, 29, 
31, 33, 37, 41, 44, 47, 51, 49, 46, 40, 31, 22, 19, 20, 19, 15, 
15, 14, 14, 15, 16, 15, 11, 3, -2, -4, -6, -7, -6, -6, -10, -11, 
-3, 4, 7, 5, 7, 13, 21, 19, 16, 17, 16, 2, -6, -9, -13, -17, 
-20, -24, -28, -32, -33, -33, -32, -24, -18, -13, -8, -3, 0, 4, 4, -7, 
-22, -26, -19, -16, -15, -12, -14, -22, -28, -25, -20, -17, -18, -23, -27, -32, 
-37, -39, -36, -31, -30, -29, -25, -22, -18, -15, -14, -15, -14, -14, -16, -19, 
-20, -20, -20, -20, -22, -20, -18, -15, -15, -14, -15, -16, -15, -13, -11, -10, 
-12, -12, -11, -10, -10, -9, -9, -8, -7, -6, -4, -4, 0, };
