const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 4578;
const signed char revSamples[] = {
0, 0, 0, 1, 2, 3, 6, 8, 10, 10, 10, 10, 9, 7, 6, 5, 
3, 2, 1, 1, 2, 3, 4, 6, 8, 9, 10, 12, 14, 17, 18, 19, 
20, 20, 20, 20, 19, 19, 18, 16, 13, 10, 7, 2, -2, -6, -11, -14, 
-14, -13, -11, -6, -2, 2, 6, 9, 11, 13, 12, 11, 10, 9, 8, 5, 
3, 1, 0, -2, -4, -6, -7, -8, -9, -9, -9, -9, -10, -10, -11, -11, 
-10, -9, -8, -5, -2, 3, 6, 9, 12, 15, 17, 20, 20, 20, 19, 17, 
14, 8, 4, -1, -5, -10, -15, -19, -21, -22, -24, -24, -23, -22, -21, -18, 
-15, -12, -7, -4, 0, 4, 9, 14, 17, 18, 19, 19, 17, 13, 10, 5, 
1, -5, -12, -21, -27, -31, -34, -36, -34, -30, -23, -17, -9, -2, 8, 12, 
14, 15, 14, 10, 6, 3, -1, -4, -7, -10, -11, -12, -13, -14, -15, -17, 
-18, -18, -18, -18, -15, -13, -11, -7, -4, -1, 3, 6, 8, 9, 9, 9, 
8, 7, 6, 5, 4, 3, 1, 1, 0, 0, 0, 0, 1, 2, 3, 4, 
5, 6, 8, 10, 12, 15, 18, 20, 21, 21, 21, 20, 17, 14, 10, 6, 
2, -1, -6, -7, -8, -8, -6, -2, 1, 3, 6, 8, 10, 11, 10, 9, 
7, 4, 1, -8, -13, -18, -22, -24, -26, -24, -22, -19, -14, -10, -3, 1, 
4, 5, 5, 4, 1, -1, -4, -6, -8, -10, -10, -10, -10, -10, -10, -9, 
-9, -8, -7, -7, -7, -7, -7, -8, -9, -10, -11, -11, -11, -11, -10, -8, 
-4, -1, 1, 3, 5, 7, 6, 5, 3, 0, -3, -8, -12, -14, -18, -21, 
-22, -23, -22, -20, -19, -17, -14, -12, -12, -12, -13, -15, -19, -22, -24, -27, 
-30, -33, -36, -37, -37, -37, -37, -34, -33, -32, -29, -28, -28, -26, -26, -26, 
-27, -27, -28, -28, -27, -26, -25, -24, -23, -21, -20, -19, -18, -16, -14, -11, 
-9, -7, -4, -2, 1, 2, 3, 3, 4, 5, 7, 9, 12, 15, 18, 24, 
28, 31, 34, 38, 42, 48, 52, 54, 57, 59, 59, 59, 58, 56, 54, 52, 
50, 48, 47, 44, 41, 38, 34, 31, 29, 29, 31, 35, 40, 44, 48, 52, 
54, 53, 51, 48, 44, 38, 33, 26, 22, 19, 16, 13, 10, 9, 8, 8, 
7, 7, 6, 5, 4, 3, 1, 0, -2, -2, -2, -2, -2, -3, -4, -6, 
-8, -11, -14, -18, -20, -22, -23, -23, -23, -23, -22, -21, -19, -17, -13, -11, 
-9, -6, -5, -3, -2, -2, -3, -4, -5, -6, -6, -6, -6, -5, -5, -4, 
-4, -5, -6, -8, -11, -16, -20, -23, -26, -27, -27, -25, -23, -18, -14, -8, 
-2, 1, 2, 1, -2, -5, -10, -14, -16, -18, -20, -22, -22, -22, -22, -22, 
-20, -17, -15, -13, -10, -8, -7, -8, -10, -12, -15, -18, -22, -24, -25, -24, 
-23, -21, -17, -14, -12, -8, -5, -2, 2, 4, 6, 6, 5, 3, 1, -1, 
-3, -4, -4, -3, -1, 2, 5, 8, 13, 16, 18, 18, 17, 17, 14, 12, 
10, 7, 3, 0, -6, -10, -12, -13, -13, -10, -4, 0, 5, 10, 13, 17, 
19, 20, 20, 19, 19, 16, 14, 14, 14, 15, 17, 20, 21, 23, 23, 23, 
26, 29, 32, 35, 39, 41, 43, 43, 41, 39, 36, 34, 33, 33, 33, 34, 
34, 33, 31, 29, 25, 21, 18, 13, 10, 8, 5, 4, 2, 1, 0, -1, 
-1, -2, -1, -1, 0, 1, 1, 1, -3, -6, -9, -13, -16, -22, -26, -29, 
-31, -33, -33, -31, -30, -28, -25, -25, -23, -21, -20, -18, -14, -9, -1, 6, 
13, 19, 23, 26, 29, 29, 29, 29, 29, 29, 28, 29, 29, 30, 32, 35, 
39, 42, 46, 50, 54, 58, 61, 63, 64, 65, 65, 64, 63, 62, 59, 55, 
48, 43, 38, 33, 30, 28, 24, 22, 20, 17, 13, 11, 9, 9, 10, 13, 
17, 24, 29, 32, 35, 38, 38, 37, 35, 33, 29, 25, 23, 16, 13, 9, 
5, 1, -6, -10, -13, -16, -18, -18, -14, -11, -7, -4, -1, 2, 4, 4, 
4, 4, 4, 3, 2, 0, -3, -8, -14, -25, -33, -40, -46, -51, -54, -56, 
-56, -55, -53, -50, -47, -45, -42, -41, -39, -39, -36, -34, -33, -30, -27, -23, 
-20, -19, -19, -20, -23, -29, -34, -40, -45, -49, -53, -55, -54, -52, -48, -44, 
-33, -26, -18, -9, -1, 7, 17, 23, 26, 27, 27, 24, 17, 11, 5, -2, 
-10, -18, -22, -25, -27, -28, -28, -25, -22, -20, -16, -12, -8, -2, 1, 4, 
8, 11, 14, 14, 14, 13, 12, 9, 4, 1, -4, -9, -13, -17, -23, -26, 
-28, -30, -30, -29, -27, -24, -19, -14, -9, -1, 3, 5, 8, 9, 10, 11, 
10, 9, 8, 7, 3, 1, -1, -4, -5, -7, -10, -11, -12, -13, -14, -13, 
-13, -12, -9, -8, -5, -1, 2, 5, 7, 8, 8, 8, 7, 5, 3, 0, 
-4, -10, -13, -17, -20, -23, -26, -27, -27, -26, -25, -24, -23, -21, -20, -19, 
-18, -18, -15, -13, -11, -9, -6, -4, -3, -3, -3, -4, -4, -5, -5, -5, 
-5, -5, -5, -6, -6, -7, -7, -6, -5, -3, -1, 2, 5, 7, 10, 10, 
10, 9, 6, 1, -4, -7, -12, -16, -18, -21, -21, -21, -20, -18, -16, -13, 
-12, -12, -11, -10, -9, -8, -6, -4, -2, 1, 4, 7, 9, 10, 12, 13, 
12, 11, 9, 7, 4, 1, 1, 2, 3, 6, 11, 18, 22, 27, 30, 33, 
35, 37, 37, 36, 35, 34, 30, 27, 24, 21, 17, 13, 5, 0, -5, -10, 
-14, -18, -21, -22, -21, -20, -18, -15, -14, -14, -14, -15, -17, -20, -22, -24, 
-26, -27, -27, -27, -26, -25, -25, -25, -25, -27, -28, -29, -32, -34, -36, -36, 
-34, -33, -30, -25, -18, -13, -8, -4, -1, 0, 0, -1, -5, -8, -12, -18, 
-21, -25, -27, -29, -30, -29, -28, -26, -23, -20, -16, -14, -12, -11, -11, -11, 
-12, -12, -12, -11, -11, -11, -11, -12, -13, -14, -16, -19, -21, -23, -24, -25, 
-27, -29, -31, -32, -33, -34, -34, -33, -31, -29, -25, -20, -12, -7, -1, 3, 
7, 9, 8, 6, 3, -2, -5, -11, -13, -14, -14, -11, -8, -3, 1, 5, 
10, 14, 18, 23, 25, 27, 28, 28, 27, 26, 25, 24, 22, 19, 16, 15, 
13, 12, 12, 11, 12, 13, 14, 17, 20, 23, 25, 27, 27, 28, 28, 28, 
29, 30, 31, 32, 33, 34, 35, 36, 37, 37, 37, 37, 36, 35, 32, 29, 
23, 19, 15, 12, 10, 9, 10, 12, 14, 15, 17, 20, 21, 22, 23, 23, 
22, 21, 19, 16, 13, 10, 7, 4, 3, 2, 1, -1, -3, -6, -8, -9, 
-11, -13, -12, -12, -11, -10, -9, -8, -7, -6, -5, -5, -5, -5, -7, -9, 
-11, -14, -17, -22, -24, -26, -28, -29, -29, -29, -28, -27, -25, -23, -21, -19, 
-19, -19, -19, -20, -19, -19, -18, -16, -13, -10, -8, -6, -6, -9, -12, -21, 
-27, -34, -40, -46, -49, -52, -52, -51, -49, -47, -43, -41, -39, -36, -35, -33, 
-31, -30, -29, -29, -28, -28, -27, -27, -26, -26, -26, -24, -23, -22, -21, -20, 
-18, -17, -14, -12, -8, -3, 2, 11, 16, 20, 23, 25, 25, 25, 25, 26, 
28, 32, 43, 51, 60, 69, 76, 83, 90, 92, 92, 92, 91, 88, 86, 85, 
82, 79, 76, 69, 66, 62, 58, 56, 54, 52, 50, 49, 49, 47, 45, 44, 
43, 40, 38, 35, 28, 24, 19, 15, 10, 6, 1, -2, -4, -5, -7, -7, 
-7, -7, -7, -8, -11, -16, -20, -24, -27, -30, -30, -28, -25, -21, -17, -12, 
-5, 0, 3, 5, 5, 2, -6, -16, -26, -36, -46, -55, -58, -57, -53, -48, 
-40, -30, -25, -21, -18, -17, -17, -20, -23, -29, -35, -41, -47, -49, -49, -45, 
-38, -29, -12, -1, 10, 19, 26, 33, 40, 44, 48, 50, 53, 53, 54, 56, 
58, 62, 68, 75, 80, 84, 86, 86, 86, 84, 82, 81, 79, 77, 74, 73, 
72, 71, 71, 69, 67, 66, 66, 66, 65, 63, 61, 59, 58, 57, 55, 53, 
51, 49, 47, 44, 41, 36, 33, 32, 31, 31, 32, 32, 31, 30, 28, 25, 
19, 14, 8, 2, -5, -12, -21, -25, -28, -29, -30, -31, -32, -31, -30, -28, 
-24, -16, -10, -3, 1, 4, 5, 3, 1, -2, -5, -8, -12, -19, -23, -29, 
-33, -36, -41, -43, -43, -42, -41, -39, -32, -28, -23, -19, -16, -12, -8, -5, 
-4, -3, -2, -3, -4, -5, -6, -7, -7, -5, -3, -1, 0, 3, 6, 8, 
11, 13, 14, 17, 19, 20, 19, 18, 16, 13, 8, 5, 3, 0, -2, -1, 
1, 4, 6, 9, 12, 14, 15, 15, 15, 14, 12, 7, 4, -1, -7, -13, 
-22, -28, -35, -40, -44, -47, -47, -46, -44, -41, -38, -36, -33, -33, -33, -33, 
-33, -33, -33, -33, -33, -34, -35, -39, -42, -45, -48, -51, -54, -58, -61, -63, 
-65, -68, -68, -68, -66, -62, -58, -53, -45, -40, -34, -30, -26, -22, -18, -16, 
-16, -17, -20, -25, -30, -34, -39, -43, -46, -48, -48, -47, -45, -42, -37, -30, 
-25, -20, -16, -13, -8, -7, -7, -8, -9, -10, -14, -16, -18, -19, -19, -17, 
-12, -7, -2, 4, 8, 11, 11, 9, 5, 1, -4, -11, -15, -18, -21, -21, 
-21, -18, -15, -11, -7, -2, 3, 5, 6, 5, 3, 0, -4, -6, -8, -10, 
-13, -17, -21, -24, -29, -34, -37, -44, -49, -52, -55, -58, -58, -57, -54, -48, 
-42, -36, -27, -22, -18, -15, -13, -11, -10, -9, -9, -10, -11, -12, -13, -13, 
-12, -10, -8, -4, -1, 1, 3, 4, 7, 11, 14, 19, 22, 25, 27, 28, 
27, 26, 25, 24, 24, 24, 25, 26, 27, 28, 30, 31, 33, 35, 36, 37, 
37, 36, 35, 34, 33, 30, 28, 26, 23, 19, 16, 12, 10, 9, 9, 9, 
12, 16, 20, 26, 31, 37, 44, 48, 49, 49, 48, 45, 38, 35, 30, 26, 
23, 20, 14, 11, 6, 2, -1, -5, -6, -7, -8, -8, -8, -10, -12, -14, 
-17, -20, -22, -25, -27, -27, -28, -28, -28, -27, -26, -26, -26, -26, -27, -29, 
-30, -31, -34, -37, -41, -45, -47, -48, -48, -45, -42, -38, -33, -29, -26, -20, 
-17, -12, -8, -4, 2, 6, 9, 12, 14, 16, 20, 21, 22, 21, 18, 12, 
1, -9, -18, -26, -32, -37, -38, -37, -33, -28, -22, -8, 1, 11, 20, 27, 
33, 38, 39, 38, 35, 29, 21, 15, 9, 4, 0, -5, -9, -11, -12, -11, 
-9, -6, 2, 6, 12, 17, 22, 30, 34, 37, 40, 41, 41, 39, 36, 33, 
29, 25, 21, 15, 13, 12, 11, 11, 11, 10, 10, 9, 7, 6, 3, 0, 
-2, -4, -7, -10, -14, -16, -16, -15, -13, -9, -6, -5, -6, -7, -7, -10, 
-11, -11, -12, -14, -16, -22, -25, -30, -35, -39, -44, -47, -49, -50, -50, -48, 
-44, -41, -38, -35, -32, -29, -24, -21, -17, -14, -11, -6, -3, -1, 2, 5, 
7, 10, 10, 9, 5, 1, -5, -14, -19, -23, -26, -26, -23, -19, -14, -8, 
-1, 5, 15, 22, 29, 36, 41, 46, 45, 42, 36, 28, 20, 11, 7, 3, 
0, -1, -1, 0, 2, 6, 11, 18, 28, 33, 35, 34, 30, 24, 15, 10, 
6, 4, 2, 0, 0, 1, 2, 5, 10, 17, 22, 26, 28, 28, 26, 22, 
19, 17, 14, 13, 12, 11, 9, 7, 5, 3, 1, 1, 1, 2, 2, 2, 
4, 6, 9, 14, 19, 25, 33, 36, 39, 39, 38, 30, 24, 17, 8, 0, 
-8, -20, -25, -28, -28, -26, -20, -9, 1, 10, 19, 28, 37, 41, 43, 43, 
41, 37, 29, 22, 14, 6, -3, -13, -25, -33, -38, -41, -43, -41, -38, -33, 
-30, -28, -27, -28, -30, -32, -35, -37, -40, -45, -49, -53, -57, -60, -62, -62, 
-61, -60, -57, -55, -51, -48, -46, -45, -43, -41, -39, -38, -37, -36, -35, -34, 
-33, -32, -31, -31, -29, -27, -25, -20, -15, -8, 2, 7, 9, 9, 7, 4, 
-1, -3, -4, -4, 0, 6, 18, 29, 40, 52, 62, 73, 77, 79, 79, 79, 
77, 73, 70, 65, 61, 57, 55, 55, 56, 58, 60, 63, 68, 72, 76, 80, 
82, 83, 80, 78, 76, 73, 73, 73, 73, 74, 75, 75, 76, 76, 75, 75, 
75, 73, 73, 71, 69, 68, 66, 63, 60, 57, 56, 55, 54, 53, 48, 44, 
40, 35, 28, 22, 11, 4, -4, -12, -19, -24, -32, -36, -39, -40, -40, -40, 
-39, -39, -40, -41, -44, -49, -53, -57, -62, -66, -70, -76, -79, -82, -83, -83, 
-82, -81, -79, -75, -72, -68, -63, -59, -55, -51, -46, -42, -38, -37, -38, -41, 
-42, -43, -42, -39, -33, -25, -16, -1, 10, 19, 26, 31, 35, 34, 32, 28, 
23, 17, 10, 6, 5, 6, 8, 12, 21, 28, 35, 43, 50, 59, 64, 67, 
68, 68, 66, 59, 53, 46, 38, 31, 23, 13, 7, 1, -4, -7, -9, -8, 
-5, 0, 4, 9, 15, 18, 20, 21, 21, 19, 15, 11, 5, -2, -11, -24, 
-31, -37, -41, -42, -41, -36, -31, -25, -19, -12, -6, 0, 3, 4, 4, 1, 
-3, -7, -11, -16, -20, -23, -27, -29, -30, -31, -32, -33, -34, -34, -34, -34, 
-34, -34, -35, -35, -34, -34, -32, -26, -23, -19, -16, -14, -13, -16, -19, -25, 
-30, -36, -45, -50, -55, -58, -60, -59, -55, -50, -43, -35, -26, -18, -9, -5, 
-1, 0, 0, -2, -3, -4, -5, -5, -5, -5, -3, -1, 0, 3, 5, 7, 
7, 7, 7, 7, 5, 5, 5, 6, 8, 11, 18, 22, 24, 27, 29, 29, 
28, 26, 23, 19, 16, 10, 7, 5, 4, 4, 5, 9, 12, 14, 17, 17, 
16, 13, 10, 7, 2, -1, -4, -4, -2, 1, 6, 11, 21, 27, 33, 38, 
41, 41, 39, 36, 31, 26, 20, 12, 7, 2, -2, -4, -6, -5, -4, -3, 
0, 2, 7, 11, 14, 17, 21, 24, 27, 29, 31, 32, 32, 31, 27, 23, 
17, 10, 2, -8, -14, -20, -23, -25, -26, -24, -22, -19, -16, -13, -10, -8, 
-6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -6, -7, -8, -9, -12, 
-17, -21, -26, -30, -34, -37, -38, -37, -34, -31, -26, -18, -14, -9, -5, -3, 
-1, -2, -4, -9, -13, -19, -28, -33, -36, -37, -37, -35, -29, -26, -22, -18, 
-16, -16, -17, -19, -22, -26, -30, -35, -37, -37, -36, -34, -31, -24, -20, -15, 
-11, -6, -2, 3, 5, 7, 7, 7, 7, 4, 2, -2, -8, -14, -23, -28, 
-32, -35, -36, -32, -28, -20, -12, -3, 6, 17, 22, 24, 23, 19, 14, 4, 
-2, -7, -12, -15, -18, -19, -20, -19, -19, -19, -18, -17, -16, -15, -14, -13, 
-9, -5, 0, 5, 11, 17, 19, 20, 19, 16, 13, 8, 5, 2, 0, -1, 
-2, -2, -2, -1, 0, 1, 2, 3, 3, 4, 5, 7, 11, 14, 16, 19, 
20, 20, 18, 16, 13, 11, 9, 6, 5, 6, 6, 7, 9, 11, 12, 12, 
11, 10, 7, 0, -3, -8, -11, -14, -16, -16, -15, -14, -12, -10, -4, -1, 
2, 5, 6, 8, 8, 7, 6, 3, 1, -3, -7, -10, -12, -15, -17, -20, 
-23, -24, -25, -27, -27, -27, -27, -26, -25, -24, -23, -21, -19, -17, -14, -10, 
-4, 0, 3, 6, 6, 5, 3, -1, -6, -12, -18, -27, -33, -37, -40, -40, 
-39, -32, -24, -15, -6, 3, 16, 22, 25, 28, 29, 29, 27, 26, 24, 23, 
21, 19, 18, 18, 18, 19, 20, 22, 23, 24, 25, 25, 25, 24, 24, 24, 
23, 22, 22, 21, 22, 23, 25, 29, 34, 39, 43, 45, 47, 47, 43, 39, 
33, 28, 22, 17, 10, 8, 7, 8, 9, 12, 14, 16, 17, 18, 19, 18, 
17, 16, 13, 11, 8, 5, 3, 2, 1, -1, -3, -4, -5, -5, -4, -3, 
-1, 1, 3, 4, 4, 2, -2, -6, -11, -15, -21, -27, -30, -31, -31, -28, 
-23, -15, -9, -3, 1, 3, 3, -3, -9, -17, -27, -36, -51, -60, -68, -73, 
-76, -78, -74, -71, -66, -62, -57, -53, -48, -46, -45, -46, -47, -47, -48, -48, 
-47, -46, -46, -43, -41, -40, -39, -37, -37, -35, -34, -33, -32, -32, -29, -28, 
-27, -26, -25, -23, -22, -21, -20, -19, -18, -17, -14, -12, -7, -2, 3, 10, 
12, 14, 14, 15, 15, 17, 20, 22, 25, 29, 33, 36, 39, 42, 45, 47, 
48, 46, 42, 38, 35, 35, 41, 47, 54, 60, 64, 66, 66, 65, 65, 66, 
68, 71, 73, 73, 72, 72, 70, 70, 69, 68, 67, 65, 61, 59, 58, 58, 
59, 60, 62, 62, 61, 60, 57, 52, 40, 31, 22, 14, 7, -2, -6, -8, 
-8, -7, -7, -4, -4, -4, -6, -10, -13, -20, -22, -23, -23, -22, -19, -17, 
-16, -15, -14, -13, -11, -11, -12, -14, -17, -20, -23, -24, -25, -25, -23, -19, 
-15, -9, -2, 5, 13, 25, 31, 38, 43, 47, 52, 55, 57, 57, 56, 55, 
51, 48, 45, 43, 41, 39, 35, 32, 30, 28, 28, 29, 33, 36, 39, 43, 
49, 57, 62, 65, 69, 69, 69, 67, 64, 61, 57, 53, 45, 38, 29, 21, 
14, 7, 0, -2, -1, 2, 7, 12, 22, 28, 33, 36, 38, 39, 38, 36, 
35, 33, 31, 27, 24, 21, 16, 12, 7, -1, -6, -12, -17, -22, -25, -25, 
-23, -19, -14, -9, -2, 2, 4, 6, 7, 7, 4, 1, -4, -9, -15, -24, 
-29, -33, -37, -41, -45, -49, -52, -55, -56, -57, -57, -53, -50, -45, -41, -36, 
-29, -24, -21, -18, -17, -16, -16, -18, -20, -21, -23, -25, -28, -28, -28, -27, 
-25, -21, -18, -16, -13, -11, -9, -8, -8, -9, -10, -12, -15, -20, -23, -26, 
-27, -28, -27, -24, -22, -19, -17, -16, -18, -20, -22, -26, -28, -30, -32, -32, 
-32, -31, -30, -29, -28, -28, -28, -29, -30, -34, -37, -39, -40, -40, -39, -35, 
-32, -28, -25, -23, -23, -24, -26, -28, -30, -32, -34, -34, -33, -29, -26, -19, 
-15, -12, -11, -11, -12, -16, -20, -23, -26, -27, -28, -27, -25, -22, -21, -20, 
-20, -22, -25, -27, -30, -31, -30, -27, -24, -19, -13, -6, 4, 9, 13, 15, 
15, 11, 7, 3, -2, -7, -10, -14, -16, -17, -18, -19, -20, -22, -22, -21, 
-19, -15, -6, 2, 10, 19, 27, 32, 37, 37, 35, 30, 23, 16, 4, -4, 
-10, -14, -16, -18, -18, -17, -16, -15, -13, -9, -6, -3, 1, 7, 12, 18, 
22, 24, 25, 26, 26, 26, 24, 23, 20, 15, 7, 0, -8, -17, -26, -33, 
-44, -48, -50, -50, -47, -39, -32, -24, -17, -10, -5, 1, 3, 3, 3, 2, 
2, 2, 3, 4, 5, 6, 6, 4, 2, -2, -7, -13, -22, -28, -33, -36, 
-38, -37, -30, -22, -14, -4, 7, 21, 28, 34, 38, 39, 38, 34, 31, 25, 
20, 14, 6, 0, -3, -7, -10, -12, -12, -11, -9, -5, -1, 2, 7, 10, 
13, 14, 14, 14, 12, 11, 10, 10, 10, 12, 14, 16, 17, 18, 18, 17, 
16, 14, 13, 12, 9, 7, 5, 1, -2, -5, -10, -12, -13, -12, -10, -7, 
1, 5, 10, 14, 16, 17, 15, 12, 7, -1, -9, -22, -30, -36, -40, -42, 
-41, -36, -31, -24, -17, -11, -2, 1, 2, 1, -1, -5, -13, -18, -24, -29, 
-34, -37, -39, -38, -34, -30, -24, -13, -7, 0, 5, 8, 9, 6, 2, -5, 
-13, -22, -30, -41, -46, -50, -50, -49, -43, -37, -30, -21, -12, -5, 3, 5, 
4, 1, -4, -10, -20, -25, -30, -33, -35, -34, -32, -29, -24, -20, -17, -13, 
-12, -12, -13, -14, -16, -16, -16, -15, -12, -9, -4, 0, 4, 8, 11, 14, 
18, 21, 24, 27, 30, 32, 31, 29, 24, 19, 11, 1, -4, -8, -10, -10, 
-7, 1, 8, 17, 27, 36, 48, 53, 55, 53, 49, 43, 30, 22, 14, 8, 
2, -3, -6, -7, -6, -5, -1, 6, 11, 16, 21, 24, 27, 29, 29, 28, 
25, 24, 22, 17, 16, 15, 15, 16, 18, 20, 23, 25, 26, 28, 27, 26, 
25, 22, 19, 16, 13, 11, 8, 6, 3, -1, -4, -5, -5, -5, -3, 4, 
8, 14, 21, 27, 32, 39, 40, 40, 36, 30, 15, 5, -6, -16, -26, -33, 
-39, -40, -38, -34, -28, -22, -10, -3, 3, 8, 11, 13, 12, 11, 11, 10, 
10, 7, 5, 3, -1, -5, -10, -19, -25, -31, -36, -41, -46, -47, -48, -48, 
-45, -42, -35, -31, -26, -22, -19, -17, -17, -19, -21, -25, -28, -32, -35, -37, 
-40, -43, -45, -46, -44, -41, -36, -30, -19, -12, -4, 3, 7, 12, 18, 21, 
24, 26, 27, 28, 31, 34, 36, 39, 42, 48, 51, 54, 57, 58, 59, 59, 
59, 59, 58, 58, 55, 52, 49, 46, 43, 40, 37, 37, 38, 40, 43, 46, 
49, 49, 48, 44, 38, 31, 21, 14, 8, 3, 0, -2, -2, 0, 2, 6, 
9, 13, 15, 15, 14, 12, 9, 3, 0, -3, -5, -5, -3, 0, 2, 5, 
7, 9, 9, 7, 5, 2, -2, -5, -11, -14, -17, -19, -21, -22, -21, -19, 
-17, -16, -14, -14, -17, -20, -25, -31, -38, -49, -53, -58, -61, -63, -64, -62, 
-59, -53, -45, -36, -23, -14, -7, -3, 0, 0, -2, -4, -7, -10, -13, -17, 
-19, -19, -18, -15, -9, 3, 13, 23, 32, 41, 48, 56, 59, 61, 63, 63, 
63, 62, 61, 60, 59, 59, 61, 63, 66, 69, 72, 77, 78, 78, 74, 69, 
63, 51, 42, 34, 26, 20, 16, 11, 11, 11, 12, 14, 18, 20, 21, 22, 
22, 20, 16, 12, 6, 1, -6, -11, -18, -19, -19, -17, -13, -5, 0, 4, 
8, 11, 13, 16, 17, 17, 18, 18, 18, 14, 11, 7, 2, -2, -9, -12, 
-12, -11, -9, -5, 2, 6, 8, 8, 5, 0, -10, -17, -24, -31, -36, -41, 
-42, -41, -38, -34, -28, -16, -8, -1, 7, 13, 18, 21, 20, 18, 13, 7, 
-5, -13, -21, -28, -35, -40, -42, -41, -38, -32, -25, -15, -1, 9, 16, 22, 
27, 31, 32, 31, 28, 25, 20, 12, 8, 3, -1, -4, -6, -8, -8, -7, 
-6, -4, 0, 2, 4, 5, 5, 5, 4, 2, 1, 0, -2, -3, -5, -5, 
-5, -5, -5, -5, -7, -9, -12, -15, -18, -23, -25, -26, -25, -24, -19, -14, 
-9, -3, 2, 7, 12, 13, 12, 11, 8, 4, -2, -7, -12, -16, -21, -25, 
-27, -27, -27, -26, -23, -17, -13, -8, -4, -1, 1, 0, -2, -6, -10, -15, 
-22, -25, -28, -29, -29, -29, -26, -24, -22, -21, -19, -19, -19, -20, -21, -22, 
-23, -25, -26, -27, -28, -28, -28, -28, -27, -27, -26, -25, -25, -24, -24, -24, 
-25, -26, -26, -27, -27, -26, -25, -25, -22, -20, -19, -18, -17, -17, -19, -21, 
-23, -26, -29, -33, -34, -34, -33, -30, -26, -19, -14, -9, -4, -1, 1, 2, 
1, -1, -4, -8, -14, -18, -22, -26, -30, -33, -37, -39, -39, -39, -36, -31, 
-23, -14, -7, 0, 7, 12, 13, 12, 8, 4, -1, -10, -15, -17, -18, -17, 
-14, -8, -4, 1, 6, 9, 13, 16, 17, 18, 18, 18, 15, 13, 10, 7, 
5, 2, 1, 3, 5, 8, 13, 22, 26, 31, 34, 34, 34, 29, 25, 23, 
20, 18, 20, 23, 27, 33, 38, 43, 48, 49, 48, 45, 42, 37, 29, 26, 
22, 19, 16, 11, 8, 4, -2, -7, -13, -19, -20, -19, -16, -10, -4, 7, 
11, 15, 15, 14, 6, -1, -8, -14, -20, -23, -23, -20, -16, -11, -7, -4, 
-2, -3, -7, -11, -16, -21, -24, -24, -23, -23, -21, -19, -18, -18, -18, -18, 
-18, -18, -17, -17, -16, -17, -17, -19, -21, -23, -26, -29, -33, -33, -32, -30, 
-25, -20, -11, -5, 0, 3, 4, 1, -2, -6, -10, -11, -12, -10, -7, -2, 
3, 6, 8, 8, 6, 2, -3, -9, -16, -18, -18, -16, -11, -5, 7, 13, 
20, 24, 26, 28, 26, 24, 23, 21, 21, 22, 24, 26, 27, 27, 27, 22, 
19, 14, 10, 6, 4, 5, 7, 11, 15, 20, 25, 27, 27, 26, 23, 19, 
12, 8, 4, 3, 3, 7, 10, 13, 16, 19, 21, 21, 20, 19, 15, 12, 
9, 3, 0, -2, -3, -5, -6, -7, -8, -8, -9, -10, -10, -10, -10, -10, 
-10, -11, -11, -11, -11, -12, -12, -13, -13, -14, -14, -14, -15, -15, -16, -16, 
-17, -17, -16, -16, -15, -14, -11, -8, -3, 1, 6, 12, 15, 18, 19, 18, 
15, 11, 5, -2, -11, -16, -20, -22, -21, -16, -10, -2, 5, 12, 19, 25, 
25, 23, 19, 12, 4, -8, -15, -21, -24, -24, -21, -17, -13, -8, -3, 2, 
9, 12, 13, 12, 11, 9, 3, 0, -3, -6, -8, -8, -7, -5, -3, 1, 
5, 13, 18, 24, 29, 32, 34, 35, 34, 32, 30, 27, 23, 20, 19, 18, 
18, 20, 24, 28, 30, 34, 37, 39, 40, 39, 37, 34, 29, 20, 15, 10, 
5, 1, -2, -5, -6, -7, -7, -7, -7, -7, -7, -8, -8, -8, -11, -14, 
-17, -21, -27, -35, -46, -53, -59, -64, -68, -72, -74, -76, -77, -78, -78, -76, 
-75, -74, -72, -69, -67, -63, -60, -59, -56, -54, -51, -50, -49, -47, -47, -45, 
-44, -43, -42, -41, -40, -38, -37, -35, -33, -32, -31, -29, -28, -27, -26, -25, 
-24, -23, -22, -21, -21, -18, -13, 1, 15, 32, 52, 70, 96, 109, 118, 124, 
127, 127, 123, 119, 114, 110, 106, 102, 98, 96, 94, 94, 93, 92, 91, 90, 
89, 88, 87, 84, 83, 82, 81, 81, 79, 79, 78, 77, 77, 75, 73, 71, 
69, 67, 64, 62, 58, 56, 54, 52, 49, 46, 40, 34, 29, 22, 16, 8, 
3, 1, 2, 3, 6, 11, 14, 15, 14, 10, 1, -7, -16, -27, -38, -50, 
-70, -81, -90, -98, -102, -102, -98, -95, -92, -90, -90, -92, -94, -97, -99, -100, 
-102, -101, -100, -99, -98, -95, -93, -89, -86, -81, -74, -67, -56, -48, -40, -33, 
-27, -23, -18, -18, -20, -21, -24, -23, -18, -11, 1, 15, 30, 55, 71, 85, 
96, 104, 109, 110, 109, 106, 102, 97, 92, 84, 81, 77, 74, 72, 69, 67, 
66, 65, 63, 62, 59, 57, 56, 54, 53, 51, 49, 48, 47, 45, 42, 36, 
33, 28, 25, 23, 21, 21, 21, 20, 19, 16, 12, 4, -2, -8, -15, -20, 
-27, -30, -33, -34, -35, -35, -32, -30, -28, -25, -22, -20, -16, -14, -13, -11, 
-9, -8, -6, -6, -6, -6, -8, -13, -18, -24, -30, -37, -42, -50, -54, -56, 
-57, -59, -59, -59, -58, -58, -58, -57, -57, -56, -55, -53, -50, -44, -39, -34, 
-28, -24, -19, -16, -16, -17, -18, -19, -21, -23, -23, -22, -20, -17, -11, -8, 
-4, 0, };
