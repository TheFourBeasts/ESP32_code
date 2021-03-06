const unsigned int jakeBrakeSampleRate = 22050;
const unsigned int jakeBrakeSampleCount = 3165;
const signed char jakeBrakeSamples[] = {
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -1, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 7, 7, 
8, 9, 10, 12, 14, 16, 18, 20, 22, 25, 27, 30, 32, 34, 36, 39, 
41, 43, 45, 47, 49, 51, 52, 53, 54, 54, 54, 54, 53, 51, 49, 47, 
43, 40, 36, 32, 28, 22, 17, 12, 8, 3, -1, -7, -10, -13, -16, -19, 
-20, -23, -24, -25, -25, -25, -26, -26, -26, -26, -26, -27, -27, -27, -27, -27, 
-27, -26, -26, -26, -26, -26, -26, -26, -26, -26, -26, -27, -27, -27, -27, -27, 
-26, -26, -25, -24, -23, -22, -21, -19, -16, -14, -11, -8, -4, 0, 7, 12, 
17, 23, 29, 39, 45, 51, 58, 64, 69, 78, 83, 88, 92, 96, 100, 105, 
108, 110, 112, 114, 115, 115, 114, 112, 110, 107, 101, 96, 91, 85, 79, 72, 
62, 54, 47, 39, 32, 22, 15, 9, 4, -1, -5, -9, -11, -12, -13, -13, 
-12, -11, -9, -7, -5, -3, 1, 4, 8, 12, 16, 20, 27, 32, 37, 41, 
45, 48, 53, 55, 56, 57, 57, 57, 56, 55, 54, 52, 50, 46, 43, 40, 
37, 34, 31, 26, 23, 21, 19, 18, 18, 18, 20, 22, 25, 27, 32, 36, 
39, 43, 45, 48, 50, 51, 51, 50, 49, 45, 41, 37, 32, 27, 21, 12, 
5, -1, -8, -14, -21, -30, -36, -42, -47, -50, -54, -56, -56, -55, -53, -50, 
-43, -39, -33, -27, -22, -16, -7, -2, 2, 6, 9, 11, 12, 12, 11, 10, 
8, 5, 3, 1, -2, -4, -9, -12, -14, -17, -18, -19, -19, -19, -17, -16, 
-14, -12, -9, -7, -6, -4, -2, 1, 4, 7, 10, 13, 16, 20, 22, 23, 
23, 22, 21, 17, 14, 10, 5, 0, -8, -13, -19, -24, -29, -33, -40, -43, 
-46, -48, -50, -51, -50, -49, -46, -43, -39, -32, -27, -21, -16, -11, -7, -1, 
3, 7, 10, 14, 18, 23, 25, 28, 29, 29, 28, 26, 22, 18, 13, 7, 
-3, -9, -16, -23, -30, -37, -47, -53, -58, -64, -69, -75, -78, -81, -82, -83, 
-83, -81, -78, -75, -71, -66, -62, -54, -49, -45, -40, -36, -30, -27, -23, -20, 
-17, -15, -12, -10, -9, -9, -9, -10, -11, -12, -13, -14, -15, -16, -16, -16, 
-16, -16, -15, -13, -12, -10, -7, -4, -1, 4, 7, 10, 13, 16, 18, 19, 
20, 20, 20, 19, 17, 15, 13, 11, 8, 4, 1, -2, -5, -8, -12, -17, 
-20, -23, -25, -27, -28, -29, -28, -27, -25, -22, -17, -13, -9, -4, 1, 5, 
12, 16, 20, 24, 28, 30, 34, 36, 37, 37, 37, 36, 35, 34, 32, 30, 
28, 24, 21, 19, 16, 13, 10, 6, 3, 1, -1, -3, -5, -6, -7, -8, 
-9, -10, -10, -11, -11, -12, -12, -13, -15, -17, -19, -21, -23, -26, -29, -31, 
-33, -36, -38, -42, -45, -48, -50, -53, -56, -59, -60, -61, -62, -62, -60, -58, 
-56, -53, -50, -46, -40, -36, -31, -27, -22, -18, -11, -7, -4, -1, 2, 5, 
6, 8, 8, 9, 9, 8, 8, 6, 5, 3, 2, -1, -3, -5, -6, -8, 
-10, -11, -12, -13, -13, -14, -14, -14, -14, -14, -13, -13, -12, -12, -11, -10, 
-8, -6, -5, -3, -1, 0, 2, 4, 5, 6, 7, 8, 9, 9, 10, 11, 
11, 12, 13, 14, 14, 15, 15, 15, 15, 15, 15, 15, 14, 13, 12, 10, 
8, 7, 5, 2, 0, -2, -4, -7, -9, -12, -15, -17, -20, -22, -25, -27, 
-29, -30, -31, -31, -32, -32, -32, -31, -31, -30, -28, -26, -24, -23, -21, -18, 
-17, -15, -14, -12, -11, -8, -7, -5, -3, -2, 0, 2, 4, 5, 7, 9, 
11, 13, 15, 16, 18, 20, 22, 24, 26, 27, 29, 30, 31, 32, 33, 33, 
33, 34, 34, 34, 34, 34, 33, 33, 32, 31, 31, 30, 29, 28, 28, 28, 
29, 29, 31, 32, 33, 34, 35, 36, 38, 39, 41, 43, 45, 48, 52, 56, 
59, 63, 67, 74, 78, 82, 86, 90, 93, 98, 102, 104, 107, 110, 112, 116, 
118, 119, 121, 122, 124, 125, 126, 126, 126, 127, 127, 126, 126, 125, 123, 120, 
116, 112, 107, 101, 95, 84, 76, 68, 60, 52, 43, 31, 22, 14, 7, -1, 
-10, -16, -21, -25, -29, -31, -34, -36, -36, -36, -35, -33, -29, -25, -21, -16, 
-11, -2, 4, 9, 15, 21, 26, 34, 39, 43, 48, 53, 57, 64, 68, 73, 
77, 80, 86, 89, 91, 93, 95, 96, 96, 95, 94, 92, 89, 86, 79, 73, 
66, 59, 51, 38, 29, 20, 11, 2, -6, -18, -26, -33, -39, -46, -51, -59, 
-64, -68, -71, -74, -78, -79, -80, -80, -80, -80, -80, -79, -78, -77, -76, -74, 
-71, -68, -65, -61, -57, -51, -46, -42, -37, -32, -27, -20, -16, -12, -7, -4, 
0, 4, 7, 10, 13, 16, 21, 24, 27, 31, 34, 37, 41, 42, 43, 43, 
43, 41, 38, 35, 32, 29, 25, 19, 14, 9, 4, -1, -7, -16, -22, -28, 
-33, -38, -45, -50, -54, -58, -61, -65, -70, -73, -76, -79, -81, -83, -86, -87, 
-87, -87, -87, -86, -85, -84, -83, -82, -81, -79, -77, -76, -73, -70, -67, -61, 
-56, -50, -45, -39, -31, -26, -22, -19, -16, -15, -14, -15, -17, -19, -22, -26, 
-32, -37, -42, -47, -52, -60, -66, -71, -76, -80, -85, -90, -93, -95, -96, -96, 
-96, -94, -93, -91, -88, -85, -81, -78, -75, -72, -69, -66, -61, -58, -54, -51, 
-48, -45, -40, -38, -35, -33, -31, -28, -27, -26, -25, -24, -23, -21, -20, -18, 
-17, -15, -14, -11, -9, -7, -5, -2, 1, 3, 6, 8, 10, 12, 14, 14, 
15, 14, 14, 13, 10, 8, 6, 3, 0, -4, -8, -11, -15, -19, -22, -28, 
-33, -37, -42, -46, -50, -56, -60, -63, -65, -66, -67, -66, -65, -63, -61, -59, 
-55, -52, -49, -46, -42, -38, -34, -31, -28, -25, -21, -17, -14, -12, -10, -9, 
-8, -8, -9, -9, -11, -12, -14, -15, -17, -18, -19, -21, -22, -22, -23, -23, 
-23, -23, -23, -23, -22, -21, -20, -18, -16, -14, -12, -10, -8, -4, -2, 0, 
1, 3, 4, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 12, 
12, 12, 13, 13, 13, 13, 14, 15, 16, 17, 19, 20, 22, 24, 26, 28, 
30, 31, 33, 34, 36, 38, 40, 41, 42, 43, 44, 44, 43, 43, 42, 41, 
39, 37, 35, 33, 31, 29, 26, 24, 22, 20, 18, 16, 14, 13, 13, 12, 
12, 13, 13, 15, 16, 18, 19, 22, 23, 25, 26, 26, 27, 27, 28, 28, 
27, 27, 27, 26, 26, 25, 24, 23, 21, 20, 18, 16, 14, 10, 8, 5, 
2, 0, -3, -6, -8, -11, -12, -14, -16, -18, -19, -20, -20, -21, -21, -21, 
-21, -20, -20, -20, -19, -18, -17, -16, -15, -14, -13, -12, -12, -11, -10, -7, 
-6, -3, 0, 3, 7, 14, 19, 24, 30, 36, 45, 51, 57, 63, 68, 73, 
81, 85, 90, 94, 98, 101, 106, 108, 110, 112, 114, 115, 115, 114, 113, 112, 
110, 106, 103, 100, 96, 91, 87, 79, 74, 68, 63, 57, 49, 44, 39, 34, 
30, 25, 19, 15, 11, 7, 4, 1, -4, -7, -9, -12, -14, -16, -18, -19, 
-20, -21, -22, -22, -22, -22, -21, -20, -19, -17, -15, -13, -10, -7, -2, 1, 
5, 8, 11, 14, 17, 19, 21, 23, 24, 26, 27, 28, 29, 30, 30, 30, 
30, 29, 28, 27, 25, 22, 20, 18, 16, 13, 10, 6, 4, 1, -2, -5, 
-9, -11, -13, -15, -17, -19, -20, -21, -22, -22, -21, -19, -17, -14, -10, -7, 
-3, 3, 7, 11, 14, 17, 19, 21, 21, 22, 21, 21, 19, 17, 15, 13, 
11, 9, 7, 5, 4, 4, 4, 5, 7, 8, 10, 11, 13, 14, 14, 14, 
14, 14, 13, 12, 11, 11, 11, 12, 13, 16, 19, 21, 23, 25, 28, 28, 
28, 28, 26, 25, 23, 21, 20, 19, 18, 18, 16, 15, 14, 13, 11, 8, 
6, 5, 3, 3, 2, 3, 5, 7, 9, 11, 14, 18, 21, 23, 26, 28, 
32, 34, 36, 38, 40, 42, 44, 44, 44, 44, 43, 41, 36, 32, 27, 21, 
15, 5, -3, -10, -17, -24, -31, -41, -48, -54, -59, -64, -68, -73, -75, -76, 
-76, -76, -74, -71, -69, -67, -64, -61, -57, -55, -52, -50, -47, -45, -42, -40, 
-39, -38, -38, -39, -40, -42, -44, -46, -48, -52, -54, -57, -59, -62, -64, -66, 
-67, -67, -67, -66, -64, -62, -59, -57, -54, -52, -47, -45, -41, -38, -35, -30, 
-26, -23, -19, -15, -11, -6, -3, -1, 2, 3, 4, 5, 5, 5, 4, 3, 
2, 0, -1, -3, -5, -8, -11, -14, -16, -19, -22, -24, -28, -30, -32, -33, 
-34, -35, -35, -34, -33, -33, -31, -30, -28, -27, -25, -24, -22, -21, -20, -19, 
-19, -19, -19, -20, -20, -21, -22, -24, -27, -29, -32, -35, -38, -40, -44, -46, 
-48, -49, -50, -51, -51, -50, -50, -49, -48, -47, -46, -45, -45, -44, -43, -42, 
-41, -40, -38, -37, -35, -33, -31, -30, -28, -27, -26, -25, -25, -25, -26, -26, 
-27, -28, -28, -28, -27, -27, -26, -24, -23, -22, -20, -18, -16, -15, -13, -11, 
-10, -7, -6, -5, -4, -3, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 
-1, -1, -1, -1, 0, 0, 1, 2, 3, 4, 5, 6, 7, 9, 11, 12, 
13, 15, 16, 17, 18, 19, 20, 21, 22, 22, 23, 24, 24, 25, 25, 25, 
25, 25, 24, 22, 21, 20, 19, 18, 17, 15, 14, 13, 12, 10, 9, 7, 
5, 3, 1, -1, -4, -6, -8, -10, -12, -14, -17, -18, -19, -20, -20, -20, 
-20, -20, -19, -18, -17, -15, -14, -13, -12, -11, -10, -8, -6, -4, -2, 1, 
4, 8, 11, 14, 17, 20, 24, 27, 29, 32, 34, 36, 39, 41, 42, 44, 
45, 47, 48, 49, 50, 51, 53, 55, 56, 58, 60, 63, 66, 70, 74, 77, 
81, 84, 87, 92, 96, 99, 101, 104, 107, 109, 111, 111, 112, 111, 110, 108, 
105, 102, 98, 93, 86, 81, 75, 70, 64, 57, 52, 48, 44, 41, 38, 35, 
34, 34, 35, 36, 39, 42, 45, 48, 52, 56, 62, 66, 70, 74, 78, 82, 
88, 91, 94, 97, 100, 104, 106, 107, 108, 108, 107, 104, 101, 97, 93, 87, 
81, 72, 66, 59, 53, 47, 38, 33, 29, 25, 21, 17, 12, 9, 6, 3, 
0, -3, -7, -9, -11, -12, -13, -15, -15, -16, -16, -18, -19, -22, -24, -27, 
-30, -32, -34, -37, -38, -38, -38, -38, -37, -36, -35, -33, -32, -30, -28, -27, 
-25, -23, -22, -20, -18, -17, -16, -15, -14, -12, -11, -9, -7, -5, -3, 0, 
1, 2, 3, 2, 1, -2, -5, -9, -14, -18, -26, -31, -37, -42, -47, -52, 
-60, -65, -69, -74, -77, -80, -83, -84, -84, -84, -83, -80, -78, -75, -72, -69, 
-66, -61, -58, -54, -50, -46, -42, -36, -32, -28, -24, -21, -16, -13, -11, -9, 
-7, -6, -5, -6, -6, -8, -9, -12, -15, -17, -19, -21, -23, -24, -24, -23, 
-21, -19, -16, -11, -7, -3, 1, 4, 9, 11, 13, 14, 15, 16, 16, 16, 
16, 15, 14, 12, 10, 7, 4, 1, -3, -9, -14, -19, -24, -29, -34, -41, 
-46, -50, -55, -58, -62, -66, -68, -70, -71, -73, -74, -75, -76, -76, -76, -76, 
-74, -73, -71, -69, -67, -64, -61, -60, -58, -56, -55, -53, -52, -50, -49, -47, 
-46, -44, -42, -41, -40, -38, -37, -35, -33, -32, -31, -30, -30, -29, -29, -29, 
-29, -28, -27, -27, -26, -25, -24, -22, -21, -21, -20, -20, -21, -22, -23, -24, 
-26, -28, -30, -32, -33, -35, -35, -36, -36, -35, -35, -33, -31, -29, -26, -23, 
-20, -18, -15, -13, -9, -7, -5, -4, -2, -1, 0, 1, 1, 1, 1, 0, 
0, -1, -2, -3, -5, -8, -10, -12, -15, -17, -20, -21, -23, -24, -25, -25, 
-26, -27, -27, -27, -28, -28, -28, -28, -28, -28, -27, -27, -26, -26, -25, -24, 
-23, -22, -22, -21, -21, -21, -21, -22, -22, -22, -21, -21, -19, -18, -16, -14, 
-12, -10, -6, -4, -2, 0, 2, 4, 6, 8, 9, 10, 12, 14, 16, 17, 
18, 19, 19, 18, 18, 16, 15, 13, 11, 8, 5, 3, 2, 0, -2, -3, 
-3, -3, -3, -3, -2, -1, 0, 2, 5, 7, 12, 16, 19, 23, 27, 34, 
38, 41, 45, 48, 52, 56, 59, 61, 63, 64, 65, 66, 66, 66, 65, 63, 
60, 58, 56, 53, 50, 48, 43, 40, 37, 34, 30, 27, 22, 18, 15, 12, 
9, 5, 3, 2, 0, 0, 0, 1, 2, 4, 5, 7, 9, 11, 13, 14, 
16, 17, 20, 21, 22, 23, 24, 25, 26, 27, 27, 27, 27, 27, 26, 25, 
24, 23, 21, 19, 17, 16, 14, 13, 12, 11, 10, 9, 9, 8, 7, 7, 
7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 
3, 3, 3, 2, 2, 2, 3, 4, 5, 6, 7, 10, 13, 15, 18, 21, 
27, 31, 35, 39, 44, 49, 56, 61, 66, 71, 75, 80, 86, 90, 94, 97, 
100, 104, 107, 109, 111, 113, 114, 116, 117, 118, 119, 119, 119, 119, 119, 118, 
118, 116, 114, 111, 108, 103, 98, 93, 82, 75, 66, 58, 48, 39, 24, 15, 
5, -4, -13, -26, -34, -41, -48, -54, -59, -66, -69, -72, -74, -75, -75, -74, 
-73, -70, -67, -63, -56, -50, -44, -37, -30, -23, -12, -4, 3, 10, 17, 24, 
35, 41, 47, 53, 59, 66, 70, 74, 77, 79, 81, 82, 83, 83, 82, 81, 
80, 78, 76, 73, 70, 67, 60, 55, 50, 44, 37, 30, 19, 11, 3, -4, 
-12, -23, -30, -36, -42, -48, -54, -62, -66, -71, -75, -79, -82, -86, -88, -89, 
-90, -91, -91, -90, -89, -88, -86, -83, -78, -74, -69, -64, -58, -51, -41, -34, 
-27, -19, -12, -2, 5, 11, 17, 22, 27, 33, 37, 40, 42, 45, 46, 48, 
49, 49, 49, 48, 47, 45, 42, 39, 35, 31, 24, 20, 15, 11, 8, 5, 
1, 0, -2, -3, -4, -6, -7, -9, -10, -11, -12, -14, -14, -15, -16, -17, 
-18, -21, -23, -26, -29, -32, -36, -38, -40, -42, -42, -43, -43, -43, -43, -43, 
-43, -43, -42, -42, -41, -40, -40, -39, -38, -37, -37, -36, -36, -35, -34, -33, 
-31, -30, -28, -26, -24, -22, -21, -20, -19, -19, -19, -20, -21, -22, -25, -27, 
-29, -32, -34, -38, -41, -44, -47, -50, -52, -55, -57, -58, -59, -59, -59, -58, 
-58, -57, -56, -56, -55, -55, -55, -55, -54, -53, -51, -49, -47, -44, -42, -39, 
-36, -34, -32, -30, -28, -26, -24, -22, -20, -18, -16, -13, -11, -9, -7, -5, 
-3, -1, 1, 2, 4, 5, 7, 8, 9, 10, 11, 12, 14, 14, 15, 14, 
14, 13, 10, 8, 5, 3, 0, -5, -8, -11, -15, -18, -21, -26, -29, -32, 
-36, -39, -42, -46, -48, -50, -52, -54, -56, -57, -58, -58, -59, -59, -58, -58, 
-58, -57, -56, -56, -55, -54, -53, -53, -52, -51, -51, -51, -51, -51, -51, -51, 
-51, -50, -50, -50, -49, -48, -48, -47, -47, -47, -47, -47, -47, -46, -46, -46, 
-46, -45, -45, -44, -44, -44, -44, -43, -43, -43, -43, -42, -42, -41, -40, -40, 
-39, -37, -36, -35, -34, -32, -30, -29, -28, -27, -26, -26, -25, -25, -24, -24, 
-23, -23, -22, -21, -20, -20, -19, -17, -16, -15, -14, -12, -11, -10, -9, -8, 
-7, -6, -6, -5, -4, -3, -2, -1, 0, 1, 2, 2, 3, 4, 4, 5, 
5, 6, 7, 7, 8, 9, 10, 11, 11, 12, 13, 13, 14, 14, 15, 15, 
15, 16, 16, 16, 16, 16, 17, 17, 17, 17, 16, 16, 16, 15, 14, 13, 
12, 11, 9, 8, 6, 4, 1, -1, -4, -6, -9, -14, -17, -20, -23, -26, 
-29, -33, -35, -38, -40, -42, -44, -46, -46, -46, -46, -45, -42, -40, -37, -34, 
-30, -26, -19, -14, -9, -4, 1, 6, 14, 20, 25, 30, 35, 42, 46, 50, 
54, 58, 61, 66, 69, 71, 74, 76, 79, 82, 85, 87, 90, 92, 96, 98, 
100, 102, 104, 106, 109, 111, 112, 113, 113, 114, 114, 113, 113, 112, 110, 107, 
105, 103, 100, 97, 94, 89, 86, 83, 80, 78, 74, 73, 71, 70, 69, 68, 
67, 67, 66, 66, 65, 65, 64, 63, 62, 61, 60, 58, 57, 56, 55, 54, 
53, 52, 51, 50, 50, 50, 50, 50, 51, 52, 53, 54, 56, 58, 59, 61, 
62, 63, 64, 65, 65, 65, 64, 63, 61, 59, 56, 53, 49, 42, 38, 33, 
27, 22, 16, 7, 1, -5, -11, -18, -24, -32, -37, -42, -46, -49, -52, -54, 
-54, -53, -52, -49, -44, -40, -35, -30, -24, -17, -6, 1, 8, 16, 23, 32, 
37, 42, 45, 47, 47, 47, 45, 43, 40, 37, 34, 29, 26, 22, 18, 13, 
6, 1, -5, -11, -17, -22, -30, -35, -40, -44, -48, -52, -58, -62, -66, -69, 
-73, -78, -81, -83, -85, -86, -86, -85, -83, -81, -78, -75, -69, -64, -59, -53, 
-46, -40, -29, -22, -15, -9, -3, 2, 8, 11, 14, 17, 20, 24, 26, 29, 
32, 35, 38, 43, 45, 48, 50, 52, 54, 57, 59, 60, 60, 61, 60, 59, 
58, 56, 54, 51, 46, 42, 38, 33, 27, 21, 10, 3, -5, -13, -21, -33, 
-41, -49, -56, -63, -70, -79, -85, -90, -95, -100, -104, -108, -110, -112, -112, -112, 
-111, -109, -107, -104, -101, -97, -91, -87, -84, -81, -79, -77, -75, -74, -73, -73, 
-72, -70, -68, -67, -65, -63, -62, -59, -58, -57, -56, -55, -53, -51, -49, -47, 
-45, -44, -40, -38, -36, -34, -32, -29, -25, -22, -19, -16, -13, -11, -8, -7, 
-6, -5, -5, -5, -5, -5, -5, -5, -6, -7, -8, -10, -11, -13, -15, -18, 
-20, -22, -24, -25, -27, -29, -30, -31, -32, -33, -35, -35, -36, -36, -36, -36, 
-36, -36, -36, -35, -35, -35, -34, -34, -34, -33, -33, -32, -32, -31, -31, -31, 
-32, -32, -32, -32, -32, -32, -31, -30, -29, -27, -24, -21, -17, -14, -12, -9, 
-7, -5, -4, -3, -2, -2, -2, -3, -3, -4, -5, -6, -8, -10, -11, -12, 
-14, -15, -17, -17, -18, -19, -19, -19, -19, -19, -18, -18, -17, -16, -15, -14, 
-13, -12, -12, -10, -9, -8, -8, -7, -6, -4, -4, -2, 0, };
