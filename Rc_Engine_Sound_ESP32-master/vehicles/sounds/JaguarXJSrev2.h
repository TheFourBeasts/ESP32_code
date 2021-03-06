const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 2747;
const signed char revSamples[] = {
0, 1, 3, 7, 11, 12, 14, 14, 12, 14, 17, 18, 21, 23, 24, 25,
26, 26, 29, 34, 37, 40, 41, 39, 38, 38, 38, 38, 37, 34, 30, 29, 
31, 32, 29, 27, 24, 22, 20, 19, 17, 15, 15, 16, 18, 18, 13, 12, 
12, 12, 12, 10, 8, 8, 11, 14, 15, 11, 8, 8, 9, 10, 9, 6, 
8, 12, 12, 8, 5, 6, 6, 7, 7, 9, 11, 11, 10, 10, 12, 11, 
9, 11, 12, 12, 11, 8, 7, 9, 10, 8, 5, 2, -1, -6, -9, -9, 
-10, -12, -13, -15, -18, -19, -20, -22, -23, -24, -26, -27, -29, -30, -32, -34, 
-36, -36, -32, -32, -36, -40, -41, -40, -39, -38, -40, -42, -43, -43, -44, -46, 
-49, -52, -54, -57, -57, -57, -58, -60, -59, -57, -55, -54, -52, -51, -54, -57, 
-58, -59, -62, -68, -73, -79, -86, -90, -92, -93, -92, -91, -91, -93, -97, -98, 
-98, -99, -100, -102, -106, -108, -109, -111, -112, -113, -116, -119, -118, -116, -113, -110, 
-105, -102, -98, -93, -90, -84, -80, -78, -76, -73, -71, -71, -72, -72, -73, -74, 
-73, -69, -68, -68, -68, -68, -68, -67, -67, -66, -65, -63, -63, -61, -60, -59, 
-58, -56, -56, -55, -54, -53, -52, -47, -45, -44, -42, -40, -38, -34, -33, -32, 
-32, -30, -28, -26, -27, -28, -28, -27, -23, -22, -21, -19, -17, -15, -13, -13, 
-12, -12, -12, -10, -9, -9, -10, -11, -15, -24, -33, -43, -47, -48, -48, -46, 
-44, -43, -43, -43, -43, -44, -45, -45, -44, -42, -37, -33, -32, -33, -32, -31, 
-29, -22, -16, -13, -9, -4, -3, 0, 5, 7, 7, 8, 9, 10, 11, 12, 
12, 15, 16, 16, 17, 17, 18, 21, 25, 27, 28, 29, 30, 30, 31, 33, 
33, 31, 31, 35, 36, 36, 36, 37, 39, 42, 41, 38, 37, 35, 34, 32, 
27, 25, 26, 26, 26, 26, 27, 28, 28, 27, 29, 32, 32, 30, 29, 29, 
28, 26, 26, 27, 31, 32, 31, 29, 29, 30, 32, 33, 32, 30, 31, 32, 
32, 32, 30, 27, 25, 24, 25, 23, 18, 12, 2, -5, -12, -21, -30, -37, 
-39, -41, -44, -47, -49, -50, -49, -47, -46, -47, -50, -52, -51, -50, -49, -49, 
-52, -55, -56, -56, -52, -46, -40, -32, -29, -27, -28, -30, -33, -35, -37, -37, 
-37, -37, -36, -34, -33, -32, -29, -26, -25, -26, -26, -25, -25, -30, -33, -32, 
-32, -33, -33, -31, -30, -26, -22, -20, -19, -18, -17, -16, -14, -13, -12, -12, 
-12, -10, -8, -7, -9, -10, -11, -10, -8, -4, -3, -3, -3, -3, -2, -2, 
-5, -7, -7, -5, -2, -1, -2, -1, 1, 1, 5, 6, 5, 4, 3, 4, 
4, 3, 3, 3, 3, 3, 4, 6, 10, 12, 12, 12, 13, 14, 17, 19, 
19, 19, 19, 20, 21, 19, 17, 10, 7, 7, 8, 7, 4, 0, -3, -4, 
-4, -3, -3, -7, -11, -12, -11, -10, -14, -19, -21, -24, -26, -21, -22, -27, 
-29, -29, -27, -15, -10, -13, -17, -18, -15, -10, -8, -7, -4, 1, 8, 11, 
12, 13, 18, 23, 28, 31, 34, 34, 34, 36, 39, 40, 38, 37, 35, 35, 
35, 34, 33, 32, 32, 31, 29, 25, 23, 23, 22, 22, 19, 16, 16, 17, 
17, 19, 19, 18, 19, 22, 24, 23, 21, 18, 18, 19, 17, 15, 13, 12, 
10, 8, 7, 6, 4, 3, 2, -1, -2, -2, -3, -6, -8, -8, -8, -10, 
-10, -10, -13, -15, -18, -23, -29, -37, -50, -52, -52, -53, -54, -56, -59, -61, 
-60, -58, -57, -59, -62, -64, -64, -63, -63, -67, -71, -74, -76, -77, -84, -88, 
-86, -78, -70, -66, -62, -58, -55, -51, -45, -42, -39, -36, -33, -30, -27, -25, 
-25, -25, -23, -20, -20, -22, -22, -21, -19, -15, -12, -9, -9, -10, -9, -6, 
-3, -2, 0, 2, 3, 4, 5, 5, 4, 3, 2, 2, 4, 6, 8, 8, 
7, 10, 12, 12, 13, 14, 15, 16, 18, 19, 17, 14, 12, 14, 16, 16, 
15, 14, 14, 16, 19, 21, 22, 23, 27, 28, 31, 34, 35, 36, 37, 37, 
39, 41, 42, 41, 41, 42, 44, 46, 45, 38, 34, 33, 33, 32, 30, 24, 
22, 23, 25, 25, 24, 23, 23, 23, 25, 29, 33, 30, 30, 32, 35, 37, 
34, 33, 35, 37, 41, 47, 48, 46, 46, 45, 44, 43, 44, 46, 46, 47, 
51, 52, 55, 58, 61, 63, 64, 64, 64, 64, 64, 64, 64, 65, 68, 73, 
75, 74, 74, 75, 74, 73, 71, 70, 71, 72, 71, 69, 68, 66, 65, 64, 
62, 59, 60, 61, 61, 60, 60, 57, 55, 55, 52, 49, 48, 50, 52, 51, 
51, 51, 49, 44, 42, 40, 37, 34, 30, 24, 22, 21, 21, 20, 20, 21, 
20, 19, 18, 17, 18, 19, 20, 20, 19, 18, 13, 7, 0, -7, -16, -26, 
-34, -35, -34, -34, -34, -36, -36, -39, -41, -41, -42, -43, -38, -30, -24, -18, 
-11, -4, -3, -3, -2, -1, -1, -2, 0, 3, 6, 9, 13, 15, 17, 18, 
20, 21, 21, 20, 19, 18, 17, 18, 18, 16, 15, 16, 17, 18, 18, 18, 
18, 19, 20, 22, 23, 23, 24, 25, 24, 25, 27, 29, 31, 31, 31, 32, 
32, 33, 33, 32, 31, 30, 31, 35, 39, 39, 39, 43, 47, 51, 53, 51, 
52, 55, 58, 61, 61, 58, 55, 56, 59, 61, 63, 64, 65, 68, 70, 71, 
70, 70, 70, 72, 73, 73, 74, 75, 76, 77, 76, 73, 69, 64, 57, 49, 
43, 38, 37, 37, 34, 31, 28, 29, 32, 38, 42, 44, 45, 44, 46, 47, 
44, 41, 40, 37, 38, 41, 41, 44, 47, 48, 50, 53, 53, 52, 55, 57, 
59, 61, 62, 62, 62, 65, 69, 71, 72, 74, 75, 76, 75, 74, 73, 74, 
76, 75, 74, 74, 72, 72, 75, 77, 78, 80, 80, 80, 79, 78, 75, 66, 
60, 56, 55, 52, 48, 44, 43, 42, 42, 42, 40, 40, 41, 41, 42, 44, 
45, 44, 44, 44, 44, 43, 43, 45, 48, 52, 54, 50, 48, 48, 49, 47, 
44, 42, 39, 36, 33, 27, 10, -8, -26, -36, -42, -48, -55, -55, -56, -59, 
-63, -65, -58, -55, -59, -50, -27, 0, 11, 19, 14, -1, -13, -21, -24, -19, 
-9, 1, 8, 20, 29, 37, 41, 39, 29, 25, 24, 25, 27, 26, 22, 20, 
17, 11, 5, 1, 2, 8, 14, 16, 17, 22, 25, 27, 29, 31, 33, 36, 
38, 37, 36, 37, 39, 41, 42, 44, 44, 43, 43, 42, 41, 39, 37, 34, 
31, 30, 31, 33, 39, 45, 51, 55, 57, 57, 56, 57, 59, 61, 62, 62, 
62, 64, 65, 65, 64, 64, 64, 69, 68, 66, 66, 67, 70, 74, 75, 76, 
77, 77, 76, 76, 75, 74, 73, 73, 72, 70, 69, 69, 69, 65, 63, 60, 
57, 54, 52, 46, 44, 45, 44, 43, 38, 33, 31, 30, 30, 30, 29, 26, 
21, 18, 17, 14, 6, 1, -2, -5, -6, -13, -17, -16, -13, -9, -3, 0, 
-1, -1, -1, 2, 6, 11, 15, 18, 21, 26, 35, 39, 44, 50, 54, 56, 
54, 53, 57, 58, 55, 52, 47, 42, 38, 32, 25, 20, 18, 15, 12, 10, 
6, -1, -5, -8, -12, -15, -18, -26, -29, -28, -26, -25, -22, -19, -15, -13, 
-13, -12, -12, -14, -15, -17, -20, -23, -24, -23, -24, -28, -32, -34, -32, -30, 
-31, -34, -33, -32, -33, -34, -36, -38, -38, -34, -35, -36, -37, -38, -39, -41, 
-43, -45, -49, -56, -67, -74, -80, -83, -85, -87, -90, -92, -94, -95, -95, -94, 
-93, -94, -96, -97, -98, -97, -96, -97, -100, -102, -103, -107, -108, -108, -109, -106, 
-97, -93, -89, -85, -81, -77, -72, -69, -64, -61, -56, -47, -43, -42, -42, -41, 
-39, -35, -34, -34, -34, -34, -35, -37, -37, -37, -36, -34, -32, -31, -30, -29, 
-28, -27, -24, -23, -21, -21, -19, -16, -10, -6, -3, -1, -1, -2, -3, -3, 
-2, -1, 0, 3, 4, 5, 8, 10, 11, 12, 13, 14, 16, 17, 22, 24, 
25, 26, 26, 26, 25, 22, 20, 22, 24, 26, 29, 29, 30, 33, 35, 38, 
40, 42, 44, 48, 50, 48, 47, 47, 48, 50, 52, 53, 51, 48, 47, 48, 
49, 48, 47, 44, 42, 42, 43, 43, 43, 42, 43, 45, 47, 47, 46, 46, 
48, 50, 51, 50, 45, 42, 42, 42, 42, 41, 40, 40, 42, 43, 42, 39, 
35, 34, 35, 35, 34, 34, 34, 37, 42, 44, 47, 50, 52, 53, 54, 52, 
49, 48, 48, 47, 47, 46, 43, 40, 39, 38, 37, 34, 31, 30, 32, 33, 
30, 27, 27, 26, 24, 23, 21, 17, 13, 11, 10, 8, 6, 5, 6, 9, 
10, 9, 6, 3, 0, -5, -6, -8, -10, -14, -19, -22, -22, -23, -25, -28, 
-33, -35, -35, -35, -36, -36, -35, -36, -37, -36, -38, -40, -41, -43, -47, -51, 
-55, -60, -62, -63, -65, -66, -69, -71, -70, -70, -71, -73, -73, -75, -76, -78, 
-81, -83, -86, -89, -93, -95, -97, -97, -91, -84, -81, -81, -80, -79, -76, -74, 
-70, -67, -65, -62, -60, -60, -60, -59, -60, -61, -62, -63, -64, -64, -65, -64, 
-64, -65, -64, -63, -60, -58, -57, -55, -54, -52, -49, -48, -47, -46, -45, -44, 
-41, -41, -41, -40, -39, -35, -32, -31, -30, -29, -28, -26, -26, -25, -24, -23, 
-21, -20, -19, -17, -15, -15, -13, -11, -11, -11, -12, -11, -8, -6, -4, -3, 
-2, -1, -1, 0, 0, -3, -6, -16, -24, -31, -38, -45, -50, -53, -53, -53, 
-54, -56, -55, -50, -45, -42, -40, -34, -26, -23, -22, -20, -20, -18, -16, -14, 
-11, -7, -2, 4, 8, 12, 14, 15, 18, 22, 23, 24, 22, 21, 22, 23, 
23, 24, 24, 24, 26, 27, 30, 32, 32, 33, 37, 38, 35, 32, 33, 37, 
42, 45, 45, 44, 43, 46, 46, 45, 43, 42, 42, 41, 39, 34, 30, 29, 
29, 31, 33, 35, 36, 39, 44, 46, 47, 46, 45, 45, 44, 45, 46, 47, 
48, 47, 46, 46, 46, 46, 46, 44, 43, 43, 43, 44, 45, 46, 47, 49, 
51, 53, 53, 47, 41, 37, 33, 26, 13, 5, -2, -8, -13, -18, -21, -23, 
-24, -23, -23, -25, -30, -32, -33, -33, -34, -39, -43, -46, -47, -49, -49, -45, 
-42, -39, -35, -32, -27, -24, -19, -13, -8, -5, -4, -7, -8, -7, -8, -10, 
-15, -18, -19, -21, -26, -30, -31, -31, -30, -28, -26, -25, -22, -20, -19, -18, 
-15, -13, -12, -13, -14, -13, -13, -13, -16, -19, -21, -20, -22, -23, -23, -24, 
-23, -22, -21, -21, -22, -24, -25, -25, -23, -21, -20, -19, -17, -16, -16, -15, 
-14, -14, -14, -13, -11, -9, -5, -3, -1, -1, -1, 1, 2, 1, 0, 1, 
4, 6, 8, 10, 12, 12, 9, 8, 7, 7, 9, 11, 12, 15, 16, 13, 
10, 6, 2, -1, -3, -9, -12, -13, -12, -10, -10, -11, -11, -10, -9, -11, 
-17, -23, -28, -30, -30, -31, -36, -39, -40, -38, -35, -32, -29, -26, -21, -16, 
-13, -8, -6, -6, -5, -4, -1, 5, 6, 7, 9, 10, 12, 14, 15, 17, 
18, 17, 14, 14, 14, 17, 20, 22, 23, 22, 22, 22, 22, 21, 19, 18, 
18, 19, 20, 18, 15, 14, 15, 15, 13, 11, 9, 11, 12, 12, 14, 16, 
16, 15, 14, 13, 9, 7, 8, 8, 6, 4, 3, 4, 6, 7, 6, 4, 
3, 3, 5, 6, 7, 2, -3, -5, -6, -8, -13, -17, -19, -18, -18, -20, 
-31, -41, -51, -59, -62, -63, -63, -63, -62, -62, -65, -68, -70, -71, -71, -70, 
-71, -74, -75, -75, -75, -76, -79, -83, -85, -85, -85, -86, -88, -87, -82, -78, 
-75, -71, -67, -65, -63, -59, -55, -53, -54, -54, -51, -49, -46, -42, -40, -36, 
-32, -31, -30, -31, -31, -31, -30, -30, -30, -31, -31, -30, -29, -27, -27, -28, 
-28, -27, -27, -27, -29, -30, -31, -30, -29, -30, -31, -31, -30, -29, -28, -25, 
-23, -22, -20, -21, -23, -22, -20, -19, -18, -16, -15, -14, -11, -8, -7, -7, 
-7, -5, -1, 4, 6, 6, 6, 7, 8, 10, 10, 7, 5, 6, 8, 11, 
13, 15, 16, 18, 21, 23, 22, 19, 19, 19, 19, 17, 12, 8, 4, 1, 
0, 0, 0, -3, -6, -8, -11, -13, -16, -15, -9, -1, 5, 7, 8, 9, 
9, 11, 13, 14, 15, 16, 17, 19, 22, 23, 25, 28, 31, 33, 36, 36, 
36, 36, 36, 37, 41, 43, 45, 47, 48, 49, 49, 50, 53, 55, 55, 53, 
53, 54, 53, 52, 51, 49, 47, 46, 44, 42, 43, 45, 46, 48, 50, 51, 
49, 46, 44, 43, 40, 36, 30, 26, 24, 24, 22, 18, 15, 16, 17, 16, 
16, 13, 12, 13, 14, 11, 5, -2, -4, -5, -7, -9, -11, -13, -13, -11, 
-12, -15, -16, -18, -20, -19, -16, -17, -24, -30, -42, -57, -64, -70, -77, -81, 
-82, -85, -86, -81, -83, -86, -89, -95, -101, -94, -80, -65, -56, -53, -53, -55, 
-55, -50, -43, -38, -30, -25, -20, -16, -13, -14, -18, -19, -21, -25, -28, -27, 
-25, -24, -25, -28, -30, -28, -27, -27, -26, -25, -23, -23, -23, -22, -21, -20, 
-19, -19, -18, -15, -11, -9, -9, -9, -8, -6, -4, -2, -1, 1, 4, 4, 
1, 0, 2, 5, 6, 8, 9, 10, 11, 12, 11, 10, 10, 13, 16, 20, 
24, 26, 29, 31, 31, 31, 31, 31, 32, 35, 36, 36, 36, 36, 34, 34, 
33, 32, 30, 28, 28, 27, 27, 27, 25, 21, 18, 13, 10, 9, 8, 7, 
6, 5, 2, -1, -5, -5, -5, -3, 0, 2, 5, 8, 7, 6, 6, 7, 
8, 11, 12, 11, 11, 11, 9, 10, 13, 15, 17, 21, 22, 21, 20, 22, 
27, 31, 35, 36, 37, 37, 38, 35, 35, 37, 39, 39, 41, 43, 43, 44, 
46, 45, 44, 44, 43, 42, 42, 43, 41, 38, 36, 35, 34, 34, 31, 26, 
22, 21, 22, 23, 22, 19, 19, 19, 20, 22, 23, 23, 21, 20, 23, 24, 
25, 27, 26, 24, 28, 30, 28, 25, 26, 26, 27, 27, 26, 25, 26, 25, 
18, 6, -9, -30, -56, -63, -65, -67, -69, -72, -76, -78, -81, -84, -85, -83, 
-81, -78, -65, -49, -34, -24, -22, -22, -25, -26, -24, -21, -15, -6, 0, 6, 
12, 17, 19, 20, 19, 16, 15, 14, 13, 11, 9, 9, 8, 7, 6, 5, 
7, 9, 12, 14, 13, 11, 14, 18, 20, 23, 23, 24, 26, 30, 32, 34, 
35, 35, 34, 35, 36, 38, 41, 44, 42, 39, 38, 39, 39, 39, 40, 43, 
44, 46, 50, 56, 60, 63, 64, 63, 64, 66, 67, 66, 64, 61, 60, 61, 
62, 61, 60, 60, 62, 61, 60, 58, 56, 56, 60, 62, 63, 63, 64, 64, 
68, 69, 69, 70, 69, 69, 69, 67, 63, 59, 54, 47, 45, 42, 39, 36, 
34, 33, 33, 32, 32, 32, 37, 39, 39, 35, 30, 25, 24, 25, 25, 22, 
17, 13, 8, 3, 2, 4, 2, -1, 0, -1, 2, 6, 8, 8, 9, 9, 
11, 16, 22, 27, 25, 24, 25, 27, 32, 36, 35, 33, 33, 34, 36, 35, 
32, 28, 24, 22, 23, 23, 22, 18, 13, 8, 6, 1, -2, -6, -9, -8, 
-7, -11, -15, -17, -18, -17, -15, -13, -13, -11, -10, -11, -11, -9, -9, -10, 
-12, -12, -14, -16, -18, -20, -24, -26, -28, -30, -31, -30, -28, -28, -30, -33, 
-36, -35, -33, -33, -34, -35, -36, -35, -35, -36, -39, -40, -41, -43, -44, -48, 
-56, -65, -81, -91, -95, -98, -102, -106, -105, -103, -102, -103, -105, -108, -109, -110, 
-112, -115, -115, -117, -119, -120, -124, -127, -126, -126, -122, -112, -101, -91, -78, -74, 
-72, -69, -67, -65, -63, -61, -60, -58, -54, -51, -49, -45, -43, -43, -41, -39, 
-37, -36, -39, -41, -41, -40, -40, -40, -40, -38, -37, -35, -33, -31, -28, -26, 
-24, -23, -22, -22, -22, -22, -22, -21, -21, -21, -20, -17, -17, -16, -13, -11, 
-9, -8, -8, -8, -9, -11, -14, -12, -10, -5, 0, };
