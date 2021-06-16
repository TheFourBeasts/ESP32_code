const unsigned int jakeBrakeSampleRate = 22050;
const unsigned int jakeBrakeSampleCount = 4430;
const signed char jakeBrakeSamples[] = {
0, 0, 3, 7, 11, 15, 17, 17, 17, 17, 17, 19, 19, 16, 14, 12,
12, 15, 17, 20, 23, 24, 24, 25, 25, 26, 28, 30, 32, 36, 39, 43, 
43, 42, 37, 32, 26, 22, 22, 25, 29, 30, 29, 24, 18, 16, 14, 15, 
16, 18, 20, 19, 19, 20, 22, 25, 25, 23, 22, 21, 18, 15, 15, 19, 
23, 26, 29, 30, 32, 36, 41, 47, 50, 51, 48, 45, 41, 39, 39, 39, 
43, 45, 44, 43, 43, 43, 41, 37, 33, 31, 34, 39, 40, 39, 34, 28, 
21, 13, 12, 13, 16, 20, 28, 33, 36, 34, 30, 26, 21, 22, 25, 30, 
37, 44, 49, 50, 50, 53, 58, 60, 59, 58, 57, 56, 54, 52, 51, 50, 
46, 44, 46, 52, 51, 47, 39, 30, 19, 17, 18, 22, 27, 29, 25, 23, 
21, 19, 15, 6, 1, -4, -10, -15, -19, -26, -31, -36, -39, -40, -41, -45, 
-48, -53, -57, -59, -60, -60, -60, -59, -56, -52, -44, -39, -36, -34, -34, -35, 
-42, -46, -50, -52, -51, -52, -54, -56, -59, -61, -61, -63, -62, -58, -53, -47, 
-43, -43, -41, -39, -36, -33, -25, -19, -12, -6, 2, 10, 21, 26, 27, 24, 
20, 17, 15, 13, 11, 10, 11, 18, 22, 26, 31, 37, 43, 47, 47, 46, 
42, 39, 34, 29, 28, 29, 30, 29, 27, 29, 32, 36, 37, 35, 32, 32, 
31, 28, 28, 32, 41, 44, 43, 39, 37, 40, 42, 43, 42, 41, 40, 42, 
45, 46, 47, 50, 54, 52, 48, 41, 33, 26, 16, 11, 8, 5, 4, 4, 
7, 8, 10, 10, 9, 4, -7, -11, -12, -13, -14, -16, -19, -20, -21, -21, 
-21, -17, -12, -8, -8, -11, -12, -11, -11, -11, -10, -9, -9, -10, -12, -17, 
-20, -19, -13, -10, -7, -3, 2, 8, 10, 8, 3, -2, -4, -7, -8, -8, 
-6, 0, 5, 11, 10, 7, 2, -1, -2, -2, -2, -3, -4, -6, -8, -5, 
-1, 4, 7, 8, 9, 11, 12, 12, 12, 9, 8, 7, 7, 6, 7, 9, 
10, 10, 9, 7, 2, -8, -12, -15, -15, -15, -15, -15, -16, -17, -19, -21, 
-22, -21, -21, -21, -21, -21, -21, -23, -25, -27, -29, -32, -32, -32, -31, -31, 
-34, -38, -41, -44, -44, -41, -37, -34, -34, -34, -34, -33, -30, -27, -27, -29, 
-29, -26, -20, -20, -22, -27, -35, -42, -48, -46, -40, -35, -31, -24, -19, -17, 
-18, -21, -24, -30, -33, -34, -33, -33, -35, -42, -47, -51, -54, -56, -57, -59, 
-59, -59, -59, -59, -59, -59, -59, -59, -59, -54, -49, -45, -42, -39, -39, -41, 
-43, -44, -43, -41, -40, -37, -35, -31, -26, -20, -10, -4, 0, 3, 3, 1, 
-6, -9, -10, -13, -16, -19, -21, -19, -17, -14, -10, -3, -1, -1, 1, 5, 
10, 21, 29, 36, 40, 40, 38, 37, 36, 34, 34, 37, 42, 43, 42, 41, 
38, 38, 42, 45, 46, 46, 45, 45, 50, 55, 60, 62, 65, 69, 71, 71, 
69, 66, 65, 67, 70, 70, 70, 70, 70, 70, 69, 68, 67, 65, 61, 57, 
54, 50, 50, 50, 49, 49, 50, 51, 51, 49, 46, 44, 43, 43, 43, 43, 
42, 43, 42, 42, 42, 38, 34, 29, 24, 20, 16, 10, 10, 12, 13, 14, 
15, 16, 16, 15, 13, 10, 4, 2, 3, 5, 5, 6, 10, 11, 11, 11, 
13, 20, 23, 22, 20, 17, 17, 22, 26, 30, 31, 32, 33, 33, 33, 34, 
38, 40, 34, 27, 19, 13, 7, 2, -1, -3, -5, -6, -7, -8, -9, -8, 
-7, -7, -8, -9, -10, -10, -10, -10, -7, 1, 4, 5, 5, 5, 5, 4, 
1, -4, -10, -18, -26, -28, -28, -27, -25, -22, -23, -25, -26, -29, -32, -37, 
-41, -48, -57, -65, -71, -76, -78, -77, -75, -71, -68, -67, -68, -71, -74, -75, 
-75, -75, -76, -76, -76, -75, -74, -74, -74, -75, -75, -75, -76, -78, -78, -76, 
-72, -67, -63, -60, -58, -57, -60, -65, -66, -67, -71, -75, -76, -69, -62, -55, 
-47, -41, -37, -38, -40, -42, -42, -42, -45, -47, -46, -43, -39, -35, -28, -24, 
-20, -20, -23, -27, -30, -30, -28, -24, -20, -22, -24, -24, -23, -22, -23, -25, 
-24, -21, -16, -10, -1, 4, 7, 7, 4, 1, -1, 1, 1, 0, 0, 3, 
5, 7, 7, 8, 8, 8, 8, 6, 4, 1, -4, -8, -7, -4, 1, 6, 
10, 9, 5, -1, -6, -5, 0, 4, 7, 7, 7, 8, 14, 18, 20, 21, 
22, 21, 19, 17, 16, 15, 13, 13, 16, 17, 18, 19, 19, 15, 11, 9, 
8, 8, 11, 16, 23, 26, 26, 26, 27, 30, 33, 39, 46, 53, 60, 62, 
62, 61, 60, 59, 58, 58, 59, 60, 60, 61, 63, 64, 67, 70, 73, 73, 
70, 68, 67, 65, 62, 62, 63, 64, 66, 65, 61, 60, 62, 66, 71, 75, 
80, 82, 83, 83, 79, 72, 67, 64, 63, 63, 66, 70, 72, 71, 68, 64, 
62, 57, 52, 46, 40, 37, 34, 30, 27, 23, 21, 22, 22, 21, 19, 16, 
15, 12, 7, 5, 2, 0, -1, -1, -2, -3, -2, 3, 8, 14, 17, 21, 
25, 27, 27, 27, 25, 21, 17, 14, 7, 4, 3, 4, 3, 1, -1, 0, 
1, 1, 2, 2, 3, 3, 4, 6, 9, 13, 16, 18, 19, 21, 25, 31, 
33, 36, 39, 42, 44, 41, 38, 35, 35, 36, 40, 42, 43, 43, 42, 41, 
39, 36, 32, 30, 27, 21, 17, 13, 9, 5, 0, -5, -7, -9, -13, -17, 
-20, -23, -27, -33, -38, -43, -54, -61, -68, -72, -73, -72, -65, -62, -61, -60, 
-59, -60, -66, -75, -82, -86, -90, -94, -94, -95, -98, -100, -101, -99, -95, -92, 
-89, -90, -94, -103, -107, -109, -107, -104, -96, -90, -83, -77, -74, -72, -69, -66, 
-64, -60, -57, -52, -43, -39, -37, -37, -37, -33, -28, -26, -26, -27, -29, -28, 
-26, -25, -21, -14, -3, 15, 25, 30, 31, 30, 27, 24, 23, 24, 28, 33, 
38, 40, 45, 50, 56, 62, 61, 57, 52, 48, 44, 37, 34, 33, 33, 33, 
32, 26, 22, 19, 15, 11, 1, -4, -10, -15, -22, -28, -35, -35, -31, -24, 
-16, -10, -6, -7, -9, -10, -13, -18, -22, -23, -23, -22, -20, -17, -16, -17, 
-18, -20, -22, -22, -21, -20, -20, -23, -25, -22, -20, -21, -22, -26, -34, -40, 
-46, -51, -54, -56, -53, -49, -43, -37, -31, -24, -21, -19, -14, -10, -8, -12, 
-16, -22, -27, -33, -38, -44, -47, -48, -46, -39, -27, -17, -7, 0, 0, -7, 
-21, -25, -29, -33, -38, -42, -40, -37, -33, -28, -19, -2, 6, 10, 10, 7, 
5, 3, 5, 7, 11, 17, 22, 30, 34, 39, 43, 49, 55, 57, 56, 54, 
53, 50, 42, 34, 27, 23, 19, 13, 3, 2, 5, 14, 22, 30, 34, 40, 
44, 45, 38, 22, 13, 6, 1, -2, 0, 6, 13, 20, 27, 33, 42, 46, 
47, 45, 41, 40, 47, 51, 52, 51, 51, 57, 65, 74, 78, 76, 70, 64, 
60, 52, 43, 37, 35, 39, 42, 46, 50, 52, 51, 48, 43, 38, 35, 33, 
36, 33, 24, 15, 8, 5, 5, 3, 1, -1, -2, -12, -21, -25, -22, -17, 
-17, -24, -24, -18, -11, -9, -10, -19, -29, -38, -41, -39, -32, -28, -23, -19, 
-17, -17, -18, -15, -14, -15, -15, -13, -4, 2, 6, 7, 6, 1, -4, -9, 
-11, -9, -4, 7, 12, 13, 13, 15, 18, 23, 27, 32, 36, 38, 41, 41, 
38, 31, 24, 18, 14, 14, 18, 22, 23, 21, 18, 16, 13, 10, 10, 15, 
15, 10, 1, -5, -7, -7, -10, -17, -26, -36, -47, -61, -67, -68, -67, -65, 
-65, -66, -67, -68, -70, -71, -78, -86, -94, -101, -107, -117, -120, -119, -113, -106, 
-100, -89, -85, -82, -76, -68, -64, -70, -79, -84, -86, -89, -99, -108, -116, -122, 
-124, -121, -101, -80, -61, -51, -51, -56, -61, -62, -64, -68, -72, -75, -76, -73, 
-66, -54, -40, -19, -12, -11, -13, -20, -30, -41, -42, -39, -35, -32, -25, -16, 
-6, 4, 14, 21, 30, 35, 37, 36, 34, 30, 22, 19, 18, 18, 20, 30, 
39, 46, 48, 47, 48, 54, 58, 60, 61, 63, 67, 77, 80, 79, 77, 77, 
82, 84, 85, 86, 89, 91, 92, 96, 103, 109, 110, 108, 107, 109, 106, 99, 
92, 83, 78, 71, 66, 66, 67, 68, 68, 67, 64, 61, 61, 58, 51, 44, 
38, 37, 39, 40, 42, 46, 48, 47, 39, 34, 32, 29, 26, 24, 17, 13, 
9, 9, 10, 18, 29, 42, 55, 64, 69, 62, 53, 44, 37, 33, 25, 21, 
21, 24, 30, 40, 58, 68, 73, 73, 70, 64, 52, 48, 46, 45, 44, 43, 
43, 44, 45, 48, 51, 57, 60, 60, 58, 52, 44, 38, 41, 46, 48, 44, 
36, 32, 29, 27, 27, 30, 36, 37, 35, 31, 28, 28, 29, 31, 34, 35, 
33, 25, 21, 20, 21, 23, 23, 24, 22, 21, 23, 27, 32, 38, 38, 35, 
29, 22, 9, 0, -9, -15, -17, -14, -10, -10, -11, -10, -10, -10, -10, -10, 
-9, -7, -8, -12, -16, -18, -20, -24, -27, -35, -43, -53, -63, -69, -70, -64, 
-60, -54, -51, -49, -47, -44, -38, -32, -26, -24, -25, -27, -29, -33, -35, -37, 
-42, -45, -45, -40, -33, -23, -18, -15, -12, -13, -17, -29, -39, -46, -52, -57, 
-62, -69, -72, -75, -78, -81, -85, -86, -86, -85, -83, -81, -83, -86, -87, -87, 
-87, -92, -93, -90, -88, -89, -93, -101, -104, -104, -104, -105, -105, -107, -106, -102, 
-97, -92, -86, -83, -81, -76, -70, -64, -58, -57, -58, -62, -66, -69, -69, -65, 
-60, -55, -52, -53, -56, -61, -68, -75, -81, -86, -83, -78, -72, -69, -69, -73, 
-74, -72, -71, -71, -72, -75, -77, -80, -82, -80, -70, -64, -59, -55, -51, -47, 
-41, -38, -33, -29, -27, -24, -21, -19, -18, -16, -14, -15, -18, -20, -23, -24, 
-24, -19, -15, -13, -10, -9, -9, -12, -15, -17, -17, -16, -16, -13, -7, 2, 
11, 20, 34, 43, 51, 58, 63, 65, 62, 57, 51, 48, 46, 46, 46, 48, 
54, 60, 61, 59, 56, 55, 54, 54, 54, 54, 53, 51, 47, 41, 30, 28, 
28, 29, 31, 35, 46, 54, 60, 66, 69, 67, 64, 61, 59, 57, 55, 57, 
58, 60, 63, 65, 65, 60, 57, 56, 56, 57, 58, 60, 61, 62, 63, 66, 
75, 82, 87, 89, 87, 80, 76, 74, 72, 71, 71, 77, 83, 90, 95, 100, 
104, 102, 97, 88, 80, 74, 73, 76, 81, 84, 86, 89, 95, 97, 93, 87, 
81, 76, 69, 65, 61, 57, 54, 52, 51, 49, 46, 44, 42, 36, 31, 26, 
22, 18, 13, 12, 15, 17, 17, 14, 8, 2, -6, -11, -13, -13, -15, -16, 
-15, -13, -9, -4, -2, -5, -12, -20, -27, -34, -38, -39, -37, -32, -26, -17, 
-13, -10, -7, -4, 1, 6, 4, -1, -8, -16, -25, -29, -33, -35, -37, -39, 
-41, -39, -31, -19, -8, 2, 12, 12, 7, -2, -13, -28, -35, -39, -37, -34, 
-31, -28, -27, -26, -24, -20, -17, -15, -17, -19, -23, -29, -37, -41, -42, -41, 
-39, -36, -30, -27, -25, -25, -28, -34, -37, -37, -37, -40, -45, -50, -49, -47, 
-46, -45, -45, -45, -46, -46, -46, -45, -36, -29, -24, -22, -20, -20, -24, -28, 
-30, -30, -30, -31, -37, -42, -46, -48, -47, -40, -35, -30, -23, -16, -10, -2, 
2, 1, -5, -11, -14, -13, -13, -15, -19, -23, -24, -21, -15, -9, -2, 7, 
19, 21, 17, 9, 2, -5, -15, -24, -30, -33, -32, -32, -35, -38, -38, -35, 
-33, -35, -38, -40, -39, -38, -37, -40, -42, -43, -43, -43, -45, -45, -44, -43, 
-43, -46, -48, -45, -39, -31, -25, -21, -21, -23, -24, -24, -21, -15, -11, -8, 
-6, -3, 0, 7, 12, 19, 23, 24, 23, 17, 9, 1, -7, -11, -11, -7, 
-1, 5, 11, 15, 20, 21, 18, 11, 1, -7, -12, -14, -14, -12, -8, -4, 
-4, -5, -4, -3, -5, -8, -9, -8, -5, -1, 4, 3, 1, 0, 0, 1, 
4, 12, 21, 28, 31, 31, 35, 38, 41, 43, 46, 52, 55, 58, 59, 59, 
61, 60, 58, 56, 57, 61, 67, 75, 75, 73, 71, 67, 62, 56, 51, 47, 
47, 49, 50, 49, 47, 47, 48, 47, 43, 40, 38, 35, 33, 31, 31, 30, 
25, 18, 11, 4, 1, 0, 1, 5, 12, 20, 22, 21, 20, 19, 13, 8, 
4, 1, -2, -7, -10, -11, -12, -12, -11, -10, -7, -8, -9, -10, -13, -18, 
-21, -20, -19, -16, -14, -13, -12, -11, -10, -8, -8, -8, -7, -7, -10, -15, 
-19, -19, -19, -18, -17, -14, -9, -6, -2, -1, -1, -1, -5, -12, -19, -25, 
-28, -30, -29, -27, -25, -25, -24, -20, -19, -20, -22, -22, -20, -20, -20, -18, 
-14, -8, 2, 7, 10, 13, 15, 16, 16, 15, 15, 15, 12, 6, 3, 4, 
6, 8, 10, 15, 19, 23, 23, 22, 20, 15, 12, 10, 7, 7, 13, 20, 
26, 30, 32, 31, 30, 28, 25, 22, 20, 21, 20, 17, 12, 9, 9, 13, 
15, 16, 16, 15, 11, 3, -1, -1, 1, 1, 1, 2, 6, 11, 14, 15, 
12, 8, 2, -4, -10, -15, -19, -18, -16, -14, -15, -20, -25, -27, -27, -26, 
-26, -25, -26, -26, -27, -27, -27, -22, -18, -17, -17, -18, -18, -22, -25, -29, 
-31, -33, -35, -34, -32, -29, -26, -23, -18, -17, -15, -14, -12, -10, -8, -7, 
-7, -7, -7, -9, -12, -17, -21, -20, -19, -17, -16, -15, -12, -13, -18, -28, 
-32, -32, -31, -31, -31, -27, -24, -21, -21, -24, -27, -29, -31, -32, -31, -25, 
-15, -11, -11, -13, -15, -16, -18, -20, -23, -24, -23, -22, -23, -24, -24, -21, 
-15, -14, -15, -15, -14, -15, -23, -31, -38, -42, -45, -50, -58, -59, -57, -54, 
-53, -56, -60, -65, -70, -75, -76, -68, -59, -53, -51, -51, -53, -54, -53, -51, 
-47, -40, -28, -21, -17, -17, -21, -24, -31, -35, -37, -38, -34, -26, -15, -11, 
-7, -3, 1, 7, 10, 12, 14, 14, 13, 8, 3, -2, -5, -6, -5, -1, 
3, 7, 9, 11, 13, 14, 14, 12, 12, 12, 14, 15, 16, 19, 20, 23, 
26, 28, 30, 33, 38, 43, 47, 52, 57, 61, 62, 60, 56, 54, 55, 58, 
60, 60, 58, 55, 52, 49, 51, 55, 61, 66, 72, 76, 76, 73, 68, 63, 
59, 55, 54, 55, 60, 65, 67, 65, 62, 60, 59, 58, 58, 60, 63, 64, 
63, 60, 54, 42, 35, 30, 27, 24, 23, 25, 26, 25, 23, 21, 22, 21, 
19, 17, 13, 9, 6, 3, 3, 4, 8, 14, 16, 16, 17, 19, 19, 16, 
11, 7, 4, 4, 7, 12, 18, 23, 25, 24, 15, 9, 5, 5, 8, 8, 
11, 13, 15, 17, 16, 15, 16, 16, 15, 12, 12, 13, 15, 16, 17, 19, 
19, 17, 15, 13, 9, 6, 7, 10, 13, 17, 19, 21, 18, 14, 9, 5, 
2, 0, 5, 9, 10, 8, 5, -2, -8, -13, -12, -8, -3, 3, 7, 9, 
9, 8, 3, -6, -8, -7, -6, -6, -10, -13, -15, -14, -11, -5, 7, 15, 
22, 28, 30, 30, 26, 22, 17, 13, 10, 10, 11, 13, 15, 15, 12, 6, 
2, -2, -3, -2, 1, 5, 4, 1, -7, -15, -21, -22, -21, -19, -15, -13, 
-14, -15, -14, -12, -12, -12, -16, -19, -23, -25, -21, -15, -14, -15, -16, -20, 
-26, -35, -39, -39, -37, -33, -29, -26, -23, -21, -19, -20, -26, -30, -33, -37, 
-42, -46, -45, -42, -39, -39, -40, -43, -43, -41, -39, -38, -39, -41, -43, -48, 
-53, -59, -60, -54, -51, -49, -47, -43, -36, -34, -35, -38, -38, -35, -31, -32, 
-33, -33, -32, -32, -34, -36, -36, -34, -31, -30, -30, -31, -32, -33, -33, -29, 
-23, -16, -9, -6, -7, -12, -15, -20, -25, -31, -39, -40, -38, -35, -32, -29, 
-25, -25, -27, -28, -29, -30, -30, -30, -31, -33, -37, -40, -41, -41, -39, -33, 
-23, -5, 4, 9, 13, 15, 15, 16, 15, 14, 14, 14, 12, 11, 9, 8, 
9, 11, 14, 14, 13, 12, 12, 14, 19, 23, 27, 30, 28, 20, 16, 14, 
13, 11, 9, 8, 9, 10, 11, 13, 16, 19, 21, 21, 20, 20, 23, 24, 
23, 21, 20, 19, 16, 17, 22, 26, 28, 30, 34, 40, 43, 43, 45, 44, 
43, 41, 37, 33, 29, 27, 25, 22, 18, 16, 20, 23, 25, 28, 31, 33, 
35, 34, 31, 26, 24, 25, 29, 32, 35, 40, 43, 45, 43, 41, 41, 41, 
38, 28, 18, 9, 0, -7, -12, -14, -13, -12, -12, -14, -16, -17, -17, -20, 
-24, -30, -41, -48, -55, -63, -70, -75, -76, -75, -73, -69, -64, -57, -58, -61, 
-65, -67, -70, -73, -73, -72, -71, -70, -69, -69, -67, -64, -59, -55, -53, -50, 
-45, -40, -38, -38, -35, -34, -34, -35, -35, -32, -24, -20, -18, -18, -20, -24, 
-24, -24, -23, -22, -19, -15, -12, -11, -9, -6, -1, 7, 13, 19, 25, 30, 
34, 37, 39, 39, 38, 38, 39, 38, 35, 31, 31, 31, 33, 33, 33, 33, 
33, 34, 34, 35, 36, 38, 40, 38, 37, 37, 38, 40, 43, 44, 44, 44, 
45, 47, 46, 42, 35, 29, 25, 22, 18, 17, 17, 16, 16, 15, 14, 14, 
14, 13, 12, 10, 9, 10, 13, 15, 17, 19, 21, 25, 28, 31, 35, 36, 
35, 32, 26, 21, 20, 24, 29, 32, 34, 36, 35, 33, 31, 28, 27, 26, 
25, 23, 21, 21, 22, 26, 28, 30, 31, 31, 30, 27, 25, 23, 20, 17, 
11, 7, 3, 0, -1, -1, -1, 0, 2, 5, 8, 11, 16, 20, 24, 27, 
27, 24, 24, 24, 25, 27, 29, 33, 36, 41, 44, 44, 43, 38, 37, 36, 
35, 32, 29, 28, 27, 26, 26, 26, 26, 25, 21, 16, 10, 6, 1, -2, 
-4, -4, -1, 3, 5, 6, 7, 7, 5, 4, 4, 4, 3, 0, -2, -5, 
-7, -7, -3, 0, 2, 4, 5, 6, 8, 10, 8, 5, 1, -3, -6, -15, 
-21, -25, -29, -32, -34, -36, -35, -33, -28, -24, -21, -14, -9, -4, 0, 2, 
0, -4, -8, -13, -16, -16, -12, -8, -4, -1, -1, -1, -1, -2, -7, -13, 
-17, -21, -23, -26, -29, -31, -32, -32, -30, -28, -24, -20, -17, -14, -15, -17, 
-20, -22, -23, -24, -26, -31, -35, -37, -36, -37, -37, -36, -33, -29, -28, -28, 
-28, -28, -29, -32, -34, -34, -34, -34, -36, -37, -38, -40, -44, -50, -55, -60, 
-62, -62, -58, -55, -51, -50, -50, -51, -51, -50, -49, -51, -53, -55, -54, -54, 
-55, -56, -57, -57, -57, -60, -60, -58, -54, -50, -45, -40, -37, -34, -31, -31, 
-32, -35, -34, -33, -33, -38, -49, -53, -52, -47, -42, -37, -30, -27, -28, -32, 
-35, -34, -28, -21, -14, -7, 0, 6, 4, 0, -5, -8, -8, -5, -4, -3, 
-2, -1, 0, 0, 2, 7, 10, 11, 8, 8, 10, 14, 17, 19, 19, 16, 
14, 13, 10, 5, 4, 6, 7, 7, 8, 14, 19, 24, 27, 29, 33, 43, 
47, 50, 52, 51, 49, 46, 45, 45, 44, 42, 39, 38, 40, 43, 46, 50, 
55, 57, 56, 53, 48, 40, 37, 36, 36, 36, 39, 46, 51, 57, 64, 70, 
73, 68, 64, 58, 53, 48, 45, 46, 46, 46, 45, 44, 44, 46, 49, 53, 
58, 59, 57, 52, 45, 39, 33, 26, 21, 18, 16, 12, 9, 4, 3, 4, 
5, 7, 7, 8, 8, 6, 3, 1, -2, -5, -10, -14, -17, -20, -25, -26, 
-25, -22, -19, -18, -18, -19, -19, -17, -14, -10, -10, -13, -18, -23, -28, -31, 
-31, -27, -22, -16, -12, -9, -8, -8, -8, -8, -11, -14, -19, -26, -36, -44, 
-49, -48, -46, -46, -48, -45, -40, -32, -23, -16, -15, -22, -27, -33, -37, -38, 
-37, -30, -25, -20, -14, -8, -3, -3, -3, -1, 2, 5, 10, 10, 10, 11, 
13, 16, 20, 20, 19, 18, 16, 7, 1, -2, -5, -7, -9, -10, -7, -4, 
-1, 1, 4, 8, 9, 7, 2, -4, -17, -26, -32, -34, -32, -26, -14, -5, 
1, 3, 2, 0, 5, 8, 12, 14, 11, -3, -15, -25, -30, -28, -20, -3, 
6, 14, 19, 22, 24, 25, 30, 38, 46, 52, 56, 54, 51, 45, 38, 31, 
23, 24, 30, 39, 48, 57, 68, 74, 78, 82, 83, 74, 62, 50, 40, 31, 
27, 27, 29, 30, 31, 34, 37, 38, 39, 39, 38, 35, 32, 31, 28, 23, 
16, 10, 5, 3, -1, -7, -13, -20, -28, -31, -31, -27, -23, -25, -31, -37, 
-41, -41, -40, -44, -51, -60, -72, -84, -98, -102, -97, -88, -79, -75, -76, -74, 
-72, -72, -73, -74, -81, -93, -106, -120, -127, -127, -123, -108, -85, -63, -45, -29, 
-28, -35, -44, -51, -52, -48, -49, -51, -52, -50, -45, -40, -32, -22, -12, -8, 
-10, -14, -18, -21, -20, -15, -5, -6, -14, -22, -25, -21, -17, -12, -2, 9, 
19, 26, 26, 24, 21, 22, 25, 31, 32, 33, 34, 32, 23, 20, 21, 24, 
24, 21, 18, 22, 31, 43, 58, 70, 80, 79, 72, 63, 51, 32, 19, 7, 
-7, -16, -18, -8, 8, 24, 37, 47, 50, 45, 35, 25, 19, 18, 23, 25, 
21, 14, 6, 1, -7, -9, -6, 2, 13, 22, 32, 38, 41, 40, 36, 23, 
14, 6, 1, -5, -9, -7, -3, 3, 9, 16, 22, 20, 15, 13, 17, 22, 
23, 21, 20, 18, 15, 13, 13, 12, 11, 13, 17, 25, 28, 29, 30, 30, 
30, 28, 25, 22, 19, 16, 16, 24, 33, 46, 58, 70, 80, 77, 70, 58, 
47, 37, 35, 42, 52, 58, 58, 59, 64, 67, 71, 74, 76, 69, 61, 51, 
40, 30, 25, 29, 37, 43, 45, 42, 37, 34, 38, 46, 58, 70, 79, 79, 
77, 75, 75, 75, 69, 60, 48, 35, 25, 17, 7, 4, 4, 5, 7, 7, 
8, 8, 8, 8, 8, 3, -4, -15, -29, -42, -54, -66, -69, -70, -68, -62, 
-49, -39, -30, -22, -20, -22, -34, -42, -47, -49, -45, -38, -28, -25, -24, -24, 
-24, -23, -22, -22, -23, -24, -25, -26, -25, -23, -19, -13, -7, 0, 2, 4, 
3, -3, -24, -38, -46, -48, -45, -38, -24, -19, -19, -19, -15, -11, -11, -13, 
-12, -11, -15, -24, -30, -35, -38, -40, -39, -34, -27, -19, -9, 1, 13, 19, 
23, 21, 13, -1, -19, -26, -30, -34, -36, -33, -25, -18, -9, -1, 2, -1, 
-1, -2, -4, -9, -16, -26, -33, -38, -39, -34, -29, -27, -25, -25, -29, -34, 
-40, -40, -38, -35, -32, -30, -28, -24, -21, -21, -23, -28, -35, -39, -44, -47, 
-49, -50, -48, -44, -36, -25, -13, 3, 7, 6, 2, -3, -12, -26, -29, -27, 
-26, -30, -38, -39, -37, -36, -36, -37, -37, -35, -32, -28, -25, -23, -23, -25, 
-30, -35, -40, -41, -40, -40, -41, -42, -42, -37, -32, -25, -20, -17, -16, -15, 
-15, -14, -13, -12, -10, -8, -6, -2, 1, 3, 2, -5, -15, -23, -25, -24, 
-18, -12, -4, 7, 17, 28, 33, 37, 38, 41, 43, 39, 31, 23, 19, 16, 
11, 3, 3, 5, 9, 14, 25, 36, 44, 48, 47, 42, 40, 39, 37, 36, 
34, 35, 39, 43, 49, 56, 63, 70, 73, 77, 80, 82, 78, 72, 71, 72, 
75, 77, 77, 74, 68, 60, 53, 50, 49, 49, 52, 57, 61, 64, 65, 65, 
64, 64, 64, 66, 67, 66, 64, 59, 54, 49, 46, 44, 42, 42, 44, 44, 
41, 37, 32, 29, 31, 35, 37, 36, 31, 23, 1, -12, -22, -27, -29, -30, 
-27, -25, -24, -24, -24, -24, -24, -24, -24, -24, -27, -31, -34, -39, -45, -53, 
-58, -62, -62, -61, -60, -59, -60, -60, -58, -53, -50, -48, -50, -54, -60, -63, 
-64, -63, -62, -60, -55, -50, -45, -43, -44, -47, -53, -64, -74, -83, -84, -85, 
-88, -90, -87, -71, -60, -54, -53, -55, -57, -61, -66, -71, -73, -72, -69, -66, 
-64, -63, -61, -60, -62, -64, -68, -71, -71, -69, -64, -56, -48, -45, -43, -44, 
-44, -42, -42, -43, -50, -56, -64, -70, -75, -76, -71, -68, -66, -61, -56, -49, 
-36, -30, -26, -26, -27, -28, -30, -34, -38, -37, -35, -32, -29, -26, -22, -19, 
-17, -13, -9, -5, -4, -3, -1, 2, 6, 9, 9, 8, 7, 9, 11, 17, 
25, 31, 34, 32, 31, 32, 33, 35, 39, 44, 49, 55, 59, 61, 60, 61, 
62, 62, 64, 71, 76, 78, 75, 71, 67, 68, 70, 75, 80, 84, 82, 77, 
74, 74, 77, 83, 92, 97, 101, 105, 108, 106, 97, 87, 82, 81, 81, 84, 
85, 88, 92, 96, 100, 106, 111, 113, 111, 105, 94, 89, 87, 87, 87, 88, 
91, 94, 97, 96, 94, 89, 83, 81, 80, 78, 78, 79, 81, 81, 79, 74, 
69, 66, 63, 61, 58, 55, 54, 49, 47, 45, 45, 46, 48, 52, 54, 58, 
63, 68, 67, 61, 55, 50, 46, 40, 39, 41, 41, 39, 33, 26, 26, 28, 
32, 38, 42, 45, 41, 34, 28, 22, 16, 15, 15, 16, 17, 18, 18, 15, 
11, 6, 3, 3, 5, 7, 7, 6, 5, 5, 4, 1, -2, -2, -1, 2, 
2, 3, 3, 1, -2, -7, -9, -10, -13, -19, -32, -41, -47, -50, -49, -46, 
-40, -39, -41, -45, -51, -58, -67, -70, -73, -77, -82, -86, -87, -88, -91, -94, 
-97, -102, -106, -109, -108, -106, -103, -100, -98, -96, -95, -93, -91, -91, -92, -97, 
-104, -109, -110, -108, -107, -106, -103, -100, -94, -92, -92, -92, -94, -101, -106, -110, 
-111, -110, -107, -101, -97, -95, -94, -94, -96, -96, -91, -82, -73, -67, -58, -53, 
-52, -54, -57, -57, -54, -54, -57, -61, -62, -58, -51, -50, -52, -54, -54, -53, 
-52, -51, -49, -45, -43, -40, -40, -40, -40, -43, -51, -56, -55, -50, -44, -38, 
-30, -25, -22, -21, -18, -18, -18, -20, -22, -23, -25, -21, -10, 0, };
