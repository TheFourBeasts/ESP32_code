const unsigned int sound1SampleRate = 22050;
const unsigned int sound1SampleCount = 5265;
const signed char sound1Samples[] = {
0, 0, 0, -1, -1, -1, 0, 1, 1, 2, -1, -5, -5, -6, -1, -1, 
10, 10, 7, 8, -4, -6, -13, -25, -13, -24, -16, 7, 14, 21, 27, 45, 
17, -22, -9, -39, -33, -25, 4, 19, 12, 23, 22, -29, -21, 2, 4, 25, 
68, 43, -21, -19, -33, -18, -46, -17, 28, 29, 15, 40, 7, -33, -52, -11, 
-19, -21, -13, -8, -52, -22, 16, 1, 14, 28, 18, -24, -18, 19, 33, 0, 
-1, 11, -10, -56, -16, 12, 18, 49, 66, 40, -6, -10, -3, 22, 24, 32, 
6, -1, -6, 23, 5, -21, -1, -17, -12, -2, 1, 7, -23, -78, -73, -45, 
-16, 26, 23, 13, -3, -51, -76, -69, -17, 1, 8, 29, 66, 67, 55, 36, 
37, 13, -28, 10, 9, 14, -6, 9, 41, 26, 20, 18, -15, -17, 12, 0, 
5, 11, -10, -32, -57, -71, -53, -37, -14, -8, 5, 27, 25, -8, -6, 15, 
20, 13, -1, -22, -17, -12, -28, 5, 32, 15, 2, 15, 2, -15, -16, 13, 
50, 37, 26, -15, -52, -80, -50, -1, 32, 43, 73, 33, 4, -8, -16, -5, 
1, -10, -25, -36, -34, -10, 11, 18, 11, -7, 10, 43, 48, 39, 24, 14, 
-10, -11, -20, -29, -13, -16, -12, -7, 34, 27, 47, 50, 29, -25, -42, -48, 
-41, -24, -17, 7, -7, -37, -36, -33, -40, -10, 9, 5, -11, -25, -32, -20, 
13, 23, 27, 32, 13, 5, 3, -24, -22, -3, 19, 46, 47, -1, -15, -22, 
-9, -15, -8, 0, 15, 43, 57, 36, -7, -24, -33, -45, -24, 17, 42, 64, 
16, -34, -57, -65, -39, -25, 3, 37, 43, 60, 53, 32, 34, -7, -40, -39, 
-20, -38, -36, -35, -17, -8, -17, -25, -15, 0, 18, 32, 41, 32, 9, -12, 
-19, -33, -32, -19, -12, -8, 2, 14, 12, 16, 6, 6, 2, -21, -22, -22, 
-20, 1, 25, 35, 29, 7, 4, 6, 7, -6, 1, 15, 15, 11, 5, 4, 
18, 29, 9, 5, -8, -21, -23, 5, 28, 53, 67, 62, 36, -8, -44, -83, 
-91, -83, -62, -47, -34, -34, -39, -31, -8, 6, 3, 13, 16, 3, -10, -9, 
-5, 16, 14, 14, 10, 1, -14, -21, -13, -6, 17, 35, 32, 29, 29, 40, 
35, 29, 14, -5, -3, -6, -5, 1, -3, -4, 0, 17, 18, 11, 0, -8, 
-18, -39, -40, -4, 11, 32, 51, 44, 32, 28, 15, -4, -32, -51, -59, -76, 
-74, -33, 0, 57, 71, 35, 1, 5, 0, 10, 43, 75, 77, 74, 48, 8, 
-53, -86, -77, -40, -35, -13, 23, 23, -9, -59, -64, -60, -56, -32, -20, -32, 
-53, -25, -22, -11, -22, -14, -22, 5, 40, 47, 15, 25, 22, -4, -22, -27, 
11, 6, 8, 3, 12, 43, 28, 24, 9, 8, 31, 40, 54, 51, 42, 27, 
25, 19, 23, 24, 33, 32, -5, -35, -69, -78, -62, -31, -3, 23, 40, 16, 
-29, -55, -65, -62, -58, -55, -3, 50, 82, 73, 40, 38, 15, -53, -50, -39, 
2, 20, 46, 53, 40, 34, 24, 7, -27, -33, -18, -6, 1, 29, 11, 7, 
-24, -56, -70, -71, -62, -35, -15, -11, -13, -14, -17, -14, -8, 14, 37, 25, 
2, -31, -17, 14, 1, -31, -25, -33, -44, -41, -2, 42, 50, 52, 43, 23, 
-1, 2, 25, 44, 44, 55, 23, 6, 9, 3, -2, -8, -7, -5, 6, -13, 
-56, -72, -87, -73, -57, -36, 16, 46, 38, 76, 100, 102, 114, 108, 95, 44, 
10, -28, -12, -8, -1, 9, -10, -29, -21, -12, -2, -19, 0, 25, 38, 42, 
3, -3, -52, -62, -47, -47, -53, -39, -42, -97, -81, -73, -65, -57, -26, -19, 
-15, 11, 46, 22, -4, -16, -5, -18, -17, -10, -11, -42, -29, -5, -25, -14, 
23, 20, 26, 58, 72, 54, 51, 51, 42, 10, 3, 15, 18, 23, 22, 5, 
-31, -49, -23, -21, -21, -2, -10, 1, 7, -26, -34, -22, 37, 83, 74, 27, 
-1, -46, -60, -56, -38, -17, -2, 29, 71, 73, 71, 30, 21, -13, -43, -32, 
-28, -26, 1, 16, -22, -27, 9, 2, -2, 5, 5, 29, 28, 16, 20, 29, 
33, 26, -12, -11, -12, -24, -32, -31, -11, -16, -25, -32, -38, -48, -54, -70, 
-47, -15, -20, -17, 5, -1, 7, 15, 27, 27, 35, 49, 38, 20, 35, 55, 
39, 31, 31, 19, 2, 1, -1, -11, -7, 0, 18, 26, 8, -11, -19, -19, 
-19, -15, -24, -26, -24, -34, -36, -22, -19, -21, 12, 26, 3, 4, 20, 28, 
-1, 26, 38, 52, 51, 44, 54, 17, 9, -13, -18, -22, -13, 10, 25, 50, 
39, 20, 17, 4, 2, 13, 19, 8, -32, -43, -64, -56, -41, -31, -15, -23, 
-20, -19, -19, -54, -54, -54, -54, -45, -32, -11, 2, 8, 11, 19, 29, 25, 
34, 14, 7, 3, -8, -5, 11, 31, 37, 31, 32, 16, -9, -7, -6, 12, 
29, 26, 25, 8, 6, -15, -39, -43, -39, -56, -60, -38, -22, -4, 13, 42, 
40, 29, 21, 3, -7, -36, -28, -18, -4, 16, 22, 9, -35, -35, -24, -26, 
-4, -7, 20, 27, 17, 18, 8, 17, 30, 25, 2, -23, -44, -56, -31, -3, 
24, 45, 58, 63, 49, 26, -2, -5, -5, 7, 23, 22, 28, 24, -1, -19, 
-20, -11, -10, 14, 31, 20, 26, 37, 38, 34, 36, 34, 27, 25, 6, -21, 
-32, -55, -75, -61, -30, -41, -47, -39, -46, -52, -72, -46, -43, -38, -5, 8, 
-2, -7, -18, -41, -42, -22, -7, 2, 15, 33, 28, 21, 21, 14, 31, 28, 
34, 0, -7, -21, -20, 5, 30, 30, 27, 11, 2, -21, -8, -7, 2, 54, 
66, 62, 34, 31, 36, 23, 9, -10, -6, -23, -55, -58, -73, -67, -51, -22, 
-3, 12, 9, -10, -38, -44, -29, -3, 30, 52, 83, 73, 63, 64, 38, 9, 
9, 4, 5, 13, 31, 39, 27, 8, -11, -28, -29, -26, -32, -45, -39, -54, 
-52, -44, -23, -10, -3, -1, -16, -53, -66, -65, -46, -33, -27, -14, -23, -8, 
12, 22, 29, 17, 27, 44, 32, 40, 51, 67, 62, 47, 59, 48, 21, 37, 
50, 34, 24, 18, 10, -2, -10, 9, 28, 40, 34, 22, -8, -42, -76, -77, 
-62, -68, -45, -18, -7, -19, -21, -14, -18, -10, -1, 20, 18, 11, 23, 27, 
31, 34, 39, 30, 10, -5, 6, 15, 2, -7, -31, -52, -63, -79, -71, -71, 
-48, -9, 11, 26, 42, 35, -4, -48, -58, -79, -75, -41, -38, -35, -6, 31, 
36, 47, 47, 32, 25, 83, 71, 23, 15, 25, -41, -63, -19, 3, -4, 13, 
46, 22, 0, 12, 26, 13, 21, 6, 24, 23, -12, 4, -16, -10, 15, -3, 
-50, -70, -54, -46, -27, -15, 31, 8, -45, -22, 5, 29, 83, 100, 59, -1, 
-19, -23, -40, -20, 28, 40, 19, 11, -21, -27, -25, -19, -1, -12, -34, -41, 
-49, -35, -13, -22, -25, -10, -9, -29, -17, 8, 25, 14, -5, -17, -10, -8, 
14, 31, 46, 55, 86, 71, 39, -5, -53, -81, -68, -56, -16, 14, 41, 62, 
27, -4, -13, -6, 32, 30, 24, 21, 26, 31, 28, 14, -15, -46, -58, -46, 
-23, -24, -27, -6, 8, 1, -12, -25, -31, -38, -44, 3, 58, 101, 123, 100, 
64, 36, 4, 1, 23, 22, 7, -22, -31, -39, -37, -38, -29, -34, -30, -5, 
-7, -32, -49, -49, -32, -7, -2, -9, -14, -33, -59, -60, -37, -7, 16, 24, 
8, -17, -27, 10, 21, 17, 22, 26, 30, -24, -45, -40, -22, 0, 49, 63, 
62, 41, 1, -17, 18, 42, 65, 83, 79, 67, 33, 28, 32, 29, 36, 22, 
22, 18, 10, 5, -3, 10, 26, 39, 58, 72, 74, 69, 66, 51, 23, 10, 
2, 4, 7, -18, -34, -39, -79, -96, -106, -113, -103, -85, -78, -84, -82, -79, 
-79, -73, -83, -95, -100, -96, -83, -63, -56, -57, -54, -37, -27, -27, -39, -32, 
-29, -31, -46, -31, -24, -18, -4, -2, -7, 8, 18, 26, 37, 35, 32, 43, 
56, 57, 73, 98, 94, 69, 46, 37, 29, 27, 36, 56, 71, 62, 24, 8, 
4, 17, 32, 53, 62, 59, 45, 36, 42, 43, 61, 84, 84, 59, 17, -16, 
-33, -49, -53, -55, -56, -64, -73, -81, -83, -71, -54, -28, -21, -17, -9, 2, 
22, 26, 14, -6, -24, -47, -85, -80, -60, -36, -9, -5, -11, -6, 16, 40, 
59, 81, 66, 40, 19, 18, 36, 57, 62, 46, 29, 18, 9, 14, 34, 63, 
85, 81, 45, 12, -16, -35, -45, -44, -38, -38, -43, -52, -63, -59, -52, -33, 
-28, -28, -22, -39, -49, -47, -39, -24, -7, 2, -6, -29, -40, -38, -28, -17, 
-8, -7, -9, -14, 1, -6, -7, 7, 15, 25, 30, 36, 33, 27, 18, 22, 
35, 54, 64, 63, 43, 3, 4, 2, 9, 27, 41, 53, 41, 28, 20, 9, 
-3, -13, -17, -19, -19, -29, -59, -78, -80, -72, -53, -39, -29, -27, -17, -1, 
-2, 21, 37, 34, 19, 3, -10, -27, -15, 2, 21, 25, 25, 30, 27, 24, 
21, 13, 23, 24, 25, 34, 39, 41, 28, 22, 24, 24, 31, 43, 59, 59, 
41, 23, 10, -2, 3, 6, 10, -3, -32, -62, -92, -92, -88, -79, -55, -31, 
-11, -2, 6, 11, 11, 8, 5, -8, -23, -22, -19, -15, -19, -25, -24, -35, 
-19, -8, 9, 27, 27, 31, 17, 14, 15, 5, 12, 1, -12, -36, -53, -50, 
-44, -14, 2, 15, 18, 19, 20, 33, 58, 73, 85, 101, 104, 90, 70, 47, 
39, 26, 15, 3, -10, -23, -45, -71, -75, -63, -49, -37, -21, -9, -11, -20, 
-29, -23, -10, -7, -6, -15, -17, -12, -14, -13, -14, -7, -3, -7, 3, -7, 
-19, -23, -37, -36, -38, -29, -22, -16, -15, -27, -29, -21, -11, -5, -1, -3, 
-9, -7, -2, 2, 15, 7, -1, -2, -1, 19, 51, 53, 51, 55, 38, 34, 
38, 46, 73, 86, 94, 86, 68, 53, 34, 34, 47, 48, 41, 23, 17, 10, 
12, 18, 31, 41, 44, 39, 12, -5, -12, -6, 0, -3, -30, -48, -65, -70, 
-68, -74, -101, -117, -127, -127, -113, -101, -87, -72, -48, -28, -19, -20, -22, -20, 
-17, -10, -8, 3, 11, 10, 2, -20, -37, -32, -14, -14, -8, -6, -12, -2, 
-10, -13, -13, -18, -26, -27, -20, -9, 0, 16, 20, 34, 33, 20, 18, 15, 
28, 37, 53, 68, 72, 73, 60, 63, 71, 74, 80, 85, 75, 53, 33, 24, 
20, 26, 21, -2, -11, -16, -11, -14, -12, -2, -8, -24, -19, -8, 9, 31, 
41, 60, 54, 27, 6, -21, -29, -30, -32, -48, -67, -83, -93, -89, -103, -98, 
-101, -94, -71, -75, -78, -78, -84, -52, -35, -48, -55, -59, -53, -30, -43, -54, 
-59, -70, -55, -50, -33, -10, 0, 10, 12, 19, 21, 31, 40, 50, 56, 40, 
60, 78, 82, 103, 96, 97, 109, 85, 70, 76, 65, 79, 61, 49, 41, 7, 
13, -2, -3, 17, 32, 40, 43, 42, 34, 35, 32, 29, 18, -4, -10, 6, 
-12, -3, -3, -20, -14, -10, -4, -19, -39, -20, 4, 9, 1, -16, -20, -24, 
-42, -50, -80, -75, -67, -79, -88, -75, -54, -62, -57, -37, -18, -1, -3, -9, 
3, -28, -27, -30, -24, -30, -31, -59, -76, -36, -20, 2, 27, 40, 36, 38, 
27, 34, 37, 55, 81, 73, 76, 88, 99, 117, 93, 87, 91, 52, 13, -8, 
-14, -13, -5, 10, 7, 17, 38, 47, 40, 62, 72, 74, 70, 52, 31, 29, 
23, -1, -12, -24, -49, -51, -65, -62, -41, -47, -38, -52, -59, -44, -43, -60, 
-67, -75, -80, -71, -54, -46, -51, -45, -27, -18, 1, 47, 52, 39, 45, 49, 
58, 47, 28, 27, 14, 0, -9, -7, 3, 24, 34, 31, 9, 4, -5, -18, 
-28, -36, -56, -60, -52, -30, -11, 13, 51, 50, 62, 64, 65, 74, 72, 70, 
64, 53, 22, -4, -8, -7, -17, -26, -31, -28, -28, -43, -48, -45, -58, -68, 
-57, -60, -72, -67, -59, -48, -35, -33, -42, -53, -71, -60, -53, -38, -29, -31, 
-40, -62, -72, -69, -57, -31, -17, -13, -7, -6, 7, 4, 20, 29, 34, 66, 
57, 61, 50, 47, 71, 81, 81, 85, 91, 95, 85, 55, 23, -12, -16, -28, 
-42, -21, -13, -5, -5, 16, 28, 12, 18, 10, 6, 5, -14, -13, -38, -51, 
-56, -64, -57, -38, -31, -31, -15, -2, 18, 21, 22, 19, 11, 1, 10, 10, 
15, 37, 46, 52, 48, 46, 33, 24, 12, 7, 6, 5, 10, 11, 11, 26, 
28, 41, 45, 45, 70, 67, 80, 84, 65, 55, 53, 52, 51, 35, 9, -26, 
-32, -35, -27, -12, 7, 26, 17, -1, -9, -13, -3, 14, 9, 7, 1, 8, 
-2, -8, -20, -20, -21, -30, -22, -51, -54, -58, -68, -67, -82, -81, -88, -101, 
-102, -87, -66, -49, -48, -37, -27, -10, 7, 13, 18, 16, 5, -20, -36, -49, 
-54, -40, -40, -33, -19, -8, 15, 38, 59, 68, 77, 74, 72, 65, 61, 55, 
48, 39, 22, 1, -25, -41, -41, -26, -5, 8, 14, 16, 21, 21, 1, -9, 
-2, -4, -22, -43, -71, -79, -87, -87, -88, -67, -48, -33, -10, 11, 22, 25, 
27, 13, 14, 39, 42, 32, 19, 3, 11, 4, -10, 5, 9, 18, 40, 51, 
43, 40, 34, 28, 22, 15, 7, -11, -22, -42, -57, -64, -59, -51, -53, -50, 
-48, -36, -33, -18, 0, -3, -13, -13, -6, 12, 14, 13, 10, 16, 10, 8, 
-2, 8, 34, 46, 58, 65, 57, 56, 56, 53, 42, 33, 27, 30, 32, 47, 
58, 61, 70, 69, 47, 30, 12, 3, 3, 6, 8, 1, -14, -28, -32, -11, 
-1, -2, 9, 14, 18, 1, -23, -47, -66, -73, -73, -57, -57, -60, -56, -49, 
-26, -14, -9, 7, 21, 19, 16, 2, 5, 18, 13, 10, 3, 1, 1, -5, 
-19, -40, -48, -58, -64, -66, -70, -81, -87, -80, -68, -73, -64, -68, -59, -39, 
-26, -1, 3, 12, 22, 34, 55, 57, 47, 27, 26, 40, 49, 46, 58, 72, 
77, 80, 77, 57, 43, 37, 35, 29, 14, 12, 12, 15, 7, -1, -7, -12, 
-9, -12, -10, -10, -9, -2, 0, 2, 10, 12, 4, 14, 25, 16, 13, 27, 
26, 33, 38, 35, 36, 31, 16, 14, 5, -4, 5, 5, -5, -14, -22, -46, 
-68, -63, -51, -55, -59, -58, -57, -42, -44, -41, -35, -19, -20, -19, -15, -12, 
-6, -1, 4, 9, 7, 3, -19, -25, -26, -25, -6, 6, -11, -22, -32, -25, 
-11, 17, 36, 41, 52, 48, 44, 39, 52, 64, 78, 93, 101, 93, 90, 94, 
90, 80, 71, 50, 35, 32, 17, 4, 3, 2, -2, -6, 0, 5, 7, -1, 
-15, -13, -13, -13, 0, 6, -6, -11, -16, -40, -45, -55, -57, -51, -42, -40, 
-35, -29, -15, -18, -18, -8, -4, -7, -5, -12, -21, -23, -27, -44, -50, -53, 
-62, -73, -75, -63, -54, -46, -58, -57, -55, -71, -56, -42, -33, -15, -11, -5, 
-3, -8, -15, -21, -7, 16, 15, 32, 39, 27, 38, 46, 63, 61, 58, 68, 
70, 67, 53, 57, 60, 63, 64, 46, 29, 7, 14, 21, 10, -8, -32, -47, 
-63, -59, -56, -51, -47, -34, -19, -16, -33, -43, -46, -45, -28, -24, -26, -33, 
-22, -7, -9, 0, 5, 14, 38, 43, 44, 35, 16, 14, 22, 29, 42, 51, 
35, 24, 33, 38, 55, 43, 52, 64, 59, 54, 49, 50, 53, 46, 26, 14, 
-16, -29, -22, -37, -39, -35, -37, -43, -50, -56, -67, -77, -74, -53, -43, -16, 
-5, -25, -45, -70, -76, -81, -87, -79, -55, -50, -49, -40, -45, -32, -31, -40, 
-43, -39, -31, -35, -36, -30, -32, -14, -6, -2, 0, 17, 20, 21, 31, 49, 
72, 94, 81, 85, 92, 77, 73, 61, 47, 51, 59, 71, 79, 83, 76, 54, 
45, 55, 59, 58, 60, 64, 75, 75, 65, 35, 39, 36, 43, 48, 36, 26, 
25, 21, 12, 1, -20, -40, -48, -52, -61, -67, -59, -68, -67, -50, -50, -54, 
-64, -64, -54, -46, -46, -60, -58, -79, -99, -108, -114, -90, -65, -46, -43, -47, 
-58, -68, -60, -46, -46, -41, -24, -12, -18, -12, -6, 3, 12, 7, 20, 31, 
28, 36, 47, 49, 33, 29, 35, 36, 49, 42, 45, 47, 57, 58, 69, 80, 
77, 78, 75, 62, 77, 85, 98, 101, 92, 71, 43, 37, 29, 12, -3, -12, 
-8, -15, -27, -32, -39, -30, -36, -40, -38, -35, -35, -35, -29, -34, -42, -47, 
-57, -59, -58, -66, -73, -72, -68, -60, -54, -47, -42, -40, -41, -35, -25, -9, 
1, 19, 13, 11, 13, 6, 10, 22, 32, 26, 14, 9, 14, 15, 3, 5, 
2, -2, 5, 23, 33, 42, 46, 50, 57, 53, 51, 48, 31, 28, 26, 12, 
9, -9, -13, -22, -38, -24, -32, -27, -8, -5, 20, 28, 48, 46, 31, 27, 
18, 25, 22, 17, 29, 32, 35, 41, 39, 38, 42, 51, 52, 39, 35, 43, 
41, 25, 12, -8, -4, -8, -15, -16, -30, -31, -41, -45, -51, -53, -42, -24, 
-41, -50, -64, -80, -92, -92, -72, -64, -55, -54, -60, -48, -56, -36, -17, -13, 
4, 2, 10, 4, -5, 3, -3, 2, -3, -15, -16, -27, -28, -16, -16, -10, 
-1, 3, 5, 7, 12, 15, 25, 37, 37, 51, 59, 58, 58, 68, 63, 56, 
46, 47, 33, 23, 17, 13, 9, -4, -16, -8, -13, -11, -6, -8, 2, 2, 
-6, 6, 10, -2, 2, 12, 24, 15, 1, -7, -34, -19, -16, -25, -37, -43, 
-34, -25, -23, -14, 7, 16, 8, 4, -1, -10, 14, 24, 28, 25, 26, 10, 
-3, 1, 10, 0, 3, -3, 6, -38, -42, -37, -52, -45, -51, -39, -38, -21, 
7, 25, 44, 63, 82, 69, 36, 31, 32, 33, 45, 54, 41, 15, -7, -9, 
-28, -14, -26, -31, -33, -35, -36, -36, -47, -42, -33, -27, -23, -27, -29, -16, 
4, -6, -14, -38, -36, -47, -44, -28, -22, -3, -18, -22, -12, -5, 7, 1, 
-6, -18, -29, -16, -10, 4, 13, -2, 11, -9, -3, -14, -16, -8, -13, -7, 
-5, 12, 23, 23, 49, 47, 38, 35, 35, 35, 34, 12, -6, -11, -13, 2, 
8, 16, 26, 17, 24, 16, 5, -6, -28, -33, -45, -52, -43, -40, -24, -12, 
16, 20, 2, 11, 13, 22, 30, 35, 35, 22, 28, 21, 30, 39, 30, 32, 
37, 43, 45, 52, 42, 35, 34, 32, 25, 26, 23, 27, 30, 27, 14, 12, 
21, 23, 39, 32, 34, 26, 7, -1, -24, -19, -25, -29, -32, -35, -27, -28, 
-24, -18, -4, -7, -7, -6, -15, -23, -24, -41, -46, -43, -43, -44, -32, -36, 
-15, -8, -11, -9, -12, -21, -26, -39, -48, -47, -65, -63, -56, -55, -70, -84, 
-69, -67, -58, -39, -23, -22, -21, -25, -19, -10, 1, 4, 3, 7, 18, 39, 
41, 57, 44, 53, 66, 54, 57, 48, 34, 38, 40, 50, 66, 48, 35, 29, 
24, 11, -3, -6, -14, -26, -27, -33, -33, -32, -28, -23, -12, 7, 13, 27, 
37, 44, 39, 35, 26, 19, 13, 6, 2, 6, 28, 37, 35, 38, 40, 50, 
57, 62, 63, 47, 34, 29, 28, 35, 36, 16, 11, -3, -27, -38, -36, -39, 
-42, -47, -52, -50, -77, -74, -70, -61, -40, -28, -6, -14, -21, -19, -11, -2, 
-6, -8, -17, -16, -27, -33, -31, -23, -29, -28, -25, -33, -36, -36, -29, -24, 
-20, 0, 8, 15, 5, -6, 12, 6, 15, 9, 10, 28, 22, 36, 31, 41, 
47, 40, 29, 27, 33, 45, 61, 45, 38, 21, 2, -23, -34, -41, -34, -33, 
-45, -31, -13, -10, 2, 10, 32, 47, 59, 69, 62, 53, 50, 34, 36, 17, 
-5, -10, -21, -14, -22, -33, -47, -53, -52, -39, -20, -27, -18, -12, -12, -20, 
-36, -29, -24, -29, -21, -24, -14, -7, -21, -21, -16, -20, -24, -28, -20, -10, 
0, 5, 5, 10, 10, 23, 41, 46, 41, 28, 24, 17, 20, 7, 5, 19, 
31, 52, 55, 44, 41, 41, 18, 15, 4, 5, 1, -1, -3, -16, -25, -31, 
-42, -37, -34, -27, -19, -12, 3, 22, 39, 42, 36, 31, 24, 10, -2, -14, 
-33, -36, -34, -25, -7, 8, 17, 26, 32, 17, 2, -17, -30, -21, -13, 0, 
0, -7, -15, -29, -35, -33, -28, -26, -19, -16, -17, -17, -22, -28, -18, -7, 
6, 22, 22, 30, 29, 11, 0, -10, -18, -21, -20, -19, -14, -9, -5, -2, 
16, 18, 20, 19, 21, 26, 12, 14, 19, 33, 39, 25, 21, 15, 8, 7, 
11, 6, -8, -18, -16, -19, -19, -9, -12, -9, -18, -27, -21, -20, -8, 5, 
20, 32, 21, 21, 3, -16, -32, -37, -42, -33, -32, -35, -31, -36, -42, -37, 
-22, -6, 9, 12, 10, 3, 5, 3, 9, 15, 21, 27, 21, 15, 6, 10, 
14, 21, 26, 24, 23, 30, 35, 44, 44, 38, 30, 23, 11, 9, 5, -4, 
-3, -8, 2, 3, 2, 8, 14, 16, 5, -4, -10, -11, -5, -1, -1, -4, 
-12, -5, -2, 8, 17, 18, 10, 0, -14, -13, -15, -8, -8, -15, -22, -27, 
-30, -36, -34, -25, -22, -26, -28, -29, -25, -21, -19, -19, -19, -23, -22, -19, 
-12, -2, 13, 24, 22, 20, 23, 20, 20, 18, 18, 23, 19, 16, 6, 10, 
10, 6, 4, 7, 6, 6, 5, -10, -16, -20, -18, -16, -19, -25, -17, -12, 
-4, 6, 13, 12, 10, 17, 15, 6, 7, 12, 10, 10, 7, 5, -1, -19, 
-22, -23, -27, -24, -15, -10, -10, -10, -9, -8, -3, -3, -3, 0, 0, 0, 
10, 9, 2, -4, -2, -2, -13, -12, -9, -9, -11, -10, -8, 1, 0, -2, 
0, 6, 4, 2, 10, 12, 10, 16, 12, 10, 2, -4, -12, -17, -14, -11, 
-7, -1, -4, -5, -2, 2, 12, 16, 23, 24, 20, 14, 10, -1, -2, 5, 
5, 1, -2, -2, -3, -1, -1, -9, -7, -11, -11, -7, -8, -4, -4, -3, 
-5, -1, 4, 2, 5, 5, 1, -4, -7, -12, -10, -13, -14, -12, -9, 1, 
7, 11, 15, 18, 20, 3, 4, 2, -9, -9, -6, -8, -9, -10, -7, -6, 
-3, 3, 3, -5, -13, -24, -19, -13, -7, -1, 1, -1, 1, 0, -7, -6, 
-6, 0, -1, -2, -4, -8, 2, 9, 13, 21, 31, 33, 28, 27, 27, 24, 
27, 23, 24, 21, 16, 13, 11, 10, 3, -4, -5, -7, -17, -20, -21, -13, 
-9, -3, 7, 7, 16, 14, 15, 20, 20, 27, 28, 24, 18, 12, 11, 3, 
-5, -10, -17, -25, -25, -23, -22, -20, -14, -15, -14, -17, -16, -9, -2, 5, 
8, 12, 11, 5, 6, 3, 1, -1, 0, 0, -1, 6, 4, 0, -3, -9, 
-13, -13, -11, -11, -10, -10, -8, -3, 6, 9, 10, 12, 11, 9, 6, 4, 
5, 9, 9, 8, 6, 8, 8, 8, 7, 7, 5, 5, 8, 6, 9, 9, 
6, -1, -6, -9, -12, -10, -10, -12, -11, -13, -16, -22, -25, -30, -33, -33, 
-32, -26, -24, -20, -21, -21, -22, -22, -21, -18, -18, -19, -19, -21, -18, -15, 
-10, -6, 0, 1, 3, 7, 7, 9, 11, 14, 13, 12, 13, 13, 13, 14, 
11, 9, 9, 7, 4, 8, 9, 13, 17, 17, 14, 10, 8, 7, 7, 5, 
5, 7, 5, 2, 2, 1, 3, 2, 4, 6, 3, 2, -1, -2, -1, 2, 
3, 7, 6, 7, 3, 1, 3, -1, 0, 3, 6, 11, 12, 10, 8, 2, 
-4, -7, -7, -2, -1, 4, 4, 2, 3, 7, 6, 6, 5, 3, 2, 2, 
4, 6, 6, 5, 3, 0, -2, -1, 0, 5, 2, 2, 3, 4, 4, 4, 
4, 5, 2, 2, -1, -4, -3, -4, -5, -4, -8, -8, -8, -7, -3, -2, 
4, 4, -1, 1, 0, -4, -4, -4, -3, 1, 3, 1, -2, -7, -9, -10, 
-6, 3, 2, 7, 7, 7, 10, 12, 14, 17, 19, 16, 12, 12, 11, 13, 
15, 14, 9, 6, 2, -3, -4, -3, -2, -1, -3, -3, -4, -3, -4, -8, 
-10, -9, -8, -6, -1, 2, 0, -4, -16, -22, -25, -29, -28, -27, -27, -28, 
-29, -28, -28, -27, -24, -20, -19, -19, -18, -12, -8, -2, 2, 3, 1, -2, 
-1, 2, 4, 4, 5, 6, 2, -4, -8, -8, -6, -2, 0, 1, 0, 1, 
-1, -2, 0, 0, 1, 2, -2, -5, -5, -7, -9, -7, -5, -4, 0, 3, 
5, 9, 10, 7, 5, 3, -2, 0, 0, 1, 1, 1, 1, -1, -1, 0, 
0, 2, 4, 4, -1, -1, -1, -5, -9, -10, -10, -12, -10, -7, -6, -3, 
-3, -5, -6, -4, -8, -11, -8, -8, -9, -7, -7, -6, -4, -2, 0, 2, 
4, 4, 5, 8, 10, 10, 12, 13, 13, 13, 8, 4, -1, -4, -2, -2, 
-2, -1, 1, 3, 2, -5, -5, -6, -3, -1, 5, 6, 9, 13, 13, 17, 
16, 18, 21, 21, 20, 17, 12, 12, 7, 6, 6, 7, 8, 9, 8, 9, 
11, 11, 13, 13, 14, 16, 14, 15, 16, 14, 14, 13, 12, 11, 7, 4, 
2, 2, 2, 2, 1, 1, 0, -3, -2, -2, 2, 3, 1, 3, 3, 1, 
-1, -6, -9, -14, -17, -21, -26, -31, -34, -34, -34, -33, -31, -29, -23, -20, 
-21, -19, -20, -21, -18, -16, -11, -9, -2, 0, 3, 3, 3, 3, 2, 5, 
7, 9, 13, 14, 14, 18, 18, 17, 14, 12, 3, 0, 0, -1, 9, 13, 
8, 8, 0, -4, 3, 2, -3, -3, 0, 2, -1, -15, -21, -18, -18, -17, 
-16, -20, -19, -17, -13, -11, -8, -1, 5, 7, 4, 1, 3, 5, 8, 13, 
15, 17, 15, 12, 9, 9, 4, -1, -3, -5, -9, -10, -10, -7, -6, -4, 
-2, 0, 1, -1, -1, -2, -4, -8, -10, -8, -5, -5, -2, 0, -1, -1, 
-4, -4, -4, 0, 3, 4, 6, 6, 3, 3, 3, 3, 4, 4, 5, 9, 
10, 10, 12, 12, 13, 11, 9, 6, 3, 3, 5, 7, 7, 8, 5, 3, 
-2, -3, -4, -3, -2, -3, -2, -4, -5, -6, -5, -4, -2, -2, -3, -3, 
-3, -1, 3, 5, 8, 11, 11, 13, 13, 13, 16, 17, 17, 16, 12, 9, 
5, 3, -2, -2, -2, -3, -2, -2, -1, 1, 1, 1, 0, 2, 2, 2, 
1, 0, -3, -5, -4, -2, -2, -1, 0, 2, 2, 0, -1, -3, -2, -3, 
-3, -5, -8, -8, -9, -8, -5, -3, 0, 1, 2, 2, 2, 2, 0, -2, 
-4, -6, -10, -15, -16, -16, -16, -15, -15, -15, -15, -12, -10, -7, -4, -3, 
-1, -2, -1, 0, 0, 1, 1, -2, -3, -7, -7, -7, -5, -5, -5, -7, 
-9, -8, -6, -5, -1, 0, 0, -1, -1, -1, -1, 0, 0, 2, 2, 2, 
0, -2, -3, -4, -5, -5, -6, -7, -5, -3, -2, 2, 4, 4, 6, 6, 
7, 7, 10, 11, 10, 9, 9, 9, 9, 11, 12, 12, 12, 12, 8, 7, 
4, 2, 0, -3, -8, -11, -14, -17, -19, -21, -23, -23, -19, -18, -14, -13, 
-11, -12, -12, -11, -11, -8, -7, -5, -4, -4, -3, 1, 3, 6, 10, 12, 
14, 14, 15, 18, 18, 22, 21, 22, 22, 20, 19, 16, 12, 10, 11, 10, 
9, 7, 4, 4, 2, 1, 0, -2, -3, -1, 1, 3, 3, 0, 0, -2, 
-2, -2, -6, -5, -6, -5, -1, 1, 0, -1, -4, -5, -9, -11, -16, -19, 
-20, -18, -17, -12, -10, -8, -5, -2, 1, 9, 11, 13, 13, 15, 15, 17, 
19, 20, 18, 17, 10, 5, 2, -1, -4, -6, -10, -10, -12, -14, -14, -15, 
-11, -8, -9, -9, -10, -10, -12, -12, -12, -10, -7, -4, -2, -5, -5, -5, 
-2, 3, 5, 6, 5, 4, -3, -4, -6, -6, -6, -6, -5, -5, -4, -3, 
-2, -1, -1, -3, -5, -8, -8, -6, -4, -3, -4, -4, -5, -7, -8, -8, 
-9, -8, -3, 3, 6, 11, 15, 15, 14, 12, 9, 6, 3, -1, -6, -9, 
-11, -13, -12, -11, -8, -6, -2, -2, -2, 1, 3, 4, 4, 3, 2, -1, 
-3, -4, -4, -5, -6, -7, -7, -6, -6, -4, -2, -1, 0, 0, -1, -2, 
-5, -4, -5, -5, -4, -2, -3, -4, -5, -4, -4, -3, -1, 1, 2, 4, 
4, 4, 2, 1, 1, -1, -2, -3, -3, -1, -1, 0, 3, 6, 9, 11, 
14, 15, 16, 17, 16, 15, 17, 16, 15, 14, 13, 12, 12, 13, 14, 14, 
16, 16, 15, 14, 11, 11, 10, 10, 10, 11, 8, 8, 8, 9, 8, 10, 
9, 9, 9, 6, 5, 5, 5, 6, 5, 2, 0, -2, -3, -5, -8, -10, 
-13, -15, -17, -17, -16, -15, -14, -12, -12, -12, -12, -11, -11, -11, -13, -15, 
-17, -17, -18, -17, -17, -17, -17, -17, -15, -13, -11, -7, -5, -5, -4, -3, 
-4, -3, -4, -4, -4, -3, -1, 0, 3, 5, 7, 8, 9, 8, 8, 8, 
6, 7, 4, 3, 2, 3, 3, 3, 1, 0, 0, -1, 0, 0, 0, 0, 
0, 1, 1, 0, 0, 1, 1, 3, 6, 6, 7, 7, 7, 6, 6, 6, 
7, 7, 8, 6, 4, 3, 1, 2, 2, 0, -2, -2, -2, -5, -4, -4, 
-4, -1, -1, -3, -1, 0, -1, 1, 1, 2, -2, -3, -3, -3, -2, 0, 
-5, -4, -4, -4, -5, -5, -2, -1, -3, -5, -4, -4, -4, -5, -7, -5, 
-3, -2, -3, -5, -5, -4, -5, -6, -5, -5, -6, -6, -7, -7, -7, -8, 
-8, -7, -4, -3, -3, 1, 3, 5, 6, 4, 4, 5, 8, 10, 10, 11, 
13, 13, 13, 13, 11, 11, 11, 9, 6, 5, 3, 2, 1, 1, -1, -3, 
-4, -4, -4, -5, -7, -8, -9, -10, -10, -12, -13, -13, -13, -12, -11, -11, 
-10, -9, -8, -5, -3, 0, 2, 3, 3, 3, 2, 2, 3, 5, 5, 5, 
6, 6, 6, 5, 5, 4, 3, 1, 0, 0, 0, 2, 4, 5, 6, 6, 
6, 5, 5, 7, 7, 6, 7, 6, 6, 3, 3, 2, 2, 1, -1, -3, 
-3, -5, -7, -8, -9, -9, -10, -10, -11, -10, -10, -9, -9, -8, -7, -6, 
-6, -6, -5, -6, -7, -7, -9, -9, -8, -8, -7, -7, -6, -6, -6, -6, 
-7, -8, -7, -7, -6, -5, -4, -4, -4, -2, -2, -2, -3, -2, -1, 1, 
2, 2, 3, 4, 5, 5, 6, 6, 6, 6, 7, 8, 8, 9, 9, 10, 
10, 9, 9, 9, 9, 9, 9, 8, 8, 7, 7, 5, 5, 5, 4, 4, 
3, 2, 1, 2, 3, 3, 3, 3, 1, 1, -1, -1, -1, -1, -1, -1, 
-2, -3, -4, -5, -5, -5, -3, -4, -4, -5, -5, -3, -4, -4, -4, -5, 
-5, -5, -5, -6, -7, -6, -6, -5, -4, -1, -1, 1, 1, 0, 1, 1, 
2, 3, 3, 5, 5, 5, 4, 3, 2, 1, -2, -1, -1, -2, -3, -3, 
-3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 
0, };
