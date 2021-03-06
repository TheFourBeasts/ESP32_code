const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 7268;
const signed char samples[] = {
0, -7, 11, 15, 18, 30, 29, 25, 29, 37, 41, 43, 45, 48, 61, 64,
58, 59, 66, 76, 77, 65, 61, 84, 88, 83, 95, 105, 86, 50, 48, 69, 
99, 99, 59, 50, 57, 60, 45, 25, 28, 45, 45, 30, 13, 13, 39, 46, 
40, 35, 26, 19, 31, 37, 33, 24, 18, 40, 61, 69, 64, 55, 48, 55, 
58, 54, 55, 65, 86, 85, 78, 61, 45, 54, 75, 77, 68, 59, 55, 44, 
35, 41, 46, 37, 17, 3, 12, 16, 10, 3, 4, 32, 37, 29, 19, 19, 
38, 54, 52, 53, 61, 73, 67, 44, 17, 4, 6, 18, 25, 11, -5, -4, 
9, 10, 2, -3, -9, -6, -4, -15, -23, -24, -24, -26, -26, -32, -34, -33, 
-33, -35, -37, -37, -38, -42, -36, -18, 0, -4, -7, 3, 14, 11, -9, -15, 
-2, 21, 28, 5, -6, -7, -1, 6, 8, 0, -7, -3, 10, 17, 18, 16, 
17, 17, 11, 11, 9, 0, -6, -6, -7, -6, 6, 9, 5, -2, -2, 4, 
9, 7, 9, 21, 28, 20, 7, 0, 8, 20, 22, 14, 11, 4, -3, 0, 
6, 20, 30, 34, 34, 29, 22, 23, 20, 19, 24, 32, 37, 30, 20, 15, 
20, 25, 25, 14, 3, -1, -3, 8, 20, 26, 24, 23, 19, 12, 8, -2, 
-14, -23, -28, -28, -35, -40, -42, -42, -39, -36, -36, -38, -36, -37, -37, -36, 
-33, -29, -32, -38, -52, -63, -65, -53, -35, -26, -34, -48, -55, -56, -48, -38, 
-42, -53, -69, -68, -54, -33, -32, -35, -36, -34, -30, -38, -45, -42, -27, -8, 
-4, -10, -18, -24, -25, -19, -11, -21, -37, -51, -48, -42, -48, -52, -57, -64, 
-75, -87, -74, -50, -31, -20, -21, -39, -58, -62, -50, -36, -31, -37, -40, -43, 
-50, -55, -65, -72, -82, -90, -88, -82, -85, -91, -87, -76, -70, -74, -79, -81, 
-82, -85, -84, -74, -66, -56, -50, -48, -48, -48, -48, -51, -52, -45, -30, -29, 
-25, -16, -12, -12, -21, -25, -14, -1, 2, -2, -5, -8, -7, -4, -3, -6, 
-14, -26, -32, -30, -19, -7, -11, -19, -20, -9, 8, 6, -3, -11, -13, -5, 
-3, -15, -25, -34, -38, -40, -27, -13, -7, -6, -7, -13, -21, -22, -22, -23, 
-14, -8, -16, -23, -20, -6, 7, 2, -2, 3, 2, -8, -30, -39, -36, -26, 
-15, -2, 18, 19, 14, 10, 8, 7, 0, 0, 2, 5, 11, 13, 11, 10, 
3, -7, -10, 1, 7, 14, 23, 34, 43, 33, 17, 3, 1, 10, 23, 18, 
15, 18, 14, 12, 15, 15, 16, 18, 19, 15, 9, 3, 7, 11, 9, 0, 
-9, -14, -13, -13, -14, -13, -16, -17, -10, 0, 3, -3, -7, -12, -16, -10, 
16, 34, 41, 33, 16, 0, 0, 10, 14, 10, 8, 25, 36, 42, 41, 35, 
31, 41, 45, 41, 33, 25, 18, 10, 10, 12, 8, 8, 18, 21, 19, 18, 
18, 20, 29, 29, 19, 10, 4, 4, 18, 26, 29, 29, 31, 41, 49, 56, 
70, 83, 88, 89, 83, 81, 84, 87, 87, 71, 53, 41, 37, 32, 33, 45, 
62, 75, 74, 64, 63, 70, 74, 68, 57, 51, 48, 55, 64, 67, 64, 51, 
41, 32, 26, 20, 19, 28, 31, 29, 26, 26, 32, 36, 28, 17, 15, 16, 
22, 27, 27, 25, 25, 27, 18, 12, 16, 30, 46, 54, 48, 40, 37, 41, 
45, 30, 15, 15, 27, 38, 35, 15, -2, -16, -21, -24, -26, -24, -14, -4, 
0, 3, 2, 6, 10, 10, 7, 7, 19, 21, 22, 25, 30, 34, 30, 28, 
32, 43, 54, 63, 60, 55, 54, 50, 42, 35, 34, 30, 22, 13, 9, 11, 
16, 16, 5, -6, -11, -12, -12, -3, 5, 11, 16, 11, 12, 10, 5, 16, 
19, 18, 21, 30, 36, 36, 30, 23, 26, 28, 30, 49, 64, 69, 61, 52, 
35, 41, 48, 47, 38, 20, 0, -3, 1, 6, 5, 5, 16, 18, 5, -12, 
-15, 8, 20, 17, 0, -15, -17, -7, 6, 11, 1, -20, -42, -49, -37, -17, 
-6, -6, -19, -19, -19, -30, -39, -36, -25, -33, -46, -56, -63, -63, -55, -51, 
-49, -47, -48, -51, -47, -39, -34, -34, -25, 1, 6, -2, -13, -17, -13, -17, 
-33, -47, -51, -43, -19, -17, -31, -47, -63, -70, -61, -49, -38, -41, -52, -77, 
-94, -97, -81, -60, -51, -54, -62, -66, -61, -59, -61, -56, -45, -30, -20, -19, 
-26, -30, -32, -27, -24, -28, -36, -35, -27, -19, -22, -31, -35, -28, -10, 8, 
13, -4, -15, -22, -26, -29, -31, -20, -12, -7, -13, -36, -60, -71, -59, -40, 
-27, -19, -7, -7, -13, -16, -16, -16, -14, -16, -22, -28, -27, -21, -21, -29, 
-34, -31, -25, -28, -27, -20, -10, 7, 20, 22, 18, 20, 27, 33, 37, 17, 
-2, -18, -22, -12, -6, -10, -17, -25, -30, -29, -7, 15, 30, 27, 13, -2, 
-17, -26, -30, -28, -23, -18, -25, -30, -31, -27, -26, -39, -50, -53, -47, -39, 
-30, -18, -14, -15, -18, -15, -9, -8, -2, 3, 1, -5, -12, -16, -17, -15, 
-11, -8, -8, -14, -30, -46, -50, -34, -20, -14, -17, -28, -37, -38, -32, -25, 
-16, 2, 23, 11, -13, -31, -40, -42, -39, -26, -12, -7, -14, -26, -23, -13, 
-7, -7, -13, -20, -24, -25, -27, -28, -26, -35, -45, -49, -47, -35, -20, -15, 
-23, -26, -19, -13, -10, -11, -7, -3, -8, -18, -28, -20, -8, 2, 6, 1, 
-5, -8, -10, -6, 1, 13, 6, -5, -14, -16, -8, 3, 15, 22, 24, 22, 
14, 17, 29, 46, 52, 38, 6, -1, 1, 6, 12, 21, 35, 36, 33, 28, 
30, 36, 42, 45, 42, 40, 43, 49, 42, 43, 60, 66, 49, 32, 51, 72, 
75, 65, 67, 99, 108, 96, 85, 92, 106, 105, 105, 107, 104, 90, 67, 58, 
53, 52, 57, 66, 69, 48, 23, 24, 45, 68, 72, 72, 70, 66, 54, 35, 
37, 41, 49, 51, 29, -9, -10, 11, 34, 49, 58, 57, 54, 46, 37, 40, 
74, 77, 56, 32, 27, 36, 33, 23, 10, 3, 0, -12, -18, -18, -11, -1, 
5, -1, -10, -11, -7, -8, -13, -16, -25, -34, -41, -50, -48, -45, -47, -46, 
-36, -18, 0, -5, -12, -9, 0, 9, 17, 24, 23, 11, -5, -20, -19, -12, 
-9, -11, -9, -6, -8, -16, -26, -28, -21, -21, -23, -24, -25, -24, -20, -19, 
-27, -36, -34, -22, -8, -4, -1, -1, -5, -9, -5, 1, 3, -5, -17, -18, 
-17, -13, 1, 17, 25, 23, 21, 24, 24, 17, 12, 15, 17, 9, -5, -10, 
1, 9, 12, 6, -9, -27, -42, -29, -10, 0, -4, -23, -27, -25, -18, -7, 
4, 19, 23, 15, 1, -11, -22, -20, -14, -13, -14, -16, -15, -13, -3, 9, 
20, 27, 26, 27, 33, 39, 37, 31, 22, 19, 16, 6, -1, -5, -3, 1, 
6, 14, 24, 37, 42, 40, 35, 32, 25, 16, 14, 14, 9, 2, -11, -17, 
-23, -29, -29, -25, -22, -18, -13, -11, -12, -3, 0, -1, -7, -21, -34, -43, 
-43, -41, -31, -22, -25, -47, -60, -64, -64, -58, -33, -14, 0, 7, 9, 9, 
3, -4, -11, -17, -11, -1, 2, 1, -4, -13, -18, -14, -10, -11, -20, -25, 
-23, -31, -40, -37, -34, -40, -50, -68, -77, -84, -89, -87, -80, -77, -75, -75, 
-77, -80, -80, -68, -45, -25, -19, -25, -47, -54, -53, -49, -43, -27, -24, -30, 
-38, -48, -55, -50, -43, -30, -21, -21, -26, -35, -42, -51, -56, -67, -85, -89, 
-84, -73, -69, -77, -93, -99, -94, -83, -77, -77, -73, -68, -62, -66, -74, -59, 
-36, -23, -28, -42, -47, -41, -35, -24, -8, 3, 3, -6, -15, -22, -22, -15, 
7, 19, 22, 21, 15, 7, 10, 10, 8, 0, -12, -19, -21, -26, -37, -43, 
-41, -29, -25, -24, -19, -14, -13, -25, -30, -28, -21, -11, -10, -17, -21, -19, 
-11, 3, 18, 20, 15, 6, -5, -14, -7, 17, 43, 53, 45, 24, 7, -2, 
-4, 1, 15, 20, 18, 19, 20, 22, 24, 31, 39, 47, 52, 47, 29, 25, 
27, 25, 21, 18, 23, 35, 35, 24, 10, 3, 16, 28, 33, 29, 19, 6, 
8, 12, 20, 34, 42, 38, 28, 20, 20, 23, 32, 67, 95, 91, 70, 59, 
69, 82, 73, 59, 48, 37, 32, 23, 12, 18, 44, 68, 71, 63, 59, 62, 
68, 55, 42, 39, 48, 60, 55, 35, 30, 39, 50, 50, 46, 47, 58, 68, 
71, 68, 63, 69, 77, 76, 60, 44, 43, 53, 64, 68, 62, 53, 41, 42, 
42, 44, 45, 45, 47, 49, 55, 48, 36, 25, 27, 27, 14, 2, 2, 15, 
27, 29, 18, 1, -7, -7, -1, 12, 26, 42, 42, 25, 4, -12, -15, -1, 
3, -2, -6, -6, -1, 2, -4, -9, -10, -3, 10, 13, 8, 7, 15, 32, 
56, 57, 50, 51, 58, 64, 55, 39, 34, 45, 57, 59, 39, 24, 21, 19, 
19, 14, 6, 4, 2, 0, 2, 10, 19, 22, 15, -2, -22, -35, -33, -23, 
-14, -17, -36, -47, -49, -46, -38, -32, -21, -12, 0, 7, 6, 0, -10, 3, 
17, 22, 17, 6, 9, 13, 12, 4, -6, -11, -5, 3, 12, 16, 4, -24, 
-36, -39, -38, -32, -30, -39, -45, -53, -63, -66, -42, -21, -17, -19, -19, -21, 
-6, 4, 6, 8, 6, -1, 3, 13, 27, 30, 23, 10, 3, 7, 23, 39, 
48, 54, 46, 34, 26, 25, 38, 42, 38, 26, 15, 16, 12, 4, 1, 2, 
3, 8, 7, 5, 3, -1, 0, 1, -2, -10, -19, -35, -40, -25, -10, -6, 
-20, -34, -39, -33, -24, -20, -28, -34, -24, -13, -8, -8, -12, -12, 4, 12, 
12, 10, 11, 14, 10, 4, -2, -2, 10, 13, 7, 2, -8, -12, -5, 6, 
-4, -30, -56, -67, -39, -21, -21, -41, -71, -82, -62, -35, -13, -16, -32, -44, 
-50, -49, -45, -37, -26, -21, -28, -44, -56, -60, -56, -43, -37, -33, -28, -22, 
-17, -18, -28, -40, -40, -31, -20, -22, -42, -61, -81, -104, -106, -90, -63, -40, 
-34, -45, -69, -84, -94, -100, -97, -69, -54, -57, -77, -104, -121, -127, -119, -101, 
-87, -77, -65, -45, -41, -45, -39, -24, -9, -9, -9, -3, 5, 10, -8, -36, 
-56, -63, -55, -41, -42, -50, -54, -49, -39, -16, -1, 4, 2, -2, -10, -16, 
-8, 2, 0, -18, -46, -46, -43, -45, -46, -39, -22, -15, -12, -5, 6, 16, 
16, 2, -7, -9, 1, 14, 17, 5, -24, -45, -55, -47, -29, -9, 3, 1, 
0, 8, 13, 11, 2, -1, 9, 11, 6, -4, -15, -23, -24, -21, -19, -12, 
-2, 2, 1, -1, -3, -3, 0, 11, 19, 23, 26, 23, 8, -4, 5, 18, 
29, 27, 6, -42, -57, -52, -34, -12, 7, 11, 10, 7, 1, -10, -23, -30, 
-29, -25, -22, -19, -16, -9, 3, 8, 3, -8, 0, 15, 26, 31, 33, 27, 
19, 13, 12, 10, 9, 8, -5, -17, -19, -20, -19, -16, -5, 11, 24, 30, 
25, 15, 6, 2, 3, 16, 35, 34, 33, 31, 23, 23, 35, 46, 56, 63, 
64, 54, 48, 56, 67, 74, 74, 55, 44, 39, 41, 47, 49, 43, 36, 32, 
35, 45, 51, 47, 46, 43, 39, 31, 30, 38, 41, 36, 26, 7, 8, 17, 
30, 42, 41, 26, 26, 34, 42, 49, 50, 47, 45, 35, 24, 16, 19, 22, 
16, 8, 4, -2, -11, -2, 13, 21, 21, 5, -5, -3, 2, 1, -7, -21, 
-20, -11, -1, 3, 4, 8, 7, 4, 2, 8, 25, 31, 33, 28, 21, 17, 
28, 35, 33, 28, 17, 7, 13, 22, 26, 25, 14, -5, -11, -12, -10, -3, 
11, 26, 21, 8, -11, -29, -37, -15, 3, 8, 3, -2, 6, 7, 0, -12, 
-19, -5, 36, 46, 38, 32, 34, 38, 38, 29, 25, 30, 35, 26, 20, 20, 
24, 29, 39, 48, 41, 30, 17, 11, 17, 35, 40, 37, 36, 32, 12, -2, 
-9, -4, 11, 29, 38, 30, 18, 9, 8, 12, 20, 17, 9, 8, 14, 24, 
35, 44, 43, 37, 30, 22, 26, 38, 50, 52, 44, 35, 34, 43, 50, 53, 
49, 39, 32, 28, 32, 43, 55, 58, 56, 46, 29, 26, 40, 56, 64, 58, 
39, 11, 17, 28, 43, 50, 48, 43, 39, 39, 29, 17, 16, 18, 14, 4, 
-6, -5, 11, 21, 20, 11, 4, 0, 1, -6, -19, -23, -25, -29, -39, -52, 
-58, -63, -65, -65, -58, -50, -51, -59, -68, -61, -50, -43, -39, -37, -34, -37, 
-47, -52, -51, -40, -22, -27, -29, -28, -18, -11, -18, -19, -17, -8, -3, 0, 
-8, -17, -17, -19, -17, -28, -41, -56, -70, -74, -70, -48, -41, -44, -47, -50, 
-59, -68, -74, -74, -67, -58, -53, -52, -51, -47, -51, -69, -93, -90, -74, -56, 
-40, -41, -55, -67, -71, -62, -53, -44, -38, -29, -25, -29, -38, -62, -65, -61, 
-63, -68, -74, -77, -77, -76, -68, -53, -30, -32, -43, -48, -43, -44, -49, -50, 
-55, -63, -64, -44, -25, -6, -3, -11, -20, -36, -39, -37, -23, -1, 8, -3, 
-18, -21, -16, -8, 0, -8, -12, -11, -15, -20, -18, -17, -11, -2, -1, -7, 
-10, -5, 1, 2, 7, 34, 58, 65, 50, 33, 22, 26, 33, 28, 17, 14, 
24, 28, 28, 22, 14, 11, 20, 37, 49, 50, 47, 39, 17, 6, 8, 16, 
22, 22, 7, -7, -10, -14, -18, -8, 8, 22, 26, 22, 8, -10, -16, -25, 
-34, -39, -29, -20, -17, -13, -9, -6, 9, 14, 13, 5, -11, -27, -38, -33, 
-25, -21, -23, -22, -19, -21, -25, -25, -23, -17, -19, -24, -24, -23, -23, -27, 
-33, -39, -40, -39, -41, -33, -20, -4, 4, -4, -23, -29, -29, -21, -9, -3, 
-2, 3, 9, 3, -1, -1, -8, -1, 13, 17, 13, 4, 12, 21, 18, 17, 
32, 35, 33, 23, 8, 6, 1, -1, 4, 7, 6, 8, 12, 22, 29, 19, 
6, 9, 14, 20, 24, 23, 24, 16, 6, 7, 12, 19, 27, 29, 21, 14, 
18, 35, 54, 48, 39, 36, 33, 28, 26, 39, 56, 70, 72, 56, 31, 21, 
12, 11, 12, 27, 51, 66, 66, 56, 49, 51, 58, 64, 67, 70, 62, 47, 
43, 43, 45, 47, 54, 60, 62, 55, 47, 47, 59, 66, 65, 56, 47, 41, 
34, 32, 26, 19, 19, 21, 25, 31, 36, 42, 45, 26, 3, -15, -16, 6, 
33, 47, 46, 37, 24, 14, 8, 15, 26, 36, 35, 27, 21, 20, 17, 18, 
27, 39, 38, 30, 18, 6, 4, 6, 3, -4, -12, -15, -7, 7, 2, -4, 
-9, -10, -5, -8, -13, -15, -16, -13, -5, -3, -3, -2, -1, 0, -5, -15, 
-21, -17, -9, 9, 13, 5, -5, -10, -10, -10, -13, -15, -15, -14, -13, -14, 
-14, -12, -11, -16, -18, -13, -4, 9, 15, 18, 27, 23, 14, 9, 10, 12, 
12, 13, 18, 19, 12, -2, -9, -8, -6, -10, -15, -9, 4, 15, 13, 4, 
-5, -17, -23, -21, -15, -16, -22, -32, -42, -46, -45, -37, -25, -24, -30, -40, 
-49, -49, -41, -43, -51, -55, -51, -44, -44, -40, -32, -27, -24, -23, -30, -37, 
-38, -35, -29, -23, -20, -17, -17, -23, -45, -56, -51, -35, -19, -13, -18, -19, 
-15, -15, -20, -23, -11, -7, -9, -15, -17, -14, -11, -16, -28, -39, -36, -13, 
-7, -15, -30, -38, -36, -27, -20, -22, -32, -38, -41, -47, -46, -32, -21, -24, 
-37, -33, -26, -27, -31, -38, -29, -19, -15, -7, 10, 30, 24, 13, -1, -12, 
-19, -21, -15, -15, -26, -44, -55, -52, -45, -40, -37, -29, -26, -25, -28, -36, 
-43, -53, -52, -42, -42, -45, -42, -30, -29, -36, -36, -28, -18, -10, -8, -3, 
-1, -3, -3, -6, -9, -11, -15, -28, -54, -71, -78, -69, -46, -19, -8, -16, 
-22, -19, -15, -7, 16, 34, 46, 41, 24, 10, 10, 10, 7, 4, 3, 13, 
24, 28, 34, 37, 44, 57, 55, 51, 42, 25, -2, -11, -16, -15, -9, -5, 
1, 8, 10, 4, -4, -13, -17, -13, -6, 1, 5, 0, -6, -18, -34, -47, 
-58, -44, -27, -22, -25, -31, -33, -38, -42, -44, -47, -53, -57, -45, -30, -24, 
-32, -47, -54, -55, -56, -55, -54, -45, -45, -59, -71, -72, -59, -32, -20, -19, 
-23, -29, -35, -46, -61, -65, -53, -37, -29, -49, -66, -71, -59, -42, -33, -30, 
-23, -11, -2, -1, -9, -15, -14, -9, -4, 5, 13, 22, 30, 35, 36, 30, 
27, 28, 40, 56, 65, 68, 66, 65, 67, 66, 52, 27, 5, -1, -1, 3, 
10, 10, 6, 2, -1, -7, -11, -2, 14, 21, 21, 22, 25, 34, 48, 60, 
67, 78, 80, 75, 72, 74, 83, 98, 100, 99, 93, 87, 81, 78, 82, 87, 
88, 83, 67, 67, 70, 64, 49, 40, 48, 51, 52, 53, 53, 49, 52, 54, 
46, 42, 46, 63, 70, 71, 71, 77, 85, 78, 64, 52, 53, 67, 87, 86, 
80, 80, 84, 83, 72, 69, 74, 80, 71, 53, 29, 22, 20, 15, 13, 20, 
29, 40, 46, 47, 45, 35, 28, 20, 18, 16, 13, 13, 19, 22, 20, 10, 
-11, -9, 2, 12, 12, 5, -1, -1, -3, -5, 0, 7, 9, -3, -21, -38, 
-49, -49, -50, -58, -62, -59, -50, -34, -31, -37, -36, -31, -42, -44, -34, -23, 
-19, -22, -30, -35, -38, -36, -27, -19, -8, -7, -15, -23, -24, -25, -26, -20, 
-12, -5, -1, -9, -23, -35, -44, -41, -27, -20, -18, -20, -26, -29, -28, -22, 
-18, -12, -7, -2, 3, 1, -7, -17, -11, 2, 12, 15, 9, -1, -8, -2, 
5, 5, 6, 16, 34, 54, 39, 12, -9, -12, 2, 17, 13, 9, 17, 30, 
28, 14, 9, 23, 40, 41, 25, 15, 14, 22, 24, 15, 2, 5, 9, 11, 
15, 22, 27, 30, 18, 0, -12, -6, 10, 21, 29, 33, 29, 4, -16, -24, 
-26, -26, -27, -19, -2, 4, -10, -28, -27, -4, 23, 42, 47, 42, 38, 44, 
47, 45, 35, 20, 21, 21, 10, -3, -10, 2, 0, -12, -18, -26, -35, -27, 
-10, 3, 7, -1, -33, -47, -45, -37, -35, -46, -59, -59, -54, -47, -53, -73, 
-73, -62, -56, -62, -74, -78, -71, -72, -81, -80, -66, -50, -50, -58, -61, -52, 
-35, -32, -32, -28, -24, -27, -52, -68, -76, -75, -72, -78, -87, -80, -62, -46, 
-47, -60, -62, -59, -52, -50, -48, -43, -50, -62, -74, -79, -68, -55, -59, -61, 
-55, -54, -67, -67, -58, -50, -48, -51, -54, -52, -48, -47, -42, -33, -30, -28, 
-23, -15, -8, -5, -10, -21, -27, -27, -25, -24, -26, -33, -40, -48, -58, -58, 
-45, -27, -20, -25, -37, -31, -12, -3, -9, -18, -23, -24, -33, -43, -46, -42, 
-36, -34, -29, -23, -20, -20, -15, -9, -9, -15, -23, -23, -17, -11, -11, -21, 
-33, -26, -17, -16, -21, -24, -17, -15, -17, -20, -19, -16, -14, -17, -19, -13, 
-2, 3, -8, -12, -2, 11, 24, 31, 28, 26, 22, 19, 17, 22, 26, 29, 
30, 29, 21, 12, 5, 3, 6, 7, 0, -9, -11, -4, 5, 14, 14, 12, 
17, 29, 33, 31, 32, 29, 26, 22, 23, 43, 51, 47, 35, 28, 28, 29, 
35, 43, 52, 57, 57, 46, 32, 24, 23, 24, 17, 9, 4, 0, -5, -3, 
16, 28, 31, 30, 32, 45, 52, 55, 49, 38, 31, 27, 29, 31, 33, 41, 
46, 56, 69, 83, 90, 86, 70, 63, 58, 52, 47, 43, 38, 41, 50, 54, 
54, 48, 32, 29, 32, 32, 30, 28, 22, 16, 12, 15, 21, 25, 23, 20, 
17, 17, 23, 35, 45, 49, 40, 26, 17, 25, 33, 42, 52, 56, 42, 33, 
31, 34, 37, 35, 29, 31, 33, 27, 19, 7, -1, -6, -11, -12, -6, 7, 
8, 4, 1, 2, 5, 5, -3, -5, -2, 1, -5, -18, -31, -36, -30, -16, 
0, 4, 8, 16, 21, 21, 16, 4, -6, -7, -2, 0, -3, -2, 5, 8, 
11, 14, 19, 25, 20, 11, -2, -3, -1, -3, -12, -17, -14, -11, -13, -20, 
-20, -7, 7, 2, -9, -12, -4, 13, 20, 20, 23, 22, 15, 17, 15, 9, 
4, 5, 14, 27, 30, 24, 13, 11, 28, 42, 50, 52, 48, 40, 29, 26, 
35, 46, 50, 45, 34, 36, 44, 56, 65, 61, 52, 43, 40, 39, 42, 52, 
60, 68, 68, 60, 46, 39, 38, 42, 51, 53, 40, 30, 25, 24, 23, 22, 
29, 40, 45, 36, 17, 0, -12, -3, 9, 10, 3, 2, 3, 6, 11, 12, 
5, 0, 9, 20, 21, 16, 20, 37, 41, 37, 30, 23, 11, 11, 17, 23, 
24, 19, 15, 13, 12, 12, 17, 30, 37, 25, 7, -6, -10, -8, -13, -22, 
-36, -50, -63, -74, -71, -62, -53, -49, -47, -49, -50, -50, -46, -39, -31, -30, 
-41, -60, -78, -86, -67, -61, -63, -63, -65, -72, -73, -66, -49, -32, -18, -3, 
-5, -18, -32, -32, -22, -23, -36, -29, -11, 1, -6, -24, -34, -39, -43, -39, 
-40, -39, -31, -28, -33, -41, -49, -51, -52, -57, -65, -72, -71, -65, -59, -57, 
-59, -55, -38, -28, -30, -34, -38, -35, -29, -28, -34, -39, -44, -39, -26, -15, 
-8, -12, -33, -35, -28, -20, -12, -2, 16, 17, -3, -30, -44, -27, -16, -15, 
-19, -29, -39, -36, -26, -19, -16, -16, -18, -17, -21, -31, -36, -34, -39, -48, 
-57, -66, -71, -72, -72, -65, -60, -62, -64, -59, -44, -40, -37, -26, -11, 0, 
-7, -23, -33, -33, -30, -31, -30, -21, -8, 2, 7, -4, -15, -20, -14, -2, 
-7, -23, -33, -30, -22, -19, -21, -20, -14, -9, -8, -14, -22, -29, -37, -35, 
-27, -28, -30, -33, -33, -32, -32, -33, -37, -42, -42, -31, -20, -23, -24, -20, 
-11, -8, -20, -28, -27, -17, -5, 4, 13, 16, 25, 35, 39, 35, 18, 6, 
10, 21, 30, 34, 33, 32, 31, 27, 19, 15, 19, 23, 23, 18, 7, 4, 
-2, -12, -22, -25, -17, -11, -13, -16, -8, -8, -2, 18, 27, 30, 28, 36, 
42, 47, 50, 45, 47, 61, 66, 63, 56, 55, 61, 58, 58, 72, 69, 39, 
37, 54, 52, 31, 14, 20, 67, 65, 28, 19, 46, 72, 52, 6, -16, -8, 
1, -12, -6, 19, 48, 64, 57, 28, 17, 20, 34, 44, 42, 19, 5, -4, 
3, 11, 14, 18, 22, 29, 33, 32, 9, 2, 11, 29, 39, 29, 8, 4, 
15, 14, -1, -6, -4, 5, 6, 0, 6, 23, 24, 12, 2, -4, -9, -4, 
7, 18, 23, 14, -17, -27, -22, -8, 5, 16, 24, 27, 30, 27, 20, 23, 
34, 43, 46, 38, 29, 13, -2, -8, 4, 19, 26, 26, 18, 15, 14, 13, 
14, 20, 31, 35, 24, 5, -5, -4, 7, 16, 16, 11, 1, 2, -3, -9, 
-10, -20, -20, -7, 3, 2, -2, 4, 5, -6, -20, -30, -27, -17, -17, -18, 
-17, -12, 3, 6, 11, 27, 40, 38, 34, 35, 34, 32, 26, 24, 30, 28, 
24, 17, 11, 18, 28, 31, 20, 7, 6, 14, 18, 17, 9, 5, 12, 24, 
21, 16, 14, 11, -2, -8, -7, 7, 25, 32, 30, 26, 29, 38, 44, 41, 
23, 18, 21, 25, 23, 17, 13, 9, 7, 2, -5, -4, -1, 4, 6, 2, 
-1, -2, 3, 1, -14, -28, -30, -25, -29, -42, -57, -63, -54, -47, -43, -42, 
-37, -37, -40, -33, -19, -7, -6, -15, -14, -12, -14, -23, -35, -44, -48, -50, 
-48, -41, -29, -26, -30, -32, -30, -30, -33, -43, -53, -54, -46, -38, -29, -29, 
-31, -34, -40, -45, -45, -37, -29, -25, -22, -25, -27, -32, -38, -49, -62, -75, 
-78, -79, -82, -72, -49, -50, -57, -68, -78, -81, -76, -63, -47, -31, -23, -24, 
-23, -31, -39, -39, -30, -14, -6, -3, -5, -10, -14, -18, -28, -45, -53, -49, 
-44, -43, -50, -52, -48, -42, -48, -60, -69, -81, -91, -92, -78, -63, -45, -30, 
-19, -12, -9, -10, -13, -15, -20, -17, -6, 2, 4, 8, 13, 11, 5, -5, 
-13, -8, 5, 21, 22, 15, 7, 0, -12, -20, -17, -8, 2, 8, 4, 6, 
15, 18, 15, 8, -7, -15, -24, -33, -37, -37, -31, -21, -14, -10, -11, -20, 
-23, -26, -25, -25, -27, -26, -18, -12, -12, -15, -25, -36, -39, -26, -10, 5, 
14, 9, -1, -8, -8, -8, -6, -2, 6, 19, 24, 15, 16, 15, 14, 3, 
-17, -26, -23, -18, -17, -18, 1, 14, 18, 5, -11, -18, -14, -8, -6, -5, 
-2, -2, -22, -32, -32, -25, -14, -4, 3, 10, 10, 6, 6, 17, 25, 30, 
29, 20, 7, -5, -7, -8, -7, -6, -6, -7, -6, -1, 6, 9, 10, 7, 
4, 5, 5, 7, 7, 5, 5, 0, -7, 0, 10, 19, 22, 19, 16, 11, 
10, 12, 9, 1, -3, 3, 11, 15, 15, 16, 3, -5, -8, -2, 11, 19, 
24, 25, 24, 18, 11, 4, -1, 0, 4, 10, 15, 4, 1, -1, -8, -13, 
-12, 6, 20, 25, 19, 6, 0, 12, 28, 44, 56, 64, 67, 66, 64, 56, 
53, 64, 87, 86, 74, 59, 49, 58, 76, 89, 94, 95, 88, 65, 51, 43, 
42, 46, 50, 45, 40, 36, 33, 33, 26, 23, 24, 24, 20, 12, 5, 9, 
14, 16, 13, 9, 12, 15, 11, 2, 5, 35, 56, 66, 64, 56, 47, 42, 
42, 45, 58, 74, 73, 54, 45, 42, 44, 48, 57, 60, 62, 59, 53, 50, 
44, 45, 41, 36, 34, 30, 25, 24, 31, 36, 35, 31, 32, 43, 50, 41, 
28, 21, 27, 38, 51, 59, 55, 51, 47, 43, 46, 48, 55, 56, 48, 39, 
27, 20, 22, 23, 25, 20, 11, 0, -1, 13, 23, 27, 23, 7, 5, 6, 
-1, -1, 13, 23, 25, 26, 24, 21, 18, 19, 27, 27, 29, 38, 41, 36, 
33, 32, 30, 26, 28, 39, 46, 40, 29, 19, 9, 11, 11, 6, -1, -12, 
-15, -15, -6, 5, 5, -8, -7, 1, 7, 9, 7, 11, 10, -1, -11, -15, 
-9, 3, 17, 15, 7, 8, 5, -4, -14, -12, -5, -15, -21, -30, -38, -41, 
-38, -34, -35, -37, -47, -55, -54, -51, -46, -47, -53, -54, -55, -59, -54, -43, 
-34, -35, -46, -47, -46, -44, -39, -38, -49, -45, -31, -22, -22, -30, -37, -45, 
-48, -50, -57, -68, -65, -63, -71, -75, -65, -43, -39, -45, -47, -43, -27, -17, 
-23, -35, -40, -39, -30, -30, -32, -29, -26, -19, -4, -3, 0, 11, 21, 18, 
5, -13, -30, -39, -34, -12, -4, -9, -20, -25, -25, -27, -25, -29, -38, -43, 
-37, -28, -22, -26, -39, -49, -55, -55, -50, -47, -45, -44, -45, -48, -42, -31, 
-27, -30, -32, -27, -19, -8, 0, 3, 4, 8, 13, 14, 8, 0, -1, 0, 
0, -6, 3, 30, 57, 67, 55, 33, 16, 20, 32, 34, 28, 22, 9, -13, 
-36, -45, -37, -27, -26, -27, -23, -10, -4, -3, -3, 1, 5, -2, -16, -22, 
-18, -16, -21, -28, -48, -53, -44, -34, -33, -42, -55, -44, -26, -14, -7, -3, 
-5, -6, -7, -6, -6, -7, -6, -8, -15, -24, -36, -33, -19, -11, -15, -26, 
-29, -21, -15, -15, -19, -20, -22, -28, -38, -48, -51, -50, -46, -45, -49, -59, 
-65, -60, -56, -49, -50, -57, -59, -61, -63, -66, -69, -66, -63, -68, -74, -76, 
-74, -72, -68, -61, -51, -44, -44, -44, -29, -17, -17, -26, -30, -29, -16, -11, 
-16, -19, -16, -10, -12, -16, -17, -13, 4, 30, 24, 7, -2, 1, 1, -2, 
-10, -21, -31, -39, -41, -34, -19, -10, -14, -21, -17, -12, -9, 0, 18, 38, 
45, 39, 35, 32, 29, 34, 42, 47, 51, 61, 78, 101, 100, 89, 81, 78, 
75, 75, 73, 75, 72, 67, 75, 81, 77, 65, 64, 79, 92, 74, 62, 74, 
92, 91, 71, 56, 57, 61, 57, 39, 38, 46, 50, 45, 41, 37, 40, 50, 
56, 55, 50, 49, 52, 54, 52, 49, 52, 57, 63, 57, 44, 40, 48, 59, 
66, 67, 70, 65, 62, 57, 56, 70, 89, 82, 57, 35, 25, 28, 31, 36, 
41, 43, 46, 41, 18, 7, 4, 8, 10, 5, -13, -17, -7, 1, -3, -14, 
-36, -37, -28, -22, -17, -20, -29, -35, -32, -23, -17, -10, -5, -3, -5, -4, 
0, 1, 6, 18, 23, 16, 7, 6, 2, -3, -9, -12, -6, -1, -1, -4, 
-5, -8, -25, -44, -56, -55, -47, -30, -27, -30, -29, -30, -38, -46, -45, -33, 
-13, -2, -8, -22, -20, -18, -16, -11, -7, -1, 11, 19, 20, 22, 29, 37, 
40, 39, 39, 24, 10, 9, 14, 19, 24, 24, 23, 22, 16, 7, -3, -10, 
-8, 0, 10, 11, 0, -1, 9, 16, 8, -6, -10, -3, 1, -1, 1, 7, 
17, 8, -5, -9, 0, 20, 24, 20, 12, 11, 15, 18, 17, 19, 20, 15, 
7, 0, 1, 1, 9, 21, 15, 4, -5, -6, 2, 13, 11, 10, 10, 8, 
13, 18, 24, 25, 24, 26, 25, 20, 12, 9, 12, 13, 10, -7, -14, -13, 
-9, -12, -22, -33, -32, -29, -27, -20, -12, -18, -27, -38, -52, -63, -59, -50, 
-45, -45, -47, -50, -52, -47, -45, -49, -52, -46, -46, -42, -27, -17, -16, -14, 
-22, -34, -39, -37, -28, -28, -38, -39, -32, -25, -30, -38, -40, -35, -43, -70, 
-82, -65, -49, -40, -42, -46, -52, -57, -54, -56, -57, -44, -39, -43, -55, -66, 
-72, -67, -58, -50, -48, -53, -65, -66, -57, -44, -34, -37, -51, -62, -72, -77, 
-77, -73, -63, -61, -67, -77, -84, -89, -88, -76, -64, -58, -59, -65, -60, -53, 
-50, -54, -63, -68, -60, -48, -38, -36, -41, -44, -41, -37, -37, -32, -24, -21, 
-9, 8, 25, 30, 20, 16, 15, 18, 23, 18, 14, 11, 6, -3, -9, -2, 
6, 13, 14, 10, 11, 15, 19, 15, 0, -12, -31, -41, -43, -44, -42, -37, 
-25, -25, -28, -38, -49, -46, -28, -12, 0, 6, 9, 2, -5, -11, -12, -1, 
18, 32, 26, 19, 11, 4, 4, 9, 12, 12, 16, 19, 14, 9, 5, 1, 
-1, -3, -7, -4, 1, -2, -8, -11, -6, 0, 5, 12, 16, 17, 16, 14, 
10, 7, 2, -1, -3, -2, 6, 10, 4, -15, -18, -15, -12, -10, -19, -23, 
-22, -6, 18, 36, 53, 56, 49, 37, 22, 29, 36, 43, 45, 46, 55, 42, 
40, 32, 37, 56, 64, 64, 60, 51, 43, 40, 23, 27, 31, 38, 40, 26, 
17, 19, 26, 33, 39, 57, 72, 70, 61, 45, 41, 39, 39, 43, 53, 60, 
51, 39, 28, 27, 33, 38, 43, 40, 40, 44, 48, 57, 70, 64, 50, 39, 
38, 39, 38, 45, 53, 61, 66, 60, 39, 29, 28, 32, 34, 32, 32, 31, 
36, 36, 36, 40, 29, 20, 20, 21, 15, 5, 2, 6, 23, 37, 29, 13, 
5, 5, 12, 23, 35, 42, 46, 45, 32, 17, 7, 13, 19, 23, 31, 41, 
50, 56, 56, 51, 43, 37, 42, 42, 36, 29, 27, 18, 8, 2, -8, -15, 
-11, -9, -11, -10, -12, -16, -13, -11, -7, -8, -15, -29, -46, -50, -51, -46, 
-42, -39, -40, -42, -44, -47, -43, -29, -19, -8, -1, -1, -5, -12, -22, -29, 
-32, -30, -20, -19, -21, -18, -12, -11, -16, -15, -13, -15, -18, -9, 2, 7, 
11, 16, 12, -12, -30, -33, -19, 2, 17, 10, 1, -7, -13, -18, -22, -4, 
21, 37, 38, 34, 29, 19, 18, 21, 14, 1, 2, 13, 17, 13, 6, 1, 
4, 7, 4, 0, 2, 18, 22, 16, 9, 10, 12, 7, 6, 3, -10, -22, 
-10, 1, -2, -13, -24, -24, -10, -17, -30, -35, -27, -19, -16, -16, -20, -33, 
-45, -35, -28, -24, -22, -23, -20, -27, -36, -39, -29, -13, -2, 5, 8, 3, 
-10, -15, 3, 18, 21, 14, 9, 3, -5, -10, -12, -8, -3, 1, 4, 3, 
-8, -27, -42, -36, -24, -25, -36, -48, -58, -71, -78, -75, -66, -56, -45, -32, 
-31, -34, -35, -35, -33, -28, -21, -16, -17, -21, -30, -30, -25, -26, -30, -27, 
-25, -24, -34, -47, -55, -42, -27, -20, -26, -45, -68, -94, -97, -92, -84, -70, 
-58, -53, -50, -50, -52, -49, -40, -36, -33, -35, -37, -36, -36, -49, -61, -63, 
-59, -49, -44, -39, -37, -42, -49, -45, -35, -23, -11, -5, 2, 3, -10, -21, 
-38, -59, -69, -68, -70, -72, -65, -47, -22, -22, -25, -16, 0, 19, 48, 50, 
37, 18, -1, -21, -18, -12, -13, -17, -22, -21, -15, 1, 16, 23, 26, 36, 
37, 18, 2, 1, 21, 25, 10, -6, -18, -23, -31, -43, -44, -36, -24, -12, 
-10, -6, 7, 18, 20, 5, -3, 4, 20, 28, 26, 11, 0, -8, -13, -17, 
-23, -29, -24, -13, -6, -3, 1, 6, 10, 7, 1, -2, -1, 8, 14, 8, 
-5, -19, -37, -43, -39, -29, -27, -33, -30, -21, -9, 0, 9, 17, 20, 17, 
8, 3, 10, 17, 10, -1, -6, -2, 16, 24, 26, 18, 7, 1, 1, 0, 
2, 8, 15, 19, 16, 7, -2, -6, -3, 0, -4, -4, -1, 1, 0, -8, 
-6, -3, -2, -2, 3, 6, 15, 31, 43, 39, 14, 8, 12, 15, 17, 20, 
28, 36, 37, 30, 19, 23, 38, 54, 62, 57, 50, 39, 31, 28, 28, 27, 
28, 22, 21, 25, 28, 31, 34, 42, 49, 46, 32, 20, 31, 46, 49, 40, 
33, 31, 18, 7, 6, 17, 21, 8, 2, 6, 17, 23, 23, 18, 18, 22, 
23, 20, 18, 21, 20, 18, 17, 21, 26, 24, 15, 3, -3, 1, 12, 18, 
19, 18, 20, 26, 24, 19, 16, 12, 11, 20, 23, 19, 13, 9, 11, 12, 
6, 1, 1, 8, 20, 34, 29, 19, 6, -3, -5, -8, -13, -14, -11, -10, 
-24, -36, -37, -21, 2, 24, 24, 14, -4, -14, -12, 7, 31, 48, 47, 34, 
18, -8, -14, -12, -5, 7, 29, 44, 59, 69, 69, 64, 52, 50, 56, 57, 
50, 39, 28, 32, 38, 39, 34, 22, 20, 24, 21, 8, -2, 2, 12, 22, 
21, 16, 8, 0, -5, -9, -10, -3, 6, 5, 5, 7, 13, 17, 17, 10, 
11, 22, 35, 48, 53, 50, 42, 36, 32, 19, 13, 12, 18, 27, 35, 41, 
44, 46, 44, 44, 48, 64, 74, 77, 73, 63, 44, 29, 24, 32, 49, 57, 
27, 4, -10, -7, 2, 12, 23, 22, 17, 12, 10, 2, -3, 0, 16, 29, 
29, 5, -10, -18, -25, -19, -14, -6, 2, 7, 17, 21, 19, 15, 18, 17, 
8, -6, -20, -21, -20, -20, -15, -7, -10, -16, -25, -32, -34, -30, -22, -14, 
-10, -6, -6, -16, -18, -15, -15, -18, -22, -25, -27, -21, -12, -6, -6, -6, 
-4, -2, 6, 13, 19, 12, 0, -10, -19, -16, -11, -8, -7, -19, -42, -74, 
-74, -59, -37, -25, -34, -61, -71, -74, -75, -79, -81, -72, -56, -48, -51, -54, 
-60, -65, -69, -71, -70, -62, -41, -34, -33, -41, -50, -54, -55, -55, -52, -52, 
-60, -84, -85, -73, -59, -52, -52, -54, -52, -52, -57, -55, -38, -25, -16, -19, 
-24, -28, -28, -28, -30, -28, -22, -18, -22, -21, -14, -5, 3, -15, -37, -49, 
-44, -30, -20, -18, -20, -9, -3, -10, -16, -27, -30, -29, -30, -35, -31, -17, 
-4, 2, -5, -13, -21, -11, 1, 3, 2, -3, 5, 12, 13, 10, 2, -2, 
-3, -3, -3, -4, 0, 8, 7, 1, -2, -2, 1, 13, 16, 18, 17, 15, 
22, 26, 27, 23, 15, 4, 1, 5, 14, 25, 26, 15, 15, 20, 20, 14, 
8, 5, 2, -6, -15, -24, -30, -31, -27, -21, -12, -8, -11, -10, -5, 2, 
2, -1, -9, -10, -7, -9, -10, -5, 1, 5, 11, 15, 10, -12, -20, -23, 
-24, -19, -16, -9, 3, 15, 15, 0, -20, -35, -36, -35, -33, -31, -22, -13, 
-4, -1, -3, -6, -6, -3, -2, 1, 12, 23, 22, 16, 5, -13, -25, -18, 
-11, -2, 3, 14, 35, 23, 4, 1, 4, 4, 1, 0, 8, 18, 13, 8, 
-1, -14, -15, -9, -3, 8, 18, 22, 30, 36, 41, 41, 31, 32, 41, 43, 
26, 8, 20, 40, 48, 36, 18, 1, 3, 0, -7, -8, -1, 18, 25, 26, 
29, 27, 14, 15, 17, 15, 16, 14, 10, 16, 18, 15, 16, 16, 14, 18, 
24, 32, 40, 38, 34, 32, 29, 27, 21, 19, 27, 30, 26, 15, 6, 10, 
14, 17, 17, 17, 32, 46, 50, 46, 37, 32, 37, 39, 33, 27, 24, 20, 
25, 36, 47, 49, 39, 26, 23, 25, 29, 36, 44, 47, 43, 37, 25, 16, 
22, 33, 36, 26, 12, 4, 8, 3, -1, 2, 11, 16, 4, 0, 9, 27, 
39, 27, 15, 14, 21, 17, 4, 4, 8, 10, 11, 16, 23, 25, 18, 13, 
17, 25, 30, 27, 30, 38, 40, 32, 28, 29, 29, 29, 23, 12, -1, -2, 
4, 13, 20, 28, 26, 17, 9, 9, 21, 46, 48, 42, 36, 23, 7, -12, 
-18, -13, -4, 0, -4, -5, -7, -10, -11, -13, -7, -3, -3, -4, 2, 12, 
21, 16, -1, -20, -32, -36, -33, -27, -22, -21, -24, -33, -27, -21, -26, -35, 
-40, -29, -20, -16, -19, -27, -42, -51, -58, -64, -66, -66, -62, -62, -66, -67, 
-62, -53, -43, -33, -31, -36, -47, -58, -55, -49, -50, -57, -63, -73, -79, -86, 
-94, -100, -95, -86, -79, -75, -75, -73, -66, -62, -62, -65, -59, -48, -43, -40, 
-34, -25, -21, -29, -33, -34, -29, -21, -14, -5, -9, -12, -9, -13, -25, -40, 
-39, -33, -35, -46, -61, -62, -63, -64, -66, -68, -69, -64, -47, -35, -37, -43, 
-24, 2, 9, -16, -43, -40, -28, -26, -32, -28, -9, 5, -10, -22, -16, 0, 
13, 10, 6, 9, 16, 23, 30, 29, 23, 11, 0, -11, -34, -36, -30, -31, 
-37, -43, -38, -25, -10, -3, -6, -10, -12, -15, -16, -15, -14, -3, 3, 0, 
-16, -39, -49, -49, -49, -46, -39, -30, -22, -19, -10, 10, 32, 47, 51, 30, 
6, 0, 11, 22, 21, 18, 17, 18, 14, -9, -11, 4, 20, 26, 22, 12, 
11, 9, 8, 6, -7, -21, -34, -41, -46, -51, -47, -33, -13, -3, -8, -19, 
-34, -40, -39, -31, -22, -15, -19, -33, -49, -58, -58, -52, -45, -35, -29, -29, 
-28, -23, -18, -17, -20, -22, -20, -21, -20, -19, -16, -12, -19, -24, -26, -28, 
-32, -40, -55, -56, -52, -43, -30, -20, -17, -18, -24, -29, -36, -52, -49, -46, 
-42, -35, -32, -32, -37, -42, -52, -59, -44, -21, -1, 12, 23, 26, 12, -3, 
-14, -19, -14, -5, 1, 6, 14, 25, 26, 14, 10, 11, 13, 10, 9, 18, 
31, 43, 49, 45, 32, 18, 11, 5, 2, 8, 21, 25, 25, 22, 21, 22, 
24, 25, 30, 33, 41, 56, 79, 90, 93, 86, 76, 68, 68, 66, 63, 67, 
76, 86, 90, 96, 106, 115, 119, 110, 90, 78, 73, 72, 76, 75, 74, 72, 
63, 50, 24, 18, 27, 44, 56, 57, 58, 57, 54, 51, 49, 56, 62, 62, 
53, 44, 37, 22, 20, 23, 33, 43, 37, 35, 38, 41, 43, 44, 50, 52, 
51, 46, 38, 38, 45, 47, 46, 49, 49, 37, 34, 34, 38, 43, 49, 48, 
42, 39, 39, 44, 45, 35, 24, 13, 4, 0, 7, 18, 25, 22, 13, -2, 
-13, -4, 9, 11, 5, -4, -12, -20, -38, -50, -51, -30, -15, -14, -22, -28, 
-30, -29, -28, -29, -22, -8, 7, 12, -3, -23, -36, -31, -4, 9, 11, 7, 
-3, -14, -20, -18, -12, -8, -9, -14, -24, -33, -35, -31, -26, -17, -11, -7, 
-6, -10, -15, -25, -27, -22, -18, -17, -15, -1, 3, -6, -22, -31, -14, 11, 
34, 44, 44, 35, 14, 15, 24, 32, 39, 43, 55, 54, 33, 2, -13, 19, 
38, 29, 4, -6, 12, 46, 45, 29, 16, 21, 39, 40, 25, 8, 3, -2, 
-9, -13, -10, 4, 16, 26, 18, -1, -18, -27, -21, 13, 26, 10, -21, -42, 
-47, -52, -61, -61, -44, -16, 6, -14, -43, -51, -39, -21, -10, -20, -31, -31, 
-24, -18, -28, -34, -26, -10, 2, -2, -24, -25, -8, 12, 17, 6, 8, 14, 
17, 12, -1, -22, -28, -23, -18, -13, -13, -20, -27, -39, -51, -58, -57, -48, 
-40, -40, -36, -30, -36, -55, -71, -72, -63, -49, -50, -56, -59, -59, -54, -53, 
-49, -43, -38, -40, -50, -64, -73, -73, -65, -57, -52, -46, -44, -44, -52, -66, 
-70, -55, -36, -24, -23, -33, -53, -64, -78, -86, -82, -71, -56, -57, -61, -69, 
-76, -68, -53, -40, -32, -27, -24, -24, -27, -30, -32, -36, -38, -31, -35, -48, 
-63, -73, -69, -55, -39, -28, -15, -3, -3, -14, -28, -36, -40, -37, -29, -22, 
-13, -13, -25, -49, -57, -49, -30, -6, 6, 2, -1, -6, -9, -12, -7, -6, 
-9, -14, -26, -41, -51, -41, -26, -17, -18, -28, -39, -36, -27, -25, -29, -27, 
-19, -8, -5, -12, -19, -17, -16, -21, -23, -17, -6, 11, 11, -3, -18, -23, 
-14, 2, 22, 37, 42, 39, 30, 25, 25, 24, 25, 27, 31, 27, 14, 5, 
6, 19, 22, 21, 19, 22, 31, 31, 20, 8, 8, 16, 19, 14, 16, 25, 
28, 18, 2, 4, 14, 25, 33, 35, 28, 15, 5, 4, 9, 20, 35, 39, 
45, 51, 50, 39, 35, 40, 45, 46, 46, 39, 37, 42, 44, 43, 46, 55, 
56, 51, 41, 34, 43, 54, 64, 68, 70, 69, 60, 56, 51, 44, 38, 32, 
22, 22, 27, 29, 24, 18, 17, 16, 15, 19, 26, 37, 40, 36, 28, 19, 
14, 17, 24, 30, 31, 27, 20, 19, 23, 30, 39, 49, 50, 40, 31, 25, 
27, 46, 56, 64, 69, 64, 45, 19, 14, 19, 23, 16, 6, 11, 19, 20, 
16, 17, 18, 14, 10, 2, -4, -7, -10, -10, -12, -12, -8, -5, 7, 19, 
26, 23, 19, 22, 22, 19, 14, 15, 21, 24, 19, 15, 22, 38, 50, 47, 
37, 28, 22, 14, -2, -11, -19, -22, -14, -7, 0, 0, -7, -15, -19, -21, 
-25, -22, -16, -13, -15, -22, -22, -23, -20, -12, -13, -15, -10, -2, 6, 9, 
9, 21, 37, 47, 46, 37, 33, 39, 40, 36, 34, 38, 56, 72, 77, 74, 
73, 73, 70, 71, 73, 71, 63, 53, 41, 28, 18, 18, 27, 39, 42, 35, 
19, 6, 5, 12, 10, 4, -3, -5, -4, -8, -9, -2, 9, 24, 39, 32, 
22, 15, 13, 12, 11, 15, 21, 30, 38, 36, 34, 35, 39, 42, 45, 55, 
64, 66, 60, 51, 38, 37, 39, 37, 34, 32, 21, 7, 1, -2, -2, 3, 
1, -4, -3, -1, -6, -9, -2, 10, 21, 23, 15, -7, -20, -24, -20, -12, 
1, 13, 13, 14, 13, 12, 10, 10, 8, 5, 1, -2, -4, -5, -6, -16, 
-24, -15, -7, 0, };
