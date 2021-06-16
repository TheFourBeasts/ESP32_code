const unsigned int fanSampleRate = 22050;
const unsigned int fanSampleCount = 2201;
const signed char fanSamples[] = {
0, 46, 9, -18, -12, -8, -30, -58, -11, 28, 23, 49, -49, -51, -35, 47,
98, -27, 1, -46, -27, -7, -25, 75, -32, -18, 18, -22, 19, -47, 13, 57, 
42, 14, -46, -18, -21, -37, -37, 21, 58, 31, 32, -37, -62, -8, 11, 19, 
-34, -56, -18, 45, 21, 38, -19, -56, 45, -2, -1, 3, -23, 9, 3, -60, 
16, 0, 31, 63, -49, 4, 5, 10, 10, -8, -7, 0, 37, 31, -57, -21, 
-26, -30, 31, -18, -8, -30, 54, 32, -11, 51, 19, -5, -45, -64, -7, 1, 
18, 19, -39, -13, -9, 30, 12, -11, 11, -3, -41, -38, 28, -4, -12, 11, 
31, 28, -14, -54, -25, 38, 46, -24, -34, -1, -4, -32, 15, 17, 9, 25, 
-43, -45, 6, 13, -4, -18, 1, 27, -18, -47, -5, 42, 18, -7, 32, -14, 
7, -6, -43, -1, -43, 9, 39, 46, 19, -53, -18, -15, 26, 0, 9, 40, 
28, -14, -38, -33, -47, -3, -12, 80, 77, 17, -52, -48, 11, -10, 29, -4, 
-2, 44, -21, 23, 29, -27, -20, -31, 2, -11, 28, 39, -26, -22, -8, -7, 
-21, 14, 9, 20, -16, -14, -12, 3, 10, -14, 59, -3, -36, -13, 16, 64, 
27, -17, -58, 6, -11, -35, 19, 32, 15, -34, -4, 25, -24, 39, 10, -18, 
-24, -10, 22, -16, -19, 3, 49, 30, -29, -6, -17, -20, 2, 3, 14, 2, 
-13, -24, -5, 14, -9, -31, -38, 25, 60, 14, -24, -1, 16, -2, 9, -18, 
46, -22, -29, 68, -21, 1, 10, -36, -38, -16, 9, 22, 11, 56, 23, -62, 
32, -26, -10, 3, -31, -25, 86, 0, -78, -19, -12, 100, 43, -22, -24, -26, 
-21, -30, 16, 2, -52, 22, 47, -25, -3, 0, -18, -15, 27, -53, -33, 37, 
-29, -19, 38, -7, -18, 8, 44, -14, 11, 44, -1, -12, 0, -79, -11, 16, 
12, 54, -13, -23, -33, 37, 38, -38, -19, -31, 37, 29, 22, 21, -20, -46, 
-30, -23, -26, 63, 53, 25, -37, -47, 29, 9, -19, -44, -26, -2, -4, -18, 
2, 47, 14, -20, 11, 21, -7, -14, -15, -9, -30, -16, 30, -7, -9, 11, 
13, -2, -21, -6, -27, 32, 17, 4, 19, -12, -29, -6, -6, -14, 41, -12, 
-50, 11, 10, 60, 31, -39, -21, 15, -10, -33, -19, -3, 18, 24, 22, 4, 
-18, 8, -52, -32, 17, 24, 4, -25, 0, 61, -2, -8, 67, -6, -3, -76, 
-38, 39, -3, 40, -2, -4, 9, -71, -38, -7, 42, 53, -28, 1, -34, 4, 
5, 1, 1, -38, 23, -3, 4, 48, 0, -33, 20, 16, 63, 23, -73, -1, 
20, 80, -25, -76, 38, -28, 51, 1, -26, -4, -29, 23, -28, 22, 10, -49, 
19, -14, -14, 12, 28, 11, -19, -20, 17, 47, 20, -34, 8, 40, 30, -14, 
-84, 7, 27, -1, -12, -5, 81, -22, -52, -3, 14, 33, -64, -44, -14, -46, 
20, 78, 8, 57, -12, -42, 8, -31, -11, 4, -3, 8, 28, -16, 6, 36, 
26, -19, -42, -27, 20, 55, 6, -3, -7, -18, -1, -20, -53, 10, 44, -48, 
-41, 53, 108, 29, -67, -74, 8, 53, -20, -24, 1, 38, 5, -34, -17, -27, 
64, 41, -10, -27, -10, -3, 12, 42, -64, -50, 39, 24, -5, -33, 0, 11, 
0, 17, 30, 25, -20, -44, -37, -5, 13, -2, 24, 19, 6, 19, -28, -12, 
37, -19, -11, 0, -6, -25, -20, 32, -7, -14, 21, 38, 5, -14, -12, -11, 
-31, -29, 4, -29, 18, 24, -16, 1, -4, 78, 36, -64, -34, 6, -17, 3, 
-26, -39, 44, 4, 22, -2, -38, 29, 63, -21, 9, -26, -45, 36, -35, -3, 
-10, 2, 39, -25, -30, 10, 17, -3, 5, 0, -20, -18, 33, 9, -28, 33, 
-20, 34, 20, -18, 58, -17, -46, -28, -20, 7, 28, -20, -48, -12, -6, -52, 
18, 83, 52, 10, -20, -26, 16, 16, -11, -67, -23, 17, 34, 43, -33, 14, 
40, -62, -12, 42, 41, -14, 4, -38, -65, 7, 7, 13, 14, -1, 39, 14, 
-47, -19, 17, 3, -29, -86, -8, 46, 38, 0, -11, 16, -41, 6, 4, -5, 
82, 37, -62, -34, -15, -26, 26, 58, 18, -8, -26, -27, -17, -8, 49, -1, 
-20, -45, -77, 25, -4, 49, 46, -44, -45, -20, 70, 3, 9, 53, -14, -33, 
-45, -52, 2, 35, 32, 3, -52, 17, 101, 32, -21, -24, -31, -24, -44, -20, 
5, -5, -11, -15, 40, 58, -6, -1, -53, -12, 80, 24, -33, -65, -51, -22, 
44, 38, -1, 21, -35, 16, 34, -2, 6, -39, -24, -33, -20, 45, 7, 18, 
-18, -52, 59, 9, -28, -24, 0, 9, -29, 49, 24, -34, 26, -23, 0, 80, 
28, 19, -39, -34, 27, 13, 42, -20, -72, -11, -14, 18, -6, 0, 22, 64, 
51, -7, -32, -82, 16, 4, -11, 30, -19, 0, -2, -28, 11, 12, 49, 59, 
-39, -33, -40, -29, -4, 22, 22, -1, -8, 18, 47, -56, 14, -19, -62, 20, 
7, 12, 44, 38, -22, -41, 3, -33, -3, 76, 24, -35, -32, 24, 76, 28, 
-68, -116, 42, 54, 82, 43, -45, -77, 7, 78, 71, 38, -56, -10, -71, -35, 
55, 56, 21, -40, -42, -47, -18, 19, 60, 23, -37, -58, -22, 26, 12, -5, 
-9, 0, -2, -29, -23, 56, 53, 12, 9, -27, -30, -36, -16, -13, 30, 50, 
1, -51, -33, 50, -22, -23, -41, -30, 24, 70, -20, -59, -24, -18, 43, 38, 
13, 26, -48, -63, 27, 42, -15, -24, -1, -17, -41, 54, -23, -23, 14, 8, 
62, -47, -32, 21, -21, -7, -14, -66, 9, 44, 15, 28, -19, -35, 12, -3, 
-15, 9, -16, 46, 13, -4, 11, -18, 12, 8, 0, -4, 36, -30, -50, 7, 
17, -13, -57, 10, 28, -9, -15, 3, -34, 57, 67, 0, 23, -22, 25, 11, 
-16, -9, -77, -30, 29, 16, 21, -38, -9, 22, 4, -19, 34, 82, -12, -55, 
-52, -42, -22, 80, 69, -21, -5, -10, -20, -15, 8, -50, 48, 1, -37, 42, 
-6, 65, -14, -40, -3, -14, 24, -67, -43, 33, 17, 83, -14, -52, 16, 7, 
1, -53, -42, 28, 66, 44, -40, 2, -11, -23, 15, -37, 0, 40, 14, 6, 
-55, 14, 68, -26, -45, -34, 7, 39, -16, -56, -53, -7, 84, -9, 16, -41, 
-45, 58, 19, 41, -33, -77, -21, -11, 56, 46, 7, -15, -32, 4, -18, 17, 
-20, -37, 27, 6, 51, 12, -55, -25, 29, 22, -37, -15, 18, -11, -10, 15, 
21, 2, 4, -15, -37, 8, -43, -1, 34, -54, 30, 38, 0, 0, 42, 27, 
-17, 13, -70, -61, -7, 47, 37, 13, -6, -8, 20, -29, 23, 6, -6, -42, 
-64, 36, 78, 72, 7, -47, -86, -19, 37, -3, -1, 19, 26, 49, -22, -12, 
-10, -44, 24, -33, 6, 55, 11, 1, -24, 15, 2, -19, 7, -8, -1, -30, 
-34, -1, 3, 19, 75, 57, -3, -75, -21, 30, 61, 13, -56, 25, -8, -57, 
-52, -14, 57, 48, 0, 15, -68, -8, 52, 1, -19, -66, 56, 12, -56, 26, 
19, 19, -61, -32, 35, 31, -17, 11, 36, 7, 20, -67, -59, -6, 33, 26, 
-28, -39, -4, 38, 8, 18, -22, -28, -1, -3, 3, -3, 15, 31, -18, 5, 
25, -20, 21, -26, -30, -19, 70, -28, -87, 11, -25, 39, 35, -54, -21, 50, 
6, -72, -16, -14, 22, 42, -30, -47, 14, 17, 55, 13, -12, -7, 36, 64, 
-22, -127, -82, 104, 28, -65, -85, -11, 50, 25, 16, 18, -38, -45, -29, 16, 
41, 19, 28, -57, -14, 11, 40, 33, -14, -10, 7, 25, -57, -59, 15, 68, 
58, -19, -80, -44, 11, 64, -5, -23, 10, 15, 6, -49, 13, 5, 29, 13, 
-65, -57, 37, 112, 36, -46, -65, 32, 33, 15, 17, -57, -23, 54, 39, 28, 
-6, -42, 16, 5, -4, -24, 10, 28, -34, -90, -32, 66, 1, -45, 37, 54, 
-14, 9, -5, 35, -22, -95, 4, 33, 38, 25, -14, 9, -63, 15, 24, -36, 
-10, 33, 53, 29, -24, -125, -45, 72, 7, 26, 33, -10, 21, 12, -42, -35, 
22, 17, -18, 26, -23, -17, 5, -21, -12, 33, 12, 18, 6, 9, -20, -5, 
10, -33, -34, 5, 69, -69, -31, 2, 32, 75, -17, 3, 25, 6, -6, -44, 
-66, 50, 80, -2, -4, 12, -24, 9, 3, 24, 18, -12, -19, -54, -34, -3, 
58, 49, -5, -52, -40, 24, 8, 15, 15, -66, -5, 41, -23, -10, 31, 37, 
-23, -13, 22, -33, 24, 41, -36, -1, -43, 8, -12, -42, 29, 18, 19, -68, 
-10, 90, 10, -19, -30, -6, 53, -11, -30, -32, 0, 73, 16, -64, 46, 44, 
-8, -9, -30, -8, -49, -1, 16, -34, 31, 58, 23, 35, -67, -40, 24, -14, 
42, 0, -23, -44, -1, -39, -39, 110, 44, -33, 3, -48, 43, 37, -27, 6, 
-12, -2, 13, -43, -51, 38, 14, -19, -56, -30, 84, 51, -23, -49, -17, 12, 
-10, 23, -12, 44, 7, -32, 17, -9, 7, -33, -41, 5, 35, -10, -29, 18, 
17, -13, 23, 23, -34, -54, 37, 58, -11, 8, -17, -15, -10, -54, -7, 16, 
38, 22, -24, 17, 37, 34, -14, -18, 0, -14, 4, -19, 5, 0, -54, 39, 
-11, -16, 2, 11, 1, -12, 37, 11, 28, -19, -53, 29, 19, 50, -10, -96, 
19, 77, 64, -67, -58, 65, 34, 0, -88, -60, 20, 5, 17, -19, 17, 60, 
1, -16, -78, -13, 45, 15, 15, -84, 4, 65, 9, -1, -52, 27, 51, 25, 
-27, -38, 31, 13, 13, -28, -53, 54, 45, -14, -36, 24, 24, -46, -15, 14, 
1, 14, 23, -40, -24, 35, 37, -1, -62, -45, 47, 34, -8, 11, 6, 12, 
-16, -13, -26, -3, 18, -15, -20, -27, 7, 46, 14, 30, 44, -19, -74, -16, 
-13, 26, 45, 29, -60, -42, 22, 43, 48, -3, -4, -43, -39, -46, -26, 56, 
43, 26, -62, -16, 18, 6, 59, -38, -36, -12, -26, 75, 8, -41, -38, -40, 
45, 16, -1, 37, -11, -2, -13, -8, 2, -13, -26, -38, 13, 18, -25, -8, 
12, -8, 43, 19, -5, -35, -3, 38, 22, -30, -71, -12, 33, -5, -41, 18, 
22, 3, -1, -5, 30, -22, -10, 34, -21, -27, -24, -33, -11, 56, 54, 5, 
-7, -47, -36, 7, -42, 28, 46, -12, 6, -50, 13, 65, 5, 3, -40, -11, 
-1, -9, 18, 25, 1, -46, 45, 6, -73, 6, -29, 25, 29, -5, 19, 6, 
17, -9, -7, -15, -7, 3, -64, -55, 16, 66, 37, -9, -22, -4, 14, -25, 
-26, 12, 2, 20, -13, -50, 27, 55, 39, -38, -35, 28, 15, 31, -19, -33, 
-10, -21, 15, 8, -11, 34, 56, -45, -37, -37, 29, 32, -38, -21, -37, 28, 
45, -9, -50, 44, 81, -4, -35, -30, -13, -6, 11, 32, 24, 50, -17, -47, 
-21, 4, 23, -13, 9, 15, -10, -20, -44, 17, 8, -13, 15, 8, 4, -12, 
30, -5, -43, 26, 24, 6, -57, -22, 33, -7, 37, 2, 21, 8, -27, 2, 
-57, 9, 72, 29, -37, -30, 5, -35, -51, -54, 7, 93, 15, -34, -22, 29, 
57, -19, 26, -22, -54, -47, -55, 51, 14, 26, 32, 22, -24, -22, 10, -3, 
-8, 17, -49, -27, 25, -18, 5, -32, 34, 50, 0, -20, -52, 41, 18, 8, 
-6, -43, -26, 34, 14, 17, 67, 11, -23, -17, -57, -24, 8, -25, 36, -25, 
6, 66, -24, -22, -32, 42, 50, 16, 14, -52, 21, 4, -9, -30, -71, 57, 
24, -31, 14, 26, 23, 17, 5, -39, -32, 0, 28, 30, -42, 1, -10, -23, 
5, -4, 64, -27, -67, -11, 36, 83, -8, -54, -54, -4, 65, 41, 3, 18, 
10, -48, -34, -29, 35, 75, 25, -70, -119, 10, 103, 57, 5, -54, -4, 3, 
-4, 23, -58, 26, 36, -22, -29, -37, 23, -17, 17, 41, -21, 34, -7, -12, 
-18, -25, 54, 37, -55, -31, -34, -16, -3, -20, 58, 15, 38, -12, -19, 42, 
32, 23, -43, -58, 27, 24, 1, -12, -34, 8, 45, -70, -57, 32, -15, 59, 
30, -70, -21, 42, 20, -42, -16, 59, 59, 11, -38, -71, 18, 63, 38, -16, 
-82, 3, 0, 2, 24, 5, 35, -15, 11, 1, -38, 15, 18, -16, -52, 26, 
5, -30, 11, 31, 42, 5, 20, -31, -13, -24, -41, 16, 24, 52, 10, -59, 
-38, 10, 24, 15, 10, -24, -28, 14, -23, -19, -11, -12, 59, -39, -6, 74, 
-27, -34, -10, -40, -7, 33, 43, 21, -1, -33, 25, -6, -35, 13, 55, 19, 
-24, -36, -15, 14, 0, -24, -31, -7, 23, 21, -76, -36, 63, 78, 24, -32, 
12, 24, -4, -26, -60, -9, 53, 54, 30, -16, -58, 39, -16, -15, 49, -8, 
-11, -40, -36, 37, 53, 14, -20, -24, 8, 12, 13, -17, -54, 16, 32, 25, 
10, -8, -20, 13, 1, -45, -25, 90, 51, -38, 0, 2, -12, -30, -49, -6, 
-30, 40, 54, -43, -78, -63, 53, 25, 0, };
