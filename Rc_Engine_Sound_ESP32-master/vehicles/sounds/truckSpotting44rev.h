const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 4937;
const signed char revSamples[] = {
0, 3, 9, 16, 21, 21, 14, 9, 8, 6, 1, -6, -10, -9, -8, -8, 
-8, -7, -6, -5, -4, -3, -2, 0, 2, 4, 7, 9, 12, 18, 21, 25, 
29, 33, 39, 41, 44, 47, 49, 50, 51, 52, 51, 52, 51, 49, 48, 46, 
44, 43, 42, 39, 37, 35, 33, 31, 29, 28, 26, 25, 24, 23, 23, 23, 
24, 25, 25, 26, 28, 29, 31, 32, 34, 36, 38, 39, 41, 41, 42, 42, 
43, 42, 42, 42, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 
40, 40, 40, 39, 39, 39, 39, 40, 40, 40, 41, 42, 44, 45, 47, 48, 
50, 52, 54, 56, 58, 60, 62, 64, 66, 67, 69, 71, 72, 74, 75, 76, 
77, 78, 79, 80, 80, 81, 81, 81, 82, 82, 82, 82, 83, 83, 83, 83, 
84, 84, 85, 85, 86, 87, 88, 88, 89, 90, 91, 91, 92, 92, 92, 92, 
92, 92, 92, 91, 89, 88, 87, 87, 85, 84, 82, 81, 79, 79, 78, 77, 
75, 74, 72, 72, 70, 68, 68, 67, 65, 64, 63, 61, 61, 60, 59, 58, 
58, 56, 55, 54, 52, 50, 47, 44, 41, 38, 36, 33, 29, 26, 23, 21, 
20, 19, 17, 17, 16, 16, 15, 15, 14, 13, 11, 10, 9, 6, 4, 2, 
1, -2, -4, -8, -10, -12, -14, -16, -18, -20, -22, -22, -24, -25, -28, -30, 
-31, -33, -35, -37, -41, -42, -44, -46, -48, -50, -51, -52, -54, -55, -56, -57, 
-58, -59, -60, -59, -60, -59, -60, -61, -60, -60, -60, -60, -61, -60, -59, -60, 
-59, -58, -58, -57, -56, -55, -54, -52, -51, -50, -49, -47, -46, -46, -45, -44, 
-43, -43, -42, -42, -41, -40, -41, -41, -41, -41, -42, -43, -46, -46, -48, -50, 
-51, -52, -53, -53, -53, -52, -52, -50, -49, -48, -47, -46, -45, -46, -46, -46, 
-47, -48, -49, -50, -51, -51, -52, -52, -52, -51, -52, -52, -51, -51, -50, -49, 
-49, -48, -48, -48, -47, -46, -46, -46, -45, -45, -44, -43, -43, -42, -41, -40, 
-38, -37, -36, -35, -33, -33, -32, -31, -30, -29, -29, -28, -27, -26, -25, -24, 
-23, -22, -21, -20, -19, -18, -17, -16, -15, -15, -15, -15, -16, -17, -18, -20, 
-21, -23, -24, -25, -26, -26, -26, -26, -25, -25, -24, -24, -23, -23, -23, -24, 
-24, -24, -27, -28, -29, -30, -32, -33, -35, -37, -39, -42, -44, -48, -51, -55, 
-58, -60, -63, -66, -67, -69, -70, -71, -72, -71, -71, -71, -70, -69, -69, -67, 
-67, -66, -66, -65, -65, -65, -66, -65, -64, -64, -64, -63, -63, -63, -63, -64, 
-64, -65, -66, -65, -64, -64, -63, -61, -60, -58, -55, -54, -52, -50, -48, -47, 
-46, -46, -45, -44, -45, -45, -46, -46, -47, -46, -47, -48, -47, -47, -46, -45, 
-43, -42, -40, -37, -35, -33, -30, -26, -24, -22, -20, -19, -17, -16, -16, -15, 
-15, -16, -17, -17, -18, -18, -18, -19, -18, -18, -17, -15, -14, -11, -9, -6, 
-4, -3, 0, 3, 5, 7, 8, 10, 11, 14, 15, 16, 16, 16, 17, 16, 
16, 15, 14, 13, 12, 11, 10, 9, 8, 6, 4, 3, 2, 0, -1, -1, 
-2, -1, -1, 0, 0, 1, 3, 4, 5, 6, 6, 8, 8, 9, 9, 9, 
9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 10, 
10, 9, 9, 8, 6, 5, 4, 3, 3, 2, 2, 1, 1, 1, 1, 1, 
1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 3, 3, 2, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -3, 
-4, -5, -7, -8, -9, -11, -12, -13, -13, -15, -17, -18, -19, -21, -21, -24, 
-25, -25, -26, -26, -26, -26, -25, -25, -24, -23, -22, -20, -18, -17, -16, -13, 
-12, -10, -9, -8, -7, -6, -5, -4, -3, -2, -2, -2, -2, -2, -2, -2, 
-2, -4, -4, -5, -6, -6, -7, -7, -8, -8, -8, -7, -6, -5, -3, -1, 
0, 2, 6, 8, 9, 12, 15, 17, 21, 23, 25, 27, 29, 31, 34, 35, 
37, 39, 40, 43, 44, 44, 46, 47, 48, 50, 50, 51, 52, 53, 54, 55, 
57, 58, 58, 59, 60, 61, 60, 60, 61, 62, 62, 63, 64, 65, 66, 68, 
69, 70, 72, 73, 74, 75, 75, 76, 76, 76, 77, 77, 78, 79, 80, 81, 
82, 83, 84, 85, 86, 86, 87, 87, 87, 87, 87, 88, 88, 88, 88, 88, 
88, 87, 86, 85, 85, 83, 81, 78, 77, 74, 71, 69, 67, 63, 60, 57, 
55, 53, 49, 47, 44, 41, 39, 35, 30, 25, 22, 17, 13, 9, 3, -1, 
-4, -8, -11, -15, -17, -18, -20, -21, -21, -22, -22, -22, -22, -22, -22, -21, 
-20, -19, -18, -17, -16, -16, -16, -16, -16, -17, -19, -20, -21, -23, -24, -25, 
-27, -28, -28, -29, -30, -31, -31, -30, -30, -29, -28, -26, -24, -22, -20, -18, 
-15, -11, -8, -5, -2, 1, 6, 9, 11, 13, 15, 17, 20, 21, 22, 24, 
25, 27, 30, 31, 33, 36, 38, 43, 45, 49, 52, 54, 58, 62, 65, 67, 
69, 72, 75, 77, 79, 81, 83, 84, 87, 88, 90, 91, 92, 95, 96, 98, 
99, 100, 102, 103, 103, 103, 103, 103, 103, 101, 101, 100, 99, 99, 98, 96, 
94, 93, 93, 91, 89, 88, 88, 88, 87, 87, 88, 88, 89, 89, 90, 90, 
90, 90, 90, 90, 89, 87, 86, 85, 84, 83, 81, 79, 79, 77, 75, 75, 
73, 71, 70, 68, 67, 65, 63, 62, 61, 60, 59, 59, 58, 57, 56, 55, 
55, 54, 53, 54, 55, 55, 56, 57, 57, 58, 59, 60, 61, 61, 62, 63, 
62, 63, 64, 63, 64, 63, 62, 63, 61, 61, 60, 59, 58, 57, 56, 55, 
53, 52, 51, 50, 49, 48, 48, 47, 47, 46, 45, 45, 44, 45, 45, 45, 
45, 46, 46, 47, 47, 47, 47, 46, 45, 44, 42, 40, 38, 36, 35, 32, 
29, 26, 23, 21, 19, 15, 12, 9, 7, 5, 2, -2, -4, -6, -7, -9, 
-11, -14, -16, -17, -18, -19, -22, -23, -24, -26, -26, -28, -30, -31, -32, -34, 
-34, -35, -37, -38, -38, -39, -40, -43, -44, -45, -47, -48, -50, -52, -54, -56, 
-58, -60, -62, -64, -65, -67, -69, -70, -71, -72, -73, -74, -74, -74, -74, -74, 
-74, -74, -73, -73, -71, -71, -69, -68, -68, -66, -66, -66, -66, -67, -68, -69, 
-71, -73, -75, -77, -79, -83, -85, -87, -90, -91, -93, -95, -95, -96, -96, -95, 
-95, -94, -93, -93, -92, -91, -89, -88, -86, -86, -85, -83, -82, -82, -82, -81, 
-81, -80, -80, -80, -79, -79, -78, -78, -76, -76, -75, -75, -74, -74, -74, -74, 
-74, -75, -76, -77, -78, -79, -80, -81, -83, -84, -85, -86, -87, -89, -90, -90, 
-91, -92, -92, -93, -93, -93, -94, -94, -94, -94, -93, -93, -93, -92, -91, -91, 
-90, -90, -90, -90, -90, -90, -91, -91, -91, -92, -92, -93, -94, -95, -96, -97, 
-98, -99, -100, -101, -102, -102, -102, -101, -100, -100, -99, -98, -97, -97, -96, -96, 
-95, -95, -95, -95, -96, -96, -97, -98, -98, -98, -99, -99, -98, -97, -96, -95, 
-93, -90, -88, -85, -82, -79, -76, -71, -68, -65, -62, -60, -58, -56, -55, -53, 
-52, -52, -51, -50, -49, -48, -47, -45, -44, -42, -41, -40, -37, -34, -32, -29, 
-27, -25, -22, -19, -17, -15, -13, -12, -11, -9, -7, -5, -4, -1, 2, 5, 
7, 9, 12, 14, 18, 20, 22, 24, 27, 29, 32, 35, 37, 40, 43, 46, 
48, 50, 52, 54, 56, 58, 58, 59, 59, 58, 57, 56, 55, 53, 51, 50, 
48, 46, 45, 44, 43, 43, 42, 42, 42, 42, 42, 42, 42, 42, 42, 43, 
44, 44, 45, 45, 46, 46, 45, 45, 44, 42, 41, 40, 37, 35, 32, 30, 
29, 26, 25, 24, 23, 23, 23, 23, 24, 24, 26, 28, 28, 31, 32, 33, 
33, 33, 34, 34, 34, 34, 34, 34, 34, 34, 34, 35, 35, 35, 36, 36, 
36, 37, 37, 38, 39, 41, 42, 43, 45, 47, 49, 50, 52, 53, 53, 54, 
55, 54, 55, 54, 55, 55, 55, 54, 53, 54, 53, 52, 53, 54, 53, 54, 
56, 55, 55, 56, 57, 57, 58, 57, 58, 57, 57, 58, 57, 56, 57, 56, 
57, 57, 57, 56, 55, 55, 54, 53, 52, 51, 51, 50, 49, 50, 50, 49, 
50, 51, 52, 52, 53, 53, 54, 54, 55, 55, 56, 56, 57, 57, 58, 59, 
59, 60, 61, 60, 61, 60, 59, 59, 58, 57, 56, 55, 54, 53, 52, 51, 
50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 40, 39, 39, 38, 38, 
38, 38, 38, 38, 38, 38, 38, 38, 39, 38, 39, 40, 40, 41, 40, 41, 
42, 42, 41, 41, 40, 39, 38, 37, 36, 36, 35, 34, 33, 32, 32, 31, 
31, 30, 30, 29, 29, 29, 29, 29, 29, 29, 31, 31, 33, 36, 37, 39, 
40, 42, 44, 44, 44, 44, 43, 42, 40, 38, 36, 34, 32, 29, 25, 22, 
20, 17, 14, 9, 6, 3, 0, -3, -7, -12, -15, -18, -21, -24, -26, -29, 
-31, -33, -34, -36, -39, -40, -42, -45, -47, -49, -51, -53, -55, -57, -59, -60, 
-61, -62, -63, -63, -64, -64, -65, -66, -66, -67, -68, -69, -70, -71, -72, -73, 
-73, -74, -74, -74, -74, -74, -74, -74, -74, -74, -74, -74, -74, -74, -75, -76, 
-75, -74, -73, -72, -71, -69, -67, -65, -63, -61, -59, -58, -57, -56, -55, -54, 
-55, -54, -54, -55, -55, -56, -56, -55, -54, -54, -53, -53, -52, -51, -51, -50, 
-49, -50, -50, -51, -50, -51, -51, -52, -51, -53, -53, -54, -54, -55, -57, -58, 
-59, -61, -62, -64, -66, -66, -67, -68, -68, -68, -68, -68, -68, -67, -66, -67, 
-65, -65, -65, -65, -66, -64, -64, -65, -64, -63, -62, -62, -61, -60, -59, -58, 
-57, -56, -55, -55, -54, -53, -53, -52, -52, -52, -51, -50, -51, -51, -50, -50, 
-49, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, 
-34, -34, -33, -32, -31, -30, -29, -28, -27, -26, -24, -23, -22, -20, -18, -17, 
-16, -14, -14, -14, -12, -12, -12, -11, -11, -11, -10, -10, -10, -10, -11, -11, 
-12, -12, -12, -14, -14, -15, -15, -16, -16, -16, -16, -16, -16, -16, -16, -16, 
-16, -16, -16, -17, -17, -16, -16, -16, -15, -15, -15, -14, -14, -14, -14, -14, 
-15, -17, -18, -19, -21, -23, -24, -26, -27, -27, -27, -28, -28, -28, -28, -28, 
-28, -28, -28, -29, -29, -29, -30, -32, -32, -33, -33, -33, -34, -33, -33, -32, 
-32, -32, -31, -31, -31, -31, -31, -32, -33, -34, -34, -34, -34, -35, -35, -36, 
-36, -36, -36, -36, -37, -37, -37, -38, -38, -38, -39, -39, -39, -39, -40, -41, 
-41, -41, -43, -43, -43, -44, -43, -44, -45, -44, -44, -43, -42, -41, -41, -40, 
-39, -38, -37, -37, -37, -36, -36, -36, -36, -37, -37, -39, -40, -40, -40, -41, 
-42, -43, -43, -43, -43, -42, -41, -39, -38, -36, -34, -33, -30, -28, -26, -24, 
-23, -21, -18, -17, -15, -13, -12, -10, -8, -7, -6, -5, -5, -4, -4, -5, 
-5, -5, -5, -7, -7, -8, -8, -9, -9, -10, -10, -11, -11, -11, -12, -12, 
-13, -13, -13, -13, -13, -13, -12, -12, -11, -10, -8, -7, -6, -4, -2, 0, 
2, 3, 4, 6, 6, 7, 8, 9, 10, 11, 13, 15, 16, 17, 19, 21, 
24, 26, 27, 28, 30, 31, 33, 34, 35, 37, 39, 41, 42, 43, 45, 47, 
49, 51, 53, 55, 57, 59, 60, 64, 66, 69, 71, 73, 75, 78, 80, 82, 
84, 86, 89, 91, 93, 95, 96, 98, 101, 103, 104, 105, 107, 108, 109, 110, 
110, 110, 110, 110, 110, 110, 110, 109, 109, 108, 108, 107, 107, 107, 105, 104, 
103, 102, 102, 100, 97, 95, 93, 91, 88, 86, 82, 79, 77, 74, 72, 70, 
69, 68, 67, 66, 66, 66, 66, 66, 67, 68, 68, 69, 70, 71, 71, 72, 
72, 72, 73, 73, 73, 74, 72, 72, 72, 72, 72, 72, 72, 73, 74, 74, 
75, 76, 77, 79, 80, 81, 82, 83, 84, 85, 85, 86, 87, 88, 89, 90, 
90, 91, 91, 92, 92, 92, 92, 92, 92, 91, 91, 91, 90, 89, 88, 88, 
87, 87, 87, 87, 87, 87, 88, 88, 89, 90, 90, 91, 92, 93, 95, 96, 
97, 99, 100, 101, 102, 103, 104, 105, 106, 106, 106, 106, 106, 106, 104, 104, 
103, 103, 103, 102, 102, 101, 101, 100, 100, 100, 99, 97, 96, 95, 94, 93, 
90, 88, 87, 84, 82, 80, 77, 75, 73, 71, 68, 66, 64, 62, 61, 59, 
58, 57, 56, 56, 55, 54, 54, 52, 52, 51, 50, 49, 47, 46, 44, 42, 
40, 37, 34, 32, 30, 28, 25, 24, 20, 18, 16, 14, 12, 8, 5, 3, 
1, -1, -4, -6, -8, -9, -10, -12, -12, -14, -15, -16, -17, -17, -19, -20, 
-21, -22, -23, -25, -28, -29, -30, -31, -33, -34, -36, -38, -39, -41, -42, -45, 
-47, -49, -51, -54, -56, -59, -61, -64, -66, -67, -70, -73, -74, -76, -78, -80, 
-81, -83, -84, -86, -87, -88, -90, -91, -92, -92, -92, -92, -92, -91, -91, -91, 
-91, -92, -92, -93, -94, -95, -95, -95, -96, -95, -95, -95, -94, -94, -93, -93, 
-93, -91, -91, -90, -90, -90, -89, -89, -88, -88, -89, -89, -90, -91, -92, -93, 
-95, -96, -97, -99, -101, -102, -103, -104, -105, -105, -106, -105, -105, -105, -104, -103, 
-101, -100, -100, -98, -96, -94, -93, -92, -91, -89, -87, -86, -84, -84, -82, -81, 
-79, -78, -78, -77, -76, -74, -73, -73, -73, -72, -71, -69, -67, -66, -64, -62, 
-60, -59, -58, -57, -56, -55, -54, -54, -54, -54, -54, -53, -54, -55, -55, -56, 
-56, -58, -58, -59, -59, -60, -61, -60, -60, -61, -60, -59, -58, -56, -55, -53, 
-52, -50, -48, -47, -45, -43, -42, -41, -38, -36, -34, -32, -30, -29, -27, -25, 
-23, -21, -20, -18, -16, -15, -13, -12, -11, -10, -10, -9, -9, -10, -11, -11, 
-12, -13, -15, -15, -17, -18, -19, -20, -20, -20, -20, -20, -20, -20, -19, -18, 
-17, -17, -16, -15, -15, -15, -15, -15, -14, -14, -14, -13, -13, -12, -12, -11, 
-11, -10, -10, -11, -11, -11, -13, -14, -15, -16, -16, -18, -18, -19, -19, -19, 
-19, -18, -18, -17, -16, -15, -15, -14, -13, -13, -13, -13, -13, -13, -14, -14, 
-14, -14, -13, -12, -11, -9, -8, -7, -4, -2, 0, 2, 5, 8, 11, 13, 
16, 19, 22, 26, 28, 30, 32, 34, 35, 38, 40, 40, 41, 42, 43, 44, 
45, 45, 46, 46, 47, 47, 48, 48, 49, 50, 51, 51, 52, 53, 54, 55, 
55, 55, 56, 55, 54, 54, 54, 54, 53, 53, 52, 52, 52, 51, 52, 53, 
53, 54, 54, 56, 57, 59, 60, 62, 64, 66, 68, 69, 71, 71, 72, 73, 
72, 73, 72, 72, 73, 72, 71, 69, 68, 66, 64, 62, 58, 54, 50, 47, 
43, 39, 35, 30, 26, 22, 19, 16, 14, 12, 11, 10, 10, 10, 10, 11, 
11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 14, 15, 16, 18, 18, 21, 
22, 22, 24, 25, 25, 26, 26, 26, 25, 24, 23, 22, 21, 20, 19, 18, 
17, 16, 16, 15, 15, 14, 14, 13, 13, 13, 12, 12, 11, 11, 10, 10, 
9, 9, 8, 8, 8, 8, 7, 7, 6, 6, 5, 4, 3, 3, 2, 2, 
1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 0, 0, 
-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -11, -12, -12, -13, -13, 
-13, -14, -13, -13, -13, -13, -12, -12, -12, -12, -12, -12, -13, -14, -14, -16, 
-16, -17, -17, -17, -17, -16, -16, -14, -13, -12, -11, -10, -10, -10, -10, -10, 
-12, -13, -14, -15, -17, -17, -19, -19, -20, -20, -20, -20, -20, -20, -20, -20, 
-19, -19, -19, -18, -18, -18, -18, -18, -18, -19, -19, -19, -20, -20, -20, -20, 
-20, -20, -21, -21, -22, -22, -22, -23, -25, -26, -26, -26, -27, -27, -26, -26, 
-25, -24, -23, -22, -21, -20, -18, -17, -16, -14, -13, -12, -11, -10, -10, -10, 
-11, -11, -11, -13, -14, -15, -16, -16, -18, -20, -22, -23, -23, -25, -25, -27, 
-28, -30, -30, -31, -33, -36, -37, -38, -40, -42, -45, -48, -49, -51, -54, -56, 
-58, -59, -61, -62, -63, -64, -64, -64, -65, -66, -65, -65, -65, -65, -65, -65, 
-65, -66, -67, -67, -68, -70, -71, -72, -74, -75, -77, -78, -79, -80, -81, -82, 
-82, -83, -83, -83, -83, -82, -82, -81, -79, -78, -76, -75, -73, -69, -68, -66, 
-64, -62, -60, -58, -56, -54, -52, -50, -49, -47, -45, -43, -42, -41, -38, -36, 
-35, -33, -32, -31, -29, -28, -26, -25, -24, -22, -20, -17, -15, -13, -10, -6, 
-2, 1, 3, 6, 9, 12, 14, 16, 17, 18, 20, 21, 22, 23, 24, 26, 
28, 29, 30, 32, 32, 33, 35, 35, 35, 35, 35, 34, 33, 32, 31, 30, 
29, 28, 28, 28, 28, 28, 28, 29, 29, 29, 30, 31, 32, 33, 34, 34, 
34, 35, 36, 36, 36, 36, 35, 34, 33, 31, 30, 29, 26, 23, 20, 18, 
16, 14, 13, 10, 9, 8, 7, 7, 6, 6, 6, 5, 5, 5, 5, 4, 
4, 3, 3, 3, 1, 0, -1, -2, -3, -3, -4, -4, -5, -5, -6, -6, 
-7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6, -6, -6, -6, -6, 
-7, -7, -8, -8, -8, -10, -11, -12, -13, -14, -15, -17, -19, -20, -22, -23, 
-25, -27, -28, -29, -29, -30, -31, -31, -31, -31, -30, -29, -28, -26, -25, -23, 
-22, -21, -18, -16, -14, -12, -11, -9, -6, -4, -2, -1, 2, 4, 8, 10, 
12, 14, 17, 20, 21, 24, 25, 27, 29, 31, 32, 34, 34, 35, 36, 38, 
38, 38, 39, 38, 40, 40, 40, 40, 40, 40, 40, 41, 41, 41, 41, 42, 
43, 43, 43, 44, 46, 48, 48, 50, 52, 54, 55, 57, 59, 61, 62, 64, 
66, 66, 67, 66, 67, 66, 64, 64, 62, 61, 59, 57, 56, 54, 52, 50, 
48, 46, 43, 40, 38, 34, 30, 25, 21, 18, 14, 10, 7, 1, -2, -4, 
-7, -9, -12, -14, -15, -16, -17, -18, -18, -19, -19, -19, -18, -18, -17, -16, 
-15, -14, -13, -12, -10, -9, -8, -7, -5, -3, -2, 0, 1, 2, 4, 5, 
7, 8, 9, 10, 10, 11, 11, 11, 11, 11, 11, 10, 10, 9, 9, 9, 
10, 11, 12, 13, 15, 19, 22, 25, 28, 31, 34, 39, 41, 43, 46, 48, 
50, 52, 54, 55, 57, 58, 59, 61, 62, 64, 66, 68, 70, 72, 74, 76, 
79, 81, 85, 88, 91, 93, 95, 98, 100, 101, 102, 103, 103, 103, 103, 103, 
102, 102, 101, 101, 101, 100, 100, 100, 98, 98, 97, 96, 96, 95, 93, 92, 
91, 89, 89, 86, 85, 84, 83, 83, 82, 81, 80, 80, 79, 78, 77, 75, 
73, 72, 71, 69, 67, 67, 66, 65, 63, 62, 60, 58, 55, 53, 51, 48, 
44, 41, 38, 36, 33, 29, 26, 24, 22, 20, 19, 17, 16, 15, 14, 14, 
13, 13, 12, 12, 12, 12, 12, 13, 13, 14, 15, 16, 18, 19, 20, 21, 
21, 22, 23, 23, 23, 23, 23, 23, 22, 22, 21, 21, 21, 20, 20, 20, 
20, 20, 20, 20, 20, 21, 21, 21, 24, 25, 26, 28, 28, 29, 31, 31, 
31, 32, 32, 33, 34, 35, 35, 35, 36, 38, 39, 39, 39, 40, 41, 42, 
43, 43, 43, 44, 44, 44, 44, 44, 44, 44, 44, 44, 45, 47, 49, 51, 
53, 56, 58, 61, 63, 65, 67, 68, 69, 70, 71, 71, 71, 71, 70, 68, 
67, 65, 62, 60, 58, 56, 53, 50, 47, 45, 43, 40, 36, 33, 31, 29, 
26, 25, 22, 20, 18, 16, 15, 13, 12, 11, 10, 10, 9, 9, 10, 10, 
11, 12, 12, 12, 13, 13, 12, 12, 12, 11, 10, 10, 9, 8, 7, 6, 
5, 4, 4, 4, 2, 1, 0, 0, -1, -1, -2, -2, -3, -3, -3, -4, 
-4, -4, -4, -5, -5, -6, -6, -7, -7, -7, -9, -9, -10, -11, -13, -13, 
-16, -17, -18, -20, -22, -24, -27, -29, -32, -34, -36, -41, -43, -46, -49, -52, 
-54, -58, -61, -65, -68, -70, -74, -78, -81, -83, -85, -88, -90, -91, -92, -93, 
-94, -94, -95, -95, -95, -95, -95, -95, -94, -94, -94, -92, -92, -90, -89, -88, 
-87, -85, -85, -83, -83, -83, -82, -82, -82, -83, -84, -85, -87, -88, -91, -93, 
-95, -97, -98, -99, -99, -100, -100, -100, -101, -101, -101, -100, -100, -100, -100, -99, 
-98, -97, -96, -96, -95, -93, -92, -91, -89, -88, -85, -83, -82, -80, -78, -76, 
-73, -72, -71, -70, -69, -68, -68, -68, -68, -69, -69, -70, -71, -71, -71, -71, 
-71, -71, -71, -70, -70, -69, -68, -66, -66, -65, -64, -63, -61, -60, -58, -57, 
-55, -53, -51, -48, -46, -44, -42, -41, -38, -36, -35, -34, -33, -32, -32, -32, 
-32, -32, -33, -34, -35, -36, -36, -37, -38, -40, -40, -41, -42, -43, -45, -45, 
-45, -46, -46, -46, -46, -46, -46, -46, -46, -46, -46, -46, -47, -47, -47, -47, 
-46, -45, -43, -41, -39, -35, -32, -29, -27, -26, -24, -22, -21, -20, -20, -20, 
-21, -22, -23, -24, -26, -27, -30, -31, -31, -33, -33, -33, -33, -32, -31, -29, 
-28, -25, -23, -21, -18, -17, -14, -11, -10, -9, -8, -8, -8, -8, -8, -8, 
-9, -9, -10, -10, -11, -12, -12, -13, -15, -16, -17, -18, -18, -20, -20, -20, 
-20, -19, -18, -17, -15, -13, -11, -10, -8, -4, -2, 0, 3, 4, 7, 8, 
9, 9, 9, 8, 7, 6, 5, 4, 2, 1, 1, 2, 2, 3, 5, 8, 
10, 12, 14, 16, 18, 21, 22, 22, 22, 22, 22, 21, 20, 19, 18, 17, 
16, 14, 13, 12, 11, 10, 9, 7, 6, 5, 4, 2, 1, -1, -2, -3, 
-4, -6, -7, -8, -9, -10, -11, -11, -12, -12, -12, -12, -12, -12, -11, -10, 
-9, -7, -4, -2, 0, 3, 6, 10, 16, 19, 23, 27, 30, 32, 36, 39, 
41, 43, 45, 47, 47, 48, 49, 49, 50, 50, 50, 49, 49, 48, 48, 47, 
46, 45, 44, 44, 43, 42, 42, 42, 43, 44, 46, 49, 52, 55, 58, 63, 
66, 69, 72, 75, 77, 79, 80, 81, 82, 82, 82, 81, 80, 80, 79, 78, 
76, 75, 75, 74, 73, 72, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 
71, 69, 69, 68, 66, 65, 63, 61, 60, 58, 56, 54, 53, 51, 50, 49, 
48, 46, 45, 44, 42, 41, 39, 37, 35, 33, 31, 29, 28, 27, 24, 23, 
21, 20, 20, 19, 19, 19, 19, 19, 19, 20, 20, 21, 21, 21, 21, 23, 
23, 24, 24, 24, 26, 26, 26, 26, 26, 26, 26, 25, 25, 24, 24, 24, 
24, 24, 24, 25, 26, 28, 30, 31, 32, 34, 35, 37, 38, 38, 38, 38, 
37, 37, 37, 37, 37, 37, 38, 38, 38, 40, 40, 40, 41, 41, 41, 41, 
40, 39, 38, 36, 35, 34, 31, 28, 26, 24, 23, 22, 21, 20, 20, 20, 
20, 20, 20, 21, 21, 21, 21, 21, 21, 20, 19, 19, 18, 16, 15, 14, 
13, 12, 12, 11, 10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 
8, 9, 9, 9, 9, 9, 9, 8, 8, 8, 6, 5, 4, 3, 2, 1, 
0, -1, -1, -2, -3, -3, -4, -4, -4, -6, -7, -10, -12, -14, -16, -19, 
-22, -26, -29, -32, -35, -38, -42, -44, -46, -48, -49, -50, -52, -52, -52, -52, 
-51, -50, -49, -48, -47, -46, -45, -45, -45, -45, -45, -45, -46, -47, -48, -50, 
-51, -53, -54, -56, -58, -58, -60, -61, -62, -62, -63, -63, -64, -63, -64, -64, 
-65, -64, -64, -64, -64, -64, -64, -64, -64, -65, -66, -67, -68, -69, -70, -71, 
-73, -74, -75, -76, -77, -78, -79, -79, -80, -80, -80, -80, -80, -80, -80, -80, 
-78, -77, -77, -76, -75, -73, -72, -71, -71, -71, -71, -71, -71, -72, -72, -73, 
-74, -73, -74, -74, -75, -75, -76, -76, -77, -77, -78, -78, -79, -80, -80, -81, 
-81, -81, -81, -81, -81, -81, -81, -79, -78, -77, -76, -75, -74, -73, -73, -72, 
-72, -72, -72, -72, -72, -71, -71, -71, -69, -69, -69, -68, -67, -67, -66, -66, 
-67, -68, -69, -70, -71, -72, -73, -74, -75, -75, -76, -76, -75, -75, -74, -74, 
-72, -71, -70, -68, -66, -64, -62, -59, -58, -57, -54, -53, -52, -51, -52, -52, 
-52, -52, -53, -52, -53, -54, -53, -54, -54, -54, -54, -54, -54, -55, -56, -57, 
-58, -59, -60, -61, -62, -63, -62, -62, -62, -61, -62, -61, -62, -62, -63, -63, 
-64, -63, -64, -63, -63, -62, -61, -59, -59, -58, -56, -55, -54, -52, -51, -50, 
-48, -47, -45, -44, -42, -41, -39, -38, -36, -35, -33, -32, -31, -30, -28, -27, 
-26, -25, -24, -23, -22, -20, -19, -18, -17, -14, -13, -11, -9, -8, -6, -4, 
-3, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 
1, 1, 0, 0, 0, 0, 1, 1, 2, 3, 5, 7, 9, 11, 12, 13, 
14, 17, 18, 18, 20, 22, 22, 24, 25, 27, 27, 29, 31, 32, 34, 35, 
36, 36, 37, 37, 37, 36, 35, 35, 34, 34, 34, 33, 32, 32, 31, 29, 
28, 27, 26, 24, 23, 23, 22, 22, 23, 24, 25, 26, 26, 27, 28, 28, 
29, 28, 28, 27, 27, 26, 25, 24, 23, 22, 21, 21, 20, 20, 19, 18, 
18, 17, 17, 17, 17, 18, 18, 18, 20, 22, 23, 25, 26, 27, 28, 30, 
32, 33, 34, 36, 36, 37, 39, 40, 41, 42, 44, 46, 46, 47, 48, 49, 
50, 51, 51, 51, 51, 51, 50, 49, 49, 49, 48, 47, 48, 47, 47, 48, 
47, 48, 49, 49, 50, 49, 50, 49, 49, 48, 47, 46, 45, 45, 44, 44, 
43, 42, 43, 43, 44, 44, 44, 44, 44, 44, 44, 43, 43, 42, 41, 41, 
40, 40, 39, 39, 39, 39, 40, 40, 41, 41, 42, 42, 44, 44, 44, 45, 
45, 46, 47, 48, 49, 51, 53, 53, 54, 55, 56, 57, 58, 58, 59, 60, 
61, 62, 63, 64, 66, 67, 68, 70, 71, 72, 73, 74, 74, 75, 75, 75, 
75, 75, 76, 76, 77, 77, 78, 79, 80, 81, 82, 83, 84, 84, 85, 85, 
85, 85, 86, 86, 86, 87, 87, 88, 88, 89, 89, 90, 90, 89, 89, 87, 
86, 85, 83, 80, 79, 77, 76, 75, 74, 73, 73, 72, 72, 73, 74, 74, 
74, 75, 76, 77, 78, 79, 81, 83, 85, 87, 91, 93, 95, 98, 99, 101, 
103, 104, 104, 105, 105, 105, 106, 106, 105, 105, 105, 104, 104, 103, 103, 103, 
101, 100, 99, 98, 98, 96, 94, 93, 92, 92, 91, 90, 89, 88, 88, 88, 
89, 89, 90, 91, 93, 94, 95, 98, 99, 101, 103, 104, 104, 104, 104, 103, 
101, 99, 95, 93, 90, 86, 83, 80, 75, 73, 71, 69, 67, 65, 63, 62, 
61, 59, 58, 58, 57, 58, 57, 58, 57, 58, 59, 59, 60, 60, 59, 58, 
58, 57, 56, 55, 53, 52, 50, 48, 46, 45, 43, 41, 39, 38, 37, 34, 
33, 31, 29, 28, 27, 24, 23, 21, 19, 18, 17, 16, 15, 14, 14, 13, 
13, 12, 12, 11, 11, 10, 9, 8, 6, 5, 4, 3, 2, 1, 0, -1, 
-2, -3, -5, -6, -7, -8, -10, -11, -12, -13, -14, -15, -15, -16, -17, -18, 
-19, -19, -21, -22, -23, -24, -25, -27, -29, -30, -32, -32, -33, -34, -35, -35, 
-35, -36, -36, -38, -39, -40, -40, -42, -44, -46, -47, -49, -51, -53, -55, -56, 
-58, -60, -61, -63, -65, -66, -68, -70, -71, -72, -75, -77, -78, -80, -82, -84, 
-87, -89, -92, -94, -95, -99, -101, -102, -104, -105, -105, -106, -106, -106, -106, -106, 
-106, -106, -106, -106, -106, -106, -106, -107, -107, -108, -110, -111, -114, -115, -117, -118, 
-120, -122, -123, -124, -125, -126, -126, -127, -127, -127, -127, -126, -125, -125, -124, -123, 
-122, -121, -121, -121, -121, -122, -122, -123, -123, -124, -124, -123, -123, -122, -122, -121, 
-121, -121, -121, -121, -122, -122, -123, -124, -124, -124, -124, -124, -124, -124, -124, -124, 
-123, -123, -122, -121, -120, -119, -118, -116, -115, -114, -112, -110, -108, -107, -105, -103, 
-100, -98, -96, -93, -91, -88, -86, -85, -84, -82, -82, -80, -79, -79, -78, -77, 
-76, -73, -72, -71, -69, -68, -65, -64, -62, -61, -59, -57, -56, -54, -52, -50, 
-49, -48, -46, -45, -44, -44, -43, -42, -42, -41, -40, -39, -38, -35, -33, -30, 
-28, -24, -21, -17, -14, -9, -4, -2, 0, };
