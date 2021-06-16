const unsigned int sound1SampleRate = 22050;
const unsigned int sound1SampleCount = 8802;
const signed char sound1Samples[] = {
0, 3, 8, 6, 1, -1, 2, 7, 9, 6, 1, -2, 0, -1, -2, -5, 
-10, -8, -1, 9, 4, -10, -7, 12, 10, 4, 7, 22, 24, -21, -28, -8, 
5, 3, -7, -8, -6, -7, 7, 22, -5, -11, 13, 37, 22, -25, -40, -19, 
-25, -26, 1, 29, 22, 17, 20, 3, -47, -58, -14, 17, 46, 82, 90, 31, 
-7, -8, -14, -64, -88, -45, -12, 24, 81, 119, 34, -67, -99, -78, -76, -75, 
7, 62, 92, 106, 113, 29, -79, -127, -107, -83, -62, 13, 61, 72, 52, 37, 
17, -59, -67, -37, -12, 9, 45, 54, 36, 11, 11, 5, -71, -72, -26, -2, 
-13, -24, 6, 13, 0, 18, 48, -8, -46, -30, 13, 34, 21, 19, 21, -2, 
-4, 20, 9, -73, -82, -30, 28, 49, 63, 48, -3, -30, -12, 2, -49, -83, 
-53, 15, 53, 65, 47, -5, -48, -46, -12, -3, -32, -14, 35, 46, 37, 39, 
12, -31, -56, -28, 21, 0, -1, 27, 30, 10, 0, -4, -22, -41, -20, 25, 
13, -1, 14, 20, 15, 10, 3, -20, -46, -29, 13, -4, -24, -16, -4, 6, 
13, 27, 10, -24, -11, 36, 30, -4, -14, 1, 13, 5, 1, -10, -49, -53, 
-8, 27, 12, -12, -3, 18, 15, 14, 10, -23, -46, -28, 11, 28, 4, -10, 
-9, -21, -23, -2, -25, -53, -46, -1, 43, 20, 10, 21, 8, -9, 14, 20, 
-5, -29, -8, 34, 12, -12, -10, -13, -20, -9, 4, -2, -24, -16, 21, 17, 
2, 0, -4, -7, 0, 15, 7, -18, -12, 19, 8, -8, -11, -14, -13, -3, 
35, 30, -10, -20, 14, 32, 7, -13, -20, -18, -14, 25, 36, -1, -35, -30, 
-7, 6, -5, -9, -9, -16, 3, 23, 8, -20, -34, -23, 14, 19, 19, 14, 
-11, -23, 10, 15, 4, -10, -8, 15, 7, 6, 13, -9, -32, -17, 8, 17, 
-2, -11, 8, -3, -16, -9, -10, -17, -12, 7, 23, 14, 9, 26, 16, -6, 
-23, -36, -29, -8, 29, 30, 1, -14, -8, -25, -32, -28, -26, -21, 1, 64, 
70, 25, -14, -22, -23, -19, -8, 0, 2, -4, 28, 44, 16, -18, -38, -46, 
-15, 10, 23, 22, 9, 13, 36, 22, 4, -16, -38, -28, -2, 23, 31, 12, 
2, 14, 7, 0, -9, -17, -11, 2, 19, 34, 25, 10, -1, 4, 9, -5, 
-17, -10, -2, -3, -8, -14, -9, -2, 5, 14, 5, -13, -18, -17, 1, 9, 
3, 9, 25, 43, 41, 13, -14, -33, -47, -14, 18, 26, 20, 13, 21, 18, 
-13, -38, -48, -57, -21, 24, 53, 54, 30, 10, 4, -14, -25, -34, -43, -12, 
28, 62, 63, 30, -2, -40, -55, -41, -22, -21, -6, 21, 51, 54, 23, -3, 
-32, -50, -36, -13, -1, 11, 21, 36, 37, 13, -7, -27, -36, -25, -14, -10, 
0, 17, 29, 25, 5, -4, -11, -26, -13, -2, -2, -9, -9, 15, 22, 4, 
-7, -14, -20, -17, -14, -5, -8, -22, 9, 42, 51, 36, 9, -12, -18, -29, 
-19, -7, -16, -2, 28, 51, 48, 12, -27, -63, -70, -41, -3, 14, 36, 55, 
65, 53, 15, -17, -59, -76, -43, 12, 43, 53, 53, 46, 18, -29, -56, -70, 
-75, -41, 12, 50, 64, 47, 34, 2, -39, -52, -49, -42, -8, 32, 56, 55, 
26, 16, -9, -42, -48, -41, -32, -4, 29, 49, 44, 17, 10, 5, -15, -19, 
-18, -20, -11, 9, 36, 41, 14, -3, -1, -4, -6, -12, -26, -32, -25, 12, 
45, 42, 20, 13, 8, -1, -20, -33, -48, -47, -9, 39, 59, 40, 10, -17, 
-40, -60, -58, -43, -34, 9, 62, 87, 78, 26, -6, -42, -73, -63, -18, -1, 
33, 71, 85, 63, -9, -41, -72, -101, -85, -39, 11, 45, 74, 79, 49, -25, 
-47, -61, -71, -44, 2, 40, 56, 68, 68, 35, -21, -62, -70, -68, -36, 7, 
37, 34, 31, 39, 29, -8, -38, -43, -41, -17, 14, 37, 28, 7, 12, 19, 
4, -20, -35, -43, -34, -17, 8, 23, 9, 17, 31, 29, 18, -12, -33, -46, 
-45, -16, 28, 29, 34, 39, 26, 1, -43, -60, -72, -73, -35, 23, 61, 68, 
64, 42, 2, -63, -69, -63, -50, -7, 48, 81, 74, 52, 20, -24, -77, -92, 
-72, -43, 15, 72, 88, 64, 30, 2, -32, -72, -70, -44, -15, 35, 84, 90, 
46, -5, -33, -51, -70, -50, -23, -2, 29, 61, 78, 41, -10, -35, -43, -48, 
-18, 3, 15, 24, 33, 47, 36, 2, -19, -30, -39, -31, -7, 7, 13, 12, 
27, 40, 21, 6, -10, -27, -33, -31, -13, 4, 9, 28, 48, 33, 15, -11, 
-39, -59, -68, -41, -9, 16, 49, 74, 51, 15, -23, -52, -70, -76, -28, 16, 
46, 78, 95, 55, -2, -59, -90, -100, -90, -15, 35, 61, 79, 83, 60, -18, 
-75, -100, -98, -73, 26, 81, 96, 88, 65, 33, -29, -75, -89, -81, -57, -1, 
76, 88, 69, 29, -4, -42, -62, -57, -42, -25, 11, 64, 74, 60, 24, -3, 
-22, -46, -39, -27, -18, -3, 21, 36, 36, 19, 9, -2, -28, -30, -30, -24, 
-12, 1, 33, 44, 40, 36, 23, -21, -46, -66, -69, -52, -24, 39, 59, 53, 
46, 26, -29, -63, -86, -81, -54, -11, 83, 109, 91, 57, 12, -38, -91, -103, 
-84, -49, -4, 90, 114, 89, 39, -21, -73, -109, -92, -43, 4, 42, 87, 113, 
81, 27, -35, -81, -107, -81, -22, 29, 56, 75, 64, 32, -9, -50, -73, -80, 
-54, 0, 42, 62, 71, 46, 18, -13, -38, -44, -42, -31, -2, 19, 28, 35, 
30, 14, -5, -22, -24, -24, -24, -10, 0, 9, 20, 32, 49, 36, 8, -10, 
-30, -51, -47, -27, -2, 17, 33, 70, 58, 20, -15, -49, -78, -72, -30, 26, 
62, 74, 87, 63, 10, -37, -77, -102, -89, -33, 45, 90, 93, 86, 30, -33, 
-79, -98, -94, -76, -2, 76, 119, 112, 86, 11, -54, -98, -104, -75, -38, 28, 
83, 102, 80, 45, -1, -72, -102, -96, -52, -8, 46, 82, 83, 52, 16, -16, 
-46, -60, -54, -18, 12, 36, 56, 54, 30, 0, -23, -23, -27, -29, -11, 2, 
-1, 16, 34, 41, 28, 7, 4, -11, -31, -28, -21, -25, -14, 18, 54, 59, 
36, 20, -22, -61, -70, -53, -28, 1, 40, 86, 91, 58, 24, -41, -92, -110, 
-80, -26, 15, 63, 96, 85, 33, -14, -74, -110, -117, -75, 4, 64, 102, 116, 
84, 14, -45, -77, -94, -84, -39, 33, 83, 91, 82, 42, -27, -84, -106, -81, 
-52, -6, 56, 87, 75, 46, 18, -23, -62, -76, -36, -11, 17, 56, 71, 49, 
4, -11, -19, -38, -50, -33, -10, -6, 16, 33, 30, 3, -1, 12, 6, -13, 
-10, -13, -30, -24, 3, 28, 32, 23, 32, 16, -23, -41, -46, -57, -51, -11, 
43, 68, 58, 55, 23, -38, -75, -77, -57, -37, 9, 72, 96, 59, 37, -7, 
-73, -117, -110, -42, 0, 50, 107, 115, 42, 5, -31, -79, -108, -91, -3, 41, 
75, 111, 102, 37, -48, -76, -92, -93, -65, 28, 58, 68, 81, 70, 18, -62, 
-75, -63, -48, -19, 34, 71, 50, 33, 20, -6, -56, -59, -35, -21, -13, 18, 
43, 20, -1, -2, 5, -4, -10, 9, 7, -16, -15, 12, 9, -1, 6, 28, 
25, -2, 6, -5, -45, -62, -38, 11, 25, 41, 67, 59, -6, -17, -29, -59, 
-73, -44, 35, 58, 69, 82, 56, -13, -77, -81, -79, -67, -21, 74, 91, 82, 
75, 39, -32, -102, -94, -63, -28, 20, 83, 101, 57, 20, -18, -67, -110, -86, 
-36, 4, 37, 82, 84, 30, -16, -44, -64, -75, -41, 13, 43, 47, 61, 56, 
12, -29, -49, -52, -54, -26, 23, 43, 29, 19, 19, -6, -26, -25, -8, -5, 
-8, 20, 31, 10, -7, -3, 13, 6, 7, 24, 15, -34, -33, -22, -21, -19, 
1, 45, 39, 24, 24, 5, -42, -66, -42, -12, 11, 39, 85, 63, 18, -7, 
-31, -71, -86, -48, 2, 33, 58, 86, 59, -4, -45, -65, -83, -71, -17, 47, 
80, 85, 89, 39, -32, -82, -97, -89, -63, 20, 84, 97, 71, 44, -14, -61, 
-83, -70, -38, -11, 44, 91, 92, 50, 8, -24, -65, -69, -42, 2, 22, 22, 
40, 38, 9, -16, -28, -37, -39, -17, 28, 46, 25, 6, 2, -12, -18, -7, 
15, 1, -11, 1, 4, -19, -32, -20, -8, 3, 22, 50, 30, -10, -26, -33, 
-44, -25, 13, 46, 52, 48, 51, 5, -49, -71, -70, -60, -34, 38, 80, 77, 
46, 22, -33, -75, -80, -55, -20, 14, 69, 99, 83, 32, -11, -51, -99, -85, 
-36, 19, 52, 73, 78, 47, -9, -47, -63, -69, -45, 8, 65, 85, 57, 38, 
2, -42, -64, -58, -31, -16, 12, 53, 60, 29, -12, -33, -51, -50, -26, 22, 
24, 21, 34, 29, 1, -17, -19, -18, -13, 3, 28, 16, -9, -12, -17, -32, 
-23, -1, 17, 19, 17, 24, -9, -41, -40, -24, -13, 5, 44, 57, 39, 12, 
-3, -49, -74, -59, -21, 15, 38, 60, 56, 15, -30, -48, -59, -66, -33, 21, 
68, 82, 62, 34, -21, -72, -79, -62, -31, -1, 38, 72, 71, 39, -10, -57, 
-94, -85, -43, 28, 54, 68, 74, 50, 6, -34, -55, -68, -52, -10, 41, 66, 
49, 29, -8, -50, -57, -42, -25, -5, 20, 51, 47, 21, 2, -24, -49, -44, 
0, 25, 31, 30, 34, -4, -35, -36, -32, -28, -12, 30, 45, 29, 7, 2, 
-13, -45, -27, 3, 26, 39, 51, 41, -2, -43, -47, -40, -35, -8, 26, 46, 
42, 22, 3, -42, -80, -70, -34, 19, 47, 66, 65, 33, -7, -33, -57, -72, 
-53, -11, 52, 66, 58, 35, -12, -58, -65, -54, -35, -4, 31, 64, 65, 35, 
3, -38, -70, -51, -18, 15, 39, 51, 57, 21, -19, -41, -60, -67, -42, 22, 
53, 56, 43, 31, -16, -46, -45, -33, -17, 9, 55, 65, 35, -1, -16, -33, 
-54, -33, -4, 18, 32, 48, 42, -4, -47, -51, -38, -13, 18, 45, 54, 37, 
17, 5, -29, -61, -55, -27, 22, 47, 55, 45, 5, -36, -38, -36, -34, -15, 
14, 42, 58, 47, 23, -23, -65, -51, -21, 8, 33, 44, 46, 17, -9, -28, 
-55, -71, -51, 10, 47, 63, 58, 39, -19, -45, -48, -46, -33, 0, 53, 66, 
51, 20, -9, -43, -73, -51, -24, 2, 31, 60, 57, 19, -28, -48, -57, -46, 
-6, 34, 54, 52, 38, 24, -17, -60, -70, -58, -18, 25, 60, 66, 34, -6, 
-26, -42, -54, -40, -14, 29, 53, 67, 60, 14, -39, -57, -46, -25, 4, 27, 
38, 32, 22, 8, -24, -56, -49, -24, 13, 47, 57, 48, 6, -17, -24, -35, 
-37, -16, 18, 39, 49, 37, 11, -39, -51, -39, -25, -5, 23, 48, 47, 30, 
3, -22, -47, -44, -7, 25, 43, 51, 38, 21, -14, -45, -57, -59, -26, 21, 
60, 70, 47, 7, -29, -50, -59, -41, -18, 22, 54, 76, 73, 31, -30, -70, 
-70, -51, -12, 22, 43, 48, 41, 28, -9, -56, -78, -58, -16, 33, 65, 71, 
34, 2, -17, -37, -54, -51, -21, 15, 51, 64, 51, -7, -38, -47, -48, -36, 
-9, 18, 34, 44, 40, 21, -13, -44, -32, -18, 1, 25, 31, 22, 8, -6, 
-17, -34, -34, -3, 20, 33, 34, 7, -12, -29, -34, -22, -14, 4, 30, 46, 
47, 26, -15, -55, -59, -41, -4, 27, 44, 41, 30, 17, -9, -48, -72, -59, 
-20, 33, 68, 77, 37, -7, -32, -50, -62, -49, -26, 15, 60, 80, 73, 9, 
-45, -74, -79, -60, -23, 20, 48, 70, 66, 41, -23, -60, -73, -66, -31, 19, 
55, 58, 52, 32, -1, -39, -65, -51, -31, 2, 39, 49, 33, 13, -5, -18, 
-36, -37, -14, 6, 30, 45, 35, -3, -25, -28, -13, -5, 2, 8, 9, 14, 
14, -2, -28, -38, -25, 9, 34, 43, 22, -9, -25, -28, -30, -20, -12, 10, 
39, 52, 50, 5, -43, -70, -67, -40, -4, 31, 54, 65, 50, 25, -25, -66, 
-85, -70, -22, 32, 66, 71, 59, 22, -19, -54, -81, -74, -45, 10, 67, 82, 
61, 29, -12, -47, -72, -67, -38, -4, 40, 81, 68, 26, -19, -51, -61, -62, 
-33, -1, 21, 45, 65, 56, -1, -41, -58, -48, -26, 12, 26, 20, 19, 23, 
17, -11, -32, -37, -23, -3, 20, 27, 0, -18, -17, -8, 7, 6, 8, 9, 
2, 6, 1, -25, -41, -36, -8, 26, 41, 39, 23, -11, -34, -39, -43, -38, 
-21, 19, 63, 63, 42, 11, -36, -69, -73, -38, -10, 14, 53, 87, 61, 16, 
-29, -70, -91, -81, -11, 32, 50, 70, 84, 61, -16, -64, -90, -86, -56, 30, 
71, 71, 62, 52, 22, -37, -70, -80, -64, -28, 27, 84, 66, 34, 7, -20, 
-41, -47, -42, -27, -7, 29, 68, 46, 10, -20, -33, -31, -16, -2, 4, -4, 
2, 27, 19, -2, -17, -14, -3, 6, 14, 11, -14, -30, -18, 8, 12, 9, 
19, 31, 10, -5, -19, -44, -57, -42, 18, 43, 41, 41, 42, -4, -36, -55, 
-65, -58, -29, 52, 86, 72, 46, 22, -14, -65, -76, -68, -42, -6, 76, 105, 
77, 25, -19, -57, -82, -70, -38, -2, 25, 63, 101, 64, 5, -46, -79, -78, 
-45, 3, 37, 43, 53, 65, 30, -18, -57, -75, -68, -22, 30, 60, 47, 30, 
25, 6, -20, -40, -42, -31, -8, 26, 48, 29, 2, -3, 2, -2, -13, -12, 
-4, -12, 1, 14, 6, -8, -8, 22, 32, 17, 2, -6, -24, -34, -19, -7, 
-1, 7, 46, 60, 33, -4, -32, -57, -57, -27, 10, 35, 41, 52, 66, 29, 
-22, -62, -86, -67, -19, 39, 74, 66, 52, 35, -6, -49, -76, -87, -72, 2, 
69, 105, 82, 43, -1, -40, -68, -73, -60, -37, 18, 75, 102, 70, 18, -19, 
-60, -71, -59, -27, 3, 28, 59, 76, 47, 0, -32, -47, -42, -31, -4, 22, 
20, 28, 37, 21, -8, -30, -25, -12, -11, -3, 8, 0, -1, 14, 24, 17, 
-2, -4, 5, -5, -15, -17, -25, -19, 8, 40, 51, 27, 3, -11, -28, -40, 
-40, -36, -14, 22, 66, 85, 54, 6, -41, -65, -68, -48, -20, 4, 39, 76, 
90, 49, -12, -73, -93, -83, -43, 10, 48, 58, 71, 71, 26, -33, -72, -90, 
-69, -24, 36, 76, 59, 47, 34, -6, -53, -79, -69, -41, -3, 46, 79, 65, 
20, 4, -19, -45, -61, -40, -11, 13, 42, 61, 42, -5, -16, -18, -22, -33, 
-33, -9, 3, 21, 36, 24, -8, -12, 0, 10, -1, -18, -24, -26, -9, 17, 
26, 18, 2, 11, 22, 6, -21, -47, -53, -32, 8, 44, 56, 29, 19, 13, 
-10, -38, -55, -58, -33, 15, 65, 87, 42, 8, -15, -46, -69, -68, -41, -9, 
31, 79, 101, 39, -10, -41, -66, -75, -61, -9, 26, 50, 78, 88, 47, -37, 
-64, -73, -66, -44, 13, 43, 53, 64, 66, 29, -47, -68, -60, -35, -10, 16, 
41, 36, 36, 38, 17, -39, -60, -49, -20, 2, 19, 26, 10, 5, 16, 22, 
10, -29, -32, -18, -7, 7, 17, 1, -6, 8, 29, 35, -7, -28, -36, -41, 
-29, -3, 10, 10, 21, 43, 52, 1, -36, -55, -66, -51, -11, 39, 49, 49, 
55, 50, 8, -66, -85, -84, -56, -5, 67, 79, 62, 47, 31, -16, -87, -97, 
-74, -28, 27, 77, 94, 56, 21, -2, -36, -89, -90, -59, -7, 45, 86, 87, 
30, -18, -37, -47, -56, -55, -31, 11, 47, 79, 77, 19, -35, -55, -49, -33, 
-22, -10, 7, 19, 39, 57, 16, -28, -48, -38, -15, -1, 3, 3, -3, 7, 
33, 34, 8, -18, -22, -14, -18, -18, -17, -21, -10, 21, 50, 36, 4, -16, 
-21, -33, -40, -29, -17, 8, 42, 75, 57, 8, -30, -45, -57, -55, -33, -7, 
25, 58, 82, 58, -8, -61, -77, -73, -36, -4, 26, 52, 68, 81, 52, -17, 
-77, -99, -83, -39, 28, 54, 59, 47, 41, 22, -27, -75, -94, -74, -24, 51, 
77, 71, 35, 11, 6, -18, -44, -59, -48, -13, 41, 64, 57, 17, -15, -19, 
-16, -21, -32, -29, -9, 9, 38, 43, 20, -4, -6, 7, 3, -16, -24, -17, 
-13, 11, 26, 18, 6, 4, 13, 5, -27, -45, -43, -33, 10, 39, 46, 36, 
22, 20, 6, -33, -60, -62, -47, -8, 58, 69, 50, 14, -8, -22, -47, -64, 
-63, -44, 2, 77, 95, 72, 15, -30, -44, -50, -45, -34, -16, 17, 70, 84, 
61, 1, -54, -74, -59, -33, -9, 11, 32, 52, 61, 46, -1, -46, -65, -42, 
-11, 11, 28, 37, 31, 29, 21, -11, -44, -56, -30, -5, 8, 17, 20, 12, 
15, 21, 6, -18, -33, -25, 6, 7, 7, 6, -4, 10, 28, 26, 1, -30, 
-39, -18, -13, -6, -1, -5, 3, 41, 51, 29, -17, -47, -39, -23, 1, 19, 
18, 18, 35, 43, 24, -24, -64, -74, -44, 0, 35, 46, 40, 26, 25, 11, 
-25, -57, -65, -33, 15, 53, 66, 55, 25, -8, -21, -43, -58, -57, -24, 18, 
50, 62, 50, 15, -22, -27, -34, -36, -30, -12, 32, 49, 51, 35, -3, -35, 
-31, -25, -23, -24, -15, 18, 29, 34, 25, -7, -32, -19, 1, 10, -3, -11, 
2, 11, 26, 29, 6, -22, -25, -3, 9, -4, -20, -24, -16, 12, 36, 32, 
8, -18, -9, 4, -2, -14, -18, -16, 13, 43, 47, 26, -22, -30, -26, -25, 
-22, -16, -7, 19, 46, 53, 34, -5, -39, -37, -29, -10, 5, 18, 34, 45, 
43, 22, -19, -54, -48, -30, -5, 12, 19, 32, 33, 28, 12, -23, -52, -39, 
-10, 22, 35, 32, 24, 15, 11, 4, -20, -44, -41, -10, 26, 38, 28, 2, 
-13, -9, 1, -2, -15, -27, -7, 24, 37, 32, 15, -19, -18, -1, 11, 8, 
-23, -22, -4, 9, 15, 12, -14, -16, -2, 15, 18, -1, -21, -14, -4, 13, 
24, 7, 0, 1, 8, 9, -11, -34, -29, -17, 8, 27, 23, 4, -3, 0, 
0, -17, -33, -25, -3, 29, 49, 42, 7, -14, -17, -12, -22, -32, -30, -8, 
28, 47, 39, -5, -36, -38, -21, -10, -5, -8, 3, 33, 51, 46, 22, -41, 
-51, -32, -6, 12, 1, -6, 6, 17, 22, 12, -37, -49, -34, -3, 29, 24, 
9, 4, 3, 12, 15, -13, -27, -27, -9, 19, 23, -2, -15, -21, -8, 6, 
-2, -10, -17, -7, 15, 20, 6, -7, -11, 5, 20, 19, 1, -16, -18, -4, 
1, -6, -16, -19, 0, 18, 20, -2, -25, -29, -12, 5, 17, 6, -3, 11, 
26, 29, 3, -30, -42, -30, -6, 19, 14, -6, -8, -1, 8, 8, -25, -39, 
-32, -4, 36, 42, 18, -2, -12, -6, 4, -9, -21, -27, -13, 20, 37, 10, 
-16, -36, -31, -13, 0, 2, -7, -4, 21, 37, 19, -7, -29, -25, -8, 5, 
15, 1, -8, 1, 8, -2, -22, -38, -28, -7, 9, 24, 9, -5, -4, 5, 
13, -3, -18, -10, 7, 20, 26, 2, -22, -30, -21, 1, 1, -16, -17, -7, 
10, 24, 8, -14, -27, -19, 13, 32, 15, 0, -10, -5, 10, 6, -9, -30, 
-35, -8, 23, 14, -4, -24, -25, -8, 13, 17, -1, -15, 0, 22, 25, 7, 
-18, -26, -17, 10, 23, 9, -15, -17, -8, 1, -8, -22, -21, -12, 2, 36, 
28, 3, -10, -8, 7, 1, -8, -3, 3, 8, 31, 19, -10, -33, -35, -15, 
-1, -6, 1, 6, 11, 32, 24, -2, -30, -35, -7, 26, 23, 19, 9, 1, 
8, 11, -7, -37, -53, -28, 20, 29, 25, 7, -10, -10, 7, 11, -9, -29, 
-14, 17, 43, 37, 12, -14, -27, -12, 6, -2, -23, -21, -4, 18, 20, 5, 
-11, -24, -22, 19, 21, 5, -2, 1, 16, 18, 10, 2, -12, -21, 8, 12, 
-6, -22, -24, -10, 6, 6, 9, 1, -9, 14, 21, 6, -16, -22, -1, 24, 
25, 25, 10, -13, -15, -1, -6, -30, -44, -21, 22, 32, 36, 17, -14, -27, 
-7, 10, -1, -17, -2, 33, 44, 47, 23, -17, -48, -39, -7, 1, -9, -3, 
11, 24, 31, 19, -11, -44, -41, 1, 25, 26, 28, 27, 19, 17, 8, -10, 
-39, -56, -12, 14, 18, 17, 10, -1, -5, -6, -6, -21, -35, 5, 30, 32, 
24, 11, 6, 1, -1, 3, -12, -34, -14, 8, 16, 4, -14, -13, -3, 3, 
16, 6, -21, -29, 3, 27, 25, 7, 5, 9, 12, 22, 14, -20, -50, -37, 
2, 19, 12, 10, 8, -1, 9, 9, -10, -40, -39, 7, 40, 47, 47, 31, 
-6, -13, -13, -20, -41, -55, -6, 27, 40, 42, 24, -22, -38, -34, -20, -22, 
-26, 21, 49, 55, 50, 26, -6, -43, -41, -21, -18, -23, 11, 33, 35, 22, 
-1, -25, -47, -37, -5, 8, 1, 6, 32, 40, 31, 8, -13, -38, -32, -2, 
15, 5, -9, -6, 11, 15, 3, -7, -31, -33, -7, 17, 19, 4, -7, 13, 
26, 25, 21, 4, -31, -27, -10, 3, -3, -16, 1, 14, 17, 19, 8, -34, 
-43, -28, -2, 10, 9, 29, 37, 32, 26, 10, -35, -53, -43, -12, 6, 10, 
30, 30, 16, 2, -16, -37, -58, -39, 3, 31, 36, 45, 39, 21, 2, -17, 
-34, -53, -37, 9, 40, 40, 29, 6, -10, -23, -31, -33, -43, -31, 12, 49, 
57, 41, 6, -9, -17, -18, -9, -10, -23, -4, 24, 38, 27, -11, -25, -34, 
-31, -11, -1, -15, -12, 6, 28, 34, 21, 5, -7, -13, -2, 6, -11, -21, 
-15, 7, 20, 15, 9, -6, -23, -23, -19, -20, -25, -12, 20, 41, 41, 33, 
13, -12, -24, -25, -24, -25, -10, 26, 47, 40, 25, -14, -42, -53, -46, -26, 
-13, 3, 41, 66, 61, 38, -13, -43, -57, -44, -9, 13, 14, 32, 46, 38, 
16, -34, -61, -73, -56, -7, 30, 34, 35, 32, 27, 14, -18, -34, -46, -37, 
1, 36, 38, 24, 9, -2, -10, -23, -27, -34, -33, -9, 18, 29, 19, 9, 
7, 4, -3, -1, -8, -17, -8, 7, 16, 10, 4, 10, 8, -3, -10, -24, 
-37, -33, -13, 9, 17, 18, 30, 32, 19, 7, -21, -42, -43, -19, 20, 39, 
31, 30, 20, -1, -18, -43, -58, -60, -33, 21, 61, 55, 41, 17, -11, -28, 
-35, -33, -32, -13, 32, 69, 61, 31, -8, -43, -62, -61, -29, -15, -1, 32, 
58, 52, 25, -10, -36, -50, -45, 0, 18, 25, 38, 45, 37, 3, -25, -40, 
-49, -44, -4, 10, 12, 18, 23, 23, 4, -12, -16, -18, -16, 4, 16, 8, 
6, 11, 20, 11, -4, -12, -22, -29, -18, -6, -12, -14, -3, 22, 35, 23, 
9, -13, -32, -30, -6, 3, 2, 8, 30, 46, 27, 4, -31, -63, -68, -29, 
6, 22, 25, 39, 46, 23, -2, -33, -57, -62, -40, 29, 54, 54, 49, 36, 
-5, -31, -54, -65, -62, -40, 31, 56, 53, 41, 20, -7, -39, -47, -41, -28, 
-6, 49, 62, 50, 28, 1, -21, -43, -44, -33, -22, -8, 21, 40, 25, 5, 
-12, -20, -20, -15, -2, 0, -2, 14, 33, 27, 10, -8, -12, -11, -10, -3, 
-12, -27, -25, 6, 21, 19, 9, 7, 3, -7, -4, -10, -24, -24, -6, 39, 
48, 35, 22, 0, -34, -38, -41, -40, -32, -10, 44, 56, 43, 22, -8, -40, 
-53, -41, -19, 4, 24, 65, 66, 41, 9, -30, -60, -67, -47, -14, 12, 30, 
50, 47, 17, -16, -46, -61, -47, -17, 21, 42, 47, 52, 39, 10, -23, -50, 
-59, -40, -9, 26, 36, 25, 17, 6, -7, -22, -35, -34, -26, 3, 35, 44, 
30, 13, 1, 2, -3, -12, -14, -17, -16, 1, 10, 6, -3, -7, 5, 8, 
3, 1, -10, -25, -12, 5, 18, 22, 22, 29, 22, 7, -8, -28, -46, -38, 
-15, 13, 32, 35, 33, 16, -9, -29, -46, -51, -23, 9, 44, 61, 58, 47, 
6, -26, -49, -62, -56, -18, 19, 53, 61, 42, 17, -25, -46, -55, -51, -32, 
-4, 42, 73, 72, 43, 9, -37, -49, -46, -31, -8, 8, 25, 42, 38, 11, 
-19, -41, -46, -33, -12, 16, 29, 23, 27, 25, 15, -2, -19, -19, -13, -4, 
9, 11, 0, -8, -6, 0, 1, -5, -7, -10, -11, -4, -2, -5, 3, 13, 
27, 32, 24, 14, -14, -28, -30, -31, -26, 0, 19, 34, 33, 18, -2, -39, 
-50, -42, -25, -2, 35, 54, 64, 52, 20, -14, -59, -62, -42, -16, 15, 36, 
41, 37, 21, -6, -38, -78, -64, -23, 18, 47, 58, 51, 36, 5, -28, -42, 
-45, -33, -13, 18, 53, 58, 9, -16, -26, -29, -36, -40, -15, 8, 25, 38, 
41, 32, 1, -24, -32, -14, 4, 5, -4, 5, 22, 15, -5, -16, -19, -19, 
-16, -5, 6, -3, -8, -2, 1, 8, 20, 19, 20, 17, 8, -5, -31, -27, 
-10, 1, 11, 21, 23, 16, -1, -21, -33, -49, -36, -1, 31, 52, 55, 33, 
13, -18, -43, -42, -34, -19, 4, 35, 57, 52, 3, -29, -55, -66, -51, -28, 
11, 36, 52, 59, 46, 20, -22, -49, -57, -39, -8, 36, 45, 42, 31, 9, 
-18, -51, -58, -42, -18, 4, 27, 47, 36, 13, -12, -22, -21, -24, -12, 7, 
22, 28, 11, 3, 0, -12, -22, -19, -10, 0, 2, 0, 5, -4, -9, -1, 
10, 19, 19, 9, 9, 1, -12, -19, -21, -8, 8, 16, 21, 21, -5, -29, 
-48, -45, -22, -5, 13, 34, 45, 42, 24, -10, -25, -39, -40, -19, 11, 46, 
44, 24, 9, -4, -26, -57, -61, -38, -2, 26, 53, 51, 30, 3, -23, -37, 
-32, -26, -7, 21, 43, 51, 27, 4, -21, -47, -57, -37, -17, 10, 34, 43, 
36, 6, -9, -18, -28, -25, -8, 18, 30, 33, 27, 14, -22, -33, -30, -25, 
-12, 5, 13, 8, -6, -14, -11, -7, 3, 11, 12, 15, 19, 12, -1, -22, 
-29, -13, 8, 26, 25, 12, -2, -16, -26, -25, -24, -19, -6, 13, 41, 41, 
23, 1, -24, -39, -28, -11, 11, 31, 40, 39, 19, -4, -30, -54, -60, -29, 
-4, 27, 53, 54, 35, -4, -20, -31, -41, -32, 8, 27, 42, 50, 42, 16, 
-35, -47, -46, -42, -25, 8, 38, 36, 22, 7, -6, -32, -34, -21, -7, 12, 
32, 42, 31, 6, -15, -24, -28, -14, -2, 2, 5, 8, 8, 0, -15, -24, 
-18, -7, 17, 28, 24, 15, 1, -11, -9, -10, -5, 7, 12, 16, 12, -2, 
-18, -36, -42, -24, -9, 18, 42, 43, 27, -2, -17, -27, -33, -22, 12, 24, 
40, 51, 38, 7, -47, -58, -55, -46, -19, 18, 40, 36, 24, 8, -13, -49, 
-45, -25, -7, 17, 47, 62, 41, 3, -28, -44, -53, -36, -6, 13, 25, 33, 
31, 14, -19, -43, -46, -37, 5, 35, 49, 46, 30, 10, -15, -30, -33, -22, 
-12, 11, 24, 24, 11, -10, -29, -37, -34, -11, 17, 27, 28, 21, 9, -4, 
-16, -17, -8, -6, 13, 36, 35, 18, -20, -37, -44, -42, -20, 19, 23, 24, 
24, 14, -5, -34, -35, -24, -12, 14, 45, 50, 31, 4, -22, -39, -51, -33, 
-6, 11, 23, 36, 33, 12, -19, -41, -45, -41, 0, 34, 49, 49, 36, 4, 
-18, -39, -44, -35, -24, 10, 35, 40, 27, 3, -22, -45, -50, -31, 3, 24, 
38, 40, 28, 10, -10, -23, -29, -29, -7, 24, 38, 35, 10, -15, -34, -42, 
-32, -4, 2, 14, 29, 31, 22, -6, -23, -33, -33, -11, 22, 37, 33, 21, 
2, -18, -37, -31, -19, -13, 7, 32, 35, 19, -2, -22, -33, -37, -10, 18, 
30, 36, 37, 14, -9, -29, -38, -35, -27, 4, 28, 33, 26, 12, -9, -37, 
-46, -35, -9, 11, 35, 42, 32, 13, -6, -23, -33, -32, -14, 14, 31, 37, 
22, -4, -28, -42, -39, -15, -5, 13, 34, 38, 32, 8, -16, -35, -43, -24, 
22, 33, 37, 32, 14, -8, -32, -36, -36, -32, -10, 26, 43, 34, 16, -9, 
-32, -40, -20, 2, 12, 25, 40, 29, 8, -15, -33, -42, -44, -8, 21, 30, 
31, 27, 1, -20, -37, -38, -25, -12, 23, 42, 40, 29, 12, -11, -34, -39, 
-27, -4, 12, 34, 34, 15, -7, -25, -33, -26, -18, 0, 20, 29, 32, 23, 
0, -23, -36, -30, 3, 17, 29, 32, 20, 4, -14, -24, -33, -37, -22, 9, 
35, 38, 27, 1, -25, -38, -24, -6, 3, 17, 37, 35, 21, 2, -23, -44, 
-51, -17, 15, 29, 34, 36, 9, -16, -35, -42, -38, -30, 14, 46, 52, 43, 
27, 1, -37, -48, -40, -20, -3, 34, 48, 37, 14, -10, -31, -45, -39, -16, 
10, 25, 39, 45, 25, -4, -29, -38, -24, -8, 15, 30, 26, 18, 7, -9, 
-25, -39, -36, -7, 12, 32, 38, 21, 0, -16, -15, -11, -11, -4, 11, 19, 
23, 18, -4, -27, -39, -21, 2, 14, 22, 26, 7, -6, -14, -20, -25, -25, 
7, 34, 42, 36, 23, -16, -36, -42, -32, -17, -3, 27, 44, 38, 20, -2, 
-28, -49, -43, -17, 12, 29, 48, 48, 25, -5, -31, -49, -47, -26, 8, 35, 
40, 36, 21, -5, -30, -47, -50, -26, -1, 32, 52, 42, 21, -7, -23, -32, 
-35, -27, -10, 15, 36, 45, 27, -3, -34, -36, -26, -15, 1, 13, 11, 14, 
16, 4, -14, -29, -20, -1, 13, 25, 26, -2, -14, -17, -13, -9, -8, 6, 
18, 18, 15, 5, -16, -38, -33, -13, 11, 23, 32, 29, 12, -5, -19, -33, 
-35, -19, 10, 35, 41, 34, 9, -19, -38, -48, -47, -22, 5, 39, 60, 51, 
28, -12, -36, -44, -40, -24, 7, 26, 50, 58, 36, 0, -46, -59, -52, -31, 
-2, 23, 31, 38, 39, 20, -8, -44, -46, -29, -4, 27, 46, 28, 12, 2, 
-11, -22, -32, -28, -13, 2, 25, 36, 12, -8, -18, -16, -8, -1, 9, 11, 
6, 8, 11, 1, -18, -20, -9, 7, 13, 14, 3, -14, -20, -19, -16, -6, 
3, 21, 35, 31, 20, -10, -32, -37, -27, -11, 14, 25, 37, 40, 21, -6, 
-44, -59, -49, -22, 12, 39, 41, 38, 30, 6, -21, -52, -54, -35, 0, 40, 
66, 45, 18, -5, -27, -43, -50, -41, -19, 10, 45, 67, 35, -1, -31, -47, 
-42, -29, 0, 16, 26, 40, 47, 30, -16, -40, -48, -36, -15, 16, 23, 16, 
12, 11, 2, -16, -25, -22, -8, 6, 18, 20, 5, -3, -2, -2, -1, -3, 
1, 5, 1, -1, -14, -27, -26, -10, 9, 24, 18, 13, 6, -6, -13, -23, 
-27, -17, 6, 35, 52, 29, 2, -23, -41, -43, -31, -21, -5, 17, 43, 59, 
27, -10, -43, -60, -50, -23, 19, 36, 41, 46, 45, 7, -28, -59, -71, -55, 
-19, 37, 53, 45, 29, 14, -8, -36, -49, -47, -25, 7, 52, 58, 39, 14, 
-8, -26, -36, -35, -25, -7, 11, 29, 33, 12, -8, -20, -23, -14, -10, -1, 
8, 13, 21, 18, 0, -13, -15, -6, 8, 7, -1, -9, -15, -10, 5, 2, 
-3, -2, 8, 22, 13, -4, -24, -37, -27, -1, 30, 31, 22, 15, 13, -5, 
-21, -40, -51, -37, -3, 47, 56, 38, 13, -9, -27, -37, -39, -35, -14, 18, 
62, 66, 39, 3, -30, -54, -47, -31, -13, 11, 33, 49, 47, 16, -18, -47, 
-61, -37, -12, 12, 32, 42, 46, 30, -1, -29, -47, -49, -15, 8, 24, 29, 
22, 18, 7, -12, -28, -39, -34, -11, 19, 28, 21, 3, -4, 4, 5, 0, 
-12, -17, -8, 7, 13, 5, -13, -20, -11, 14, 20, 7, -11, -21, -20, -7, 
0, -3, -1, 9, 32, 36, 20, -7, -32, -46, -27, -3, 12, 22, 26, 29, 
21, 0, -26, -49, -59, -24, 11, 38, 52, 48, 35, 7, -19, -39, -53, -53, 
-7, 28, 51, 54, 36, 13, -20, -40, -49, -50, -40, -8, 44, 61, 52, 23, 
-6, -31, -35, -28, -23, -15, 5, 39, 48, 36, 3, -28, -43, -32, -12, -2, 
0, 4, 16, 27, 26, 7, -13, -26, -13, 9, 17, 13, 2, -9, 1, 11, 
11, 4, -9, -12, -2, 1, -2, -13, -24, -7, 14, 31, 35, 22, 4, -12, 
-17, -18, -20, -22, 4, 28, 42, 41, 20, -8, -37, -44, -36, -24, -13, 24, 
46, 55, 44, 12, -22, -51, -47, -24, -3, 12, 29, 48, 49, 30, -7, -44, 
-68, -51, -13, 18, 32, 37, 32, 27, 14, -13, -38, -54, -37, 5, 38, 50, 
42, 10, -1, -8, -17, -25, -34, -28, 1, 28, 40, 31, 6, -18, -19, -11, 
-2, -4, -10, 0, 13, 24, 21, 5, -10, -10, -2, 7, 3, -11, -20, -17, 
-3, 6, 5, 5, 8, 11, 14, 2, -16, -30, -24, 0, 20, 24, 26, 19, 
13, 3, -16, -36, -50, -36, 0, 31, 42, 37, 11, -2, -12, -25, -34, -39, 
-21, 18, 54, 65, 50, -1, -27, -39, -40, -32, -27, -13, 17, 44, 55, 41, 
5, -43, -53, -41, -13, 6, 16, 28, 38, 42, 29, -1, -40, -51, -39, -8, 
14, 18, 14, 11, 11, 6, -9, -25, -30, -21, 4, 22, 23, 10, 2, 6, 
8, 3, -7, -15, -16, -5, 3, 2, -12, -15, -2, 11, 15, 12, -9, -17, 
-13, -6, -1, -6, -5, 12, 28, 33, 25, -16, -37, -40, -30, -9, 1, 2, 
14, 26, 31, 23, -22, -47, -53, -34, 3, 30, 33, 31, 25, 19, 9, -14, 
-47, -56, -40, 1, 36, 42, 28, 7, -9, -19, -27, -34, -35, -21, 14, 44, 
53, 28, 2, -18, -27, -28, -17, -15, -8, 13, 31, 34, 8, -16, -27, -29, 
-23, -8, 0, 0, 10, 21, 26, 8, -11, -16, -12, -5, 7, 2, -8, -10, 
-3, 9, 12, -6, -11, -10, -4, 6, -1, -16, -23, -13, 11, 29, 23, 11, 
-2, -7, -3, -4, -19, -29, -21, 7, 32, 32, 15, -11, -29, -29, -22, -11, 
-12, -5, 19, 42, 47, 23, -11, -36, -42, -32, 0, 6, 8, 20, 30, 29, 
3, -26, -45, -49, -34, 14, 27, 26, 28, 27, 22, -1, -23, -34, -34, -20, 
9, 31, 23, 11, 2, -2, -14, -25, -28, -26, -13, 13, 33, 22, 5, -5, 
-2, 4, 0, -3, -11, -10, 5, 20, 11, -8, -21, -14, -1, 7, 3, -12, 
-22, -15, 2, 16, 8, -3, 2, 13, 21, 17, -4, -27, -31, -17, 15, 16, 
6, 3, 3, 2, -1, -16, -32, -38, -22, 26, 38, 32, 22, 10, -1, -9, 
-17, -24, -27, -16, 13, 37, 29, 11, -10, -24, -29, -26, -18, -13, -4, 21, 
43, 33, 11, -12, -23, -23, -11, 0, 2, 3, 16, 28, 18, -6, -29, -37, 
-29, -6, 10, 10, 2, 5, 15, 20, 5, -14, -20, -15, 9, 24, 18, 0, 
-10, -8, 8, 5, -8, -16, -19, -14, 11, 13, -1, -14, -14, 13, 22, 18, 
10, -3, -12, 0, 7, 2, -11, -16, 7, 16, 14, 5, -12, -28, -22, -7, 
3, 3, 2, 13, 27, 22, 12, -7, -22, -21, -5, 12, 14, 8, 10, 11, 
3, -10, -27, -36, -32, -3, 21, 26, 17, 11, 10, 7, -1, -15, -22, -19, 
7, 30, 32, 14, -4, -15, -13, -12, -16, -19, -19, -1, 23, 30, 18, -2, 
-17, -8, 3, 9, 11, 2, -6, 10, 20, 14, -5, -22, -19, -8, 2, 9, 
2, -13, -11, 4, 13, 7, -4, -3, 5, 12, 17, 11, -5, -15, -5, 10, 
9, -1, -3, -5, -5, -3, -7, -15, -20, -5, 16, 22, 14, 8, 1, 0, 
2, -1, -7, -12, 0, 20, 24, 11, -4, -18, -22, -15, -8, -6, -11, -3, 
18, 27, 20, 4, -14, -19, -6, 10, 19, 11, -1, 6, 13, 10, -3, -22, 
-31, -21, -1, 17, 15, -1, -8, -1, 6, 5, -3, -9, -7, 6, 24, 25, 
8, -14, -14, -5, -2, -5, -7, -12, -10, 3, 9, 0, -16, -14, 0, 9, 
11, 12, 3, 0, 5, 8, 4, -7, -12, 1, 8, 5, 1, -14, -19, -13, 
-4, 0, -5, -8, 6, 17, 18, 13, 0, -14, -8, 6, 16, 11, -5, -2, 
3, 4, 2, -10, -28, -25, -6, 15, 17, 4, -5, -4, 3, 10, 9, -6, 
-11, -1, 20, 26, 14, -9, -19, -16, -6, -1, -1, -14, -13, 2, 12, 9, 
-7, -14, -9, 2, 13, 19, 8, -1, 3, 9, 7, -2, -15, -10, -3, 2, 
7, -6, -16, -13, -5, 1, -1, -7, 1, 9, 16, 20, 13, -8, -11, -2, 
9, 9, -6, -6, -3, 1, 7, 1, -22, -28, -17, 5, 15, 10, 1, -2, 
2, 12, 15, -2, -15, -12, 7, 20, 16, 0, -14, -20, -12, -1, -2, -16, 
-20, -5, 9, 13, 8, -5, -11, -6, 7, 18, 7, -4, -1, 4, 7, 3, 
-7, -14, -16, -9, 4, -2, -11, -12, -7, 0, 3, 1, 1, 1, 7, 16, 
10, -3, -9, -6, 2, 6, -1, -5, -8, -7, 1, 2, -16, -24, -19, -3, 
12, 14, 10, 0, -2, 8, 13, 2, -12, -15, -2, 12, 17, 10, -10, -24, 
-20, -9, -5, -13, -19, -9, 6, 17, 23, 7, -12, -16, -6, 8, 9, 1, 
2, 4, 8, 11, -1, -18, -29, -25, -8, 1, -2, -1, -1, 3, 9, 8, 
0, -10, -9, 5, 15, 11, 6, 2, 1, 2, -1, -7, -17, -20, -9, 1, 
-2, -6, -8, -3, 5, 12, 10, -1, -8, 0, 11, 11, 3, -5, -4, 3, 
9, 8, -9, -24, -23, -13, 2, 2, -4, -4, 1, 10, 21, 8, -10, -17, 
-11, 12, 17, 13, 7, 0, -1, 7, -2, -19, -32, -30, -12, 11, 15, 13, 
4, -3, 4, 3, -3, -12, -14, 0, 20, 23, 20, 6, -8, -14, -12, -13, 
-20, -22, -9, 11, 15, 12, 2, -8, -10, -2, 3, -1, -4, 3, 14, 21, 
15, 1, -12, -16, -10, -3, -7, -15, -14, -5, 10, 12, 3, -8, -12, -8, 
12, 11, 2, -3, -2, 13, 19, 14, 2, -12, -17, -3, -1, -8, -16, -18, 
-10, 12, 17, 12, -3, -14, -3, 5, 6, 3, -1, 4, 19, 24, 20, 2, 
-18, -24, -17, -9, -7, -7, -1, 10, 15, 15, 1, -15, -21, -11, 4, 12, 
13, 18, 21, 20, 13, -3, -21, -30, -20, -4, 6, 6, 7, 7, 7, 5, 
-6, -18, -24, -19, 11, 25, 27, 21, 12, 7, 6, -2, -13, -24, -25, -1, 
13, 16, 9, -4, -11, -6, -2, -1, -9, -14, 4, 17, 25, 23, 10, -2, 
-3, 2, 6, -3, -16, -15, -7, 4, 9, 4, -3, -9, -3, 4, 0, -10, 
-13, -3, 12, 22, 22, 17, 2, -2, -1, -8, -18, -23, -15, 2, 15, 17, 
12, 0, -13, -12, -14, -16, -15, -3, 17, 32, 34, 25, 6, -15, -16, -16, 
-15, -14, -12, 8, 21, 24, 15, -8, -30, -28, -19, -6, 1, 3, 17, 26, 
31, 25, 3, -19, -27, -16, 1, 8, 6, 2, 2, 7, 8, -4, -21, -31, 
-20, 1, 14, 16, 13, 6, 9, 14, 11, 1, -16, -15, -3, 5, 6, 3, 
-7, -4, 1, 1, -2, -12, -20, -12, -2, 5, 9, 8, 13, 18, 18, 14, 
-2, -20, -18, -11, -2, 4, 3, 5, 7, 8, 2, -15, -32, -27, -13, 7, 
22, 25, 22, 19, 17, 11, -7, -30, -29, -16, 6, 22, 24, 8, -6, -10, 
-11, -20, -29, -27, -11, 14, 35, 41, 22, 1, -9, -9, -10, -12, -15, -9, 
8, 21, 25, 16, -18, -30, -28, -19, -10, -5, -2, 9, 19, 26, 25, 1, 
-10, -12, -6, 3, 4, -2, -2, 0, 5, 7, -9, -17, -18, -13, -5, -3, 
-6, -4, 2, 13, 23, 20, 7, -1, -3, -1, -4, -12, -13, -8, 6, 18, 
17, -3, -20, -24, -18, -16, -13, -6, 2, 18, 34, 38, 13, -13, -26, -23, 
-15, -6, 3, 5, 12, 20, 21, 11, -30, -45, -40, -24, -2, 20, 22, 22, 
21, 22, 16, -16, -31, -30, -16, 7, 25, 25, 13, 0, -5, -8, -26, -33, 
-31, -18, 5, 23, 27, 16, 3, -1, 0, -3, -9, -9, -3, 10, 18, 16, 
4, -11, -14, -10, -9, -13, -18, -15, -5, 6, 15, 10, 0, 1, 10, 15, 
7, -7, -15, -11, -1, 10, 15, 3, -5, -5, -1, -6, -23, -32, -28, -13, 
11, 34, 28, 14, 3, 0, 2, -11, -19, -17, -7, 13, 33, 27, 7, -15, 
-27, -26, -23, -19, -12, -1, 15, 28, 29, 14, -8, -20, -18, -8, 0, 8, 
13, 18, 20, 13, -2, -22, -31, -27, -18, -2, 6, 10, 13, 13, 11, 2, 
-10, -15, -9, 0, 14, 14, 10, 6, 2, 3, -2, -13, -20, -18, -9, 4, 
4, 1, -3, -4, 3, 13, 8, 0, -6, -4, 4, 6, 4, -1, -4, 0, 
11, 9, -3, -17, -23, -18, -6, 1, 4, 3, 6, 13, 16, 7, -10, -19, 
-16, -2, 10, 16, 14, 10, 8, 2, -9, -23, -31, -25, -14, 9, 19, 18, 
13, 5, -1, -8, -17, -18, -11, 1, 22, 26, 21, 8, -5, -13, -16, -21, 
-22, -14, -2, 17, 20, 13, 0, -12, -15, -4, -3, -2, 2, 7, 19, 19, 
14, 0, -16, -20, -8, -1, -1, -5, -7, -4, 3, 7, 3, -7, -12, 0, 
9, 11, 6, -1, -3, 2, 10, 12, 3, -5, -9, -7, -7, -10, -14, -13, 
-5, 7, 15, 12, 4, -3, -5, -4, -6, -5, -2, 4, 18, 22, 14, 0, 
-16, -23, -20, -16, -9, -2, 4, 16, 18, 13, -2, -18, -23, -11, -1, 9, 
15, 17, 17, 14, 6, -9, -26, -31, -16, -2, 9, 13, 10, 6, 1, -1, 
-7, -18, -21, -3, 12, 22, 23, 15, 4, -7, -5, -4, -10, -14, -11, 1, 
9, 9, 4, -6, -14, -7, 2, 4, 2, -1, 2, 6, 8, 8, 4, -3, 
0, 7, 5, -1, -9, -13, -10, -6, 0, 2, 0, 4, 8, 6, 0, -9, 
-12, -5, 4, 15, 19, 14, 6, 3, -1, -9, -20, -24, -11, 2, 15, 20, 
13, -3, -8, -9, -10, -14, -13, 2, 16, 30, 32, 20, 1, -19, -17, -12, 
-10, -8, 0, 8, 17, 18, 8, -8, -28, -23, -9, 3, 11, 14, 13, 15, 
12, 7, -2, -18, -16, -5, 3, 9, 6, -2, -4, -6, -5, -5, -10, -8, 
1, 8, 11, 8, 1, -2, 0, 6, 9, 3, -3, -1, 1, -1, -7, -11, 
-10, -5, 5, 12, 6, -5, -6, -4, -2, -4, -3, 5, 9, 19, 23, 12, 
-4, -20, -17, -10, -5, 1, 2, 4, 11, 13, 6, -10, -27, -22, -8, 7, 
19, 21, 12, 10, 7, 1, -9, -24, -21, -9, 6, 19, 21, 4, -6, -13, 
-15, -14, -16, -8, 4, 16, 25, 22, 3, -7, -13, -9, -4, -3, 1, 4, 
8, 10, 6, -8, -17, -20, -12, 1, 4, 2, 2, 3, 6, 6, 4, -5, 
-8, 0, 11, 12, 2, -5, -8, -7, -4, -1, -5, -10, -5, 6, 8, 1, 
-11, -14, -11, -1, 12, 16, 8, 4, 5, 2, -6, -18, -16, -7, 4, 17, 
20, 0, -12, -18, -16, -13, -10, -4, 4, 12, 23, 26, 7, -11, -23, -20, 
-9, 0, 9, 10, 10, 11, 9, -9, -25, -34, -28, -9, 6, 20, 19, 15, 
12, 5, -4, -18, -22, -12, 9, 22, 22, 11, -2, -12, -17, -17, -15, -15, 
-5, 10, 19, 16, -4, -13, -15, -10, 2, 12, 6, 4, 7, 10, 10, -7, 
-18, -21, -14, 3, 17, 6, -6, -14, -12, -7, -6, -4, -2, 3, 16, 26, 
12, -6, -19, -20, -12, -2, 10, 10, 7, 7, 8, -8, -23, -31, -26, -9, 
10, 25, 22, 9, 0, -3, -8, -13, -17, -9, 7, 20, 25, 15, -3, -17, 
-22, -20, -13, -11, -3, 10, 18, 18, 8, -8, -20, -19, -8, 8, 9, 11, 
15, 16, 14, -3, -18, -27, -25, -9, 14, 14, 7, 1, -2, -3, -8, -11, 
-12, -8, 7, 24, 25, 11, -5, -13, -13, -5, 1, 3, -1, 2, 10, 6, 
-6, -21, -25, -16, -2, 19, 21, 12, 5, 3, 0, -4, -11, -12, -3, 8, 
22, 18, 1, -13, -20, -20, -13, -11, -3, 6, 13, 20, 13, -2, -16, -20, 
-14, 5, 11, 15, 17, 13, 10, -3, -18, -29, -30, -17, 11, 17, 17, 11, 
2, -4, -8, -12, -15, -12, 3, 22, 29, 20, 4, -13, -20, -15, -9, -5, 
-5, 2, 12, 14, 5, -10, -23, -24, -14, 11, 20, 17, 12, 10, 4, -2, 
-12, -18, -16, -8, 15, 21, 11, -2, -11, -17, -14, -11, -7, 0, 7, 20, 
20, 8, -6, -15, -17, -5, 2, 9, 12, 10, 8, 3, -9, -20, -26, -20, 
2, 11, 17, 14, 6, 0, -6, -9, -13, -14, -5, 18, 24, 22, 10, -7, 
-17, -18, -12, -6, -4, 2, 12, 15, 10, -4, -19, -25, -14, 3, 16, 18, 
15, 11, 4, -2, -10, -18, -20, -13, 10, 21, 19, 8, -5, -17, -17, -15, 
-11, -4, 2, 19, 24, 16, 5, -9, -19, -14, -6, 4, 10, 12, 15, 11, 
-1, -13, -23, -26, -11, 2, 14, 18, 13, 9, 3, -6, -13, -17, -13, 8, 
18, 24, 18, 3, -9, -16, -15, -13, -12, -7, 3, 15, 17, 9, -7, -16, 
-16, -5, 7, 11, 12, 11, 8, 7, -1, -11, -18, -19, -2, 11, 14, 9, 
0, -11, -11, -10, -9, -6, -2, 11, 20, 20, 11, -2, -18, -17, -10, 0, 
7, 9, 10, 8, 0, -10, -20, -26, -16, -2, 12, 20, 17, 9, 2, -7, 
-13, -19, -17, 0, 14, 24, 22, 9, -4, -19, -22, -21, -18, -10, 8, 18, 
25, 19, 2, -13, -23, -17, -6, 5, 12, 16, 16, 14, 5, -10, -23, -28, 
-16, 1, 12, 16, 13, 0, -4, -8, -12, -12, -12, 1, 14, 21, 20, 10, 
-9, -14, -14, -9, -3, 0, 4, 7, 6, 1, -8, -17, -15, -8, 3, 13, 
15, 12, 6, 0, -5, -11, -14, -3, 7, 16, 18, 11, 1, -15, -20, -19, 
-16, -9, 8, 18, 26, 22, 7, -9, -23, -19, -7, 5, 15, 21, 19, 17, 
6, -10, -23, -32, -22, -2, 15, 25, 24, 8, 0, -7, -15, -19, -18, -4, 
14, 27, 32, 24, -2, -14, -22, -21, -15, -10, 2, 12, 18, 18, 8, -13, 
-20, -21, -13, 1, 10, 17, 16, 12, 6, -4, -13, -14, -10, -2, 7, 10, 
5, -2, -8, -9, -11, -11, -2, 5, 13, 14, 8, 0, -12, -13, -6, 1, 
6, 10, 10, 9, 3, -8, -17, -24, -17, -2, 11, 18, 18, 6, -2, -10, 
-16, -16, -12, -2, 12, 24, 29, 22, -4, -18, -26, -26, -18, -9, 9, 19, 
23, 22, 10, -16, -25, -28, -19, -3, 10, 25, 27, 23, 12, -5, -21, -27, 
-22, -9, 7, 17, 19, 12, 3, -5, -15, -23, -16, -7, 6, 18, 22, 18, 
0, -9, -10, -12, -11, -2, 3, 7, 10, 9, 3, -13, -15, -10, -3, 4, 
9, 7, 5, 1, -2, -3, -9, -5, 5, 13, 15, 13, -1, -12, -17, -15, 
-9, -3, 5, 13, 16, 15, 8, -14, -22, -23, -15, 2, 15, 24, 23, 15, 
6, -7, -24, -26, -23, -10, 9, 23, 27, 19, 3, -13, -25, -30, -20, -8, 
8, 24, 31, 23, 8, -9, -20, -27, -27, -8, 6, 18, 25, 23, 13, -12, 
-22, -22, -19, -13, 5, 12, 17, 19, 14, 5, -16, -20, -14, -5, 3, 10, 
11, 6, -1, -5, -5, -11, -11, -4, 2, 6, 9, 2, -5, -12, -11, -2, 
4, 9, 10, 7, 2, -4, -12, -14, -14, -6, 6, 14, 14, 8, -2, -11, 
-20, -23, -12, -3, 10, 23, 25, 13, 0, -13, -22, -26, -24, -5, 9, 22, 
28, 24, 10, -17, -28, -29, -25, -14, 11, 21, 26, 25, 16, 1, -25, -31, 
-25, -14, 2, 19, 26, 20, 10, -1, -12, -27, -27, -18, -4, 12, 23, 19, 
9, -4, -13, -13, -13, -11, -2, 7, 14, 15, 9, 0, -11, -13, -8, -4, 
1, 5, 4, 1, -1, -1, -1, -6, -8, -2, 4, 13, 12, 2, -10, -17, 
-13, 8, 11, 10, 10, 9, 5, 0, -12, -25, -30, -16, 22, 31, 28, 17, 
3, -10, -18, -19, -17, -11, 5, 35, 38, 25, 5, -17, -30, -27, -15, -1, 
8, 16, 23, 22, 11, -5, -21, -29, -22, -7, 9, 18, 22, 24, 14, 1, 
-11, -21, -25, -26, -6, 18, 30, 27, 14, -8, -16, -21, -17, -7, -2, 4, 
14, 21, 20, 6, -11, -19, -12, 0, 9, 8, -2, -5, -3, 3, 4, -1, 
-12, -13, -2, 10, 12, 3, -11, -12, -7, -1, 8, 13, 5, 0, 0, -2, 
-7, -17, -17, -10, -1, 12, 23, 15, -4, -20, -27, -21, -6, 0, 7, 12, 
19, 26, 13, -9, -27, -33, -25, -8, 10, 17, 17, 16, 16, -4, -24, -37, 
-34, -15, 4, 22, 27, 24, 15, 4, -15, -24, -27, -19, -2, 12, 20, 19, 
11, 0, -14, -22, -19, -14, -6, 4, 12, 18, 16, 6, -5, -15, -17, -5, 
3, 8, 10, 6, 2, 0, -3, -10, -17, -14, 7, 11, 6, -2, -9, -10, 
-4, 3, 8, 5, 2, 5, 6, -3, -14, -17, -10, 1, 8, 11, 8, 5, 
3, -7, -16, -21, -18, -7, 3, 18, 22, 17, 8, -3, -17, -24, -23, -12, 
5, 16, 21, 19, 10, -4, -18, -24, -23, -16, -2, 14, 23, 21, 15, 3, 
-10, -19, -22, -12, -5, 7, 20, 24, 19, 3, -11, -22, -28, -21, 1, 10, 
15, 17, 12, 5, -3, -9, -15, -17, -9, 8, 18, 14, 6, -4, -7, -5, 
-1, -2, -8, -8, 1, 10, 5, -4, -10, -10, -3, 9, 12, 8, 1, -1, 
-4, -5, -7, -8, 0, 8, 16, 13, 2, -9, -16, -17, -13, -6, 5, 15, 
18, 15, 9, -4, -17, -22, -18, -2, 6, 14, 21, 20, 8, -2, -15, -26, 
-30, -23, 5, 19, 25, 21, 10, -1, -10, -15, -19, -19, -10, 16, 26, 26, 
16, -2, -16, -20, -14, -8, -8, -5, 6, 17, 16, 8, -5, -15, -17, -7, 
5, 9, 9, 9, 8, 6, 2, -5, -10, -12, -3, 6, 6, 2, -1, -6, 
-3, 0, 1, 3, 2, 4, 9, 6, 0, -6, -9, 0, 6, 11, 11, 4, 
-2, -4, -8, -14, -17, -14, 3, 14, 20, 18, 7, -4, -10, -11, -11, -10, 
-3, 16, 22, 22, 14, -2, -19, -24, -18, -9, -2, 5, 13, 18, 17, 9, 
-7, -21, -23, -11, 5, 15, 19, 19, 9, 3, -3, -12, -21, -25, -9, 9, 
18, 18, 11, -5, -9, -9, -8, -7, -7, 2, 13, 17, 15, 7, -9, -11, 
-8, -4, -1, -2, -1, 3, 2, 0, -4, -9, -5, 0, 6, 9, 5, -1, 
0, 1, 1, -2, -3, 3, 7, 8, 5, -4, -13, -15, -9, -2, 1, 3, 
6, 7, 8, 6, -4, -13, -15, -5, 9, 17, 18, 14, 1, -5, -8, -12, 
-17, -18, -8, 8, 19, 20, 13, -9, -16, -15, -11, -6, -2, 7, 17, 21, 
19, 8, -14, -22, -20, -12, -3, 1, 5, 9, 9, 4, -3, -13, -17, -10, 
0, 9, 12, 10, 9, 5, 1, -4, -11, -10, -5, 3, 9, 7, 0, -7, 
-7, -5, -4, -4, -1, 2, 7, 11, 9, 1, -8, -6, 1, 7, 9, 6, 
-3, -6, -4, -5, -8, -12, -9, 0, 9, 14, 11, -6, -12, -10, -5, 0, 
2, 5, 9, 13, 13, 8, -12, -21, -20, -12, -1, 5, 6, 5, 3, 2, 
-2, -14, -16, -12, -3, 8, 14, 14, 8, 0, -4, -7, -9, -10, -7, -1, 
5, 6, 1, -4, -10, -10, -7, -6, -1, 2, 6, 10, 9, 4, -5, -7, 
-5, 0, 3, 4, 1, 1, 1, -1, -6, -12, -12, -8, 0, 7, 11, 4, 
-2, -4, -3, -2, -2, -2, 2, 7, 11, 12, -2, -10, -15, -14, -8, -2, 
2, 2, 2, 4, 5, -3, -9, -9, -6, 2, 9, 12, 10, 3, -4, -7, 
-8, -6, -4, 0, 4, 5, 3, -2, -9, -11, -9, -6, 3, 8, 11, 12, 
8, 3, -5, -10, -8, -3, 2, 5, 3, 2, 2, 0, -4, -10, -12, -9, 
-1, 5, 9, 7, 2, -1, -1, 0, 0, -2, -1, 1, 5, 7, 1, -5, 
-8, -5, };
