const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 2780;
const signed char samples[] = {
6, 11, 13, 14, 14, 19, 14, 5, 6, 8, 9, 10, 7, 3, -4, 0, 
4, -1, -1, 15, 11, 0, -11, -4, 3, 8, 12, 17, 14, 7, 10, 15, 
17, 17, 14, 13, 16, 9, 12, 9, 12, 17, 26, 26, 36, 37, 33, 32, 
28, 26, 17, 13, 17, -1, -12, -18, -24, -20, -22, -9, -1, 8, 7, 5, 
-8, -19, -18, -18, -12, -11, -17, -15, -18, -28, -26, -18, -15, -24, -22, -20, 
-26, -30, -31, -32, -33, -25, -20, -18, -17, -17, -16, -23, -22, -14, -12, -19, 
-33, -43, -44, -39, -32, -36, -31, -27, -27, -17, -10, 2, 2, -7, -22, -37, 
-36, -33, -29, -18, -5, 7, 2, -11, -14, -11, -6, -1, 4, 1, 4, 0, 
-7, -13, -17, -19, -22, -24, -33, -27, -13, -13, -16, -13, -19, -16, -9, -7, 
-6, 0, 2, 3, -2, -2, 1, 5, 1, 9, 20, 27, 31, 19, 15, 23, 
33, 40, 44, 39, 43, 43, 39, 40, 41, 52, 58, 56, 56, 52, 36, 27, 
2, 1, 9, 15, 19, 10, 12, 18, 16, 11, 4, 19, 25, 34, 43, 39, 
42, 41, 49, 55, 50, 45, 36, 36, 40, 38, 38, 35, 34, 32, 46, 45, 
47, 49, 52, 54, 44, 34, 29, 16, 20, 27, 30, 27, 25, 28, 25, 27, 
27, 19, 30, 33, 36, 33, 27, 23, 23, 25, 26, 19, 11, 0, -6, -4, 
-13, -22, -20, -20, -10, -2, -2, -4, -9, -23, -30, -34, -34, -34, -23, -8, 
-12, -24, -32, -33, -31, -9, -11, -8, -22, -26, -27, -22, -20, -18, -19, -17, 
-17, -13, -10, -17, -15, -16, -14, -13, -14, -19, -26, -39, -39, -42, -41, -37, 
-33, -32, -26, -35, -34, -36, -43, -47, -51, -52, -55, -53, -44, -43, -45, -57, 
-54, -44, -26, -15, -18, -17, -19, -19, -29, -34, -33, -37, -43, -43, -35, -23, 
-11, -1, 9, 22, 20, 22, 13, 5, 2, -4, -24, -35, -44, -42, -37, -42, 
-49, -41, -40, -28, -11, -6, -5, -3, 5, 3, -5, -9, -13, -10, -4, -5, 
-16, -22, -16, -12, -6, 9, 19, 29, 39, 39, 51, 70, 78, 87, 85, 71, 
51, 53, 46, 50, 47, 48, 47, 45, 41, 39, 38, 40, 40, 33, 27, 28, 
29, 39, 47, 57, 56, 58, 56, 32, 20, 23, 13, 4, 1, -1, 2, 12, 
24, 12, 15, 11, 4, 1, 6, 8, -7, -16, -24, -23, -23, -28, -31, -38, 
-43, -50, -68, -80, -70, -49, -28, -15, -18, -12, -6, -9, -14, -6, 15, 13, 
-1, -12, -31, -45, -44, -54, -60, -60, -61, -55, -53, -44, -25, -7, -3, -8, 
-3, -8, -12, -18, -19, -17, -17, -31, -27, -31, -23, -12, -9, -16, -17, -15, 
2, 12, 19, 19, 19, 25, 15, 8, 0, -14, -18, -15, -9, 10, 13, 10, 
5, 7, 13, 8, 12, 23, 30, 39, 40, 41, 40, 39, 45, 53, 53, 49, 
43, 40, 22, 23, 29, 38, 45, 46, 44, 46, 44, 35, 28, 19, 33, 37, 
41, 38, 35, 15, 13, 4, -1, -5, -1, -14, -24, -17, -19, -25, -20, -24, 
-24, -20, -8, -3, -14, -15, -8, -14, -13, -12, -7, 0, 0, -15, -24, -11, 
-12, -19, -14, -7, 0, 14, 10, 2, -8, -18, -12, -24, -25, -26, -7, -8, 
-2, 4, 7, 15, 17, 10, 5, 2, -6, -2, 2, 4, 6, 4, -4, -10, 
-17, -11, -14, -27, -39, -46, -55, -52, -37, -25, -15, -14, -15, -2, -5, -5, 
-10, -10, 2, 5, 13, 6, 3, -12, -15, -10, -6, -12, -12, -11, -10, -9, 
-12, -3, 3, 4, 7, 3, 2, -6, -6, -10, -6, -7, -10, -13, -28, -16, 
-6, -6, -8, -15, -13, -20, -26, -27, -35, -38, -45, -47, -47, -42, -33, -33, 
-30, -24, -24, -26, -17, -4, -13, -19, -17, -16, -16, -3, -1, -8, -11, -11, 
-7, -8, -10, -3, 2, -5, 6, 12, 20, 16, 15, 20, 33, 38, 45, 52, 
46, 30, 33, 28, 16, 6, 7, -13, -29, -11, 10, 18, 28, 71, 66, 66, 
67, 75, 80, 79, 75, 66, 51, 36, 32, 39, 46, 46, 44, 34, 22, 25, 
27, 36, 40, 51, 48, 41, 45, 48, 48, 54, 68, 62, 51, 45, 38, 16, 
24, 26, 32, 35, 32, 28, 24, 24, 8, -11, -3, -15, -31, -30, -15, -39, 
-52, -48, -44, -49, -41, -26, -29, -40, -27, -25, -29, -15, -2, 0, -13, -32, 
-35, -35, -45, -46, -50, -47, -63, -68, -46, -39, -29, -14, -7, -12, -1, -7, 
-11, -14, -14, -9, -6, -4, -18, -35, -36, -39, -37, -33, -27, -24, -11, -12, 
-16, -15, -5, -6, -1, 1, 4, 3, -9, -17, -11, -6, -6, -16, -31, -30, 
-27, -39, -48, -49, -39, -32, -16, -5, -2, -4, 2, 7, 5, -4, 6, -2, 
-13, -16, -22, -36, -66, -56, -38, -41, -44, -49, -48, -43, -29, -19, -14, -9, 
-7, -7, -16, -15, -16, -17, -14, -13, -19, -7, -3, -17, -16, -18, -15, -8, 
-4, -2, -10, -12, -26, -33, -19, -12, -2, 7, 11, 0, 12, 16, 14, 10, 
12, 20, 8, 1, 11, 35, 42, 35, 27, 25, 29, 42, 52, 56, 59, 52, 
55, 44, 45, 50, 48, 50, 54, 65, 57, 39, 42, 49, 57, 56, 59, 74, 
74, 69, 71, 64, 49, 47, 51, 44, 45, 42, 36, 23, 26, 17, 20, 48, 
50, 41, 32, 19, 2, 0, 1, -3, -10, -8, -1, -11, -15, -12, -13, -19, 
-24, -27, -33, -27, -19, -18, -28, -38, -25, -28, -31, -27, -34, -27, -25, -31, 
-29, -42, -43, -41, -34, -32, -33, -40, -49, -44, -35, -38, -43, -47, -44, -43, 
-35, -28, -39, -42, -37, -31, -27, -22, -13, -10, 1, -4, -7, -10, -13, -22, 
-35, -31, -23, -6, -10, -16, -16, -3, 0, 11, 4, 6, 1, -9, -4, -1, 
0, 2, 1, -2, -5, -12, -8, -9, -5, -9, -6, -4, 1, -1, -9, -19, 
-25, -25, -27, -32, -38, -44, -33, -26, -6, -4, 0, 6, 8, 8, 6, 0, 
-4, -18, -20, -26, -26, -23, -15, 5, 20, 32, 39, 42, 46, 41, 38, 39, 
34, 35, 36, 40, 39, 31, 20, 8, 7, 15, 36, 50, 55, 65, 59, 57, 
59, 65, 71, 71, 65, 59, 60, 56, 45, 40, 44, 39, 30, 37, 47, 45, 
34, 27, 24, 18, 15, 25, 26, 45, 51, 39, 20, 12, 3, 6, 5, 6, 
10, 10, 16, 1, -8, 8, 17, 16, 7, -2, 3, 0, -24, -47, -49, -32, 
-40, -45, -43, -31, -15, -13, -30, -37, -31, -17, -19, -27, -23, -25, -24, -26, 
-44, -36, -23, -19, -25, -38, -46, -44, -45, -40, -49, -58, -53, -49, -44, -38, 
-32, -23, -25, -25, -33, -41, -38, -24, -18, -33, -43, -42, -45, -40, -52, -52, 
-49, -43, -47, -48, -45, -42, -20, -6, 9, 0, -3, -6, -10, -5, 2, 0, 
4, 7, -2, -33, -42, -32, -30, -26, -25, -17, -14, -13, -17, -3, 1, -6, 
-2, 6, 10, 16, 10, 4, 16, 28, 20, 12, 15, 15, 18, 19, 14, 7, 
7, 5, 10, 13, 14, 10, 11, 1, -11, -18, -8, -5, -8, -2, 15, 24, 
10, 1, 2, 6, 12, 16, 14, 19, 24, 17, 11, 6, 7, 10, 7, 13, 
15, 4, -1, -3, -2, 9, 16, 35, 52, 50, 53, 55, 55, 54, 49, 45, 
45, 38, 40, 34, 30, 35, 49, 50, 41, 24, 26, 25, 38, 41, 46, 47, 
45, 40, 27, 33, 28, 25, 18, 3, -5, -1, -4, -6, -9, 2, 4, 2, 
-3, -7, -14, -8, 7, 8, -3, -13, -19, -23, -25, -27, -32, -27, -16, -25, 
-35, -41, -47, -48, -45, -35, -27, -23, -24, -19, -11, -13, -5, 2, -10, -19, 
-11, -5, -15, -31, -35, -24, -29, -37, -33, -35, -42, -41, -45, -39, -32, -15, 
-19, -12, 0, 6, 0, -4, -7, -9, -18, -34, -38, -33, -32, -32, -31, -35, 
-39, -39, -34, -27, -22, -7, -3, 4, 8, 7, 18, 20, 25, 17, 15, 10, 
6, 5, 0, -7, -7, -13, -24, -32, -34, -28, -32, -25, -27, -18, -4, 8, 
12, 18, 17, 14, 15, 20, 26, 17, 16, 14, 11, 11, 15, 15, 24, 29, 
31, 33, 30, 28, 31, 36, 46, 48, 51, 54, 59, 69, 77, 77, 76, 74, 
68, 62, 56, 48, 43, 37, 28, 31, 32, 22, 19, 12, 9, 7, 6, 12, 
15, 5, 4, 2, 11, 13, 8, 9, 8, 11, 13, 11, 15, 16, 15, 7, 
0, -6, -5, -14, -17, -27, -25, -22, -23, -30, -31, -31, -30, -27, -22, -19, 
-17, -19, -10, -8, -16, -13, -16, -17, -20, -28, -38, -51, -48, -45, -47, -44, 
-42, -34, -31, -37, -39, -37, -34, -27, -28, -20, -13, -8, -9, -10, -14, -28, 
-30, -31, -27, -25, -29, -33, -33, -28, -19, -12, -14, -4, -1, 1, 2, 4, 
4, 7, 10, 11, 9, 8, -3, -14, -20, -18, -10, -4, -6, -5, -10, -8, 
-9, -6, -7, -9, -11, -7, -1, -6, -2, -7, -4, -4, 0, 1, 1, -10, 
-25, -37, -41, -39, -41, -43, -48, -52, -38, -33, -28, -22, -18, -19, -18, -16, 
-7, 7, 12, 9, 6, 4, -4, -8, -8, -7, -10, -15, -15, -10, -5, 0, 
0, 2, 8, 18, 18, 7, 12, 19, 28, 31, 35, 38, 37, 35, 34, 33, 
30, 34, 37, 37, 42, 44, 45, 47, 45, 48, 46, 57, 61, 69, 58, 51, 
45, 40, 36, 37, 41, 47, 44, 42, 36, 41, 39, 38, 29, 22, 15, 13, 
8, 4, 1, -1, -5, -7, -5, -13, -17, -13, -13, -11, -9, -13, -17, -19, 
-16, -16, -9, -11, -8, -8, -12, -13, -14, -17, -15, -27, -26, -26, -24, -17, 
-15, -12, -19, -26, -30, -28, -28, -35, -38, -35, -39, -40, -42, -37, -32, -28, 
-31, -35, -45, -52, -44, -40, -37, -46, -53, -57, -49, -50, -39, -35, -33, -39, 
-31, -32, -34, -32, -22, -26, -40, -44, -50, -50, -48, -40, -32, -13, -8, 0, 
3, 10, 11, 14, 10, 7, 19, 27, 24, 32, 35, 44, 44, 34, 22, 7, 
10, 18, 38, 48, 48, 50, 62, 79, 77, 72, 70, 76, 85, 66, 54, 57, 
68, 66, 59, 52, 54, 47, 49, 45, 48, 54, 57, 62, 65, 69, 69, 69, 
73, 69, 71, 65, 67, 67, 67, 70, 65, 45, 37, 41, 37, 20, 17, 27, 
26, 20, 12, 9, 4, 15, 16, 19, 16, 16, 11, -3, -13, -17, -25, -17, 
-19, -25, -30, -34, -33, -33, -36, -43, -40, -44, -51, -55, -49, -51, -36, -31, 
-29, -28, -28, -24, -29, -36, -53, -43, -29, -14, -12, -6, -25, -31, -22, -29, 
-29, -28, -26, -22, -27, -36, -45, -32, -26, -20, -28, -33, -29, -22, -28, -35, 
-31, -30, -29, -48, -67, -65, -63, -49, -45, -44, -40, -34, -32, -43, -63, -57, 
-55, -54, -54, -51, -45, -48, -41, -30, -12, -19, -33, -39, -35, -26, -22, -22, 
-24, -14, -13, -17, -30, -39, -41, -41, -38, -32, -26, -20, -13, -13, -14, -16, 
-14, 9, -7, -16, -32, -24, -19, -18, -10, -13, -13, -19, -12, -13, -25, -49, 
-40, -27, -18, -17, -17, -12, -7, -3, 2, 3, 9, 14, 9, 7, 15, 16, 
9, 2, 2, 9, 8, 15, 13, 18, 11, 2, -8, -15, -17, 2, 26, 36, 
36, 15, 18, 30, 32, 27, 15, 18, 38, 47, 34, 43, 43, 50, 60, 49, 
52, 54, 64, 76, 81, 78, 74, 69, 60, 62, 74, 76, 87, 84, 82, 76, 
67, 70, 84, 93, 93, 74, 62, 60, 64, 71, 64, 73, 75, 75, 75, 66, 
58, 59, 60, 59, 44, 38, 30, 37, 26, 22, 18, 4, -3, -2, -12, -30, 
-42, -37, -50, -49, -35, -20, -16, -20, -17, -18, -26, -24, -32, -37, -40, -38, 
-37, -29, -29, -31, -31, -28, -38, -42, -58, -55, -35, -30, -34, -32, -31, -30, 
-11, -13, -19, -33, -42, -49, -47, -51, -43, -32, -28, -32, -38, -43, -47, -38, 
-34, -28, -23, -7, -13, -12, -19, -23, -34, -35, -16, -15, -13, -8, -6, 1, 
3, 7, 2, -12, -12, -1, -5, -9, -16, -15, 0, 4, 13, 26, 33, 47, 
35, 22, 22, 25, 18, 18, -11, -23, -20, -18, -16, -11, -8, 10, 27, 27, 
15, -20, -19, 2, 23, 42, 55, 56, 44, 33, 18, 9, 30, 40, 41, 34, 
31, 27, 18, 6, 13, 27, 37, 39, 33, 39, 40, 38, 48, 46, 48, 40, 
37, 34, 44, 49, 36, 31, 13, 13, 13, -7, -18, -15, -14, -5, -16, -17, 
-20, -32, -31, -30, -22, -13, -8, -29, -52, -71, -58, -32, -19, -20, -25, -23, 
-28, -40, -40, -27, -16, -11, -18, -31, -43, -39, -45, -49, -45, -25, -17, -26, 
-34, -23, -27, -25, -6, 9, 24, 22, 11, 5, 10, 6, -7, -8, -24, -15, 
-19, -41, -45, -50, -45, -31, -20, -26, -26, -10, -18, -24, -22, -28, -30, -28, 
-33, -25, -28, -35, -44, -52, -65, -62, -45, -43, -32, -10, -9, -13, -17, -13, 
-11, -2, -3, -8, -26, -40, -54, -55, -58, -30, -17, -17, -20, -13, -5, -8, 
-23, -25, -34, -27, -10, -18, -31, -48, -53, -49, -43, -26, -11, -8, -8, 0, 
-4, -22, -35, -40, -49, -44, -25, -9, 5, 7, 11, 7, 0, 6, 10, 10, 
18, 36, 38, 39, 34, 43, 35, 46, 57, 61, 71, 74, 72, 61, 59, 52, 
57, 78, 85, 98, 105, 109, 95, 76, 59, 58, 53, 60, 77, 86, 75, 70, 
61, 51, 53, 50, 52, 48, 36, 36, 30, 28, 37, 52, 64, 69, 69, 56, 
53, 50, 35, 14, 9, 24, 23, 20, 19, 28, 19, 12, 12, 7, -2, -12, 
-12, -4, -7, -7, -8, -17, -23, -10, -11, -6, -2, -4, -10, -27, -37, -41, 
-39, -43, -33, -31, -24, -19, -26, -27, -31, -25, -25, -29, -33, -42, -39, -37, 
-43, -45, -49, -51, -53, -58, -73, -66, -49, -33, -29, -16, -13, -13, -4, -1, 
8, 10, 16, 22, 13, 4, 1, 5, 7, 6, 14, 23, 19, -2, -12, -9, 
1, -2, -13, -29, -45, -43, -48, -46, -40, -48, -50, -59, -58, -61, -57, -48, 
-38, -8, 14, 4, -18, -37, -49, -48, -29, -6, -3, -8, -17, -15, 2, 13, 
6, -10, -17, -28, -20, 4, 22, 17, 9, 12, 32, 32, 46, 68, 71, 71, 
80, 84, 86, 74, 52, 34, 16, 19, 27, 33, 36, 16, 5, 8, 12, 41, 
59, 66, 53, 35, 12, 9, -5, -9, -2, 24, 31, 17, 22, 26, 23, 17, 
17, 4, -1, 5, -10, -26, -28, 27, 39, 32, 10, 12, 12, 20, 36, 26, 
5, -2, 4, 7, 13, 29, 62, 79, 48, 28, 15, 24, 24, 7, -8, -13, 
-16, -19, -29, -30, -22, -17, -6, -10, -12, -17, -15, -23, -13, -18, -22, -13, 
2, 20, 8, -11, -13, -9, -24, -35, -57, -83, -96, -60, -34, -40, -45, -23, 
5, -3, -25, -24, -18, -9, -5, -23, -40, -53, -49, -56, -61, -54, -49, -45, 
-55, -48, -54, -66, -57, -48, -30, -26, -23, -25, -18, -9, -22, -19, -2, 23, 
-3, -22, -23, -1, 5, 9, -4, -37, -54, -49, -39, -45, -45, -26, -15, -33, 
-49, -72, -61, -28, -11, -12, -9, -14, -36, -36, -26, -13, -17, -22, -29, -28, 
-30, -33, -35, -42, -45, -39, -31, -22, -20, -2, -22, -43, -46, -33, -23, -35, 
-30, -11, 0, -3, 3, 14, 18, 24, 22, 35, 38, 31, 46, 46, 45, 43, 
31, 46, 61, 69, 90, 96, 83, 84, 81, 79, 80, 88, 108, 108, 105, 107, 
127, 123, 119, 102, 87, 88, 96, 109, 110, 96, 79, 70, 85, 94, 92, 78, 
69, 69, 54, 44, 34, 25, 16, 14, 16, 7, 13, 25, 8, -10, -15, -13, 
-6, -7, -13, -15, -10, 0, -3, -15, -26, -25, -19, -6, 6, 4, -15, -34, 
-32, -28, -34, -41, -42, -46, -42, -49, -42, -29, -22, -18, -33, -27, -5, -5, 
-22, -38, -40, -39, -32, -29, -8, -2, -1, -8, -20, -28, -23, -18, -23, -19, 
-22, -27, -16, -10, -4, -2, -23, -27, -27, -26, -25, -25, -18, -5, 3, 3, 
0, 1, -8, -12, -5, -7, -12, -30, -36, -42, -36, -32, -11, 1, 7, 1, 
-5, -8, -18, -14, -6, -1, 4, 4, -10, -25, -42, -47, -43, -29, -16, -17, 
-18, -13, -7, -8, -13, -15, -16, -13, -11, -8, -3, 3, };
