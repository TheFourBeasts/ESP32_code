const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 4947;
const signed char revSamples[] = {
0, -1, -2, -2, -2, -2, 0, 0, 1, 1, 0, 1, 6, 12, 19, 24,
26, 26, 25, 19, 13, 10, 10, 6, 5, 8, 11, 11, 14, 16, 15, 15, 
16, 18, 17, 17, 18, 19, 22, 23, 24, 26, 30, 34, 36, 35, 31, 32, 
33, 38, 44, 50, 50, 49, 48, 48, 48, 46, 45, 44, 40, 38, 38, 36, 
33, 32, 32, 32, 29, 25, 16, 8, 6, 3, -7, -7, -6, -9, -12, -8, 
-2, -3, 0, 6, 12, 12, 12, 14, 15, 13, 8, 3, -2, -11, -20, -27, 
-34, -43, -46, -48, -49, -49, -48, -48, -49, -51, -51, -51, -56, -56, -53, -48, 
-44, -40, -39, -42, -42, -41, -41, -44, -46, -48, -53, -58, -63, -67, -65, -63, 
-65, -69, -70, -63, -60, -57, -51, -39, -25, -20, -14, -11, -15, -18, -9, -6, 
-8, -8, -7, -16, -23, -24, -23, -25, -29, -28, -24, -21, -16, -10, -6, -2, 
3, 6, 4, 2, 2, 0, -3, -5, -7, -10, -16, -21, -26, -27, -26, -24, 
-20, -13, -4, 4, 11, 21, 26, 29, 34, 40, 41, 32, 28, 28, 26, 23, 
22, 23, 20, 19, 20, 20, 19, 20, 17, 12, 10, 11, 11, 10, 11, 15, 
20, 25, 35, 42, 46, 49, 53, 54, 50, 44, 38, 34, 29, 23, 21, 20, 
21, 23, 26, 33, 36, 42, 47, 49, 54, 58, 61, 61, 61, 59, 50, 46, 
43, 39, 35, 32, 34, 35, 34, 33, 31, 34, 35, 31, 24, 17, 13, 12, 
11, 11, 14, 21, 30, 44, 50, 50, 49, 46, 39, 32, 25, 15, 3, -11, 
-31, -38, -43, -47, -46, -42, -41, -41, -36, -28, -23, -16, -10, -3, 1, 2, 
2, -2, -7, -14, -20, -25, -33, -36, -37, -38, -42, -46, -46, -40, -30, -19, 
-14, -16, -19, -18, -14, -9, -6, -7, -6, -1, 6, 10, 9, 6, 4, 0, 
-7, -15, -20, -21, -19, -15, -12, -8, 0, 5, 11, 17, 22, 23, 21, 22, 
26, 31, 34, 33, 35, 36, 33, 26, 21, 19, 18, 17, 17, 16, 16, 17, 
18, 19, 20, 22, 25, 29, 34, 38, 38, 35, 29, 22, 13, 5, 0, -2, 
1, 3, 2, 0, 3, 9, 13, 10, 4, -3, -8, -9, -5, -5, -10, -17, 
-21, -22, -23, -23, -23, -24, -23, -16, -11, -7, -6, -6, -9, -14, -23, -30, 
-31, -28, -27, -24, -17, -10, -3, 2, 3, 3, 3, 0, -7, -19, -25, -30, 
-34, -34, -31, -19, -11, -7, -3, 1, 6, 11, 11, 11, 7, 1, -4, -3, 
-2, -1, 3, 9, 15, 14, 9, 2, 1, 5, 5, 3, 4, 3, 0, -3, 
5, 14, 18, 17, 14, 8, 6, 6, 7, 8, 6, 3, -2, -9, -18, -27, 
-36, -39, -37, -34, -33, -33, -36, -36, -32, -26, -26, -29, -28, -28, -26, -21, 
-17, -19, -20, -20, -22, -29, -34, -38, -41, -42, -41, -41, -41, -41, -41, -41, 
-37, -32, -27, -26, -24, -24, -25, -26, -23, -22, -22, -21, -22, -26, -26, -27, 
-29, -32, -32, -36, -40, -45, -48, -47, -41, -31, -28, -26, -26, -28, -32, -33, 
-34, -33, -32, -29, -26, -26, -25, -23, -24, -24, -21, -17, -13, -10, -8, -6, 
-2, 4, 10, 15, 19, 21, 21, 21, 18, 11, 7, 11, 15, 16, 19, 25, 
35, 41, 42, 40, 38, 41, 46, 50, 52, 54, 59, 68, 81, 88, 91, 91, 
93, 96, 94, 87, 79, 74, 68, 61, 62, 64, 65, 66, 73, 77, 81, 87, 
95, 100, 105, 106, 105, 104, 100, 94, 88, 87, 86, 85, 86, 90, 87, 79, 
70, 61, 52, 43, 37, 29, 20, 14, 12, 17, 25, 30, 33, 39, 46, 46, 
45, 43, 37, 27, 10, 0, -11, -22, -30, -33, -33, -34, -36, -38, -37, -33, 
-31, -32, -33, -34, -36, -35, -31, -25, -20, -15, -9, -4, -4, -2, 0, -2, 
-7, -11, -18, -29, -39, -46, -47, -44, -40, -40, -40, -38, -26, -16, -8, 0, 
3, -3, -4, -4, -7, -15, -23, -34, -41, -45, -44, -39, -34, -29, -27, -25, 
-19, -11, -8, -11, -13, -18, -21, -20, -17, -16, -9, 4, 12, 14, 22, 29, 
27, 20, 18, 14, 8, 2, -1, -2, -2, 3, 6, 12, 18, 23, 27, 29, 
30, 29, 25, 19, 10, 6, 3, 3, 5, 8, 6, 6, 9, 12, 11, 8, 
8, 8, 8, 10, 15, 20, 24, 25, 23, 19, 16, 11, 7, -2, -13, -20, 
-23, -24, -25, -26, -28, -32, -30, -28, -31, -35, -35, -36, -48, -56, -61, -67, 
-73, -76, -79, -81, -78, -73, -69, -67, -65, -63, -64, -64, -62, -60, -61, -61, 
-59, -56, -57, -56, -53, -48, -44, -40, -32, -30, -32, -32, -30, -26, -28, -32, 
-33, -31, -31, -32, -30, -28, -24, -21, -19, -22, -25, -23, -18, -16, -17, -17, 
-16, -15, -14, -14, -14, -12, -9, -8, -8, -9, -8, -4, 2, 7, 11, 15, 
18, 19, 20, 23, 25, 25, 22, 21, 19, 13, 2, -5, -2, -3, -6, -8, 
-10, -17, -22, -24, -29, -35, -42, -43, -43, -42, -40, -36, -29, -25, -20, -10, 
0, 6, 5, 2, -3, -8, -13, -20, -26, -32, -35, -41, -49, -53, -52, -53, 
-54, -52, -51, -52, -51, -45, -39, -35, -27, -22, -21, -21, -19, -17, -23, -30, 
-34, -38, -41, -42, -40, -42, -46, -48, -50, -56, -55, -49, -45, -45, -48, -52, 
-53, -52, -48, -45, -43, -41, -40, -40, -38, -32, -27, -27, -26, -25, -26, -29, 
-31, -30, -29, -29, -28, -20, -17, -18, -18, -14, -11, -14, -17, -17, -16, -13, 
-13, -15, -13, -10, -7, -6, -9, -10, -10, -9, -8, -8, -15, -19, -16, -11, 
-6, -1, 14, 25, 30, 33, 36, 42, 46, 48, 46, 41, 36, 28, 25, 24, 
24, 29, 39, 61, 72, 78, 83, 87, 92, 97, 102, 102, 95, 90, 78, 67, 
61, 58, 56, 53, 50, 49, 48, 48, 50, 58, 63, 66, 70, 76, 81, 87, 
91, 91, 89, 88, 91, 94, 94, 93, 88, 80, 64, 57, 50, 43, 37, 32, 
23, 20, 22, 26, 32, 37, 37, 35, 30, 25, 23, 25, 21, 15, 16, 19, 
21, 16, 15, 16, 20, 23, 26, 27, 29, 30, 33, 36, 34, 29, 22, 15, 
11, 11, 11, 10, 8, 7, 5, 7, 10, 11, 11, 13, 16, 19, 23, 31, 
41, 45, 44, 44, 46, 46, 46, 45, 36, 28, 19, 14, 12, 14, 23, 26, 
27, 29, 33, 35, 38, 41, 43, 42, 40, 34, 27, 20, 17, 18, 18, 14, 
14, 13, 13, 14, 15, 14, 11, 5, 0, -2, -3, -4, -4, -4, -6, -8, 
-1, 5, 7, 6, 7, 13, 19, 17, 15, 15, 14, 4, -3, -7, -9, -13, 
-15, -18, -21, -25, -25, -25, -24, -18, -14, -9, -4, -1, 1, 4, 5, -4, 
-17, -21, -15, -13, -11, -9, -11, -19, -25, -23, -18, -16, -17, -22, -27, -34, 
-39, -42, -40, -35, -35, -34, -31, -26, -21, -18, -17, -18, -19, -18, -22, -27, 
-31, -32, -33, -36, -40, -38, -34, -31, -30, -31, -34, -39, -38, -32, -25, -28, 
-35, -40, -40, -40, -40, -44, -48, -50, -47, -40, -34, -31, -25, -18, -11, -5, 
1, -1, -6, -12, -18, -22, -23, -24, -22, -19, -18, -17, -13, -5, 3, 9, 
12, 10, 6, 4, 3, 0, -1, 4, 6, 6, 8, 10, 3, -3, -2, 4, 
7, 5, 2, 4, 7, 12, 19, 25, 29, 32, 33, 30, 27, 25, 23, 18, 
13, 9, 4, 3, 5, 5, 4, 5, 5, -4, -10, -12, -11, -11, -6, 0, 
4, 5, 7, 11, 14, 17, 15, 8, -3, -14, -26, -30, -28, -23, -18, -17, 
-15, -13, -11, -7, -4, -1, -3, -5, -6, -10, -14, -18, -18, -18, -17, -14, 
-17, -22, -25, -28, -31, -31, -27, -24, -22, -22, -24, -24, -23, -22, -21, -18, 
-13, -11, -13, -14, -16, -16, -16, -19, -23, -25, -25, -25, -21, -17, -17, -17, 
-12, -6, -3, -1, 1, -1, -10, -19, -27, -32, -39, -43, -47, -56, -57, -57, 
-61, -65, -63, -54, -50, -42, -32, -27, -26, -19, -14, -13, -14, -16, -27, -36, 
-43, -49, -56, -63, -71, -76, -81, -80, -80, -81, -82, -78, -71, -63, -56, -44, 
-37, -31, -26, -21, -15, -10, -9, -9, -10, -12, -12, -12, -11, -9, -8, -7, 
1, 7, 13, 19, 30, 41, 51, 52, 52, 53, 55, 57, 60, 60, 60, 61, 
61, 62, 66, 70, 70, 70, 72, 72, 68, 66, 68, 71, 72, 71, 72, 71, 
67, 65, 69, 72, 70, 66, 62, 54, 37, 28, 28, 29, 28, 26, 27, 29, 
32, 36, 39, 38, 39, 41, 39, 33, 25, 13, 3, -6, -13, -18, -24, -25, 
-22, -17, -14, -12, -9, -11, -11, -8, -9, -13, -20, -21, -21, -22, -24, -25, 
-28, -31, -33, -33, -33, -37, -40, -43, -46, -49, -51, -52, -51, -52, -57, -62, 
-60, -56, -49, -42, -41, -44, -45, -46, -48, -49, -44, -38, -38, -38, -36, -32, 
-28, -17, -10, -8, -9, -11, -15, -25, -30, -34, -34, -30, -28, -32, -35, -36, 
-40, -42, -36, -31, -30, -33, -40, -47, -56, -60, -62, -63, -65, -68, -75, -77, 
-75, -68, -58, -37, -27, -19, -13, -9, -4, 5, 11, 16, 22, 28, 31, 23, 
17, 12, 6, 1, 0, 0, -2, -5, -7, -7, -11, -10, -7, -6, -7, -7, 
-2, 5, 12, 19, 24, 29, 29, 25, 18, 10, 1, -11, -15, -14, -13, -11, 
-9, -4, 3, 11, 20, 31, 46, 52, 54, 54, 55, 54, 47, 43, 38, 28, 
19, 9, 5, 4, 7, 12, 10, 2, -2, -5, -9, -12, -15, -18, -21, -24, 
-24, -23, -18, -12, -3, 6, 16, 27, 42, 46, 47, 47, 46, 40, 29, 21, 
13, 5, 1, 6, 12, 21, 31, 38, 43, 49, 48, 43, 39, 37, 36, 27, 
21, 20, 17, 11, 7, 9, 11, 14, 17, 18, 12, 8, 6, 6, 8, 11, 
16, 20, 25, 28, 31, 37, 38, 36, 33, 32, 31, 29, 26, 21, 16, 13, 
14, 18, 19, 20, 23, 22, 18, 21, 27, 32, 36, 42, 47, 49, 49, 46, 
43, 39, 34, 30, 23, 17, 14, 8, 6, 10, 14, 16, 18, 24, 26, 28, 
32, 35, 35, 30, 24, 17, 11, 9, 8, 10, 17, 24, 27, 26, 26, 26, 
24, 20, 18, 18, 21, 21, 19, 19, 23, 29, 28, 29, 33, 35, 33, 24, 
19, 12, 8, 6, 4, -1, -5, -6, -5, -4, 2, 7, 12, 17, 21, 22, 
22, 25, 25, 23, 24, 28, 32, 35, 37, 40, 43, 45, 41, 36, 35, 34, 
27, 14, 4, -5, -12, -16, -15, -13, -11, -6, -2, 1, 8, 9, 6, 3, 
2, -2, -8, -7, -8, -11, -12, -7, -5, -3, 2, 11, 22, 35, 41, 42, 
37, 32, 30, 27, 25, 28, 29, 25, 22, 21, 20, 22, 28, 38, 39, 35, 
29, 20, 10, 0, -6, -8, -12, -13, -13, -10, -8, -8, -7, -5, 0, 8, 
9, 8, 5, 3, 0, -10, -16, -16, -13, -11, -8, -5, -3, 1, 5, 8, 
10, 8, 6, 3, 0, -2, -4, -7, -11, -12, -16, -23, -25, -29, -36, -43, 
-46, -46, -46, -46, -47, -49, -51, -52, -52, -52, -52, -49, -46, -46, -44, -40, 
-41, -43, -43, -44, -47, -51, -50, -51, -54, -56, -55, -55, -58, -59, -55, -52, 
-49, -44, -39, -30, -26, -21, -18, -18, -13, -8, -7, -8, -11, -12, -15, -19, 
-21, -22, -24, -24, -26, -29, -27, -22, -17, -8, -2, 0, -1, -1, -2, -6, 
-8, -11, -18, -24, -27, -31, -37, -40, -37, -36, -42, -41, -37, -37, -38, -33, 
-30, -33, -33, -31, -34, -40, -42, -45, -54, -63, -68, -75, -78, -77, -75, -74, 
-72, -64, -60, -56, -51, -46, -46, -49, -49, -48, -44, -38, -34, -32, -25, -15, 
-8, -5, -5, -6, -8, -11, -14, -17, -20, -18, -18, -19, -17, -9, -4, -1, 
4, 7, 9, 10, 6, -1, -9, -14, -18, -28, -32, -31, -28, -25, -17, -6, 
3, 8, 12, 16, 16, 11, 7, 3, -3, -8, -11, -12, -13, -15, -17, -13, 
-8, -4, -3, -3, -3, -2, -6, -12, -15, -15, -17, -19, -21, -22, -25, -30, 
-35, -35, -34, -35, -36, -37, -41, -44, -47, -47, -45, -38, -35, -33, -28, -23, 
-21, -13, -8, -4, 2, 9, 15, 17, 18, 20, 21, 24, 28, 26, 23, 25, 
30, 34, 36, 40, 43, 42, 45, 53, 62, 61, 59, 59, 58, 53, 51, 50, 
46, 43, 42, 44, 45, 46, 49, 51, 54, 62, 63, 62, 59, 59, 64, 68, 
70, 71, 71, 70, 70, 73, 77, 78, 78, 79, 79, 75, 69, 64, 62, 61, 
60, 61, 59, 53, 45, 43, 43, 42, 41, 39, 37, 37, 39, 41, 45, 50, 
58, 62, 60, 56, 52, 49, 46, 42, 36, 28, 19, 11, -1, -10, -16, -20, 
-25, -31, -32, -30, -29, -25, -18, -9, -6, -5, -7, -13, -20, -27, -29, -32, 
-36, -39, -46, -51, -55, -60, -62, -61, -60, -60, -59, -58, -57, -58, -58, -56, 
-54, -53, -54, -58, -57, -49, -42, -41, -42, -44, -45, -44, -42, -46, -60, -70, 
-74, -72, -69, -66, -58, -50, -42, -32, -20, -5, 12, 20, 22, 21, 19, 17, 
17, 14, 9, 5, 2, -2, -5, -7, -9, -9, -7, -1, 3, 8, 12, 18, 
34, 42, 49, 55, 56, 50, 43, 45, 45, 43, 44, 49, 58, 61, 62, 64, 
68, 72, 70, 63, 57, 57, 60, 66, 67, 67, 69, 75, 81, 84, 85, 87, 
86, 81, 70, 63, 55, 46, 39, 34, 32, 32, 32, 35, 41, 47, 55, 61, 
67, 69, 66, 64, 62, 59, 57, 58, 57, 52, 50, 49, 46, 42, 39, 30, 
22, 20, 20, 18, 17, 20, 23, 22, 18, 13, 10, 7, 2, -1, -4, -7, 
-12, -11, -9, -10, -16, -23, -29, -35, -39, -41, -44, -52, -54, -53, -52, -50, 
-44, -41, -38, -31, -23, -23, -39, -47, -56, -65, -74, -78, -81, -81, -78, -69, 
-60, -51, -51, -57, -66, -73, -78, -84, -86, -83, -76, -66, -55, -40, -32, -25, 
-21, -19, -25, -31, -36, -43, -53, -57, -51, -47, -46, -45, -44, -43, -34, -31, 
-34, -36, -33, -31, -30, -25, -22, -24, -29, -33, -37, -36, -28, -20, -18, -14, 
-9, -6, -6, -3, 0, -2, -1, -1, -7, -15, -18, -17, -16, -10, -3, 0, 
-5, -6, -5, -2, -3, -9, -13, -16, -19, -19, -19, -21, -25, -26, -23, -20, 
-22, -26, -25, -25, -28, -30, -31, -35, -40, -43, -44, -45, -45, -46, -48, -51, 
-52, -50, -48, -44, -40, -40, -42, -42, -43, -43, -42, -41, -39, -34, -30, -31, 
-33, -28, -19, -10, -8, -2, 3, 1, 1, 5, 5, 1, 3, 11, 14, 14, 
14, 14, 17, 27, 35, 35, 32, 30, 28, 29, 33, 36, 37, 36, 35, 34, 
33, 31, 31, 33, 32, 32, 35, 41, 43, 42, 42, 39, 31, 26, 27, 30, 
36, 40, 38, 31, 23, 19, 20, 21, 20, 18, 21, 27, 26, 24, 26, 30, 
34, 35, 34, 33, 33, 36, 39, 41, 45, 50, 52, 49, 43, 40, 37, 30, 
23, 18, 16, 18, 22, 27, 33, 43, 48, 52, 52, 48, 44, 34, 26, 18, 
15, 19, 27, 38, 43, 50, 58, 64, 61, 58, 56, 53, 46, 42, 46, 45, 
46, 52, 56, 54, 58, 69, 76, 74, 73, 78, 75, 70, 66, 61, 54, 45, 
43, 41, 38, 38, 39, 44, 48, 52, 51, 47, 37, 30, 19, 6, -3, -9, 
-16, -20, -22, -25, -29, -31, -27, -28, -30, -32, -34, -37, -43, -51, -62, -73, 
-80, -90, -94, -93, -90, -89, -85, -76, -66, -61, -59, -59, -63, -69, -69, -67, 
-65, -63, -53, -45, -41, -39, -32, -24, -23, -22, -22, -25, -27, -24, -23, -22, 
-19, -14, -9, -2, 3, 8, 16, 25, 37, 43, 45, 46, 45, 45, 47, 50, 
50, 47, 46, 46, 49, 52, 53, 55, 58, 62, 66, 69, 70, 68, 64, 51, 
38, 24, 12, -2, -17, -35, -45, -56, -63, -68, -80, -88, -90, -88, -89, -93, 
-99, -98, -98, -96, -91, -87, -92, -92, -90, -90, -92, -95, -96, -97, -97, -96, 
-94, -93, -91, -85, -77, -72, -69, -65, -65, -63, -61, -63, -68, -68, -68, -67, 
-65, -65, -63, -59, -53, -49, -46, -42, -39, -34, -27, -22, -23, -19, -16, -19, 
-23, -20, -16, -14, -11, -5, -2, 1, 8, 16, 18, 21, 27, 30, 28, 29, 
31, 33, 33, 30, 24, 23, 22, 19, 16, 13, 13, 18, 27, 33, 37, 44, 
47, 43, 37, 31, 24, 15, 15, 16, 16, 12, 7, 6, 5, 5, 9, 9, 
-3, -13, -19, -23, -27, -28, -24, -21, -16, -11, -4, 7, 13, 17, 17, 16, 
15, 12, 4, -4, -6, -6, -7, -9, -8, -9, -8, -4, 4, 3, 1, 0, 
-4, -7, -2, 0, -3, -7, -8, -6, -5, -7, -11, -19, -27, -31, -32, -34, 
-33, -26, -16, -14, -19, -18, -13, -11, -11, -8, -9, -13, -12, -8, -3, 3, 
11, 19, 19, 13, 11, 10, 3, -7, -14, -20, -30, -37, -42, -42, -38, -21, 
-8, 2, 13, 25, 28, 19, 15, 9, -3, -16, -25, -33, -34, -29, -18, -7, 
14, 34, 50, 59, 60, 57, 47, 35, 22, 16, 19, 24, 27, 29, 33, 37, 
41, 50, 54, 55, 53, 51, 52, 53, 55, 57, 60, 61, 60, 61, 64, 64, 
64, 66, 77, 81, 81, 79, 76, 70, 61, 57, 55, 59, 69, 82, 84, 86, 
91, 96, 97, 96, 94, 91, 89, 89, 88, 86, 81, 72, 61, 50, 33, 25, 
21, 22, 25, 30, 45, 50, 48, 45, 43, 39, 29, 28, 28, 28, 29, 30, 
28, 28, 28, 24, 16, 6, -2, -11, -18, -20, -19, -17, -13, -10, -11, -11, 
-8, -7, -9, -10, -8, -5, -3, -3, -6, -12, -19, -24, -29, -29, -28, -26, 
-22, -15, -11, -9, -8, -9, -13, -21, -24, -25, -29, -33, -35, -30, -27, -26, 
-23, -18, -15, -17, -18, -17, -15, -18, -24, -29, -36, -36, -27, -18, -12, -8, 
-2, 1, 1, 5, 2, -4, -7, -9, -12, -9, -1, 4, 3, 3, 4, 4, 
6, 10, 9, 2, -7, -12, -14, -12, -8, -6, -9, -12, -14, -16, -16, -14, 
-16, -19, -23, -28, -32, -26, -22, -23, -25, -23, -21, -21, -22, -26, -31, -34, 
-40, -48, -55, -58, -61, -64, -63, -59, -57, -55, -51, -50, -50, -50, -51, -55, 
-59, -62, -60, -57, -55, -55, -51, -37, -27, -21, -20, -20, -21, -27, -30, -30, 
-26, -25, -29, -29, -30, -33, -34, -29, -23, -26, -26, -23, -24, -29, -35, -35, 
-33, -29, -24, -18, -10, 0, 6, 8, 9, 7, 4, 3, 3, -1, -6, -9, 
-8, -8, -7, -5, -3, -1, 1, 1, 0, -1, 0, -2, -8, -13, -18, -25, 
-32, -34, -36, -34, -28, -23, -26, -26, -24, -24, -28, -33, -32, -31, -32, -32, 
-30, -21, -18, -13, -5, 0, 6, 13, 19, 17, 12, 12, 12, 8, 5, 4, 
0, -6, -5, -2, -1, 1, 5, 7, 11, 19, 27, 33, 39, 48, 47, 42, 
42, 44, 39, 34, 31, 26, 21, 18, 22, 23, 23, 23, 23, 21, 20, 21, 
20, 16, 16, 19, 18, 18, 20, 23, 23, 26, 31, 38, 44, 47, 48, 43, 
40, 35, 29, 24, 22, 20, 19, 21, 25, 29, 39, 45, 47, 45, 42, 40, 
36, 36, 38, 41, 43, 44, 43, 42, 42, 42, 38, 29, 26, 26, 24, 19, 
17, 15, 12, 12, 16, 18, 14, 11, 9, 6, 4, 5, 9, 13, 17, 18, 
18, 17, 19, 19, 19, 23, 26, 25, 21, 17, 11, 6, 6, 15, 20, 24, 
25, 27, 28, 27, 25, 19, 12, 4, -12, -21, -27, -31, -32, -31, -29, -26, 
-24, -21, -21, -21, -19, -16, -14, -15, -17, -20, -21, -21, -20, -21, -27, -37, 
-40, -44, -48, -49, -46, -45, -45, -39, -36, -36, -31, -25, -23, -24, -18, -10, 
-8, -9, -8, -8, -11, -10, -12, -20, -27, -28, -26, -26, -22, -17, -14, -12, 
-8, -4, -6, -10, -12, -16, -21, -18, -13, -11, -7, -4, 1, 3, 4, 4, 
0, -2, -1, 2, 7, 13, 19, 29, 35, 38, 39, 42, 46, 45, 40, 35, 
34, 35, 34, 30, 26, 22, 20, 14, 5, 0, -1, 1, 1, -1, 4, 12, 
18, 21, 22, 22, 19, 17, 16, 14, 10, -1, -7, -10, -13, -17, -20, -22, 
-23, -24, -23, -19, -12, -5, -5, -7, -10, -11, -16, -19, -19, -17, -16, -18, 
-22, -26, -32, -36, -39, -42, -48, -51, -55, -58, -59, -56, -56, -55, -55, -56, 
-57, -54, -51, -51, -51, -50, -48, -49, -52, -53, -54, -56, -58, -59, -59, -60, 
-61, -61, -60, -58, -53, -48, -45, -43, -42, -40, -35, -31, -27, -30, -33, -35, 
-38, -43, -47, -43, -40, -39, -36, -29, -17, -13, -11, -8, -6, -6, -3, 1, 
6, 11, 14, 16, 20, 27, 33, 32, 25, 18, 16, 12, 8, 9, 10, 9, 
12, 15, 15, 12, 11, 13, 15, 18, 23, 28, 29, 30, 31, 31, 32, 33, 
30, 27, 24, 20, 18, 20, 22, 23, 24, 25, 25, 22, 22, 20, 17, 18, 
21, 18, 16, 18, 21, 24, 28, 40, 42, 41, 43, 46, 39, 34, 33, 34, 
35, 34, 32, 30, 28, 26, 22, 20, 20, 20, 23, 30, 34, 38, 47, 57, 
59, 56, 55, 54, 45, 31, 19, 9, -1, -14, -18, -18, -18, -21, -26, -26, 
-23, -23, -26, -24, -16, -17, -20, -18, -16, -16, -10, -2, 3, -1, -6, -8, 
-12, -21, -30, -36, -38, -36, -33, -31, -26, -18, -11, -5, 3, 10, 10, 7, 
7, 6, 6, 9, 14, 14, 14, 19, 25, 27, 31, 39, 39, 38, 41, 45, 
45, 43, 47, 49, 52, 57, 63, 68, 70, 74, 77, 77, 80, 81, 79, 77, 
75, 73, 71, 73, 77, 79, 79, 80, 83, 83, 83, 87, 90, 90, 89, 88, 
85, 80, 75, 70, 64, 57, 51, 47, 44, 41, 42, 43, 48, 54, 59, 58, 
55, 50, 45, 37, 22, 11, 3, -6, -14, -16, -9, -2, 0, 0, 0, -3, 
-5, -4, -1, 2, 5, 11, 12, 11, 9, 6, 2, 2, 1, -1, -5, -11, 
-23, -30, -30, -29, -33, -37, -40, -43, -46, -44, -38, -35, -29, -21, -17, -14, 
-12, -19, -27, -31, -30, -27, -24, -22, -25, -30, -33, -32, -28, -24, -22, -20, 
-18, -15, -16, -16, -13, -9, -7, -7, -12, -20, -28, -33, -32, -30, -22, -11, 
-2, -1, -2, 3, 6, 6, 5, 6, 6, -2, -9, -14, -18, -21, -25, -30, 
-36, -42, -47, -53, -61, -67, -72, -75, -76, -78, -78, -75, -68, -60, -52, -45, 
-40, -36, -37, -41, -45, -48, -49, -48, -47, -44, -44, -45, -45, -44, -44, -46, 
-50, -52, -53, -50, -44, -40, -35, -33, -29, -25, -26, -31, -32, -31, -32, -36, 
-39, -44, -50, -58, -63, -64, -63, -59, -51, -43, -40, -40, -42, -42, -44, -42, 
-38, -36, -38, -42, -45, -50, -52, -52, -48, -45, -42, -38, -34, -31, -28, -27, 
-28, -29, -31, -39, -44, -46, -44, -38, -34, -30, -25, -20, -19, -19, -19, -21, 
-25, -27, -22, -17, -16, -14, -11, -9, -8, -5, 0, 3, 7, 9, 8, 3, 
3, 8, 15, 22, 25, 26, 28, 30, 33, 37, 42, 43, 40, 35, 31, 27, 
24, 25, 27, 31, 36, 42, 52, 56, 60, 63, 65, 66, 64, 60, 58, 56, 
51, 45, 43, 42, 40, 37, 35, 31, 28, 27, 28, 29, 29, 28, 29, 28, 
25, 22, 17, 9, -1, -5, -6, -9, -14, -17, -21, -25, -27, -31, -43, -52, 
-57, -61, -66, -68, -71, -73, -73, -71, -67, -57, -52, -51, -51, -51, -53, -59, 
-61, -62, -67, -73, -81, -86, -93, -99, -100, -99, -94, -90, -86, -82, -77, -72, 
-64, -57, -54, -54, -54, -59, -63, -68, -70, -69, -69, -63, -59, -56, -51, -45, 
-41, -40, -37, -37, -39, -39, -35, -35, -35, -30, -23, -18, -9, -3, 0, 1, 
5, 7, 6, 3, -2, -6, -8, -6, -3, 1, 6, 9, 12, 18, 22, 26, 
27, 29, 32, 36, 39, 39, 35, 32, 26, 22, 19, 18, 16, 14, 13, 15, 
22, 31, 39, 43, 50, 54, 55, 57, 61, 62, 61, 65, 68, 66, 62, 65, 
67, 66, 64, 63, 56, 49, 47, 48, 51, 53, 56, 59, 63, 65, 69, 72, 
72, 69, 66, 64, 61, 58, 54, 50, 50, 49, 46, 39, 34, 31, 28, 26, 
22, 16, 13, 11, 10, 14, 23, 25, 26, 28, 27, 22, 21, 22, 19, 14, 
12, 12, 7, 4, 5, 7, 7, 6, 5, 3, 4, 4, 1, -4, -7, -12, 
-14, -13, -11, -14, -14, -16, -22, -29, -33, -34, -33, -28, -22, -20, -25, -27, 
-26, -24, -21, -18, -16, -17, -22, -26, -25, -20, -15, -12, -10, -8, -9, -9, 
-9, -8, -5, -1, 2, 10, 14, 16, 20, 25, 35, 39, 43, 49, 52, 51, 
51, 52, 51, 50, 50, 51, 48, 45, 42, 39, 36, 40, 46, 50, 54, 60, 
67, 71, 71, 72, 72, 68, 64, 64, 63, 59, 53, 50, 45, 47, 53, 56, 
55, 54, 51, 48, 47, 47, 45, 43, 45, 45, 43, 43, 45, 46, 43, 42, 
41, 41, 43, 45, 42, 36, 29, 20, 9, 7, 7, 7, 7, 8, 8, 10, 
11, 11, 8, 4, -2, -10, -17, -23, -30, -39, -40, -41, -43, -43, -42, -41, 
-39, -35, -31, -26, -20, -15, -14, -13, -12, -11, -16, -20, -21, -22, -24, -27, 
-25, -23, -23, -22, -19, -20, -26, -29, -29, -30, -30, -24, -19, -18, -19, -21, 
-21, -19, -15, -8, -4, -3, -4, -4, -7, -11, -13, -16, -23, -24, -24, -27, 
-34, -37, -35, -37, -37, -31, -25, -23, -23, -21, -19, -17, -15, -10, -7, -8, 
-10, -9, -8, -9, -8, -5, -2, -3, -5, -6, -9, -16, -23, -25, -26, -28, 
-30, -32, -32, -31, -26, -23, -18, -13, -12, -12, -12, -11, -9, -5, -3, -4, 
-6, -10, -14, -16, -18, -16, -14, -12, -11, -10, -11, -15, -16, -16, -16, -14, 
-10, -7, -5, -3, -2, -2, 2, 5, 5, 5, 5, 1, 0, 1, 2, 3, 
7, 13, 11, 10, 16, 24, 27, 31, 32, 29, 26, 23, 19, 16, 16, 19, 
19, 17, 13, 11, 11, 10, 8, 8, 11, 11, 9, 7, 8, 9, 9, 9, 
8, 5, 2, -1, -3, -1, 4, 6, 4, 3, 2, -2, -5, -5, -6, -6, 
-2, 2, 4, 6, 12, 14, 17, 22, 26, 28, 30, 33, 32, 32, 33, 30, 
24, 19, 18, 17, 16, 15, 15, 16, 19, 25, 27, 25, 23, 22, 22, 23, 
25, 25, 24, 22, 18, 14, 7, 4, 4, 8, 11, 12, 14, 15, 14, 14, 
16, 16, 10, 4, 2, 2, -1, -6, -5, -6, -7, -7, -7, -9, -10, -9, 
-7, -8, -6, -5, -8, -11, -11, -11, -13, -12, -12, -17, -22, -24, -27, -34, 
-38, -41, -45, -48, -49, -49, -47, -43, -39, -34, -29, -28, -30, -31, -27, -26, 
-25, -23, -21, -18, -10, -5, -4, -4, -2, 2, 1, 0, -1, -5, -9, -10, 
-7, -6, -5, -4, -4, -6, -6, -4, -1, -1, 2, 9, 13, 14, 12, 12, 
15, 17, 17, 18, 19, 21, 19, 17, 17, 17, 14, 11, 6, 0, -7, -11, 
-15, -26, -29, -27, -26, -25, -22, -17, -17, -17, -15, -9, -4, 1, 0, -4, 
-9, -15, -23, -24, -23, -23, -24, -23, -17, -14, -12, -8, -3, 2, 4, 4, 
3, -1, -6, -10, -13, -20, -29, -36, -41, -50, -54, -55, -53, -51, -51, -46, 
-41, -38, -35, -31, -24, -20, -17, -17, -19, -22, -26, -26, -24, -21, -18, -12, 
-2, 1, 1, 1, 0, -8, -11, -16, -25, -34, -40, -47, -51, -54, -55, -55, 
-54, -51, -51, -54, -60, -62, -60, -58, -54, -50, -49, -46, -40, -36, -32, -26, 
-19, -16, -17, -16, -17, -22, -29, -39, -47, -57, -65, -69, -71, -78, -82, -82, 
-79, -76, -68, -63, -58, -55, -51, -48, -45, -44, -43, -38, -35, -35, -36, -32, 
-26, -19, -10, 2, 8, 16, 26, 34, 39, 45, 49, 58, 66, 69, 68, 68, 
67, 66, 66, 65, 58, 55, 56, 56, 53, 54, 59, 62, 65, 71, 78, 83, 
92, 95, 100, 108, 119, 127, 125, 123, 119, 114, 109, 104, 99, 91, 85, 82, 
77, 74, 78, 82, 85, 91, 102, 105, 106, 109, 109, 106, 101, 97, 90, 85, 
79, 72, 63, 59, 54, 48, 43, 37, 33, 27, 21, 15, 10, 2, -2, -3, 
-2, -2, 2, 13, 22, 29, 36, 44, 43, 36, 29, 23, 14, 1, -13, -21, 
-32, -43, -48, -49, -46, -43, -43, -46, -48, -43, -39, -35, -31, -28, -23, -18, 
-17, -16, -13, -13, -14, -12, -11, -11, -11, -9, -13, -19, -25, -30, -37, -43, 
-50, -53, -53, -52, -50, -48, -47, -46, -44, -43, -42, -36, -32, -29, -25, -23, 
-25, -28, -25, -21, -20, -21, -22, -22, -23, -22, -17, -10, -2, 1, 2, -3, 
-9, -10, -11, -13, -13, -10, -11, -17, -19, -20, -20, -18, -13, -9, -10, -9, 
-8, -5, -2, 1, 2, 3, 2, 2, 2, 1, -1, -2, -2, -2, -2, -2, 
-2, -2, 0, };
