const unsigned int jakeBrakeSampleRate = 22050;
const unsigned int jakeBrakeSampleCount = 3286;
const signed char jakeBrakeSamples[] = {
0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 2, 3,
4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 13, 14, 14, 14, 14, 14, 
14, 14, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 
11, 11, 11, 11, 10, 9, 9, 8, 7, 5, 4, 3, 0, -1, -2, -5, 
-7, -9, -10, -12, -14, -15, -16, -17, -17, -17, -16, -15, -14, -11, -10, -8, 
-2, 1, 4, 8, 11, 17, 21, 25, 29, 33, 36, 41, 44, 46, 48, 50, 
52, 55, 56, 57, 58, 58, 59, 60, 60, 61, 61, 61, 62, 63, 63, 64, 
64, 64, 65, 65, 64, 64, 64, 63, 63, 62, 61, 60, 59, 58, 57, 56, 
55, 54, 53, 52, 52, 51, 50, 50, 50, 50, 50, 51, 51, 51, 53, 54, 
56, 57, 57, 60, 61, 62, 63, 63, 63, 64, 64, 64, 64, 64, 63, 63, 
62, 61, 60, 59, 58, 56, 55, 54, 51, 50, 47, 46, 44, 42, 41, 39, 
37, 36, 34, 33, 32, 31, 31, 30, 30, 29, 29, 28, 28, 28, 28, 28, 
28, 28, 28, 28, 28, 28, 28, 29, 29, 30, 31, 31, 33, 34, 35, 36, 
38, 40, 42, 44, 47, 48, 50, 53, 55, 56, 57, 59, 59, 60, 60, 60, 
59, 58, 57, 53, 50, 48, 45, 42, 36, 32, 29, 24, 20, 17, 11, 7, 
5, 1, -3, -6, -10, -13, -16, -19, -22, -27, -30, -32, -36, -39, -42, -46, 
-49, -51, -53, -56, -58, -62, -64, -65, -67, -68, -71, -72, -72, -73, -73, -73, 
-72, -71, -69, -67, -66, -63, -59, -56, -52, -48, -45, -39, -35, -32, -28, -24, 
-21, -16, -13, -11, -8, -6, -4, -2, -1, -1, -1, -1, -2, -2, -3, -5, 
-6, -6, -9, -10, -11, -12, -14, -15, -16, -16, -16, -17, -16, -16, -15, -14, 
-13, -12, -11, -8, -6, -5, -4, -2, 1, 2, 4, 5, 6, 7, 7, 8, 
8, 7, 7, 7, 4, 3, 2, -1, -3, -7, -10, -13, -17, -20, -24, -30, 
-34, -38, -42, -47, -52, -59, -62, -67, -71, -74, -80, -84, -86, -88, -91, -93, 
-95, -96, -97, -97, -96, -96, -95, -93, -91, -89, -88, -84, -81, -78, -75, -72, 
-69, -63, -59, -55, -50, -46, -41, -34, -30, -25, -21, -16, -9, -4, -1, 3, 
7, 10, 14, 16, 18, 19, 20, 20, 20, 19, 18, 17, 15, 12, 9, 7, 
4, 1, -1, -5, -7, -9, -12, -13, -14, -16, -16, -17, -17, -17, -17, -16, 
-16, -15, -14, -13, -12, -10, -9, -8, -6, -3, -1, 1, 2, 5, 7, 10, 
13, 15, 16, 18, 20, 23, 24, 26, 26, 26, 27, 26, 26, 25, 23, 22, 
18, 16, 14, 11, 9, 7, 3, 1, 0, -1, -2, -2, -2, -2, -1, 0, 
1, 3, 5, 7, 8, 10, 12, 14, 16, 18, 19, 20, 23, 24, 26, 27, 
28, 30, 33, 34, 35, 38, 39, 40, 43, 45, 46, 48, 50, 52, 54, 56, 
57, 59, 60, 62, 64, 65, 66, 68, 68, 69, 70, 71, 71, 71, 72, 72, 
72, 72, 72, 72, 71, 71, 71, 71, 71, 70, 70, 70, 69, 69, 68, 67, 
66, 65, 63, 62, 61, 58, 56, 54, 53, 51, 49, 46, 44, 42, 41, 40, 
39, 39, 39, 40, 41, 42, 43, 45, 47, 48, 49, 51, 54, 55, 56, 58, 
58, 60, 61, 62, 62, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62, 62, 
62, 62, 62, 63, 63, 63, 65, 65, 67, 68, 69, 70, 72, 74, 76, 77, 
78, 79, 81, 82, 82, 82, 82, 82, 81, 79, 77, 75, 73, 69, 65, 60, 
56, 51, 46, 40, 32, 27, 20, 15, 9, 3, -6, -12, -18, -23, -27, -34, 
-37, -40, -43, -45, -47, -49, -49, -50, -50, -49, -48, -48, -47, -46, -45, -44, 
-43, -43, -42, -42, -42, -42, -43, -43, -43, -44, -44, -44, -43, -43, -42, -40, 
-39, -36, -33, -30, -27, -23, -20, -14, -10, -7, -3, 1, 4, 9, 11, 13, 
16, 17, 17, 17, 17, 16, 15, 13, 9, 6, 4, 0, -4, -7, -13, -16, 
-20, -24, -27, -32, -35, -37, -40, -42, -44, -47, -48, -49, -50, -50, -50, -50, 
-49, -48, -47, -46, -44, -42, -40, -39, -38, -36, -35, -35, -34, -34, -35, -36, 
-37, -38, -39, -41, -43, -46, -48, -50, -52, -55, -58, -62, -65, -67, -69, -72, 
-76, -78, -80, -81, -83, -85, -86, -87, -87, -87, -86, -86, -85, -84, -83, -82, 
-81, -80, -79, -78, -77, -76, -76, -75, -75, -76, -76, -77, -77, -78, -80, -81, 
-82, -83, -84, -85, -86, -86, -86, -86, -86, -85, -84, -83, -82, -81, -79, -78, 
-76, -75, -74, -73, -73, -72, -72, -73, -73, -74, -76, -77, -78, -80, -82, -85, 
-87, -88, -89, -91, -93, -94, -94, -94, -94, -93, -91, -88, -85, -82, -78, -74, 
-66, -62, -56, -50, -44, -34, -29, -22, -16, -10, -5, 4, 9, 14, 18, 22, 
26, 31, 34, 36, 37, 39, 41, 42, 42, 42, 41, 41, 39, 38, 37, 34, 
33, 30, 26, 24, 20, 17, 14, 8, 4, 1, -3, -7, -11, -17, -20, -24, 
-27, -30, -35, -38, -41, -42, -45, -47, -50, -51, -52, -54, -54, -56, -57, -58, 
-59, -59, -59, -59, -59, -59, -59, -59, -59, -59, -58, -58, -57, -57, -57, -55, 
-54, -53, -52, -50, -48, -46, -44, -41, -39, -36, -32, -29, -27, -24, -20, -17, 
-12, -9, -6, -3, 0, 5, 8, 12, 14, 17, 20, 25, 28, 30, 33, 36, 
39, 42, 44, 47, 48, 50, 53, 54, 55, 56, 56, 56, 55, 54, 53, 52, 
51, 49, 46, 43, 41, 39, 36, 32, 29, 27, 24, 21, 19, 16, 14, 13, 
12, 11, 11, 12, 13, 14, 14, 17, 20, 23, 26, 28, 31, 34, 39, 41, 
45, 48, 50, 53, 56, 58, 59, 61, 63, 64, 64, 65, 65, 65, 65, 65, 
65, 65, 65, 64, 64, 64, 63, 63, 63, 63, 62, 62, 62, 63, 63, 63, 
64, 65, 66, 67, 68, 69, 71, 73, 74, 75, 77, 80, 82, 83, 85, 87, 
87, 89, 89, 89, 88, 87, 85, 82, 79, 76, 72, 68, 61, 56, 49, 44, 
37, 30, 19, 11, 3, -5, -12, -25, -33, -41, -49, -57, -65, -75, -81, -87, 
-91, -96, -100, -105, -107, -108, -109, -109, -106, -104, -101, -97, -93, -88, -78, -71, 
-64, -56, -47, -37, -24, -14, -5, 6, 15, 29, 39, 47, 55, 64, 72, 83, 
89, 95, 100, 105, 109, 115, 117, 119, 121, 123, 123, 123, 122, 120, 119, 116, 
112, 109, 106, 101, 97, 92, 84, 79, 73, 68, 62, 52, 46, 39, 33, 26, 
20, 10, 4, -2, -8, -14, -19, -28, -32, -38, -42, -46, -52, -55, -57, -60, 
-63, -65, -68, -69, -70, -71, -72, -72, -72, -72, -71, -70, -69, -68, -67, -65, 
-64, -63, -61, -58, -57, -55, -53, -52, -49, -47, -45, -43, -40, -39, -36, -34, 
-32, -30, -29, -28, -28, -27, -28, -28, -28, -31, -32, -34, -37, -39, -42, -46, 
-49, -51, -55, -58, -61, -65, -67, -69, -72, -74, -76, -77, -78, -79, -79, -79, 
-78, -78, -77, -75, -74, -73, -70, -67, -65, -62, -59, -55, -51, -48, -44, -40, 
-37, -30, -26, -22, -18, -14, -9, -2, 2, 6, 10, 15, 20, 24, 27, 30, 
33, 35, 38, 40, 42, 43, 43, 45, 45, 46, 46, 47, 47, 47, 48, 48, 
49, 49, 49, 50, 51, 52, 52, 52, 53, 53, 53, 52, 52, 51, 49, 47, 
45, 43, 40, 37, 32, 28, 24, 20, 15, 10, 3, -1, -6, -10, -15, -23, 
-27, -31, -36, -40, -43, -49, -52, -55, -57, -60, -62, -64, -66, -66, -66, -67, 
-67, -66, -65, -64, -63, -61, -58, -55, -53, -50, -47, -41, -37, -34, -30, -26, 
-21, -15, -11, -6, -1, 3, 8, 15, 18, 23, 28, 32, 38, 42, 45, 48, 
51, 54, 57, 59, 60, 60, 60, 59, 58, 56, 54, 51, 48, 44, 40, 37, 
33, 29, 24, 19, 15, 11, 7, 3, 0, -5, -8, -10, -13, -15, -18, -20, 
-22, -23, -24, -25, -26, -26, -26, -26, -25, -24, -23, -21, -19, -17, -14, -9, 
-5, -1, 3, 7, 13, 20, 25, 31, 36, 42, 47, 56, 61, 67, 71, 76, 
83, 86, 90, 94, 97, 100, 103, 105, 106, 107, 107, 107, 106, 104, 103, 102, 
99, 95, 92, 89, 85, 81, 78, 71, 67, 63, 58, 54, 49, 42, 37, 32, 
28, 24, 17, 13, 10, 6, 2, -1, -5, -7, -9, -10, -12, -14, -16, -17, 
-17, -18, -18, -18, -17, -17, -16, -16, -16, -14, -14, -13, -12, -12, -11, -10, 
-10, -9, -8, -7, -6, -5, -3, -2, -1, 1, 3, 5, 6, 8, 10, 13, 
15, 17, 19, 20, 21, 23, 23, 23, 23, 23, 21, 19, 17, 14, 11, 8, 
4, 0, -3, -6, -10, -13, -17, -20, -22, -24, -26, -27, -29, -30, -30, -31, 
-31, -30, -30, -29, -28, -27, -26, -24, -22, -20, -19, -18, -16, -13, -11, -9, 
-7, -6, -4, -2, 0, 2, 3, 5, 7, 9, 11, 12, 13, 15, 16, 17, 
18, 19, 19, 20, 20, 19, 19, 18, 17, 15, 14, 13, 11, 9, 7, 4, 
1, -1, -3, -5, -9, -12, -14, -16, -19, -22, -25, -27, -29, -30, -32, -34, 
-35, -36, -36, -36, -36, -35, -35, -34, -33, -32, -31, -30, -28, -28, -27, -26, 
-25, -25, -25, -25, -26, -27, -28, -29, -31, -32, -34, -36, -39, -41, -42, -44, 
-46, -47, -48, -48, -48, -47, -46, -45, -43, -41, -39, -36, -33, -29, -26, -23, 
-20, -17, -13, -10, -7, -5, -4, -2, 0, 1, 1, 1, 1, 1, -1, -2, 
-4, -5, -7, -10, -13, -16, -17, -20, -23, -27, -29, -31, -34, -35, -37, -39, 
-40, -41, -42, -42, -42, -42, -42, -41, -40, -39, -37, -35, -33, -31, -30, -27, 
-23, -21, -19, -16, -13, -10, -7, -4, -3, 0, 2, 6, 8, 9, 12, 14, 
16, 19, 21, 22, 23, 25, 26, 27, 28, 29, 29, 29, 31, 31, 32, 32, 
33, 33, 34, 34, 34, 35, 34, 34, 34, 33, 33, 32, 31, 30, 28, 27, 
26, 25, 23, 20, 17, 15, 13, 9, 5, 1, -2, -6, -10, -13, -19, -22, 
-25, -29, -32, -35, -38, -40, -43, -44, -44, -46, -46, -46, -46, -46, -46, -43, 
-42, -40, -39, -38, -35, -34, -32, -30, -29, -28, -26, -25, -24, -23, -21, -21, 
-20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -11, -8, -7, -6, -5, -4, 
-3, -3, -3, -3, -4, -5, -6, -7, -9, -11, -12, -14, -18, -20, -21, -22, 
-24, -24, -26, -26, -25, -25, -24, -21, -19, -17, -14, -10, -7, -2, 2, 5, 
9, 12, 15, 20, 22, 25, 28, 30, 33, 35, 37, 38, 39, 41, 43, 44, 
45, 47, 47, 49, 51, 52, 53, 54, 54, 55, 55, 55, 55, 55, 54, 54, 
53, 52, 51, 50, 48, 46, 44, 43, 40, 37, 33, 30, 27, 23, 19, 14, 
7, 2, -4, -9, -15, -22, -31, -39, -45, -52, -58, -68, -73, -79, -84, -88, 
-92, -97, -99, -102, -103, -103, -103, -102, -100, -98, -96, -93, -87, -83, -79, -74, 
-70, -65, -58, -53, -48, -43, -39, -32, -27, -24, -19, -15, -12, -6, -2, 0, 
3, 6, 9, 13, 15, 17, 20, 21, 24, 26, 27, 28, 29, 30, 30, 30, 
29, 28, 27, 26, 24, 22, 20, 19, 16, 13, 10, 8, 7, 4, 2, 0, 
-2, -3, -4, -5, -6, -6, -7, -7, -7, -7, -7, -6, -6, -5, -4, -4, 
-1, 0, 1, 4, 5, 7, 11, 13, 14, 16, 19, 21, 23, 24, 25, 26, 
26, 26, 26, 25, 24, 23, 23, 20, 19, 18, 16, 15, 13, 11, 10, 9, 
8, 7, 6, 5, 4, 3, 1, 1, -2, -3, -4, -6, -8, -12, -14, -16, 
-18, -21, -23, -27, -30, -31, -34, -36, -38, -41, -42, -44, -44, -44, -45, -44, 
-43, -42, -41, -39, -36, -34, -32, -29, -26, -23, -18, -16, -13, -9, -6, -2, 
1, 3, 6, 9, 12, 16, 18, 21, 24, 27, 31, 34, 36, 38, 40, 42, 
45, 46, 48, 48, 49, 49, 48, 47, 45, 43, 41, 36, 33, 30, 25, 21, 
17, 10, 6, 3, -1, -5, -8, -12, -14, -15, -16, -17, -17, -16, -15, -14, 
-13, -11, -7, -4, -2, 2, 6, 9, 15, 18, 22, 26, 29, 35, 39, 42, 
46, 49, 52, 56, 58, 59, 61, 63, 65, 66, 67, 67, 67, 67, 66, 65, 
64, 62, 60, 59, 57, 55, 53, 51, 50, 48, 46, 45, 43, 43, 43, 41, 
41, 41, 41, 41, 41, 41, 42, 42, 42, 42, 42, 42, 41, 41, 40, 39, 
38, 37, 36, 35, 34, 32, 30, 28, 26, 25, 23, 20, 17, 15, 12, 10, 
7, 3, 0, -2, -5, -8, -10, -14, -17, -19, -22, -24, -26, -29, -31, -32, 
-33, -34, -34, -33, -33, -32, -31, -30, -27, -25, -23, -22, -20, -16, -13, -11, 
-9, -6, -3, 2, 5, 7, 11, 15, 18, 23, 26, 29, 32, 35, 40, 43, 
45, 47, 49, 51, 53, 54, 54, 54, 53, 52, 51, 49, 47, 45, 42, 38, 
34, 31, 28, 24, 21, 16, 12, 10, 6, 3, 0, -3, -5, -7, -8, -9, 
-9, -9, -9, -9, -8, -7, -6, -5, -4, -4, -3, -3, -2, -2, -2, -3, 
-3, -4, -5, -6, -7, -8, -8, -11, -12, -13, -14, -15, -16, -17, -18, -19, 
-20, -21, -21, -22, -23, -24, -25, -26, -28, -29, -31, -32, -33, -35, -37, -39, 
-40, -41, -43, -44, -45, -46, -46, -47, -47, -46, -46, -45, -44, -43, -41, -39, 
-37, -36, -35, -33, -29, -27, -25, -24, -21, -19, -15, -12, -10, -8, -6, -3, 
0, 2, 5, 6, 8, 10, 11, 12, 13, 13, 13, 12, 11, 10, 9, 8, 
5, 2, 0, -1, -4, -6, -10, -12, -13, -16, -18, -19, -22, -23, -24, -25, 
-25, -25, -24, -23, -22, -21, -19, -16, -14, -12, -10, -8, -6, -3, -1, 0, 
1, 1, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, 0, 0, 1, 2, 
3, 4, 6, 9, 11, 13, 14, 17, 19, 22, 24, 25, 26, 27, 27, 28, 
28, 27, 26, 25, 23, 21, 19, 16, 13, 10, 6, 3, 0, -4, -7, -10, 
-14, -17, -19, -21, -23, -25, -27, -28, -28, -28, -28, -29, -28, -28, -28, -28, 
-28, -27, -27, -27, -27, -27, -27, -27, -26, -26, -25, -24, -23, -22, -21, -20, 
-19, -17, -15, -13, -11, -10, -9, -6, -4, -2, 1, 2, 4, 7, 9, 11, 
12, 15, 17, 20, 22, 25, 27, 29, 33, 35, 37, 40, 41, 42, 45, 46, 
46, 47, 46, 46, 44, 43, 42, 39, 37, 33, 30, 28, 25, 22, 19, 15, 
12, 10, 8, 5, 4, 2, 1, 1, 1, 1, 2, 4, 6, 7, 10, 13, 
18, 21, 25, 29, 33, 40, 44, 49, 54, 58, 63, 70, 74, 79, 83, 86, 
90, 96, 99, 100, 102, 104, 106, 106, 106, 105, 103, 102, 97, 94, 90, 85, 
80, 75, 65, 59, 53, 45, 38, 27, 20, 12, 5, -2, -9, -19, -25, -32, 
-37, -42, -47, -54, -58, -62, -65, -68, -72, -74, -75, -76, -76, -76, -75, -73, 
-71, -69, -66, -63, -56, -52, -46, -41, -35, -26, -20, -13, -7, -1, 5, 14, 
20, 25, 29, 34, 38, 44, 47, 49, 50, 50, 52, 52, 51, 49, 48, 46, 
43, 41, 37, 34, 31, 27, 21, 18, 15, 11, 8, 2, -1, -3, -6, -9, 
-12, -16, -18, -19, -22, -24, -26, -28, -30, -31, -32, -34, -36, -37, -38, -40, 
-41, -41, -44, -45, -46, -47, -48, -50, -51, -53, -54, -56, -58, -61, -63, -65, 
-66, -68, -71, -74, -76, -77, -79, -80, -83, -84, -85, -85, -85, -85, -84, -83, 
-82, -81, -80, -78, -75, -72, -70, -68, -65, -62, -59, -57, -55, -54, -51, -48, 
-47, -45, -44, -43, -42, -41, -40, -40, -40, -41, -41, -42, -43, -44, -46, -47, 
-50, -52, -54, -56, -59, -62, -65, -67, -70, -73, -76, -80, -83, -85, -87, -90, 
-92, -95, -97, -99, -101, -103, -104, -107, -108, -109, -111, -111, -113, -113, -114, -114, 
-114, -114, -113, -113, -112, -111, -110, -108, -106, -103, -101, -99, -95, -91, -87, -83, 
-78, -74, -69, -62, -58, -52, -47, -43, -38, -32, -29, -25, -21, -18, -15, -13, 
-11, -10, -9, -8, -8, -8, -9, -10, -11, -12, -13, -15, -16, -17, -19, -21, 
-22, -23, -26, -27, -28, -30, -32, -34, -35, -37, -40, -43, -46, -47, -50, -53, 
-57, -60, -63, -66, -68, -70, -75, -77, -78, -80, -82, -83, -84, -84, -84, -83, 
-82, -81, -78, -76, -74, -71, -68, -62, -58, -53, -48, -44, -36, -31, -27, -21, 
-17, -12, -6, -2, 2, 5, 8, 10, 14, 15, 16, 17, 18, 18, 17, 17, 
16, 15, 14, 12, 10, 9, 8, 6, 5, 2, 1, 0, -1, -2, -3, -3, 
-3, -3, -3, -3, -1, 0, 1, 2, 4, 6, 9, 11, 14, 16, 18, 22, 
25, 27, 29, 32, 35, 38, 40, 42, 44, 46, 48, 51, 53, 54, 55, 57, 
59, 60, 61, 62, 63, 63, 64, 64, 64, 65, 65, 65, 65, 66, 66, 66, 
68, 68, 69, 71, 72, 73, 75, 77, 79, 80, 83, 85, 88, 91, 93, 94, 
97, 99, 103, 105, 106, 108, 110, 112, 115, 117, 118, 119, 121, 122, 123, 124, 
125, 125, 125, 126, 126, 127, 127, 127, 127, 126, 126, 126, 125, 125, 124, 123, 
122, 121, 120, 119, 117, 116, 114, 112, 111, 109, 105, 103, 101, 98, 94, 90, 
86, 82, 79, 75, 72, 66, 62, 58, 53, 49, 45, 39, 35, 31, 28, 25, 
20, 17, 14, 12, 11, 9, 8, 7, 7, 8, 9, 9, 12, 14, 16, 19, 
22, 28, 32, 35, 39, 43, 47, 54, 58, 62, 66, 70, 74, 80, 83, 87, 
91, 94, 99, 102, 104, 106, 108, 110, 113, 114, 114, 115, 115, 115, 114, 113, 
112, 110, 109, 107, 105, 103, 101, 100, 97, 94, 92, 89, 87, 86, 84, 80, 
78, 76, 74, 73, 69, 67, 65, 63, 62, 60, 57, 56, 54, 52, 51, 49, 
48, 47, 46, 45, 44, 43, 43, 42, 41, 41, 40, 39, 38, 37, 36, 35, 
33, 31, 29, 27, 24, 21, 16, 12, 9, 4, 0, -5, -13, -18, -24, -29, 
-35, -43, -48, -54, -59, -64, -69, -75, -78, -82, -85, -88, -90, -92, -93, -94, 
-94, -94, -93, -93, -92, -91, -90, -88, -87, -86, -85, -85, -84, -84, -84, -84, 
-84, -84, -84, -85, -85, -86, -87, -87, -87, -89, -89, -89, -90, -90, -90, -90, 
-90, -90, -89, -88, -87, -85, -83, -81, -78, -75, -69, -65, -61, -56, -50, -45, 
-36, -30, -24, -17, -11, -2, 3, 9, 14, 18, 22, 28, 31, 33, 34, 36, 
37, 36, 36, 35, 33, 30, 26, 23, 20, 15, 11, 6, -2, -7, -13, -19, 
-25, -31, -40, -46, -52, -57, -63, -71, -76, -81, -85, -90, -94, -100, -103, -107, 
-110, -113, -116, -119, -120, -121, -123, -124, -126, -126, -127, -127, -127, -127, -126, -126, 
-124, -123, -123, -120, -114, -110, -105, -100, -95, -88, -83, -78, -73, -69, -64, -58, 
-54, -50, -46, -42, -37, -34, -31, -28, -25, -23, -19, -17, -15, -12, -11, -9, 
-7, -5, -4, -3, -2, 0, };
