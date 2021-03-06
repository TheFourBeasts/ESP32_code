const unsigned int fanSampleRate = 22050;
const unsigned int fanSampleCount = 3221;
const signed char fanSamples[] = {
0, 31, 25, -27, -16, 25, 2, 38, 17, -42, -55, -55, 4, 31, 42, 17,
-31, -25, 2, 15, 7, -1, -17, -1, 19, 22, 18, 23, 4, -49, -15, 11, 
49, 61, 32, 6, -10, 31, 21, -38, -54, -53, -29, -8, -34, -29, -2, -15, 
10, -10, -8, 51, 4, 14, 24, 17, 40, 56, 13, -64, -75, -31, -26, -29, 
-4, -26, -27, 2, -34, -1, 36, 30, 35, 19, 6, 50, 61, 33, 2, -7, 
2, 26, 25, -10, -18, -33, -29, -2, -14, 10, 30, -73, -37, 31, 34, 3, 
-23, -30, 3, -13, -18, 16, -27, -55, -29, 42, 39, -4, 36, 49, 24, 10, 
29, 31, 56, 29, -20, -30, -7, 23, -21, -78, -90, -44, -46, -59, -3, 19, 
31, 12, 2, 65, 38, -21, -24, -11, 10, 7, -2, 17, -16, -18, 34, -1, 
12, 34, 31, -5, -30, 3, 24, 6, -15, -57, -70, -52, -14, -4, -10, -34, 
-35, 3, 41, 44, 49, 37, -21, -13, 22, 39, 86, 22, -43, -46, -23, 23, 
34, 9, -48, -52, 8, -41, 10, 59, 55, 19, -42, 12, 31, -11, -56, -52, 
-34, -33, -15, -12, -35, -50, 25, 28, -7, 22, 96, 113, 41, 42, 87, 77, 
37, 4, -83, -68, -50, -41, -34, -84, -93, -72, -40, -14, 21, 54, -7, -12, 
23, 21, 50, 6, -23, -30, -51, 5, -1, -8, 11, -13, -20, -37, 19, 54, 
36, 16, 26, 81, 37, -21, -14, -36, -50, 5, -28, -55, -52, -12, 2, -31, 
-2, 22, 44, 65, 58, -17, 1, 43, 27, 2, -21, -36, -49, -29, -12, -54, 
-11, 5, -9, 24, 46, 61, 65, 19, -2, 26, 29, -12, -64, -93, -33, -19, 
-26, 14, -24, -64, -47, 43, 7, 0, 42, 12, -2, 12, 48, 73, 42, -14, 
-47, -71, -16, 30, -8, -47, -36, 27, 13, 16, 44, 44, 28, -16, 5, -2, 
-27, -30, -25, -49, -66, -57, -7, 48, 29, -21, -28, 19, 52, 69, 31, 41, 
18, -22, 11, 10, 5, -14, -51, -54, -27, -23, -6, 9, -31, -18, -5, 50, 
55, 7, 6, -21, -28, 19, 39, 6, -18, 3, -29, -14, -8, -5, 7, -10, 
-25, -19, 3, 34, 5, -20, 30, 4, 22, 31, 6, 15, -2, 2, 8, 42, 
44, -28, -18, -51, -63, -45, -1, 25, -45, -49, -13, 2, 16, 10, -1, -6, 
-10, -2, -17, -22, 19, 51, 4, -30, 11, 20, 45, 39, 33, 39, 40, 16, 
-11, -33, -65, -56, -29, 8, -33, -61, 21, -14, -38, 18, 35, 41, 42, 16, 
9, 10, -7, -42, -64, -13, 5, -4, 18, -7, 12, -15, -17, 51, 61, 19, 
-46, -6, 46, 9, -9, -43, -35, -24, -20, -14, 6, 20, -15, -36, -20, -1, 
55, 35, 22, 29, 23, 26, 0, 26, 29, 7, -17, -29, -2, -21, -41, -37, 
-54, -22, -5, 7, 58, 43, 4, 20, 42, 45, 4, -39, -50, 3, 37, 38, 
18, -39, -30, -57, -94, -55, -3, 36, 34, 29, 25, 32, 53, 25, -9, -13, 
13, 22, -6, -40, -48, -15, 10, -27, -36, -9, 19, 6, 0, 51, 29, 10, 
18, 23, -27, -85, -48, -15, -4, -34, -56, -37, 54, 108, 86, 59, 41, 10, 
3, 8, 31, 16, -25, -66, -92, -25, 36, 23, 11, -31, -19, -24, -8, 39, 
50, 39, 5, -1, -18, -68, -88, -59, -14, 11, 17, 6, -5, 20, 33, 25, 
18, 26, 52, 15, -43, -39, 7, 33, -9, -15, -37, -54, 8, 52, 48, -4, 
-27, -8, 27, 38, 36, 17, -22, -44, 8, 31, 28, -15, -45, -5, -4, -29, 
-30, 1, 4, -21, -26, -18, 18, 30, 22, 6, -1, 11, -4, 4, 27, 28, 
3, 17, 32, -40, -75, -56, -39, -47, -29, 14, 27, 69, 43, 3, 53, 52, 
46, 22, -20, -15, -28, -51, -50, -60, -68, -40, 15, 39, 58, 36, 63, 75, 
-20, 20, 26, 22, 0, -30, -55, -49, -10, -5, -25, -45, -54, -6, 38, 6, 
6, -11, -24, 37, 39, 27, 35, -5, 0, -16, -28, 18, 32, -65, -64, -49, 
-3, 52, 35, 17, -6, 6, 28, 7, -5, 6, -30, -47, -42, -17, 13, -31, 
16, 50, 24, -1, 14, 41, 28, 41, 22, -4, 24, 5, -33, -41, -36, -22, 
8, -34, -55, -42, -21, -11, 29, 56, 41, 37, 37, 33, 29, 42, -3, -13, 
-12, -37, -23, -9, -12, -52, -74, -40, 5, -13, -7, 76, 30, 14, 5, -17, 
54, 26, -1, -26, -50, -41, 1, 20, -8, -41, -29, 9, 3, 71, 97, 15, 
-14, 21, -3, -17, -30, -30, 1, -29, -34, -4, -35, -39, -11, -21, 8, 18, 
20, 5, 70, 41, 0, 24, 5, -34, -31, 16, 21, -4, -4, 4, -47, -48, 
10, 32, 23, 44, 53, 16, -29, -20, 1, 16, -12, -66, -72, -32, 15, 14, 
-12, -29, -21, -6, 69, 52, 49, 87, 35, 15, 30, 17, -26, -93, -95, -65, 
-46, -54, -13, -11, -57, -38, 19, 89, 77, 30, 8, 61, 48, 21, 48, 11, 
-24, 19, -34, -45, 2, -29, -43, -6, -5, -31, -53, -14, -10, -35, 9, 56, 
66, 50, 1, 23, 39, 15, -18, -20, -30, -47, -27, -20, -50, -1, 33, 31, 
37, 36, 46, 19, -9, -16, 5, 16, 8, -7, -17, 13, 5, 2, -26, -33, 
-15, -30, -51, -72, -1, 44, 47, 41, 32, 0, -9, 14, 23, 8, -33, -88, 
-59, -25, 23, 93, 64, 25, 28, 9, -11, 5, -21, -7, -44, -69, -21, -8, 
-1, -14, 2, -19, -47, 28, 38, 32, 30, 15, 41, 58, 21, 28, -12, -36, 
-12, -16, -2, -36, -79, -88, -56, -1, 40, 64, 41, -11, 24, 74, 74, 23, 
5, 11, -39, -20, -1, -32, -75, -89, -52, -17, -13, -1, 39, 45, 58, 69, 
55, 48, 49, -30, -54, -26, -11, 17, -27, -32, 4, -17, -35, -7, 28, 19, 
-20, 0, 38, 10, -8, -4, -16, -34, -29, -34, 23, 25, -10, 3, -27, 31, 
35, 19, 60, 50, 28, 12, -30, -34, -4, 2, -47, -68, -17, -24, -83, -64, 
-42, 9, 18, 1, 29, 35, 21, 3, 7, 39, 70, 51, 38, 12, 22, 47, 
10, -15, -37, -61, -69, -59, -18, 14, -11, -37, 24, 39, 1, 38, 30, 24, 
-4, -43, 3, 17, 31, 10, -31, 3, 62, 40, 1, 7, -4, 8, 6, -39, 
-46, -35, -39, -63, -59, -6, -5, -31, -58, -49, 17, 62, 68, 50, 90, 105, 
84, 95, 44, -10, -6, -23, -32, -46, -55, -74, -41, -53, -49, -16, -22, -12, 
-43, 18, 84, 65, 70, 12, -14, 6, 1, -7, -7, -17, 16, 34, -24, -49, 
-8, 9, 5, -25, -13, -13, 12, 47, 17, -4, -50, -48, -3, -30, -85, -100, 
-29, 31, 61, 94, 69, 72, 82, 24, 8, 10, 48, 56, -26, -29, -35, -60, 
-29, -20, -88, -42, -15, -27, -5, 34, 17, 25, 53, 57, 41, -17, 1, -8, 
-34, -22, -47, 0, 19, -49, -66, -15, 45, 40, 49, 15, -15, 38, 16, 3, 
-19, -57, 2, 30, -40, -17, -4, -3, 11, -5, -9, 41, 59, 33, 11, 0, 
15, 0, -37, -56, -51, -25, -36, -62, -76, -80, -24, -2, 9, 56, 84, 90, 
57, 6, 31, 84, 89, 46, -77, -57, -24, -39, -7, -2, -15, -1, -60, -110, 
-51, 51, 76, 27, -21, -22, 5, 76, 58, 29, -5, -24, -56, -68, -44, -41, 
-9, 31, -6, 34, 23, 15, 47, 45, 53, 27, 5, -40, -58, -14, 12, -9, 
-25, -26, -51, -96, -89, 2, 66, 54, 28, 35, 10, 54, 112, 106, 36, -24, 
-44, -87, -95, -60, 1, -19, -62, -52, -41, -31, 31, 53, 27, 30, 35, 31, 
29, 25, 24, -1, -25, -19, 15, -22, -52, -36, -27, 20, 25, 6, 16, 32, 
23, 50, 51, 21, -14, -41, -51, -65, -42, 2, -16, -36, -28, -16, 23, 57, 
39, -11, 61, 93, 72, 45, -1, -26, -47, -92, -100, -34, 21, -31, -79, -65, 
4, 53, 59, 54, 7, 30, 85, 52, 3, 20, 40, 17, -35, -67, -24, -45, 
-80, -59, -60, -11, 36, 67, 74, 21, 14, 32, 40, 62, 10, -65, -55, -59, 
-26, 35, -27, -76, -23, -2, 15, 22, 46, 42, 35, 56, 35, 20, 39, 11, 
2, -34, -58, -30, -22, 17, -44, -90, -4, 43, 27, -12, -29, 7, 12, 2, 
29, 47, 37, 1, -30, -31, -11, -26, -44, -49, -55, -50, 70, 66, 18, -3, 
32, 75, 6, -8, -25, -14, 5, -57, -51, -15, -17, -88, -76, 7, 34, 68, 
64, 14, 30, 126, 91, 14, 9, 19, -5, -28, -51, -69, -44, -32, -66, -78, 
-82, 1, 97, 47, 6, 23, 69, 85, 49, 8, 24, -3, -24, -18, -42, -22, 
-37, -38, -50, -72, 19, 34, 18, -8, 6, 11, -28, 2, 6, 11, -3, -40, 
-32, -31, 12, 43, 34, 0, 14, 70, 63, 19, 2, 22, 35, 3, -18, -38, 
-88, -48, -69, -94, -64, -61, 12, 29, -2, 6, 31, 60, 82, 63, 60, 54, 
42, 14, 37, 60, 24, -26, -54, -1, 12, 7, 13, -18, -38, -35, -21, -8, 
-16, -6, -10, 7, -3, -16, -37, -109, -60, 1, 34, 50, 20, -9, 23, 96, 
98, 38, 0, 19, 29, 13, -5, -52, -71, -48, -45, -46, -54, -50, -21, 49, 
20, -25, 20, 89, 40, 14, 17, 18, 20, 19, 47, -1, -36, 15, 0, -43, 
-76, -86, -54, -32, 7, 23, 12, -30, -43, 28, 68, 64, 21, -29, -51, -43, 
28, 20, -9, 16, -13, -30, -23, 6, 42, 20, 23, 26, 60, 56, 14, 21, 
22, -71, -99, -87, -92, -58, -30, -47, -49, -23, 47, 95, 82, 32, 50, 54, 
61, 74, 29, 9, 9, -38, -89, -78, -42, -25, -42, -55, -48, 8, 103, 38, 
-24, 4, 28, 7, 11, 1, -1, -13, -22, -61, -59, -33, -21, -14, -16, 48, 
26, 37, 91, 77, 30, 16, 15, 14, -10, -53, -53, -27, -15, -64, -88, -40, 
-60, -17, 14, 52, 82, 46, 52, 60, 60, 13, 18, 39, 17, -10, -67, -84, 
-88, -77, -43, -15, 1, 17, 46, 70, 68, 65, 67, 35, 15, -5, -14, -9, 
-15, -45, -41, -37, -61, -49, -60, -31, 15, 4, 27, 30, 4, 73, 80, 56, 
29, 6, -20, -59, -18, 33, 11, -29, -71, -64, -34, -12, 38, 72, 18, -32, 
-7, 28, 22, 31, 13, -15, -15, -29, -29, -39, -31, -26, -21, 22, 14, 34, 
-4, 4, 63, 59, 45, -14, -29, -19, -11, -2, -18, -15, -35, -47, -25, -16, 
19, 40, 14, -18, -1, 27, 24, 25, -7, -9, 2, -48, -52, -29, 15, 32, 
-5, 8, 8, 8, 13, -17, 12, 9, 27, 34, 1, -1, 24, -6, -28, -12, 
0, 4, -57, -32, -14, -45, -5, 36, 12, -28, -16, 40, 29, 5, 12, 19, 
11, -10, 0, 46, 31, 7, -20, -63, 2, 41, 31, 2, -29, -37, -15, 25, 
38, 34, 6, -58, -87, -37, -3, 19, 19, -61, -19, 19, 45, 57, -7, 35, 
13, -11, 18, -26, 16, 109, 6, -54, -32, -11, -57, -14, 41, 37, 16, -18, 
2, 20, -3, -1, 34, 28, -22, -23, -51, -39, -3, 18, 6, -36, -51, -33, 
-22, 48, 52, -4, -19, -23, -7, 28, 25, 32, 7, -6, 8, -18, 16, 25, 
-4, -21, -14, 40, 25, -16, -8, 23, 9, -24, 0, 57, 33, -47, -64, -43, 
-8, -6, -28, -81, -40, 34, 20, -23, 15, 16, 27, 34, 15, 17, 26, 56, 
41, -8, -55, -72, 37, 15, -35, -27, -26, 16, 58, 22, 10, 30, 22, -1, 
-43, -15, 39, 39, -16, -41, -44, -41, -7, -26, -3, 10, 22, 33, 24, 50, 
20, 21, 38, 19, 12, -25, -69, -39, -34, -26, -32, -55, -6, 0, 1, 43, 
60, 23, 11, 31, 51, 53, 20, 26, 28, -6, -26, -33, -65, -106, -66, -8, 
27, 44, 5, 4, 4, -27, -5, 27, 24, 42, -11, -20, 13, 22, -5, -40, 
-45, -48, -58, 13, 46, 27, 0, -16, 35, 46, 34, 51, 18, -39, -69, -89, 
-91, -12, 51, 18, -64, -19, 62, 95, 84, 62, 34, 54, 16, -34, -3, 17, 
4, -35, -71, -79, -97, -37, 1, -9, -14, -14, 43, 29, 9, 39, 47, 3, 
-25, 7, 9, 19, 38, 27, -20, -41, -1, 3, -22, 4, 3, 48, 17, -32, 
7, 2, 34, -14, -90, -70, -43, -4, -24, -30, -13, -11, 35, 55, 56, 83, 
108, 55, 19, 64, 51, -39, -73, -40, -63, -56, -73, -90, -47, -24, -63, -43, 
8, 43, 73, 47, 24, 34, 46, 34, 18, 79, 75, 26, -13, -40, -34, -7, 
1, -32, -73, -52, 20, 8, -24, -26, 3, -16, -23, 27, 12, 12, 39, -29, 
-22, -18, -26, -14, -36, -15, 27, 57, 48, 20, 7, -11, 34, 70, 32, -12, 
-14, -39, -35, -19, -32, -18, -16, -41, -19, 19, 37, 37, 11, 62, 71, 56, 
66, -44, -46, -13, -5, -28, -39, -53, -70, -44, -18, -18, -13, 11, -20, -16, 
-5, 22, 59, 51, 45, 41, -1, -65, -2, 9, -12, -75, -100, 48, 80, 72, 
65, 49, 15, 20, 25, 9, -2, -27, -41, -51, -41, -22, -29, -44, -76, -90, 
-35, 36, 64, 84, 37, 23, 68, 87, 92, 63, -24, -54, -80, -55, -33, -37, 
-38, -72, -76, -53, -11, 81, 3, -21, 39, 36, 34, 32, 48, 48, 8, -26, 
-82, -43, 44, 67, 7, -38, -14, 13, 9, 26, 74, 25, -31, 25, 26, 0, 
-9, -3, -20, -52, -34, 2, -28, -66, -80, -27, 52, 43, 39, 7, -4, 60, 
101, 53, 8, -2, -21, -35, -83, -73, -8, -39, -67, -5, 30, 4, 24, 14, 
13, 32, 53, 32, 71, 84, 43, -5, -41, -54, -45, -65, -106, -92, -45, -3, 
-11, -4, 22, 30, 41, 31, 46, 59, 13, 4, 10, 10, 5, -6, -2, -38, 
-51, -15, 22, 46, 37, 26, -7, 15, 70, 59, 30, -62, -82, -81, -85, -68, 
-9, -40, -77, -17, 37, 63, 66, 73, 80, 46, 8, 16, 37, 30, 20, -15, 
-76, -127, -34, 10, -36, -76, -79, 51, 93, 56, 5, -5, 38, 7, 24, 23, 
23, 64, -41, -57, -51, -9, 31, -12, -45, -31, -18, -20, 13, 33, 5, 30, 
37, 47, 50, 21, -19, -46, -55, -71, -52, -57, -14, 3, 5, 66, 60, 21, 
6, 12, 39, 42, 88, 35, -27, -28, -70, -100, -78, -51, -2, -5, -27, -13, 
13, 17, 53, 38, 27, 42, -9, 25, 46, 38, 40, 4, -49, -66, 14, 25, 
-53, -74, -22, 47, 25, -6, 15, -5, 8, 8, 9, 17, 22, -3, -81, -99, 
-44, 4, -20, -29, -38, -5, 63, 37, 61, 68, 41, 27, 30, 23, 3, 11, 
-21, -68, -83, -39, -32, -47, -63, -54, 35, 16, 42, 40, 15, 59, 26, 53, 
72, 35, 7, -29, -72, -79, -19, -16, -76, -61, -26, 1, 24, 68, 93, 6, 
12, 53, 35, 36, 31, -8, -27, -53, -35, -1, -72, -102, -79, -56, 1, 46, 
1, 9, 10, 46, 73, 68, 66, 24, 18, -18, -40, -4, -46, -76, -81, -35, 
-1, 12, 29, 29, 60, 83, 37, 25, 19, -5, -46, -56, -52, -79, -87, -61, 
1, 16, 19, 41, 34, 42, 44, 48, 42, 11, 9, 3, -35, 30, 11, -72, 
-100, -67, -6, -62, -89, -64, -10, 77, 92, 76, 68, 46, 21, 48, 65, 15, 
-14, -54, -75, -80, -46, -31, -47, -42, -71, -6, 47, 19, 35, 31, 4, 43, 
46, 55, 64, 55, 24, -25, -50, -79, -79, -22, 12, 15, 20, -11, 2, 53, 
55, -15, -34, 6, 22, -10, -9, 25, 7, -12, -51, -42, -60, -65, -40, -33, 
11, 22, 4, 29, 78, 74, 40, 28, 8, -1, -29, -40, -40, -42, -35, -20, 
21, 34, 28, 5, 2, 37, 28, -4, -2, 3, 14, 6, -40, -7, -19, -38, 
-25, -44, -29, -16, -38, 7, 26, -1, 60, 61, 44, 42, 73, 80, -17, -53, 
-68, -68, -56, -35, -39, -3, 48, 40, 6, 29, 41, 1, -14, 1, -3, 18, 
-16, -49, -39, -28, -8, -6, -11, -16, 8, 12, -27, 20, 24, 6, 16, 73, 
71, -4, -5, 21, 5, -61, -63, -46, -69, -66, 2, 51, 23, 19, 4, 4, 
21, 37, 40, 20, 5, -20, -13, 16, -23, -38, -55, -69, -23, 18, 14, -12, 
-28, 0, 51, 36, 45, 70, 63, 25, -8, -21, 12, 17, -20, -49, -82, -74, 
-75, -66, -9, 15, 40, 44, 9, 22, 60, 51, 41, 26, -14, -36, -12, -12, 
-40, -65, -51, -18, -34, -63, -67, -22, 59, 67, 21, 43, 100, 109, 110, 27, 
-19, -27, -91, -106, -75, -61, -55, -34, 26, 43, 3, 13, 24, 3, 9, 43, 
39, 36, 5, -20, -29, -40, -18, -39, -66, -61, -44, -3, 23, 72, 93, 73, 
70, 39, 16, 6, 24, -3, -86, -107, -76, -52, -17, 20, 4, -5, -7, 50, 
85, 56, 50, 51, 43, 29, 26, -8, -32, -36, -85, -121, -97, -13, 5, -21, 
-36, -14, 11, 70, 71, 65, 53, 3, -4, -15, -30, 7, -1, -35, -58, -15, 
-6, -16, 30, 25, -27, 20, 39, 22, 66, 58, 6, 19, 11, -4, -50, -39, 
-28, 13, 11, -39, -39, -10, 26, 31, 28, 11, -25, 17, 31, 36, 58, 33, 
-46, -56, -79, -75, 5, 31, -86, -53, 7, 34, 71, 59, 40, 16, 24, 25, 
-31, 9, 17, -17, -33, 10, 18, -35, -32, -8, 3, -69, -68, -6, 40, 41, 
27, 35, 0, 23, 57, 53, -5, -33, -5, -15, -16, -5, 13, -5, -25, -16, 
16, 44, 47, -14, -37, -18, 10, 3, -12, 1, -5, -5, -12, -44, -44, -15, 
-10, -16, 4, 21, 37, 63, 27, 36, 42, 7, -7, -2, 8, -29, -23, 2, 
-12, -27, -42, -43, -2, 9, -8, -4, -15, -29, -17, 58, 59, 57, 22, -25, 
12, 8, -13, -8, -26, -49, 27, 23, -6, -11, -25, -30, -55, -7, 25, 3, 
-7, -37, -5, 5, 19, 38, 19, 6, 40, 55, 12, 21, 58, -5, -28, -45, 
-38, 15, 40, 32, -42, -81, -31, -35, -54, -5, 46, 45, 2, -29, -6, 44, 
42, 18, -23, 5, 73, 61, 40, 0, -26, -37, -88, -96, -82, -49, -7, 21, 
30, 37, 65, 82, 12, 4, 46, 64, 48, 3, -25, -40, -56, -54, -60, -56, 
-75, -54, -1, 23, 14, 70, 98, 87, 50, 10, 28, 41, -1, -25, -62, -96, 
-81, -63, -34, -14, 16, 2, 16, 19, 15, 62, 38, 24, 58, 35, -17, -33, 
21, -36, -73, -53, -66, -61, -30, 17, 47, 54, 46, 2, -12, 60, 42, 40, 
48, 23, -21, -76, -48, -14, 1, 11, -91, -61, -13, 9, 48, 70, 29, 3, 
-25, -7, 58, 34, -20, -30, -24, -44, -78, -64, -29, 4, 4, -31, -14, 16, 
40, 72, 85, 52, 45, 69, 26, 5, -14, -21, -40, -60, -76, -70, -18, 8, 
-29, -32, -4, 34, 78, 66, 72, 37, -4, 12, 2, -11, -37, -69, -74, -96, 
-91, -18, 43, 20, -5, 61, 12, 19, 32, 34, 44, -4, -13, 18, 6, -11, 
-28, -49, -24, -10, 0, };
