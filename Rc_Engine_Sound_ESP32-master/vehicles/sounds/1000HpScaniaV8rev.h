const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 4616;
const signed char revSamples[] = {
0, 1, 1, 2, 6, 12, 21, 24, 27, 29, 31, 32, 32, 31, 31, 32,
33, 34, 34, 34, 36, 38, 40, 43, 44, 46, 45, 44, 42, 36, 31, 26, 
21, 15, 6, 1, -5, -10, -14, -18, -23, -25, -28, -31, -33, -35, -38, -38, 
-40, -42, -42, -42, -41, -38, -35, -30, -26, -20, -16, -13, -10, -6, -3, 3, 
6, 9, 11, 10, 8, 7, 8, 11, 15, 20, 26, 31, 36, 41, 46, 51, 
57, 59, 60, 58, 56, 52, 47, 41, 34, 28, 22, 15, 11, 9, 6, 2, 
-1, -5, -7, -8, -10, -12, -17, -20, -24, -28, -31, -33, -37, -41, -44, -47, 
-50, -51, -52, -51, -49, -46, -42, -37, -32, -27, -20, -12, -4, 6, 10, 13, 
15, 14, 13, 9, 7, 6, 6, 6, 6, 7, 8, 9, 11, 11, 13, 13, 
13, 14, 14, 14, 14, 14, 13, 12, 11, 9, 7, 6, 5, 1, -2, -8, 
-12, -16, -20, -23, -29, -31, -34, -36, -37, -37, -34, -31, -28, -23, -19, -15, 
-7, -2, 4, 8, 13, 17, 20, 21, 23, 25, 25, 26, 26, 26, 25, 24, 
24, 25, 26, 27, 29, 30, 32, 33, 34, 34, 36, 38, 39, 39, 37, 35, 
31, 27, 22, 19, 17, 14, 11, 8, 5, 3, 2, 2, 2, 3, 4, 5, 
7, 10, 12, 17, 19, 21, 24, 26, 28, 29, 31, 32, 34, 36, 40, 43, 
46, 49, 53, 56, 61, 64, 67, 69, 72, 76, 79, 82, 84, 87, 92, 97, 
100, 102, 103, 105, 107, 105, 103, 102, 100, 97, 95, 93, 92, 91, 89, 89, 
89, 91, 92, 92, 92, 92, 93, 94, 95, 95, 95, 94, 91, 89, 86, 84, 
82, 78, 76, 73, 70, 68, 65, 63, 63, 62, 60, 59, 59, 59, 59, 60, 
60, 61, 65, 68, 70, 72, 75, 77, 79, 79, 79, 79, 77, 74, 72, 72, 
72, 73, 75, 76, 78, 79, 81, 82, 83, 84, 85, 86, 86, 86, 82, 80, 
76, 72, 67, 61, 50, 42, 32, 21, 11, -3, -11, -19, -26, -29, -33, -34, 
-34, -33, -31, -27, -23, -14, -7, 0, 5, 10, 15, 18, 19, 18, 17, 14, 
9, 6, 4, 1, -1, -2, 0, 3, 7, 11, 14, 20, 23, 24, 24, 23, 
21, 18, 14, 11, 6, 2, -1, -5, -7, -8, -8, -8, -6, -4, -2, 0, 
1, 3, 6, 7, 8, 10, 11, 13, 16, 18, 19, 21, 23, 26, 28, 29, 
30, 30, 29, 25, 21, 18, 16, 14, 11, 4, 1, -4, -8, -11, -15, -17, 
-18, -19, -20, -20, -19, -19, -19, -19, -21, -21, -21, -21, -22, -24, -26, -28, 
-29, -30, -30, -31, -30, -30, -29, -28, -27, -27, -27, -28, -28, -27, -26, -25, 
-24, -22, -20, -18, -16, -13, -9, -7, -5, -3, 0, 3, 5, 7, 9, 9, 
8, 6, 3, 1, -1, -3, -5, -9, -12, -13, -16, -19, -22, -24, -26, -26, 
-26, -28, -31, -32, -34, -35, -35, -36, -36, -37, -37, -39, -40, -42, -43, -42, 
-42, -40, -39, -39, -38, -36, -34, -33, -32, -29, -27, -25, -23, -22, -21, -20, 
-19, -18, -18, -17, -17, -17, -18, -19, -21, -23, -27, -29, -31, -31, -32, -35, 
-36, -38, -40, -40, -40, -42, -43, -45, -45, -44, -44, -43, -41, -38, -35, -31, 
-25, -23, -21, -19, -18, -15, -13, -12, -12, -12, -12, -12, -13, -14, -15, -16, 
-16, -19, -20, -20, -20, -19, -19, -18, -16, -14, -11, -8, -5, -2, 0, 1, 
1, 1, -2, -4, -6, -11, -14, -18, -25, -28, -32, -35, -38, -43, -46, -50, 
-53, -57, -59, -61, -61, -61, -63, -64, -65, -68, -70, -71, -71, -71, -68, -67, 
-63, -59, -56, -52, -46, -41, -36, -30, -25, -20, -12, -8, -3, 1, 3, 5, 
5, 5, 4, 4, 4, 5, 7, 9, 10, 13, 15, 18, 20, 22, 24, 27, 
30, 31, 33, 33, 34, 34, 36, 36, 37, 37, 36, 36, 35, 34, 33, 32, 
32, 32, 31, 31, 31, 31, 31, 31, 30, 29, 28, 28, 28, 28, 28, 30, 
30, 29, 29, 28, 28, 29, 29, 30, 31, 31, 31, 30, 28, 25, 22, 19, 
17, 16, 14, 12, 12, 12, 12, 11, 11, 11, 10, 8, 6, 3, 1, -4, 
-7, -11, -15, -19, -23, -26, -27, -29, -29, -28, -27, -26, -25, -24, -23, -21, 
-19, -17, -16, -15, -14, -14, -15, -16, -17, -17, -17, -19, -19, -19, -18, -16, 
-16, -15, -15, -16, -16, -16, -19, -21, -22, -25, -28, -30, -33, -35, -35, -37, 
-36, -35, -33, -31, -29, -27, -26, -23, -22, -21, -20, -20, -19, -19, -19, -19, 
-19, -19, -18, -17, -16, -14, -11, -10, -6, -4, -3, -2, -1, -1, -1, -1, 
-1, -2, -3, -4, -5, -4, -3, -2, 1, 4, 6, 8, 9, 9, 11, 13, 
14, 15, 16, 16, 15, 14, 12, 11, 11, 10, 9, 8, 8, 9, 10, 12, 
16, 18, 20, 22, 23, 25, 25, 25, 25, 24, 23, 22, 20, 18, 16, 15, 
13, 12, 11, 10, 10, 12, 13, 14, 15, 16, 17, 17, 17, 17, 17, 16, 
16, 15, 15, 15, 15, 15, 15, 17, 19, 23, 27, 30, 34, 40, 43, 45, 
47, 49, 50, 50, 49, 49, 47, 46, 44, 42, 41, 41, 41, 41, 43, 45, 
47, 49, 51, 55, 56, 58, 60, 61, 61, 62, 62, 63, 64, 65, 66, 67, 
67, 68, 70, 71, 73, 75, 76, 78, 79, 79, 79, 78, 78, 78, 77, 76, 
74, 74, 74, 73, 73, 73, 73, 73, 74, 75, 75, 75, 74, 74, 72, 69, 
67, 63, 60, 58, 57, 56, 55, 54, 53, 52, 51, 50, 50, 50, 49, 47, 
45, 44, 40, 38, 37, 36, 35, 34, 34, 34, 34, 34, 35, 34, 34, 34, 
33, 31, 30, 28, 27, 25, 23, 19, 14, 10, 6, 1, -3, -8, -15, -20, 
-25, -30, -34, -38, -43, -45, -47, -48, -49, -50, -49, -48, -46, -44, -43, -43, 
-43, -43, -44, -46, -48, -50, -52, -55, -57, -59, -62, -64, -66, -68, -70, -73, 
-75, -78, -80, -81, -84, -88, -92, -95, -97, -100, -102, -104, -104, -103, -102, -101, 
-99, -95, -92, -90, -87, -85, -82, -79, -78, -76, -74, -73, -71, -70, -70, -68, 
-67, -66, -64, -63, -61, -61, -59, -56, -54, -52, -50, -49, -49, -48, -48, -49, 
-49, -50, -51, -50, -49, -48, -46, -44, -42, -41, -39, -37, -35, -34, -32, -31, 
-30, -30, -30, -30, -33, -34, -35, -37, -39, -41, -41, -40, -39, -38, -37, -35, 
-33, -31, -29, -27, -25, -22, -21, -20, -19, -18, -17, -17, -17, -16, -15, -14, 
-12, -10, -9, -8, -7, -6, -4, -3, -2, -1, 1, 3, 4, 4, 4, 4, 
4, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -1, -2, 
-2, -2, -4, -6, -7, -8, -10, -10, -11, -10, -9, -9, -8, -7, -6, -4, 
-3, -2, -1, -1, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 
3, 4, 4, 4, 3, 2, 1, 0, -1, -4, -6, -7, -8, -10, -11, -13, 
-14, -14, -15, -17, -17, -18, -18, -18, -17, -17, -16, -15, -15, -14, -13, -12, 
-11, -10, -9, -7, -6, -6, -3, -2, -1, 0, 2, 4, 6, 7, 8, 8, 
8, 10, 10, 10, 9, 9, 8, 8, 7, 7, 6, 6, 6, 5, 4, 3, 
2, 2, 2, 2, 2, 3, 3, 3, 5, 5, 5, 5, 5, 7, 8, 8, 
7, 8, 8, 9, 10, 11, 12, 14, 16, 19, 20, 23, 25, 27, 30, 31, 
31, 31, 31, 30, 29, 27, 26, 25, 24, 24, 24, 24, 23, 23, 23, 23, 
23, 23, 23, 23, 23, 22, 20, 19, 17, 16, 15, 13, 11, 10, 9, 8, 
8, 8, 9, 11, 12, 14, 17, 19, 20, 21, 21, 23, 23, 23, 23, 22, 
19, 18, 16, 15, 15, 15, 15, 15, 15, 15, 16, 15, 15, 14, 13, 12, 
11, 10, 10, 9, 8, 7, 7, 6, 6, 7, 8, 10, 12, 15, 17, 18, 
20, 23, 25, 27, 28, 29, 29, 30, 29, 28, 27, 25, 24, 23, 22, 21, 
19, 18, 17, 17, 18, 18, 18, 17, 17, 19, 20, 22, 23, 25, 28, 31, 
34, 37, 40, 44, 46, 50, 53, 55, 57, 59, 61, 63, 65, 67, 68, 69, 
70, 71, 72, 72, 72, 72, 70, 70, 70, 69, 70, 69, 68, 68, 68, 67, 
66, 63, 62, 62, 61, 60, 59, 58, 57, 55, 54, 53, 52, 50, 49, 47, 
46, 45, 44, 44, 43, 43, 42, 41, 40, 39, 38, 38, 37, 37, 36, 36, 
36, 37, 37, 38, 38, 39, 41, 42, 43, 43, 43, 43, 42, 41, 39, 37, 
35, 33, 29, 25, 20, 15, 12, 7, 3, 0, -6, -8, -11, -13, -15, -18, 
-19, -20, -22, -23, -25, -26, -28, -29, -30, -31, -33, -36, -37, -38, -39, -40, 
-42, -42, -43, -44, -45, -45, -47, -47, -48, -48, -50, -51, -52, -54, -55, -56, 
-57, -56, -57, -56, -55, -56, -57, -58, -59, -60, -61, -63, -64, -65, -65, -66, 
-67, -66, -66, -66, -66, -65, -65, -64, -63, -63, -63, -63, -63, -63, -63, -63, 
-63, -62, -63, -61, -61, -60, -57, -55, -52, -47, -44, -40, -37, -33, -30, -26, 
-23, -21, -19, -16, -12, -10, -8, -5, -3, 0, 4, 6, 8, 10, 12, 13, 
14, 14, 14, 13, 13, 12, 12, 11, 10, 9, 8, 7, 7, 6, 6, 5, 
3, 1, 0, -1, -1, -1, -3, -4, -5, -6, -6, -6, -6, -5, -4, -1, 
1, 4, 6, 8, 10, 11, 12, 14, 14, 14, 13, 12, 11, 8, 6, 4, 
2, 0, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -5, -5, 
-6, -7, -8, -9, -10, -11, -12, -13, -15, -16, -17, -17, -17, -17, -19, -19, 
-20, -21, -21, -22, -24, -24, -25, -26, -26, -28, -29, -29, -28, -27, -26, -26, 
-26, -25, -25, -24, -22, -22, -21, -20, -18, -16, -15, -13, -11, -10, -9, -8, 
-7, -6, -5, -5, -5, -5, -4, -4, -4, -4, -4, -3, -3, -1, 0, 0, 
1, 1, 1, 1, 2, 1, 1, -1, -2, -3, -3, -3, -3, -3, -3, -3, 
-2, -1, 0, 0, 1, 2, 5, 7, 10, 12, 13, 14, 16, 18, 18, 19, 
19, 19, 21, 21, 22, 21, 21, 20, 19, 16, 15, 13, 12, 11, 10, 10, 
9, 8, 7, 6, 4, 3, 2, 1, 0, 0, -3, -4, -6, -7, -8, -10, 
-13, -15, -16, -17, -19, -20, -21, -21, -21, -21, -21, -21, -21, -20, -20, -20, 
-20, -19, -18, -17, -16, -16, -15, -14, -13, -11, -10, -9, -9, -8, -6, -4, 
-3, -2, -1, -1, 0, 0, 1, 1, 2, 1, 0, -1, -3, -4, -5, -5, 
-5, -6, -6, -5, -5, -5, -5, -6, -5, -5, -5, -6, -6, -6, -8, -10, 
-10, -10, -10, -8, -6, -4, -2, 0, 3, 6, 8, 10, 11, 13, 14, 14, 
15, 14, 14, 14, 14, 16, 17, 18, 19, 20, 23, 24, 25, 25, 25, 26, 
24, 22, 20, 18, 16, 13, 9, 7, 5, 4, 1, -2, -4, -5, -5, -5, 
-5, -4, -2, -1, 0, 1, 2, 3, 4, 4, 3, 2, 2, 2, 1, 1, 
1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 1, -1, -2, 
-3, -4, -5, -8, -10, -11, -13, -15, -17, -18, -18, -18, -17, -17, -16, -15, 
-14, -14, -13, -13, -12, -11, -10, -10, -11, -11, -10, -9, -8, -7, -6, -6, 
-5, -5, -4, -4, -4, -2, 0, 1, 2, 4, 4, 5, 6, 7, 8, 10, 
10, 10, 10, 10, 11, 11, 11, 11, 12, 13, 14, 14, 14, 12, 10, 9, 
8, 6, 3, 1, -1, -4, -4, -6, -5, -4, -4, -3, -3, -2, -2, -3, 
-4, -6, -7, -9, -10, -12, -14, -15, -16, -16, -16, -15, -14, -14, -13, -12, 
-11, -10, -8, -7, -6, -5, -5, -6, -6, -6, -4, -4, -5, -6, -7, -8, 
-9, -10, -12, -12, -12, -13, -16, -19, -22, -25, -27, -28, -28, -26, -25, -21, 
-20, -18, -17, -16, -14, -12, -9, -5, 1, 10, 22, 32, 46, 65, 86, 105, 
120, 122, 120, 118, 117, 117, 119, 120, 120, 120, 120, 120, 121, 121, 121, 121, 
121, 120, 118, 116, 115, 114, 113, 112, 110, 110, 111, 112, 113, 113, 113, 114, 
116, 115, 115, 118, 123, 122, 106, 74, 15, -18, -40, -53, -62, -70, -71, -68, 
-62, -55, -47, -33, -21, -8, 6, 17, 20, 10, -7, -28, -53, -80, -113, -123, 
-125, -123, -120, -121, -125, -125, -121, -112, -94, -71, -37, -22, -13, -5, 1, 2, 
-3, -10, -15, -18, -24, -42, -55, -64, -69, -71, -72, -72, -68, -64, -64, -68, 
-77, -82, -85, -91, -98, -106, -116, -118, -117, -115, -114, -114, -115, -116, -116, -116, 
-117, -119, -119, -117, -113, -110, -108, -109, -109, -108, -109, -109, -109, -105, -102, -97, 
-93, -88, -77, -68, -61, -59, -58, -58, -58, -59, -62, -68, -73, -82, -89, -93, 
-97, -100, -100, -97, -94, -89, -84, -79, -75, -67, -60, -54, -48, -43, -38, -36, 
-35, -35, -34, -33, -31, -29, -28, -28, -27, -26, -25, -25, -25, -24, -23, -22, 
-23, -24, -25, -28, -30, -35, -36, -37, -39, -41, -40, -38, -36, -35, -37, -39, 
-46, -51, -57, -64, -71, -75, -78, -79, -81, -84, -88, -92, -98, -101, -103, -104, 
-105, -106, -107, -106, -105, -102, -99, -95, -92, -88, -84, -81, -77, -72, -67, -62, 
-56, -49, -40, -34, -29, -23, -16, -10, 1, 8, 16, 24, 30, 36, 42, 44, 
46, 47, 46, 45, 43, 40, 35, 30, 23, 12, 6, -1, -6, -9, -13, -20, 
-25, -30, -32, -34, -35, -35, -35, -35, -35, -36, -38, -38, -38, -38, -37, -36, 
-35, -35, -35, -34, -33, -28, -23, -19, -14, -10, -5, 1, 4, 7, 11, 15, 
22, 27, 34, 41, 49, 57, 68, 75, 79, 83, 86, 87, 86, 84, 82, 79, 
77, 75, 75, 74, 74, 72, 70, 67, 65, 63, 60, 58, 56, 54, 52, 48, 
45, 40, 30, 23, 16, 10, 3, -3, -13, -19, -25, -28, -30, -30, -26, -24, 
-22, -21, -21, -21, -22, -21, -19, -16, -12, -6, -3, -2, -1, 1, 4, 8, 
11, 12, 12, 11, 9, 8, 7, 8, 8, 8, 6, 5, 4, 4, 6, 7, 
10, 12, 14, 16, 17, 19, 20, 21, 20, 19, 18, 15, 12, 9, 6, 3, 
-1, -8, -12, -17, -21, -23, -26, -26, -27, -29, -31, -33, -35, -34, -33, -32, 
-32, -31, -30, -28, -26, -24, -21, -17, -15, -13, -12, -8, -5, -1, 2, 3, 
6, 8, 9, 8, 7, 7, 6, 6, 5, 5, 5, 6, 7, 7, 9, 9, 
9, 8, 7, 5, 3, 1, -1, -2, -4, -5, -5, -3, -1, 2, 5, 12, 
15, 18, 20, 22, 24, 25, 26, 26, 26, 26, 27, 28, 28, 28, 29, 29, 
28, 28, 29, 29, 31, 37, 40, 45, 50, 55, 59, 67, 73, 78, 82, 85, 
87, 87, 87, 86, 82, 77, 70, 66, 63, 60, 58, 57, 55, 55, 55, 56, 
58, 61, 64, 66, 68, 70, 71, 71, 71, 70, 67, 63, 58, 52, 47, 43, 
39, 37, 34, 30, 28, 28, 29, 31, 37, 41, 45, 49, 53, 55, 58, 58, 
59, 59, 57, 53, 46, 41, 36, 32, 29, 26, 25, 24, 24, 24, 24, 28, 
30, 34, 37, 40, 44, 49, 52, 54, 55, 56, 57, 59, 60, 61, 62, 63, 
61, 60, 61, 62, 64, 67, 74, 79, 85, 93, 99, 109, 115, 119, 121, 122, 
121, 120, 120, 119, 118, 118, 118, 118, 118, 118, 118, 118, 119, 119, 118, 118, 
119, 118, 118, 117, 117, 117, 117, 117, 118, 119, 117, 110, 100, 80, 68, 56, 
45, 34, 21, 6, -4, -12, -19, -25, -30, -31, -33, -33, -34, -33, -31, -29, 
-26, -24, -23, -21, -18, -17, -15, -14, -14, -14, -14, -13, -12, -12, -12, -13, 
-13, -13, -13, -13, -14, -16, -17, -17, -18, -18, -19, -20, -21, -23, -24, -25, 
-26, -26, -27, -27, -27, -27, -30, -31, -31, -33, -34, -37, -39, -42, -45, -47, 
-49, -53, -56, -58, -60, -63, -65, -69, -70, -70, -70, -70, -71, -71, -72, -72, 
-72, -72, -70, -68, -65, -62, -57, -52, -45, -40, -34, -29, -25, -20, -19, -18, 
-18, -18, -19, -22, -24, -26, -27, -30, -32, -37, -41, -43, -45, -46, -47, -47, 
-46, -46, -45, -44, -45, -44, -43, -44, -44, -44, -44, -45, -44, -43, -42, -39, 
-37, -35, -34, -33, -31, -28, -27, -27, -27, -28, -31, -33, -35, -38, -41, -43, 
-47, -50, -54, -57, -60, -63, -65, -66, -67, -67, -67, -67, -66, -66, -65, -65, 
-65, -65, -63, -63, -62, -60, -59, -58, -57, -56, -55, -53, -50, -49, -47, -46, 
-46, -45, -47, -49, -49, -50, -49, -47, -45, -43, -41, -39, -35, -30, -26, -23, 
-21, -18, -17, -13, -11, -9, -7, -4, -1, 2, 3, 4, 5, 7, 10, 12, 
13, 13, 13, 12, 11, 9, 8, 8, 7, 7, 6, 6, 6, 6, 5, 4, 
2, 0, -1, -3, -3, -5, -5, -6, -7, -9, -9, -11, -12, -12, -12, -14, 
-15, -16, -16, -16, -15, -14, -11, -8, -6, -3, 1, 3, 7, 9, 11, 13, 
15, 18, 20, 22, 25, 27, 29, 33, 34, 36, 36, 37, 38, 39, 39, 39, 
38, 38, 37, 37, 36, 34, 32, 31, 29, 28, 26, 24, 23, 20, 19, 18, 
17, 16, 16, 18, 20, 22, 25, 28, 30, 34, 35, 35, 36, 36, 36, 36, 
36, 37, 38, 39, 40, 40, 41, 43, 45, 47, 49, 51, 52, 52, 51, 48, 
45, 41, 36, 31, 27, 22, 18, 15, 11, 7, 3, -2, -6, -8, -10, -12, 
-15, -18, -19, -22, -24, -26, -30, -32, -35, -37, -39, -42, -45, -48, -50, -52, 
-55, -59, -62, -63, -64, -65, -65, -64, -63, -62, -60, -59, -59, -57, -57, -56, 
-55, -54, -53, -52, -52, -51, -52, -51, -52, -52, -51, -49, -47, -46, -44, -42, 
-41, -39, -39, -37, -36, -35, -34, -34, -34, -35, -36, -36, -36, -36, -36, -36, 
-36, -34, -32, -30, -25, -21, -18, -15, -12, -9, -7, -6, -4, -3, -2, -1, 
-1, -1, 0, 1, 1, 2, 4, 6, 7, 10, 13, 17, 19, 23, 27, 29, 
35, 39, 44, 49, 54, 58, 66, 71, 75, 78, 81, 84, 88, 90, 90, 90, 
90, 89, 88, 88, 88, 88, 89, 92, 93, 94, 94, 94, 94, 94, 94, 93, 
92, 92, 89, 86, 85, 81, 77, 74, 68, 65, 61, 58, 56, 53, 52, 51, 
52, 52, 53, 54, 56, 58, 59, 60, 60, 60, 60, 58, 55, 52, 49, 44, 
41, 38, 35, 33, 30, 30, 30, 30, 30, 31, 33, 34, 34, 35, 36, 37, 
36, 35, 34, 32, 30, 29, 27, 25, 23, 21, 20, 19, 20, 21, 22, 22, 
22, 22, 22, 22, 22, 22, 22, 23, 23, 23, 22, 21, 21, 20, 19, 19, 
19, 19, 21, 22, 23, 23, 23, 22, 20, 18, 16, 14, 13, 9, 7, 5, 
1, -2, -7, -9, -10, -12, -14, -16, -17, -18, -19, -20, -21, -21, -22, -21, 
-21, -20, -17, -16, -14, -12, -11, -8, -6, -3, -1, 0, 1, 1, 0, -1, 
-3, -6, -10, -13, -19, -23, -28, -32, -35, -39, -42, -44, -46, -47, -48, -47, 
-46, -46, -45, -44, -44, -43, -43, -43, -42, -42, -41, -40, -39, -37, -35, -32, 
-29, -25, -21, -19, -17, -14, -12, -11, -11, -11, -13, -15, -18, -20, -21, -24, 
-26, -27, -28, -28, -28, -27, -27, -26, -25, -24, -23, -22, -21, -21, -20, -20, 
-19, -19, -18, -17, -15, -14, -13, -11, -8, -5, -2, 0, 1, 3, 6, 7, 
7, 6, 5, 4, 3, 2, 0, -2, -5, -7, -9, -11, -12, -13, -16, -19, 
-20, -22, -24, -24, -26, -28, -29, -29, -31, -32, -35, -36, -36, -36, -37, -36, 
-38, -38, -38, -38, -39, -40, -40, -41, -41, -42, -41, -40, -39, -38, -37, -37, 
-36, -36, -36, -36, -36, -36, -36, -36, -35, -34, -34, -33, -31, -29, -26, -24, 
-20, -16, -12, -9, -5, -1, 3, 7, 10, 12, 15, 17, 18, 17, 17, 17, 
17, 17, 18, 20, 21, 22, 23, 23, 24, 24, 24, 23, 21, 20, 17, 15, 
14, 14, 13, 13, 14, 15, 16, 17, 19, 22, 24, 25, 26, 26, 26, 26, 
25, 23, 21, 20, 19, 16, 14, 12, 11, 10, 8, 8, 8, 8, 10, 12, 
15, 17, 18, 19, 18, 17, 16, 15, 14, 13, 10, 6, 5, 3, 2, 1, 
1, 1, 1, 1, 0, -2, -4, -7, -9, -11, -14, -17, -21, -23, -24, -27, 
-28, -30, -31, -31, -33, -34, -35, -36, -38, -38, -38, -39, -39, -39, -39, -40, 
-41, -42, -43, -43, -42, -42, -41, -39, -38, -36, -34, -32, -30, -29, -26, -24, 
-23, -22, -22, -22, -21, -21, -21, -21, -21, -21, -20, -19, -18, -17, -16, -14, 
-11, -9, -8, -7, -7, -8, -9, -10, -11, -12, -15, -16, -17, -17, -17, -17, 
-17, -17, -17, -17, -17, -18, -18, -18, -18, -18, -18, -18, -18, -18, -18, -18, 
-18, -18, -19, -19, -18, -18, -17, -15, -14, -12, -11, -9, -7, -5, -3, -1, 
1, 2, 4, 6, 8, 9, 11, 13, 14, 15, 16, 18, 20, 24, 27, 28, 
29, 31, 32, 34, 34, 34, 33, 32, 32, 32, 33, 33, 35, 37, 39, 40, 
42, 42, 43, 44, 44, 43, 41, 40, 39, 36, 34, 32, 30, 29, 28, 28, 
28, 28, 28, 29, 31, 33, 34, 36, 38, 39, 39, 39, 38, 38, 38, 37, 
35, 34, 33, 32, 31, 29, 26, 24, 22, 21, 20, 18, 16, 16, 16, 16, 
16, 18, 18, 19, 21, 22, 23, 25, 25, 25, 24, 23, 23, 22, 21, 19, 
17, 16, 12, 9, 6, 5, 2, 0, -3, -5, -6, -8, -10, -13, -14, -15, 
-16, -17, -17, -19, -19, -19, -19, -18, -17, -15, -14, -12, -11, -10, -9, -7, 
-6, -5, -3, -3, -2, -1, 0, 0, 0, 0, -2, -3, -4, -5, -6, -7, 
-7, -8, -8, -8, -8, -8, -7, -6, -5, -4, -2, 1, 2, 3, 4, 6, 
9, 11, 13, 14, 15, 17, 19, 20, 22, 23, 25, 27, 29, 30, 31, 31, 
32, 33, 33, 33, 33, 33, 34, 36, 38, 38, 39, 39, 40, 40, 41, 40, 
40, 39, 36, 35, 33, 33, 32, 31, 31, 31, 31, 31, 32, 32, 33, 33, 
34, 33, 32, 31, 30, 29, 27, 26, 25, 24, 23, 22, 21, 18, 17, 16, 
15, 15, 16, 16, 16, 15, 15, 16, 17, 18, 21, 22, 23, 25, 27, 29, 
30, 31, 33, 34, 35, 38, 39, 39, 40, 41, 40, 40, 39, 38, 36, 35, 
35, 34, 34, 35, 36, 37, 39, 42, 45, 48, 50, 51, 52, 51, 52, 51, 
49, 47, 44, 40, 37, 33, 29, 23, 18, 13, 8, 4, 0, -6, -9, -12, 
-15, -18, -20, -22, -23, -23, -25, -25, -25, -25, -26, -26, -26, -26, -27, -27, 
-26, -26, -25, -24, -24, -23, -23, -22, -22, -22, -23, -25, -25, -27, -29, -32, 
-33, -34, -35, -36, -36, -36, -36, -38, -39, -40, -42, -44, -44, -45, -45, -44, 
-45, -46, -45, -46, -47, -47, -48, -49, -50, -51, -51, -52, -51, -52, -51, -50, 
-51, -50, -51, -50, -51, -50, -51, -53, -54, -55, -57, -58, -58, -59, -59, -60, 
-61, -61, -61, -59, -57, -56, -54, -51, -50, -48, -45, -43, -39, -35, -32, -30, 
-29, -28, -26, -25, -23, -22, -21, -19, -19, -18, -17, -16, -15, -13, -13, -14, 
-15, -15, -17, -17, -18, -18, -18, -18, -17, -15, -13, -10, -8, -6, -4, -2, 
-1, 0, 0, 0, -1, -2, -3, -4, -5, -7, -8, -8, -7, -6, -5, -4, 
-1, 2, 4, 5, 8, 13, 16, 20, 23, 25, 27, 31, 32, 34, 34, 34, 
34, 34, 34, 35, 34, 33, 32, 31, 31, 30, 28, 27, 24, 21, 19, 16, 
13, 10, 6, 3, 1, -3, -5, -9, -12, -14, -17, -20, -22, -24, -25, -26, 
-27, -27, -27, -28, -28, -27, -27, -26, -25, -25, -24, -24, -23, -22, -21, -20, 
-19, -18, -15, -13, -11, -10, -9, -8, -8, -9, -9, -8, -8, -8, -8, -11, 
-11, -12, -12, -12, -13, -13, -13, -13, -14, -14, -15, -15, -15, -14, -14, -14, 
-11, -9, -8, -7, -5, -3, -1, 0, 1, 0, 0, -1, -1, -2, -3, -4, 
-4, -5, -6, -7, -8, -9, -10, -12, -13, -13, -13, -13, -12, -12, -12, -11, 
-11, -13, -14, -14, -14, -14, -14, -14, -15, -15, -15, -17, -17, -18, -18, -19, 
-21, -21, -22, -22, -22, -23, -23, -23, -24, -24, -24, -26, -26, -25, -25, -24, 
-24, -24, -24, -23, -22, -21, -21, -20, -19, -17, -17, -17, -17, -16, -15, -15, 
-16, -17, -18, -19, -19, -22, -23, -23, -23, -23, -23, -21, -20, -18, -17, -16, 
-14, -13, -12, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 0, 0, 
-1, -1, -2, -4, -5, -6, -6, -7, -7, -7, -7, -6, -4, -2, 0, 1, 
2, 4, 5, 7, 8, 9, 10, 10, 12, 13, 14, 16, 16, 19, 21, 24, 
26, 28, 30, 33, 34, 34, 35, 35, 35, 34, 33, 33, 33, 32, 31, 30, 
29, 28, 27, 26, 25, 25, 26, 25, 24, 23, 22, 22, 22, 21, 20, 19, 
17, 16, 15, 15, 17, 17, 17, 16, 15, 13, 11, 10, 9, 8, 7, 6, 
3, 3, 3, 3, 3, 4, 6, 7, 7, 6, 6, 7, 8, 9, 8, 7, 
7, 7, 8, 10, 13, 16, 19, 26, 33, 41, 47, 55, 75, 93, 110, 122, 
126, 124, 122, 122, 123, 123, 121, 121, 121, 122, 122, 121, 120, 119, 118, 118, 
118, 120, 122, 121, 120, 119, 119, 120, 119, 119, 119, 120, 120, 120, 121, 122, 
121, 119, 117, 118, 121, 117, 102, 73, 36, 3, -31, -44, -53, -61, -64, -61, 
-58, -56, -55, -52, -47, -38, -36, -38, -43, -50, -70, -88, -106, -119, -124, -126, 
-126, -126, -125, -125, -126, -125, -112, -93, -69, -47, -32, -17, -10, -6, -3, -5, 
-9, -18, -27, -37, -49, -60, -70, -80, -85, -88, -89, -90, -91, -93, -95, -100, 
-106, -114, -124, -127, -127, -125, -125, -125, -125, -124, -124, -124, -124, -123, -124, -124, 
-124, -126, -126, -126, -125, -124, -123, -123, -123, -120, -115, -108, -101, -98, -99, -100, 
-99, -97, -93, -90, -86, -85, -84, -84, -84, -82, -79, -77, -74, -71, -69, -64, 
-63, -61, -58, -55, -52, -49, -50, -52, -53, -52, -52, -54, -57, -60, -61, -60, 
-57, -54, -50, -44, -35, -24, -10, -5, -2, -2, -4, -7, -13, -17, -22, -27, 
-32, -41, -46, -50, -53, -53, -48, -36, -28, -21, -17, -14, -13, -18, -23, -31, 
-38, -45, -55, -63, -70, -77, -81, -84, -84, -82, -78, -71, -63, -53, -48, -44, 
-42, -41, -40, -42, -42, -43, -46, -51, -56, -64, -66, -65, -62, -58, -52, -47, 
-41, -34, -27, -21, -12, -7, -2, 1, 1, 1, 0, -2, -4, -8, -11, -13, 
-12, -10, -8, -7, -5, -2, 0, 2, 2, -1, -4, -9, -13, -18, -22, -25, 
-26, -25, -24, -24, -22, -18, -9, 0, };
