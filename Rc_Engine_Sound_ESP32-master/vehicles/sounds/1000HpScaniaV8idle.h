const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 4588;
const signed char samples[] = {
0, -1, -1, 0, 1, 3, 4, 2, -4, -14, -24, -32, -42, -45, -45, -41,
-34, -17, -4, 7, 17, 23, 24, 16, 6, -3, -11, -16, -17, -11, -3, 7, 
19, 31, 43, 45, 41, 28, 10, -11, -41, -54, -61, -59, -48, -30, 5, 30, 
50, 67, 77, 81, 76, 65, 51, 33, 15, -8, -18, -24, -28, -28, -26, -19, 
-10, 1, 12, 22, 35, 41, 47, 51, 53, 52, 47, 43, 40, 40, 42, 45, 
47, 46, 41, 33, 24, 6, -5, -15, -23, -25, -21, -7, 7, 23, 39, 51, 
58, 58, 54, 48, 41, 35, 27, 22, 18, 13, 8, 2, -11, -22, -32, -43, 
-53, -59, -62, -60, -56, -52, -47, -40, -36, -32, -27, -20, -12, -1, 8, 17, 
26, 35, 42, 47, 46, 40, 30, 18, 0, -8, -13, -13, -5, 8, 32, 48, 
59, 66, 67, 60, 49, 37, 25, 15, 9, 9, 12, 17, 23, 27, 30, 31, 
29, 24, 16, 6, -8, -15, -20, -20, -18, -14, -8, -7, -8, -9, -10, -10, 
-7, -4, -1, 4, 10, 20, 26, 32, 37, 39, 39, 33, 28, 22, 14, 6, 
-1, -8, -7, -1, 9, 22, 40, 49, 55, 57, 53, 47, 33, 22, 11, 0, 
-10, -16, -21, -22, -22, -21, -21, -22, -24, -26, -30, -38, -47, -62, -73, -84, 
-93, -102, -111, -120, -122, -121, -117, -110, -95, -86, -77, -69, -63, -57, -50, -44, 
-37, -32, -26, -22, -18, -19, -24, -31, -37, -41, -38, -33, -23, -11, 2, 19, 
28, 33, 36, 35, 30, 23, 20, 16, 12, 9, 4, 2, 0, -1, -2, -1, 
4, 11, 19, 28, 38, 47, 56, 56, 54, 49, 43, 33, 30, 29, 30, 32, 
34, 32, 28, 23, 18, 12, 4, -2, -7, -11, -13, -13, -9, -6, -2, 4, 
11, 18, 30, 35, 37, 40, 40, 36, 32, 27, 22, 17, 12, 5, 2, 0, 
0, 3, 8, 18, 26, 34, 40, 45, 47, 42, 31, 17, 1, -16, -38, -48, 
-54, -54, -52, -49, -44, -41, -37, -31, -23, -8, 2, 11, 19, 24, 26, 19, 
8, -8, -28, -49, -68, -86, -89, -87, -77, -64, -37, -17, 1, 15, 24, 28, 
26, 23, 18, 13, 6, -1, -13, -19, -23, -26, -27, -27, -25, -24, -23, -19, 
-16, -5, 5, 15, 25, 33, 38, 37, 34, 28, 21, 16, 14, 18, 24, 27, 
26, 22, 8, -3, -12, -20, -26, -31, -30, -22, -8, 11, 28, 44, 44, 35, 
18, -5, -29, -61, -75, -79, -73, -61, -43, -14, 3, 16, 26, 30, 28, 24, 
17, 12, 6, 4, 1, 1, 0, -1, -4, -15, -27, -41, -54, -63, -66, -57, 
-46, -30, -14, 0, 12, 21, 21, 18, 10, 3, -7, -12, -14, -15, -14, -11, 
-4, 1, 8, 15, 25, 38, 59, 75, 92, 105, 116, 124, 122, 114, 102, 87, 
72, 51, 42, 36, 32, 30, 27, 23, 20, 17, 17, 18, 20, 23, 25, 28, 
30, 30, 30, 31, 33, 37, 40, 42, 44, 43, 43, 43, 43, 44, 47, 50, 
52, 56, 59, 64, 69, 72, 72, 70, 63, 44, 28, 12, -2, -11, -14, -10, 
-1, 8, 18, 26, 33, 33, 30, 24, 15, 6, -3, -9, -14, -17, -19, -18, 
-15, -10, -3, 4, 12, 24, 32, 40, 46, 49, 49, 46, 44, 40, 35, 28, 
12, -1, -13, -26, -36, -40, -40, -37, -30, -21, -12, -3, 4, 3, 0, -5, 
-10, -12, -9, -3, 1, 2, -2, -16, -31, -47, -64, -77, -85, -81, -70, -55, 
-39, -25, -10, -4, 1, 1, -1, -5, -16, -23, -28, -31, -33, -34, -34, -33, 
-33, -32, -31, -29, -26, -22, -15, -7, 3, 17, 23, 27, 26, 22, 12, 3, 
-6, -16, -24, -29, -33, -31, -25, -17, -11, -6, -6, -12, -22, -36, -52, -72, 
-80, -84, -82, -75, -66, -48, -35, -24, -15, -7, -3, -5, -9, -15, -22, -28, 
-31, -29, -24, -18, -11, -6, -2, -1, 0, 3, 4, 6, 7, 7, 6, 6, 
7, 10, 15, 22, 29, 36, 41, 44, 42, 34, 23, 8, -9, -36, -51, -63, 
-69, -71, -68, -61, -52, -40, -27, -14, 3, 8, 8, 4, -3, -13, -28, -37, 
-43, -49, -54, -58, -60, -59, -55, -46, -34, -14, -1, 11, 20, 25, 26, 17, 
6, -7, -19, -27, -33, -34, -32, -30, -27, -22, -20, -20, -21, -24, -24, -22, 
-17, -11, -4, 2, 8, 14, 16, 16, 14, 11, 8, 2, -1, -3, -3, -2, 
-1, -1, -2, -5, -10, -15, -17, -16, -14, -10, -5, 1, 11, 18, 23, 26, 
28, 28, 28, 28, 27, 24, 20, 11, 7, 2, -1, -2, -2, 0, 1, 2, 
3, 3, 0, -2, -4, -6, -9, -9, -8, -4, 2, 9, 17, 23, 26, 24, 
18, 9, 0, -12, -16, -16, -14, -10, -5, -2, -3, -6, -11, -17, -22, -30, 
-35, -40, -44, -49, -55, -57, -59, -60, -60, -59, -51, -45, -39, -35, -34, -37, 
-45, -50, -54, -57, -58, -52, -46, -36, -26, -19, -14, -15, -19, -26, -33, -38, 
-41, -41, -35, -27, -15, -3, 16, 25, 32, 35, 34, 32, 25, 22, 20, 18, 
17, 17, 18, 19, 20, 22, 22, 18, 15, 11, 7, 4, 0, -4, -6, -7, 
-7, -7, -6, -4, -2, 3, 8, 14, 24, 29, 33, 34, 34, 32, 25, 21, 
15, 10, 5, 0, 0, 2, 7, 11, 16, 19, 18, 15, 9, 1, -7, -19, 
-25, -28, -26, -21, -8, 2, 11, 18, 24, 26, 23, 16, 7, -2, -10, -15, 
-17, -14, -6, 6, 18, 38, 48, 56, 60, 59, 52, 35, 20, 6, -7, -18, 
-27, -28, -21, -7, 12, 34, 68, 87, 103, 116, 124, 125, 114, 98, 79, 56, 
30, 2, -38, -63, -84, -98, -105, -98, -86, -70, -51, -32, -14, 7, 16, 21, 
19, 12, 2, -17, -29, -38, -44, -48, -46, -39, -30, -19, -9, 1, 12, 16, 
18, 21, 21, 18, 13, 7, -1, -9, -18, -34, -46, -59, -73, -82, -87, -82, 
-70, -54, -33, -13, 3, 18, 16, 8, -5, -22, -46, -59, -66, -68, -64, -55, 
-37, -27, -21, -19, -20, -24, -26, -26, -25, -22, -20, -20, -23, -27, -33, -40, 
-45, -45, -40, -30, -15, 2, 28, 42, 50, 52, 47, 38, 22, 15, 14, 20, 
32, 49, 77, 92, 100, 97, 85, 50, 22, -7, -31, -47, -53, -43, -27, -6, 
18, 43, 65, 86, 92, 88, 77, 60, 29, 9, -8, -21, -29, -30, -20, -6, 
12, 32, 48, 60, 64, 59, 51, 40, 31, 23, 24, 26, 31, 38, 45, 54, 
60, 66, 70, 76, 81, 84, 85, 84, 81, 75, 64, 54, 42, 30, 19, 10, 
4, 5, 8, 14, 22, 32, 48, 58, 63, 62, 56, 39, 28, 19, 15, 12, 
12, 14, 16, 19, 20, 21, 21, 18, 16, 15, 16, 19, 24, 26, 25, 20, 
12, 1, -18, -32, -45, -54, -61, -64, -57, -46, -31, -14, 4, 27, 38, 42, 
38, 27, 10, -23, -44, -61, -72, -77, -72, -62, -49, -35, -21, -9, 2, 4, 
3, 1, -2, -5, -10, -12, -14, -14, -11, -4, 2, 6, 8, 8, 5, 1, 
1, 5, 11, 18, 25, 33, 34, 34, 32, 26, 12, 2, -7, -12, -14, -10, 
-2, 3, 4, 2, -5, -13, -27, -35, -41, -44, -43, -36, -29, -21, -16, -15, 
-16, -25, -31, -39, -48, -55, -60, -62, -56, -47, -33, -18, 2, 10, 15, 15, 
11, 8, 3, 2, 2, 3, 5, 8, 16, 20, 23, 25, 24, 17, 11, 2, 
-7, -14, -19, -22, -18, -10, 1, 14, 27, 43, 50, 53, 52, 48, 37, 28, 
19, 9, -1, -11, -26, -34, -41, -45, -44, -39, -23, -9, 7, 21, 31, 41, 
43, 42, 36, 27, 15, -7, -22, -34, -42, -47, -48, -45, -41, -35, -28, -21, 
-10, -4, 2, 7, 11, 16, 24, 30, 35, 39, 41, 39, 34, 25, 13, -2, 
-16, -31, -35, -34, -29, -21, -12, 2, 11, 16, 17, 13, 1, -11, -23, -34, 
-44, -51, -58, -58, -56, -52, -48, -46, -43, -40, -36, -28, -17, 2, 15, 25, 
33, 37, 33, 16, -2, -24, -47, -69, -88, -102, -101, -92, -78, -59, -33, -18, 
-7, 0, 7, 12, 17, 18, 16, 12, 5, -4, -23, -38, -54, -68, -78, -84, 
-81, -74, -63, -51, -39, -20, -12, -6, -2, -2, -4, -8, -12, -17, -23, -29, 
-39, -46, -51, -55, -57, -56, -48, -41, -33, -24, -17, -11, -6, -6, -9, -17, 
-26, -43, -52, -58, -60, -57, -48, -29, -12, 4, 18, 29, 37, 45, 47, 47, 
42, 31, 6, -13, -30, -43, -50, -51, -40, -27, -12, 2, 13, 21, 26, 26, 
24, 20, 17, 11, 8, 5, 0, -5, -11, -17, -19, -18, -13, -6, 9, 20, 
30, 38, 43, 44, 38, 31, 23, 15, 9, 7, 5, 6, 7, 8, 10, 15, 
19, 24, 29, 34, 36, 33, 27, 17, 6, -7, -17, -28, -30, -28, -22, -12, 
4, 15, 25, 31, 33, 30, 22, 16, 11, 11, 14, 20, 32, 40, 45, 47, 
47, 41, 36, 30, 25, 21, 18, 19, 22, 27, 33, 40, 47, 53, 54, 53, 
48, 42, 29, 21, 14, 10, 10, 13, 20, 24, 27, 27, 26, 23, 17, 10, 
3, -4, -9, -10, -7, -4, 0, 4, 8, 14, 16, 17, 17, 16, 14, 7, 
3, -3, -7, -9, -5, 3, 14, 26, 38, 46, 55, 56, 54, 50, 44, 38, 
27, 18, 6, -7, -22, -44, -53, -58, -57, -51, -40, -19, -2, 17, 33, 45, 
51, 50, 44, 37, 30, 26, 27, 29, 29, 23, 13, -2, -33, -54, -72, -86, 
-93, -90, -80, -65, -46, -26, -7, 15, 24, 25, 19, 6, -14, -53, -78, -101, 
-117, -124, -117, -102, -80, -54, -25, 2, 37, 51, 55, 50, 35, 15, -20, -43, 
-62, -76, -83, -80, -70, -56, -40, -25, -12, 1, 5, 5, 1, -6, -13, -21, 
-24, -23, -22, -19, -14, -12, -10, -10, -12, -16, -23, -27, -31, -34, -36, -36, 
-31, -25, -17, -8, 0, 8, 10, 9, 4, -1, -7, -13, -13, -10, -5, 2, 
11, 28, 41, 54, 67, 77, 78, 70, 56, 40, 22, 6, -11, -18, -20, -16, 
-5, 11, 41, 60, 76, 87, 92, 89, 83, 76, 71, 66, 61, 53, 45, 33, 
19, 6, -6, -21, -27, -28, -24, -16, 3, 16, 26, 33, 35, 34, 26, 20, 
15, 12, 13, 17, 23, 23, 19, 10, -3, -23, -32, -36, -32, -19, 1, 40, 
68, 93, 112, 125, 124, 111, 89, 61, 33, 9, -16, -24, -23, -15, 0, 20, 
51, 69, 84, 94, 98, 92, 83, 71, 54, 35, 18, -4, -12, -14, -10, 0, 
12, 30, 40, 47, 51, 52, 48, 41, 32, 24, 18, 14, 15, 19, 25, 30, 
33, 34, 28, 17, 3, -11, -22, -30, -27, -18, -6, 5, 16, 27, 31, 32, 
32, 30, 28, 25, 22, 18, 12, 2, -12, -19, -24, -25, -23, -16, 0, 14, 
30, 47, 62, 76, 91, 95, 94, 87, 74, 47, 27, 7, -13, -30, -43, -54, 
-54, -49, -38, -22, -4, 22, 34, 39, 39, 34, 17, 4, -7, -15, -18, -17, 
-9, -2, 6, 15, 24, 30, 32, 27, 19, 7, -7, -25, -33, -38, -39, -38, 
-36, -32, -30, -27, -22, -15, -8, 4, 12, 16, 15, 10, -11, -29, -48, -66, 
-79, -88, -86, -78, -63, -46, -29, -11, -6, -6, -12, -21, -31, -45, -51, -55, 
-57, -57, -55, -53, -52, -52, -52, -52, -48, -42, -34, -26, -18, -12, -7, -7, 
-9, -13, -17, -21, -21, -19, -17, -16, -16, -21, -26, -31, -36, -43, -51, -62, 
-69, -76, -80, -80, -77, -66, -57, -49, -42, -35, -25, -18, -11, -4, 2, 6, 
7, 4, -1, -7, -15, -23, -35, -40, -43, -43, -42, -37, -33, -29, -23, -19, 
-16, -13, -13, -14, -18, -25, -32, -44, -52, -57, -60, -61, -57, -52, -45, -39, 
-33, -30, -33, -40, -50, -61, -72, -81, -86, -83, -76, -64, -53, -37, -30, -27, 
-27, -28, -30, -31, -29, -23, -16, -8, 0, 11, 18, 24, 28, 30, 33, 33, 
31, 28, 24, 19, 11, 7, 5, 3, 1, 1, 5, 11, 19, 30, 42, 60, 
68, 73, 72, 68, 62, 51, 46, 41, 37, 35, 34, 34, 33, 30, 26, 23, 
20, 19, 17, 15, 14, 11, 7, 3, -4, -14, -26, -44, -53, -58, -57, -50, 
-39, -17, -1, 13, 25, 32, 33, 29, 20, 8, -4, -16, -31, -38, -39, -35, 
-27, -17, -2, 3, 3, 2, -1, -4, -8, -9, -8, -4, -1, 5, 8, 7, 
6, 3, -2, -11, -16, -19, -21, -21, -18, -8, -2, 3, 7, 6, 1, -4, 
-10, -14, -17, -16, -9, -2, 6, 13, 18, 20, 15, 11, 5, 0, -5, -7, 
-6, -4, 1, 5, 9, 14, 15, 14, 13, 10, 6, 1, 0, 0, 1, 2, 
3, 4, 3, 2, -1, -4, -10, -13, -16, -19, -22, -26, -29, -31, -33, -34, 
-35, -34, -31, -23, -12, 1, 15, 35, 45, 49, 48, 43, 33, 12, -3, -16, 
-27, -37, -46, -49, -49, -47, -44, -38, -27, -18, -8, 1, 9, 15, 13, 8, 
1, -10, -21, -35, -42, -47, -50, -50, -48, -40, -33, -24, -14, -4, 13, 21, 
26, 30, 32, 32, 28, 23, 17, 11, 5, 2, -4, -6, -5, -3, 1, 11, 
17, 23, 27, 27, 24, 12, 2, -9, -17, -22, -21, -9, 3, 16, 27, 34, 
35, 29, 19, 9, -1, -8, -7, 2, 17, 34, 53, 68, 83, 87, 85, 77, 
63, 37, 19, 1, -14, -26, -35, -40, -39, -34, -29, -25, -22, -25, -30, -39, 
-50, -62, -77, -83, -87, -85, -80, -72, -52, -35, -17, 1, 16, 30, 44, 49, 
53, 54, 49, 35, 22, 9, 1, -3, -4, -4, -6, -12, -22, -32, -44, -57, 
-60, -58, -51, -41, -19, -5, 8, 16, 18, 14, 4, -2, -6, -8, -10, -10, 
-8, -5, -3, 1, 5, 9, 12, 16, 21, 27, 30, 27, 20, 8, -8, -23, 
-39, -40, -33, -17, 5, 31, 74, 99, 117, 126, 125, 114, 81, 53, 24, -3, 
-25, -46, -49, -44, -32, -19, -8, 1, 0, -6, -14, -24, -34, -47, -51, -51, 
-46, -38, -23, -14, -5, 0, 2, 2, 1, 0, -1, -3, -6, -9, -15, -17, 
-19, -19, -17, -14, -13, -14, -15, -19, -22, -27, -31, -32, -29, -20, -6, 24, 
43, 59, 72, 82, 85, 81, 71, 55, 37, 19, -1, -8, -8, -4, 4, 13, 
30, 44, 58, 72, 82, 85, 78, 64, 46, 26, 8, -16, -28, -34, -36, -33, 
-25, -9, 4, 16, 27, 36, 45, 48, 50, 53, 54, 57, 62, 65, 66, 65, 
61, 53, 39, 27, 16, 5, -4, -15, -19, -21, -19, -14, -5, 14, 30, 45, 
58, 68, 73, 72, 67, 58, 46, 33, 14, 3, -5, -8, -9, -8, -1, 2, 
4, 5, 4, 2, 1, 0, -1, -2, -4, -9, -11, -10, -7, 0, 11, 34, 
50, 64, 73, 74, 62, 48, 32, 15, 0, -10, -14, -8, 5, 21, 37, 50, 
57, 52, 42, 29, 17, 3, -2, -3, 0, 6, 14, 27, 30, 29, 22, 10, 
-3, -24, -33, -37, -36, -29, -13, -1, 7, 9, 6, -3, -17, -26, -32, -35, 
-34, -29, -15, -4, 7, 13, 14, 4, -9, -22, -36, -47, -54, -61, -60, -54, 
-43, -29, -14, 2, 7, 7, 3, -3, -17, -25, -33, -41, -45, -47, -41, -36, 
-30, -25, -22, -17, -9, -5, -2, -2, -5, -13, -19, -27, -34, -42, -50, -60, 
-63, -63, -59, -53, -45, -37, -34, -34, -35, -38, -43, -46, -51, -56, -60, -64, 
-66, -65, -60, -55, -48, -40, -29, -22, -16, -11, -5, 3, 9, 15, 19, 21, 
20, 14, 9, 3, -4, -10, -18, -22, -23, -22, -18, -13, -7, -8, -11, -18, 
-27, -38, -54, -60, -64, -62, -55, -37, -23, -9, 3, 12, 16, 13, 9, 4, 
0, -4, -7, -12, -16, -20, -24, -27, -30, -31, -30, -28, -23, -15, -4, 2, 
5, 4, 0, -8, -21, -29, -33, -33, -29, -15, -3, 10, 22, 32, 37, 37, 
34, 31, 28, 25, 21, 15, 11, 7, 6, 6, 3, 2, 0, -1, -2, -4, 
-8, -11, -13, -16, -16, -16, -16, -16, -17, -18, -17, -13, -9, -5, -2, 1, 
3, 4, 3, 1, -2, -5, -7, -10, -10, -9, -7, -3, 5, 10, 14, 17, 
16, 13, 2, -9, -22, -34, -46, -55, -62, -61, -55, -45, -32, -10, 3, 12, 
19, 22, 21, 14, 8, 2, -3, -6, -8, -7, -5, -4, -4, -4, -4, -2, 
0, 3, 5, 5, -1, -7, -14, -20, -26, -35, -38, -38, -35, -29, -20, -4, 
7, 18, 27, 35, 41, 44, 42, 36, 28, 18, 3, -5, -11, -14, -13, -7, 
5, 14, 22, 28, 31, 31, 28, 24, 22, 22, 24, 34, 44, 55, 66, 73, 
76, 72, 63, 49, 34, 18, 4, -11, -16, -15, -9, -2, 9, 14, 16, 16, 
16, 13, 8, 2, -6, -15, -22, -26, -27, -23, -17, -10, -2, 12, 19, 24, 
28, 30, 31, 34, 37, 42, 47, 53, 59, 64, 64, 62, 57, 51, 41, 36, 
33, 31, 31, 32, 34, 36, 38, 43, 49, 58, 76, 88, 98, 105, 106, 98, 
87, 72, 58, 46, 37, 34, 36, 39, 43, 45, 43, 31, 18, 4, -8, -19, 
-26, -26, -22, -15, -6, 2, 11, 11, 7, 2, -5, -13, -22, -26, -28, -26, 
-21, -6, 4, 12, 16, 17, 16, 7, 0, -7, -13, -15, -12, -6, 0, 4, 
4, 0, -12, -21, -29, -35, -37, -34, -25, -14, -2, 10, 19, 26, 23, 13, 
-2, -21, -41, -68, -81, -88, -89, -85, -77, -60, -48, -40, -35, -34, -42, -52, 
-64, -76, -88, -97, -102, -97, -86, -69, -48, -28, -5, 5, 10, 11, 9, -2, 
-14, -28, -43, -57, -68, -80, -85, -87, -85, -81, -72, -54, -39, -23, -9, 2, 
9, 10, 9, 6, 2, -1, -5, -5, -4, -3, -1, 0, -1, -3, -7, -11, 
-16, -22, -23, -21, -15, -7, 4, 22, 33, 43, 50, 55, 54, 45, 34, 21, 
8, -4, -22, -29, -34, -37, -36, -31, -20, -11, -4, 0, 0, -3, -11, -16, 
-21, -24, -27, -30, -30, -29, -28, -27, -27, -23, -20, -16, -9, -2, 6, 19, 
27, 33, 39, 41, 38, 33, 25, 15, 6, -1, -5, -1, 7, 17, 29, 43, 
49, 50, 48, 43, 35, 25, 22, 22, 27, 35, 44, 61, 73, 84, 91, 95, 
91, 83, 74, 64, 58, 54, 55, 59, 62, 63, 58, 48, 19, -3, -25, -40, 
-48, -44, -32, -14, 5, 23, 36, 43, 39, 30, 19, 7, -3, -10, -9, -3, 
5, 11, 16, 18, 20, 22, 27, 33, 44, 52, 60, 67, 69, 66, 55, 45, 
35, 28, 25, 25, 29, 36, 45, 53, 59, 65, 66, 65, 63, 57, 49, 37, 
27, 20, 15, 13, 15, 17, 17, 15, 11, 5, -9, -22, -37, -51, -62, -67, 
-59, -45, -25, -3, 17, 40, 45, 42, 30, 14, -6, -35, -53, -67, -76, -80, 
-76, -61, -46, -28, -12, 4, 18, 21, 20, 15, 8, 2, -5, -8, -10, -11, 
-10, -9, -8, -7, -7, -6, -6, -8, -8, -7, -6, -5, -4, -5, -9, -15, 
-22, -31, -42, -46, -49, -50, -46, -39, -21, -7, 7, 19, 25, 28, 23, 15, 
4, -10, -24, -39, -43, -40, -34, -25, -16, -7, -6, -10, -18, -31, -46, -62, 
-69, -72, -70, -64, -50, -40, -32, -27, -25, -28, -37, -46, -54, -62, -68, -71, 
-68, -64, -58, -53, -51, -55, -59, -64, -68, -70, -69, -60, -49, -34, -14, 6, 
23, 42, 46, 43, 33, 18, -10, -29, -46, -59, -67, -71, -68, -63, -55, -45, 
-33, -21, -4, 4, 8, 9, 8, 0, -5, -11, -15, -17, -18, -15, -11, -6, 
-1, 5, 11, 19, 21, 20, 17, 13, 5, 0, -3, -4, -4, -1, 4, 7, 
11, 13, 15, 18, 22, 25, 26, 25, 20, 8, -1, -9, -13, -15, -17, -17, 
-15, -12, -7, -1, 5, 13, 16, 20, 25, 31, 45, 53, 60, 64, 63, 59, 
51, 45, 37, 29, 21, 7, -1, -9, -17, -23, -25, -22, -15, -5, 7, 20, 
30, 41, 44, 44, 39, 32, 15, 1, -13, -28, -39, -48, -53, -51, -47, -39, 
-30, -21, -10, -6, -6, -9, -13, -20, -23, -23, -22, -19, -14, -7, -2, 3, 
8, 11, 11, 9, 8, 8, 9, 12, 18, 21, 22, 21, 19, 16, 8, 3, 
-4, -10, -14, -19, -25, -26, -25, -21, -17, -13, -10, -8, -6, -5, -5, -7, 
-10, -14, -18, -21, -21, -20, -18, -15, -10, -3, 10, 18, 25, 28, 28, 25, 
14, 7, -2, -11, -17, -19, -12, -2, 10, 24, 38, 53, 57, 55, 47, 34, 
18, -4, -17, -25, -27, -23, -16, 2, 14, 25, 32, 35, 32, 25, 15, 4, 
-5, -11, -9, -3, 5, 13, 20, 24, 25, 22, 17, 10, 2, -6, -8, -7, 
-4, -1, 3, 9, 13, 19, 24, 28, 31, 30, 28, 23, 19, 14, 12, 11, 
12, 16, 21, 29, 42, 48, 51, 50, 46, 36, 31, 28, 25, 25, 25, 29, 
31, 32, 30, 24, 16, 1, -9, -16, -20, -22, -18, -15, -14, -15, -20, -26, 
-40, -49, -57, -62, -65, -64, -58, -49, -40, -32, -24, -16, -14, -15, -16, -20, 
-27, -38, -44, -50, -53, -53, -49, -38, -27, -14, -2, 9, 18, 19, 15, 9, 
1, -7, -20, -26, -32, -38, -46, -54, -70, -82, -95, -108, -119, -127, -124, -113, 
-96, -74, -50, -19, -4, 3, 3, -6, -20, -47, -60, -67, -68, -64, -54, -49, 
-45, -43, -44, -45, -46, -47, -46, -43, -39, -31, -18, -9, -3, 0, 2, 4, 
5, 7, 10, 15, 21, 29, 30, 26, 16, 2, -14, -36, -45, -49, -48, -43, 
-30, -19, -4, 11, 27, 39, 50, 49, 41, 29, 12, -13, -28, -38, -42, -39, 
-29, -5, 16, 34, 48, 56, 57, 45, 32, 17, 1, -12, -23, -23, -17, -4, 
11, 24, 37, 40, 38, 33, 25, 15, 3, -4, -7, -6, -1, 11, 19, 28, 
35, 39, 41, 39, 36, 35, 36, 40, 46, 58, 65, 71, 74, 75, 69, 62, 
54, 49, 50, 54, 62, 67, 68, 67, 65, 62, 59, 56, 54, 53, 52, 52, 
52, 50, 47, 41, 32, 15, 4, -6, -14, -19, -20, -14, -4, 9, 22, 35, 
47, 51, 50, 43, 32, 17, -5, -18, -29, -36, -38, -37, -33, -32, -33, -34, 
-35, -35, -34, -32, -27, -19, -9, 8, 19, 29, 37, 42, 47, 48, 46, 42, 
36, 32, 28, 27, 26, 26, 25, 22, 16, 9, 0, -10, -22, -31, -39, -39, 
-37, -33, -28, -24, -24, -26, -32, -40, -48, -58, -62, -62, -58, -53, -44, -38, 
-33, -28, -22, -16, -10, -8, -11, -18, -29, -43, -61, -70, -74, -72, -67, -50, 
-36, -22, -6, 10, 25, 46, 58, 67, 71, 71, 67, 50, 34, 18, 2, -12, 
-25, -27, -23, -14, -3, 11, 34, 49, 61, 67, 67, 62, 45, 30, 15, 1, 
-8, -14, -11, -3, 9, 25, 42, 68, 83, 94, 100, 100, 94, 77, 62, 44, 
28, 14, -4, -13, -21, -27, -32, -37, -43, -45, -44, -40, -33, -25, -11, -4, 
2, 5, 7, 10, 13, 15, 16, 16, 13, 8, 5, -1, -6, -10, -15, -22, 
-26, -28, -29, -29, -24, -20, -15, -10, -4, 3, 15, 22, 26, 24, 16, 4, 
-18, -32, -41, -46, -46, -39, -29, -17, -5, 7, 14, 22, 23, 22, 21, 18, 
14, 10, 11, 13, 17, 20, 25, 25, 23, 17, 9, -1, -16, -25, -31, -35, 
-37, -35, -31, -28, -24, -21, -21, -25, -30, -37, -44, -49, -51, -45, -37, -24, 
-11, 3, 18, 25, 28, 27, 24, 19, 11, 6, 1, -3, -5, -6, -6, -5, 
-4, -2, 0, 2, 0, -2, -7, -12, -15, -14, -11, -9, -8, -8, -8, -10, 
-10, -10, -11, -14, -19, -21, -22, -21, -20, -19, -19, -20, -21, -22, -22, -22, 
-20, -17, -11, -5, -1, -1, -5, -11, -17, -23, -25, -28, -29, -28, -27, -23, 
-18, -8, 1, 8, 14, 19, 24, 26, 27, 26, 25, 22, 17, 12, 5, -4, 
-14, -24, -35, -39, -40, -36, -27, -10, 2, 12, 20, 25, 26, 23, 18, 11, 
7, 5, 5, 9, 12, 14, 14, 11, 0, -7, -15, -22, -25, -24, -14, -4, 
8, 18, 28, 35, 39, 39, 38, 35, 33, 32, 33, 35, 38, 40, 40, 38, 
35, 33, 31, 28, 24, 22, 20, 20, 21, 23, 27, 29, 29, 25, 21, 16, 
7, 3, -1, -4, -4, 1, 8, 17, 27, 35, 40, 45, 44, 42, 36, 28, 
19, 4, -5, -10, -12, -11, -4, 3, 12, 20, 27, 33, 39, 43, 47, 50, 
50, 49, 41, 32, 23, 14, 3, -12, -19, -24, -27, -27, -24, -13, -3, 8, 
20, 30, 37, 41, 40, 38, 37, 36, 35, 35, 35, 34, 34, 36, 40, 44, 
48, 51, 53, 50, 43, 35, 24, 12, 0, -20, -34, -47, -59, -70, -78, -83, 
-82, -77, -69, -59, -48, -30, -20, -12, -9, -10, -18, -25, -33, -40, -43, -44, 
-36, -27, -18, -10, -6, -7, -17, -30, -45, -61, -77, -91, -92, -88, -79, -64, 
-47, -18, 2, 20, 35, 43, 45, 35, 23, 6, -13, -31, -60, -75, -87, -96, 
-102, -106, -111, -111, -109, -102, -91, -68, -50, -31, -14, -1, 6, -1, -13, -31, 
-50, -68, -87, -109, -120, -125, -124, -120, -110, -103, -100, -97, -97, -98, -101, -100, 
-95, -84, -66, -48, -22, -10, -5, -6, -10, -19, -23, -25, -25, -22, -18, -13, 
-14, -18, -26, -36, -43, -41, -33, -20, -4, 12, 31, 38, 37, 30, 17, 0, 
-24, -39, -49, -53, -51, -45, -28, -15, -2, 11, 25, 42, 49, 52, 52, 49, 
45, 35, 26, 17, 9, 4, 4, 11, 21, 33, 46, 59, 71, 74, 71, 63, 
51, 37, 16, 6, 0, 1, 7, 18, 39, 53, 65, 75, 81, 85, 82, 75, 
66, 56, 46, 31, 22, 15, 10, 8, 11, 23, 35, 48, 61, 71, 77, 74, 
64, 51, 37, 25, 19, 22, 31, 45, 58, 71, 83, 86, 85, 80, 74, 67, 
66, 69, 75, 85, 95, 107, 111, 109, 101, 87, 58, 38, 20, 6, -2, -4, 
0, 7, 15, 25, 35, 43, 50, 50, 47, 43, 41, 40, 44, 51, 57, 64, 
66, 63, 59, 55, 51, 48, 46, 43, 42, 40, 34, 24, 1, -16, -32, -44, 
-48, -45, -30, -13, 6, 29, 53, 75, 103, 114, 118, 115, 107, 86, 70, 52, 
35, 22, 12, 6, 6, 9, 14, 19, 24, 26, 24, 17, 9, 1, -7, -10, 
-10, -7, 1, 13, 35, 47, 56, 58, 52, 37, 0, -30, -61, -88, -106, -115, 
-109, -95, -73, -48, -22, 8, 19, 22, 18, 11, 4, -5, -9, -11, -12, -12, 
-8, -4, -1, 1, 1, -1, -4, -7, -9, -12, -13, -15, -17, -19, -22, -29, 
-36, -46, -50, -50, -47, -40, -31, -12, 1, 12, 18, 17, 13, -1, -12, -23, 
-31, -36, -37, -35, -35, -36, -40, -46, -58, -64, -68, -68, -65, -51, -37, -23, 
-9, 1, 5, 1, -7, -18, -32, -46, -58, -72, -76, -77, -76, -73, -68, -64, 
-60, -55, -50, -44, -34, -29, -23, -20, -17, -15, -8, 0, };
