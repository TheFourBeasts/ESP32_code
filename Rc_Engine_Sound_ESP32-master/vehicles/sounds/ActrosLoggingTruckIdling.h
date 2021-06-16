const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 4760;
const signed char samples[] = {
0, 7, 8, -2, -6, -4, 6, -1, -11, -6, 9, 17, 1, -7, -11, -24, 
-31, -16, -24, -28, -10, 1, 8, 12, 1, -6, -13, -16, 2, 5, 7, 19, 
14, 7, 9, 13, 0, -24, -23, -11, -7, -3, 3, 17, 31, 40, 42, 30, 
8, -15, -38, -62, -56, -31, -7, 5, 29, 92, 94, 86, 78, 48, 20, -15, 
-39, -56, -63, -56, -29, 0, 26, 47, 43, 20, 18, 18, -4, -35, -56, -58, 
-26, -3, 22, 49, 58, 48, 41, 23, -2, -28, -65, -90, -73, -58, -48, -43, 
-45, -26, -6, -5, -15, -22, -22, -6, 12, 21, 31, 40, 33, 9, -6, -11, 
-25, -46, -71, -64, -47, -39, -33, -17, -12, 0, 5, -2, 4, 20, 12, 20, 
46, 69, 76, 49, 26, 14, 6, -10, -38, -60, -68, -49, -21, -6, -18, -21, 
2, 34, 48, 50, 34, 5, -5, 8, 20, 34, 36, 28, 23, 35, 55, 43, 
32, 26, 4, -10, -10, -5, -9, -26, -22, 4, 35, 48, 53, 52, 72, 92, 
44, 6, -4, -8, -19, -27, -23, -26, -17, -6, -13, -18, -13, -23, -42, -46, 
-41, -29, -9, 5, 3, 1, 13, 8, -1, -14, -33, -47, -53, -31, 2, 20, 
41, 81, 118, 107, 54, -13, -35, -21, -49, -92, -92, -46, -16, -38, -31, -7, 
-3, -15, -21, -1, 17, 4, -15, 2, 66, 82, 67, 53, 43, 27, 3, 8, 
13, 5, -2, 4, 30, 29, 21, -8, -67, -102, -75, -57, -43, -19, 2, 25, 
40, 41, 22, -1, -30, -69, -53, -25, -13, -17, -27, -8, 15, 11, -20, -42, 
-34, -5, 36, 61, 62, 45, 24, 23, 15, -22, -60, -83, -75, -28, 15, 15, 
-5, -10, 12, 23, 1, -39, -79, -71, -43, -6, 37, 72, 64, 53, 62, 57, 
23, -20, -54, -64, -45, 0, 34, 55, 48, 41, 37, 28, 6, -44, -65, -80, 
-81, -54, -13, 24, 27, 34, 63, 71, 43, 30, 12, 6, -4, -13, 14, 9, 
-12, -22, -10, 6, -5, -34, -51, -40, -36, -44, -34, -27, -24, -25, -16, 11, 
34, 50, 54, 48, 19, -22, -29, -45, -64, -68, -23, 21, 50, 74, 90, 78, 
28, -4, -4, 13, 1, -22, -8, 32, 59, 53, 28, -11, -23, -24, -22, -24, 
-19, 1, 11, 35, 56, 52, 34, 12, -1, -23, -33, -29, -45, -54, -44, -20, 
0, 8, 16, 26, 31, 31, 30, 22, 8, -1, -11, -9, 0, -5, -18, -21, 
-5, 8, -2, -26, -28, -25, -27, -28, -30, -36, -31, -19, 1, 21, 20, 0, 
-14, -24, -33, -32, -17, -1, 23, 60, 92, 103, 68, 21, -1, -5, -15, -71, 
-87, -72, -52, -27, -6, -11, -17, -18, -12, 3, -12, -38, -40, -12, 22, 47, 
80, 76, 61, 58, 55, 48, 21, -22, -56, -54, -25, -11, -18, -16, -17, -22, 
-21, -8, -17, -41, -47, -26, -1, 9, 2, -4, 1, 13, 23, 12, 10, 10, 
-8, -13, 8, -3, -14, -15, -9, 0, 4, -2, -9, -8, 0, 6, -1, 0, 
13, 12, 7, 34, 43, 35, 21, 16, 9, -18, -28, -35, -29, -25, -12, 2, 
8, 8, -1, -6, -11, -16, -21, -24, -16, 0, 21, 40, 49, 35, 19, 19, 
19, 14, 2, -16, -31, -29, -24, -19, -16, -18, -12, 6, 11, 8, -2, -15, 
-22, -15, -8, -4, -13, -25, -14, 7, 26, 21, 4, -1, 7, 16, 20, 18, 
6, -16, -17, -11, -4, -14, -27, -6, 15, 32, 40, 32, 3, -3, 6, 21, 
34, 32, 20, 42, 68, 67, 45, 13, -15, -22, -26, -26, -26, -39, -49, -35, 
-11, -4, -14, -26, -18, -5, 11, 19, 10, 8, 16, 26, 40, 37, 9, 11, 
22, 22, 5, -13, -27, -36, -35, -26, -24, -25, -20, -35, -57, -59, -49, -45, 
-49, -50, -31, -6, 11, 29, 39, 44, 46, 36, 22, 22, 11, -9, -30, -47, 
-39, -36, -35, -25, -7, 23, 45, 38, 43, 37, 18, 9, -6, -4, 10, 24, 
37, 54, 48, 37, 36, 32, 20, -3, -4, 3, 2, -13, -19, 5, -6, -26, 
-18, 3, 15, 7, -1, -4, 2, 3, -16, -23, -20, -16, 8, 36, -2, -50, 
-62, -25, 9, 16, 14, 15, 37, 72, 89, 34, -18, -45, -62, -74, -65, -51, 
-63, -60, -31, 8, 24, 0, -26, -31, -15, 6, 0, -11, -19, -30, -34, -23, 
-18, -30, -50, -47, -13, 41, 55, 58, 56, 32, 11, 14, -2, -16, -12, 4, 
5, -20, -30, -26, -39, -64, -78, -49, -1, 39, 64, 82, 92, 87, 93, 97, 
77, 16, -8, -11, -8, -16, -32, -55, -60, -32, 8, 27, 15, -8, -2, 25, 
46, 35, 34, 63, 88, 85, 61, 39, 10, -33, -71, -83, -94, -94, -65, -54, 
-19, 31, 43, -3, -24, -29, -28, -30, -29, 2, 6, -3, 6, 10, -13, -20, 
0, 3, -1, -1, 12, 19, 11, 6, 11, 6, -18, -35, -46, -37, -24, -18, 
-16, -9, 3, 14, 39, 62, 37, 8, -10, -24, -28, -36, -58, -78, -70, -26, 
11, -14, -41, -39, -10, 18, 37, 46, 64, 70, 47, 30, 19, 2, -21, -46, 
-35, 12, 31, 7, -10, -24, -47, -63, -41, -17, -11, -9, 7, 1, -11, -20, 
-35, -34, 14, 44, 49, 54, 72, 76, 38, 5, -2, -14, -40, -36, 1, 17, 
34, 46, 39, 15, 9, 5, 4, 0, -6, -4, 22, 59, 78, 63, 21, -36, 
-61, -86, -93, -86, -67, -50, -37, -15, 19, 43, 42, 25, 6, 4, 14, 14, 
0, 1, 15, 29, 28, 15, 18, 17, 3, -11, -28, -42, -38, -22, 0, 9, 
17, 35, 27, 5, -7, -20, -50, -50, -49, -50, -32, 3, 28, 38, 57, 60, 
40, 14, -22, -32, -35, -31, -16, -18, -15, 2, 9, 9, 19, 22, 15, 24, 
39, 32, 10, -7, 2, 19, 25, 6, -50, -61, -44, -32, -34, -37, -53, -35, 
12, 34, 30, 29, 19, 10, 11, 9, -13, -49, -53, -51, -50, -43, -29, -25, 
-13, 15, 48, 65, 54, 21, 18, 22, 17, -3, -32, -23, 4, 24, 22, 15, 
-7, -12, 1, 12, 10, -2, 4, 26, 42, 30, 4, -24, -27, -16, -9, -10, 
-17, -28, -17, -4, 2, 12, 15, 17, 27, 31, 18, -1, -12, -20, -27, -24, 
-11, 5, 24, 38, 47, 46, 31, -7, -21, -22, -30, -38, -39, -26, -3, 6, 
-6, -30, -41, -20, -23, -41, -45, -17, 20, 22, 21, 18, 19, 18, 6, -5, 
-7, 0, 16, 45, 60, 49, 37, 27, 17, 10, 6, -11, -24, -27, -26, -3, 
4, 5, 6, 3, 8, 20, 20, 17, 12, 15, 39, 34, 17, 6, -1, -8, 
-26, -25, -21, -38, -46, -27, 8, 19, 16, 15, 21, 23, 15, 11, 7, 3, 
8, 2, -9, -16, -20, -26, -35, -35, -25, -24, -22, -8, 7, 2, -10, -14, 
-8, -2, -8, -17, -23, -11, 16, 18, -4, 0, 5, 3, -3, -6, -6, -4, 
-1, 7, 14, 1, -3, -3, -3, 1, 9, 16, 13, 10, 17, 19, 22, 23, 
10, -6, -5, 4, -11, -24, -26, -24, -26, -38, -37, -33, -23, -11, 8, 38, 
50, 61, 68, 66, 51, 21, -1, -17, -29, -34, -20, -11, -4, 4, 15, 22, 
23, 23, 18, 6, -3, -5, -6, -11, -19, -25, -26, -28, -53, -77, -81, -89, 
-91, -75, -59, -24, 6, 25, 36, 31, 26, 18, 11, 1, -14, -4, 8, 7, 
9, 38, 69, 61, 55, 45, 24, 1, -25, -44, -48, -40, -28, -6, 9, 19, 
22, 25, 30, 25, 26, 44, 50, 43, 31, 19, 17, 14, 2, -18, -28, -15, 
-1, 7, 9, 9, 14, 10, 2, -5, -16, -36, -73, -87, -76, -62, -66, -81, 
-69, -24, 15, 28, 36, 51, 41, 35, 45, 43, 26, 1, 1, 18, 24, 1, 
-27, -23, -21, -20, -14, -17, -6, 14, 31, 53, 58, 5, -28, -27, -26, -67, 
-116, -116, -88, -50, -20, 1, 24, 62, 63, 46, 37, 20, -17, -21, -2, 25, 
27, 12, 11, 25, 37, 24, 2, -2, 26, 27, 13, 9, 17, 22, 2, -2, 
23, 30, -9, -44, -24, -16, -32, -45, -47, -12, 24, 34, 21, 17, 6, -8, 
4, 15, 6, -6, -22, -20, -9, -18, -30, -1, 56, 56, 55, 67, 69, 15, 
-37, -52, -37, -32, -44, -29, 9, 24, -5, -32, -17, -8, -35, -57, -48, 7, 
56, 59, 84, 103, 92, 69, 48, 19, -19, -57, -84, -71, -12, 7, 9, 25, 
43, 48, 36, 10, -17, -59, -90, -56, -20, -16, -44, -45, 1, 28, -15, -49, 
-44, -16, 15, 12, 8, 11, 11, 5, 13, 12, -4, -8, 6, 28, 56, 36, 
7, -4, -12, -35, -49, -57, -50, -39, -22, 19, 23, 18, 17, 10, -18, -39, 
-42, -44, -52, -48, -10, 9, 20, 22, 8, 7, 9, 0, -13, -27, -19, 16, 
26, 39, 56, 64, 49, 13, -6, -39, -81, -103, -81, -21, 8, 21, 34, 55, 
50, 43, 43, 27, 2, -2, 25, 36, 37, 26, 15, 32, 50, 24, 11, 5, 
-19, -35, -21, -32, -58, -51, -14, 22, 18, 5, -6, 0, -4, -30, -26, -28, 
-29, -21, -4, 15, 16, 10, 15, 25, 31, 10, -13, -11, -10, -24, -23, -13, 
-10, -7, -9, -5, 5, -8, -30, -34, -26, -9, 1, 3, 18, 45, 60, 45, 
22, -1, -23, -41, -52, -48, -41, -32, -15, 2, 10, 1, -8, -13, -15, -3, 
17, 7, -3, 0, 6, -11, -30, -31, -21, -21, -18, 17, 28, 31, 27, 9, 
1, 12, 6, 0, 10, 23, 20, 27, 36, 21, -10, -25, -27, -24, -14, -9, 
-11, -11, -5, 13, 37, 42, 37, 22, 3, 1, 5, -1, -14, -23, -13, 10, 
27, 14, -35, -41, -27, -28, -31, -16, -8, 3, 28, 52, 67, 62, 30, 27, 
37, 33, 9, -11, -2, 5, 8, 15, 8, -20, -20, -25, -33, -33, -34, -38, 
-29, -5, 17, 26, 25, 23, 25, 26, 25, 12, -7, 2, 12, 4, -8, -5, 
-4, -13, -24, -30, -28, -18, -9, -4, 7, 19, 23, 34, 20, 1, -5, -4, 
7, 3, -8, -7, -5, -8, -17, -26, -19, -8, -11, -13, -20, -35, -35, -32, 
-38, -43, -35, -26, -20, -20, -21, -18, -13, 1, 7, 7, 11, 9, 11, 20, 
20, 14, 15, 29, 33, 27, 30, 31, 14, 13, 17, 21, 19, 15, 0, -1, 
-1, -17, -33, -45, -45, -31, -15, -2, 7, 5, 1, 8, 6, -8, -12, 7, 
21, 22, 13, 13, 22, 9, -10, -16, -12, -6, -10, -9, -6, -4, 1, 3, 
5, 2, -3, -2, 4, 4, 1, 6, 10, 11, 9, -14, -16, -15, -22, -23, 
-10, 6, 11, 18, 26, 40, 32, 11, 13, 15, 5, -3, -14, -12, -4, 6, 
7, -4, -8, -8, -4, 0, 3, -15, -20, -6, 0, 1, -9, -41, -50, -48, 
-39, -34, -39, -54, -42, -20, -5, 8, 10, 0, 8, 32, 36, 21, 19, 22, 
30, 35, 29, 26, 30, 40, 28, 6, -4, -2, 6, 8, -5, -23, -31, -26, 
-20, -16, -16, -17, -20, -12, 15, 23, 6, -2, 14, 48, 74, 57, 24, 16, 
37, 31, -1, -26, -21, -10, 5, 2, -26, -36, -23, -21, -33, -34, -39, -55, 
-55, -37, -34, -35, -41, -42, -25, 12, 21, 14, -11, -29, -14, -8, -15, -27, 
-28, -3, 45, 47, 30, 19, 24, 21, -3, -21, -15, 7, 5, -35, -31, -11, 
18, 28, 14, 11, 36, 55, 35, 1, -12, -6, -5, -13, -6, 18, 31, 32, 
27, 18, 32, 38, 12, 27, 23, 0, 10, 18, -24, -47, -33, -15, -4, -10, 
-15, 6, 40, 53, 39, 17, 14, 22, 27, 27, -12, -50, -68, -78, -69, -55, 
-78, -69, -38, -9, 14, 33, 68, 69, 46, 17, 13, 25, 21, 14, -12, -25, 
-5, 11, 4, -15, -30, -10, 15, 21, 29, 35, 23, -17, -50, -43, -34, -35, 
-31, -11, 30, 54, 49, 28, 23, 42, 27, -26, -56, -33, 13, 25, -12, -33, 
-16, 10, 27, 16, 3, -10, -19, 4, 36, 28, -14, -34, 3, 55, 34, -15, 
-48, -56, -40, -26, -48, -61, -49, -7, 45, 71, 17, -16, -7, 4, -12, -44, 
-42, -40, -33, -9, 11, 0, 11, 17, 3, 5, 27, 19, 6, 4, -15, -35, 
-21, -21, -35, -34, -25, -16, 6, -6, -19, -24, -16, 14, 21, 37, 58, 59, 
55, 60, 43, 9, -23, -35, -30, -30, -57, -72, -50, -19, -11, -33, -45, -27, 
-18, -23, -20, -8, 18, 43, 63, 68, 32, 10, -1, -11, -29, -44, -26, 5, 
23, 26, 15, -29, -22, 5, 6, -17, -58, -78, -24, 29, 20, -24, -19, 26, 
57, 44, 7, -13, -3, 11, 13, 20, 18, -3, 17, 64, 71, 33, -11, -19, 
16, 17, -22, -57, -69, -11, 16, 5, -11, -13, 7, 46, 57, 37, 9, 13, 
56, 68, 49, 15, -11, -8, 23, 5, -24, -31, -19, 1, 11, -8, -35, -45, 
-39, -26, -24, -25, -9, 8, 21, 46, 29, 10, 15, 24, 21, 9, -1, -20, 
-31, -32, -33, -31, -42, -52, -39, -21, -13, -23, -25, -7, 17, 43, 35, 20, 
7, -4, 0, 3, -4, -2, 9, 18, 15, 7, 11, 0, -21, -32, -12, -5, 
-18, -28, -19, -8, -9, -17, -11, -1, -10, -16, 9, 32, 40, 18, -1, 22, 
27, 17, 19, 13, 3, 16, 12, 0, -7, -11, -27, -32, -27, -37, -54, -55, 
-10, 9, 16, 30, 46, 59, 41, 25, 21, 5, -4, -1, -9, -6, 3, 13, 
16, 12, 12, 15, 11, -7, -20, -31, -31, -19, -20, -17, 1, 15, 30, 34, 
19, 7, 0, -1, 2, 8, 4, -3, -7, -2, 0, -8, -13, -15, -9, -9, 
-11, -5, -3, -18, -10, -9, -22, -5, 18, 8, 15, 16, 2, -6, -9, -5, 
-2, -8, -11, 4, 26, 16, 7, 5, 10, 16, 25, 17, -12, -38, -42, -29, 
-26, -36, -27, -5, 4, -10, -6, 15, 20, 6, -2, 20, 31, 22, 17, 10, 
1, 10, 8, 1, 4, 8, 11, 14, 11, -5, -38, -68, -56, -25, -2, 8, 
12, 26, 50, 53, 26, 4, 0, 9, 12, 5, -7, -8, 0, 13, 13, 0, 
-8, -11, 8, 13, 1, -6, -8, -3, 9, 0, -20, -29, -27, -21, -14, -24, 
-35, -27, 3, 35, 36, 23, 13, 19, 23, -5, -34, -52, -47, -27, -11, -7, 
-14, -13, 1, 13, 9, 7, 8, 1, -6, -2, 8, 0, 6, 34, 52, 43, 
10, 7, 6, 7, 12, 17, 23, 33, 43, 48, 45, 14, 2, 1, -19, -43, 
-54, -65, -51, -31, -15, 8, 32, 32, 35, 33, 10, -19, -40, -41, -58, -70, 
-54, -34, -10, -4, 4, 17, 10, -23, -34, -23, 1, 23, 36, 42, 59, 59, 
38, 27, 11, -26, -48, -72, -77, -72, -82, -70, -36, -2, 13, 29, 68, 85, 
83, 57, 42, 59, 60, 37, -2, -21, -11, -5, -26, -56, -65, -54, -49, -40, 
-22, -9, 1, 27, 70, 75, 66, 42, 19, 10, 3, -20, -42, -35, -21, 3, 
51, 39, 25, 13, -9, -38, -75, -96, -88, -61, -27, 10, 32, 49, 57, 53, 
24, -24, -31, -20, -1, 6, 12, 19, 26, 30, 30, 20, -22, -42, -58, -69, 
-66, -69, -67, -59, -49, -23, 11, 31, 19, 8, 4, 16, 24, 0, -11, -4, 
23, 37, 28, 14, 0, 7, 28, 26, 6, -4, -14, -17, -10, -4, 23, 35, 
24, 31, 49, 34, -4, -25, -41, -30, -3, 10, -2, -16, -10, 19, 32, -5, 
-28, -32, -18, -18, -41, -56, -46, -23, 4, 14, 15, 21, 29, 41, 46, 45, 
41, 24, 6, 1, 11, 16, 3, 2, 16, 30, 25, 5, -8, -11, 5, 9, 
-15, -27, -20, -11, -1, -3, -7, 0, 8, 20, 47, 64, 35, 35, 50, 46, 
25, 9, -6, 15, 39, 30, 9, -14, -13, -6, -22, -40, -42, -59, -42, -29, 
-49, -66, -64, -56, -45, -33, -21, -4, 12, 19, 34, 49, 46, 24, 0, -7, 
-13, -20, -25, -28, -15, -11, -13, -17, -20, -18, -29, -41, -35, -16, -6, -22, 
-26, -8, 7, 3, -16, -51, -62, -49, -29, -2, 38, 28, 30, 57, 70, 54, 
10, -1, 7, 10, -2, -17, -48, -54, -28, 6, 17, 4, 19, 43, 50, 47, 
45, 46, 28, 6, 4, 18, 28, 2, -24, -33, -28, -22, -40, -39, -13, 13, 
31, 44, 47, 46, 46, 47, 48, 38, 10, 6, 3, 7, 14, -17, -34, -42, 
-46, -38, -37, -17, 2, 9, 18, 16, 1, -16, -14, -7, -9, -22, -35, -26, 
-6, 13, 8, 8, 33, 36, 32, 17, -2, -25, -39, -36, -15, 7, 15, 1, 
-7, 7, 12, -10, -12, -9, -26, -24, -9, 9, 16, 7, 6, 22, 29, 7, 
-26, -38, -40, -31, -20, -9, 0, 1, 0, -4, -1, 8, 0, -11, -15, 1, 
31, 32, 7, -2, 4, 10, 16, 0, -21, -29, -34, -33, -12, -20, -30, -28, 
-3, 28, 31, 21, 20, 35, 44, 34, 14, 0, 4, 19, 27, 24, 12, 0, 
-11, -18, -6, 3, -14, -23, -18, -4, 8, 7, 2, 2, 9, 17, 26, 9, 
-8, -4, 3, 2, -11, -19, -11, -7, -10, -8, -6, -11, -4, 17, 24, 9, 
2, 0, 3, 0, -11, -26, -16, -14, -20, -17, -18, -17, -5, 11, 23, 27, 
26, 28, 28, 31, 49, 42, 11, 14, 19, 12, -3, -17, -23, -12, -9, -11, 
-16, -21, -16, -22, -27, -23, -24, -23, -24, -21, -15, -16, -17, -11, -1, 7, 
8, 20, 40, 32, 27, 29, 27, 29, 20, -4, -19, -26, -38, -34, -39, -55, 
-44, -31, -34, -25, -28, -26, -11, 0, 4, 3, 3, 4, 4, 0, -15, -33, 
-56, -50, -31, -30, -11, -13, -25, -16, 5, 10, 3, 4, 6, 9, 15, 20, 
14, 6, 3, 14, 31, 34, 29, 21, 26, 45, 31, -35, -46, -32, -17, -16, 
-32, -38, -17, 7, 14, 6, -17, -13, 5, 37, 53, 42, 52, 79, 95, 97, 
92, 65, 32, 4, -14, -30, -47, -76, -107, -114, -71, -37, -44, -46, -28, -15, 
-10, -28, -72, -71, -40, 7, 42, 57, 84, 103, 109, 109, 98, 76, 19, -7, 
-9, -10, -10, -7, -16, -19, 6, 33, 26, 24, 26, 11, 9, 18, 8, -25, 
-20, 16, 34, 7, -67, -97, -97, -94, -103, -115, -107, -64, -18, 11, 38, 73, 
88, 92, 89, 76, 50, 28, 22, 17, 22, 25, 21, -9, -37, -50, -66, -94, 
-124, -118, -84, -44, -29, -21, 30, 46, 50, 47, 25, 7, 9, 23, 38, 45, 
42, 38, 47, 53, 45, 16, -19, -45, -61, -71, -65, -72, -92, -60, -2, 43, 
66, 66, 65, 71, 54, 17, -19, -33, -12, 7, 30, 55, 58, 30, -18, -43, 
-60, -56, -43, -56, -41, 13, 64, 79, 68, 45, 46, 49, 13, -51, -88, -79, 
-83, -80, -43, -5, 3, 27, 56, 61, 55, 36, 10, 2, -1, -4, -5, 1, 
18, 43, 56, 49, 35, -13, -41, -48, -45, -31, -22, -16, -3, -2, 2, 9, 
-6, -32, -24, -16, -24, -36, -16, -7, -1, 19, 35, 41, 53, 59, 53, 51, 
50, 31, 22, 24, 17, -6, -38, -42, -35, -31, -10, 6, 10, 30, 29, 12, 
2, 2, -27, -53, -57, -36, -14, -27, -55, -21, 12, 16, 7, -7, -1, 16, 
32, 55, 60, 35, 44, 56, 51, 35, 17, 18, 12, -7, -17, -25, -43, -67, 
-57, -28, -4, -9, -31, -32, -31, -28, -30, -28, -22, -28, -25, -17, -16, -18, 
-22, -22, -11, -2, -9, -23, -8, 13, 28, 37, 44, 58, 46, 42, 55, 43, 
12, -17, -38, -54, -59, -55, -43, -49, -45, -9, 28, 24, -2, 2, 8, 12, 
0, -17, -3, 24, 44, 44, 43, 67, 74, 58, 38, 26, 19, 7, -14, -27, 
-18, -10, -20, -31, -34, -42, -55, -71, -69, -51, -33, -14, 4, 20, 32, 37, 
43, 43, 33, 24, 18, 16, 24, 33, 38, 18, 13, 25, 19, -10, -27, -33, 
-55, -69, -65, -48, -32, -36, -29, -16, -11, -4, 10, 7, -1, -11, -18, -15, 
-12, -16, -13, 4, 26, 54, 51, 38, 36, 38, 28, -3, -21, -32, -34, -31, 
-23, -8, -1, 9, 12, 15, 10, -4, 3, 20, 17, 14, 36, 34, 8, -18, 
-20, -17, -41, -46, -23, 0, 3, -4, 11, 35, 45, 52, 58, 42, 25, 13, 
2, -23, -44, -54, -65, -60, -48, -49, -47, -35, -22, -8, 9, 22, 12, 17, 
34, 48, 46, 29, 19, 26, 16, -11, -36, -37, -20, -9, -6, 0, 8, 18, 
18, 16, 6, -7, -2, 3, -2, -2, -2, 0, 15, 21, 16, 17, 31, 34, 
35, 28, 14, 5, -1, -5, -27, -28, -13, -2, 3, 14, 17, 13, 10, 5, 
-3, -3, -1, 0, -1, -1, 1, -10, -17, -26, -31, -19, -13, -10, -8, -18, 
-22, -18, -18, -15, -10, -5, 7, 18, 9, 3, -9, -16, -9, -9, -2, 9, 
12, 11, 10, 5, 2, -4, -15, -25, -25, -12, -1, -7, -4, 18, 29, 19, 
7, 6, 11, 10, 1, -1, 10, 18, 12, 10, 9, 4, 4, 4, -5, -18, 
-14, -7, -3, 0, 0, 2, 1, -1, -4, -10, -17, -28, -30, -22, -23, -27, 
-28, -39, -36, -21, -12, -1, 10, 6, 12, 30, 44, 34, 23, 9, 0, -2, 
-2, -12, -19, -28, -41, -44, -33, -12, -19, -28, -25, -16, 11, 9, -12, -14, 
6, 19, 29, 30, 16, 12, 29, 47, 53, 53, 63, 71, 63, 37, 26, 8, 
-14, -32, -42, -22, -19, -21, -11, -2, 11, 33, 26, 8, -2, 0, -10, -23, 
-23, -9, 1, -9, -21, 0, 13, 0, -28, -44, -15, -8, -20, -22, 0, 58, 
70, 52, 47, 62, 49, -15, -39, -33, -14, -17, -25, -20, -14, -7, 0, 6, 
11, 18, 11, -11, -20, -12, -12, -18, -19, 6, 37, 36, 25, 11, -5, -19, 
-45, -82, -66, -52, -55, -48, -32, -22, -10, 0, -5, -19, 3, 31, 31, 12, 
10, 32, 61, 66, 45, 9, -4, -6, -22, -50, -67, -43, -18, -6, -5, -10, 
-21, -24, -11, -9, 3, 30, 28, 15, 27, 25, 16, 25, 14, -2, 15, 7, 
-14, -14, 0, 3, -1, 8, 13, 7, -9, -24, -25, -18, -19, -35, -21, 40, 
37, 15, 6, 9, 0, -31, -40, -29, -9, -10, -23, -7, -3, -16, -31, -38, 
-9, 16, 15, -1, -3, 11, 20, 7, -11, -22, -18, -7, 10, 19, 33, 53, 
67, 75, 78, 80, 81, 69, 33, -38, -75, -99, -101, -108, -127, -92, -39, -5, 
-3, -11, 13, 30, 26, 20, 36, 65, 71, 59, 66, 84, 80, 50, 6, -3, 
0, 5, 10, 16, 27, 30, 17, 10, 4, -28, -55, -75, -93, -102, -74, -52, 
-38, -21, 7, 43, 70, 54, 34, 24, 21, 13, -1, -1, -8, -26, -40, -38, 
-34, -33, -29, -11, 22, 53, 47, 33, 20, 12, 1, -19, -17, -16, -14, -8, 
-3, -3, -9, -26, -35, -21, 8, 5, -16, -26, -8, 4, -9, 4, 21, 29, 
31, 35, 49, 56, 40, 17, 1, -15, -16, -26, -41, -30, 1, 4, -17, -20, 
-23, -32, -31, -36, -46, -37, -14, -5, -6, -10, -3, 7, -1, -19, -26, -16, 
-8, -3, 7, 48, 67, 56, 30, 17, 7, -30, -45, -53, -50, -43, -36, -12, 
21, 40, 44, 60, 81, 73, 62, 41, 19, 5, -9, -9, -17, -36, -49, -44, 
-37, -44, -52, -62, -53, 9, 37, 49, 61, 71, 61, 34, 33, 21, -5, -23, 
-32, -37, -33, -35, -27, 2, 18, 15, 17, 19, 10, -2, -5, -5, 2, 2, 
-12, -8, -3, -4, -11, -24, -25, -18, -12, 5, 26, 39, 37, 43, 42, 29, 
21, 2, -51, -55, -36, -22, -30, -43, -23, -10, -9, -14, -25, -34, -15, -13, 
-26, -22, -12, -8, -5, -1, 10, 13, 7, -11, -11, -2, -5, -5, 0, 13, 
21, 15, 7, 3, 6, 8, 1, -3, 2, 0, -9, -7, -16, -18, -3, 6, 
12, 13, 13, 13, 14, 8, -5, 6, 20, 25, 35, 26, 14, -2, -11, -13, 
-26, -31, -16, 2, 21, 34, 47, 37, 24, 20, 14, 3, -14, -20, -16, -10, 
-14, -19, -16, -14, -4, 13, 18, 10, 14, 16, 11, 12, 14, -6, -1, 10, 
4, -9, -12, -2, -12, -15, -4, -3, 0, 12, 18, 27, 37, 39, 34, 26, 
14, -5, -29, -53, -53, -43, -35, -22, -8, 12, 24, 22, 19, 20, -1, -17, 
-10, -17, -13, 1, -2, 9, 12, 8, 10, 0, -30, -37, -32, -29, -25, -16, 
5, 29, 34, 24, 26, 21, 11, 3, -4, -5, -5, -5, -7, -12, -12, -6, 
-14, -24, -19, -22, -25, -22, -11, 0, 12, 22, 32, 30, 18, 12, -3, -36, 
-63, -63, -51, -32, -13, 7, 32, 43, 43, 44, 40, 24, -1, -23, -30, -33, 
-28, -17, -5, 6, 9, 8, -4, -18, -16, -18, -26, -19, 2, 25, 39, 42, 
45, 32, 22, 10, -11, -15, -31, -47, -46, -18, -1, 14, 26, 36, 46, 44, 
30, 19, 6, -10, -16, -8, -4, 8, 22, 35, 43, 37, 36, 18, -8, -14, 
-6, -9, -8, -6, -11, -2, 12, 9, 9, 11, 13, -11, -30, -30, -18, -5, 
0, 0, -5, -4, 3, -2, -12, -27, -36, -37, -34, -23, 2, -3, -19, -28, 
-33, -34, -33, -21, -1, 5, -1, 3, 9, 15, 23, 29, 31, 26, 9, -7, 
-8, -9, -24, -48, -46, -29, -16, -6, 5, 1, 6, 23, 32, 35, 39, 26, 
10, -5, -5, 1, -37, -69, -67, -31, 12, 38, 39, 34, 31, 38, 40, 20, 
-12, -32, -19, 1, 10, -1, -15, -14, -1, 10, 13, 2, -3, -2, 4, 12, 
1, -4, 0, 3, 6, 30, 44, 17, -10, -17, -10, 2, -4, -11, -6, 10, 
31, 27, 7, -5, -14, -20, -11, -11, -30, -35, -23, -2, 32, 21, -1, -3, 
5, 23, 25, -15, -40, -33, -15, 7, 18, 8, 1, -3, 1, 27, 26, -1, 
-25, -28, -26, -23, -4, 9, 6, 15, 37, 61, 52, 34, 7, -27, -42, -41, 
-43, -27, 6, 31, 48, 51, 39, 24, 7, -15, -25, -24, -29, -32, -27, -14, 
-10, -19, -27, -17, 3, 18, 4, -21, -28, -26, -45, -40, -28, -28, -21, -6, 
-5, -9, -22, -41, -40, -23, -8, -2, -3, 2, 34, 68, 39, -7, -27, -13, 
-13, -39, -25, 3, 22, 22, 13, 30, 53, 39, 3, -16, -17, -10, -8, 4, 
26, 37, 40, 39, 33, 16, 5, 6, 11, 8, 9, 20, 23, 1, -19, -29, 
-42, -66, -75, -35, 0, 24, 20, 13, 33, 38, 20, 5, -9, -25, -50, -57, 
-47, -28, -16, -15, -23, 0, 23, 21, 12, 0, 0, -3, -25, -31, -24, -21, 
-11, 6, 9, 11, 18, 5, 7, 8, 0, -5, -6, -3, 3, 6, 1, -2, 
2, 7, 4, 10, 21, 20, 10, 17, 23, 12, 5, 8, 14, -4, -32, -34, 
-24, -12, -15, -16, -5, 9, 15, 9, 8, 4, -4, -6, 3, 4, -11, -13, 
0, 13, 25, 29, 20, 11, 5, 1, 10, 12, 7, -5, -3, 12, 20, 15, 
-6, -14, -14, 1, 14, 5, -17, -25, -14, 16, 23, 12, -7, -12, -1, 7, 
14, -2, -20, -22, -11, -1, -3, -10, -15, -10, 16, 15, 11, 13, -4, -24, 
-10, 0, -2, -9, -15, -25, -18, -4, 0, -3, -7, -9, -4, 1, 2, 1, 
-9, -6, 14, 23, 22, 18, 1, -4, -1, 15, 23, 1, -11, 7, 15, 15, 
1, -22, -13, -17, -28, -29, -31, -18, -9, -9, -2, 9, 10, 4, 4, 4, 
10, 16, 23, 26, 17, 4, 2, 2, 4, 3, -6, -1, 15, 31, 17, 2, 
1, -3, -7, -27, -32, -35, -33, -23, -11, 2, 14, 33, 35, 21, 17, 29, 
35, 33, 22, 7, -11, -4, 7, 7, -2, -8, -14, -15, -11, -3, 3, 2, 
-5, 0, 19, 19, 6, 4, 6, 8, 4, 3, -2, -17, -17, -16, -19, -23, 
-15, -17, -13, 1, 11, 1, -31, -33, -30, -19, 2, 4, -13, -22, -16, 5, 
10, -12, -20, -12, 1, 4, 6, 6, -3, 0, 11, 11, 4, -19, -27, -23, 
-15, -10, -6, -7, -12, -12, -6, 5, 3, -7, -9, -5, 1, 5, -1, -2, 
-3, -1, 4, 3, 1, 0, 0, 0, };
