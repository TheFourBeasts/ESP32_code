const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 4962;
const signed char revSamples[] = {
0, 0, 2, 4, 6, 8, 11, 14, 16, 17, 18, 20, 23, 24, 27, 29,
31, 35, 36, 37, 39, 39, 39, 40, 40, 40, 40, 40, 40, 41, 41, 41, 
42, 42, 42, 42, 42, 42, 41, 40, 39, 38, 36, 35, 35, 34, 34, 34, 
34, 33, 33, 32, 32, 32, 32, 32, 32, 32, 32, 32, 33, 34, 35, 38, 
39, 41, 43, 44, 46, 48, 51, 53, 55, 58, 61, 63, 65, 68, 70, 72, 
75, 77, 79, 81, 82, 83, 84, 85, 86, 87, 87, 87, 87, 86, 85, 85, 
85, 82, 81, 81, 79, 78, 75, 74, 74, 73, 71, 70, 68, 67, 66, 64, 
63, 62, 60, 60, 60, 60, 60, 61, 62, 62, 63, 64, 64, 64, 64, 65, 
65, 66, 67, 68, 70, 71, 73, 74, 76, 77, 79, 80, 81, 82, 82, 83, 
84, 84, 85, 85, 85, 86, 86, 86, 86, 85, 85, 85, 83, 83, 83, 82, 
82, 81, 81, 81, 80, 80, 80, 80, 80, 81, 81, 81, 82, 82, 83, 83, 
84, 84, 84, 84, 84, 84, 84, 84, 84, 85, 85, 85, 85, 84, 83, 83, 
83, 82, 81, 81, 81, 80, 78, 77, 75, 75, 74, 74, 72, 72, 72, 70, 
69, 67, 64, 64, 62, 60, 59, 57, 55, 53, 51, 49, 48, 45, 45, 44, 
43, 44, 43, 43, 43, 43, 44, 44, 45, 45, 47, 48, 49, 50, 51, 53, 
54, 55, 57, 58, 59, 60, 62, 63, 64, 66, 67, 68, 69, 70, 70, 71, 
71, 71, 72, 72, 72, 73, 73, 73, 73, 73, 72, 72, 72, 71, 71, 69, 
67, 67, 65, 64, 63, 62, 62, 61, 60, 59, 57, 54, 53, 52, 50, 49, 
49, 48, 49, 48, 49, 50, 49, 50, 50, 51, 50, 51, 50, 49, 48, 48, 
47, 46, 45, 45, 44, 43, 42, 41, 40, 39, 37, 36, 35, 34, 33, 32, 
31, 30, 29, 27, 25, 24, 22, 21, 20, 19, 17, 16, 15, 14, 13, 13, 
13, 13, 13, 13, 15, 16, 17, 19, 20, 23, 24, 25, 27, 28, 30, 33, 
34, 35, 36, 38, 39, 41, 42, 43, 45, 46, 48, 48, 49, 50, 51, 51, 
51, 51, 50, 50, 49, 48, 48, 47, 47, 48, 48, 50, 51, 52, 53, 54, 
55, 56, 57, 57, 56, 55, 56, 55, 56, 55, 56, 56, 56, 56, 55, 54, 
53, 52, 48, 45, 41, 38, 36, 33, 28, 25, 22, 19, 16, 9, 5, 1, 
-4, -8, -13, -20, -25, -30, -36, -41, -45, -51, -55, -58, -60, -63, -67, -69, 
-71, -72, -73, -73, -73, -73, -71, -71, -70, -68, -67, -65, -63, -61, -57, -53, 
-49, -45, -42, -39, -35, -31, -27, -24, -22, -19, -15, -13, -11, -9, -8, -7, 
-6, -5, -4, -3, -3, -3, -3, -4, -5, -6, -7, -8, -9, -11, -12, -13, 
-15, -16, -17, -18, -20, -20, -21, -23, -24, -24, -24, -25, -27, -29, -30, -31, 
-32, -33, -34, -34, -35, -35, -35, -36, -36, -37, -36, -35, -35, -34, -33, -33, 
-33, -32, -32, -31, -31, -31, -31, -31, -32, -33, -33, -33, -35, -35, -38, -39, 
-41, -43, -45, -47, -50, -53, -56, -59, -61, -63, -67, -69, -71, -73, -75, -77, 
-79, -80, -81, -82, -82, -81, -80, -79, -78, -76, -74, -72, -69, -67, -65, -64, 
-63, -61, -61, -60, -58, -57, -55, -54, -53, -52, -53, -53, -53, -53, -54, -54, 
-56, -58, -60, -63, -65, -67, -68, -69, -69, -69, -69, -70, -71, -71, -71, -71, 
-70, -70, -67, -66, -66, -64, -62, -60, -57, -54, -51, -49, -47, -43, -41, -38, 
-36, -35, -32, -29, -26, -24, -22, -19, -16, -11, -9, -7, -4, -3, 0, 2, 
4, 6, 7, 8, 8, 7, 6, 5, 4, 3, 1, -1, -2, -3, -5, -6, 
-7, -8, -8, -8, -9, -9, -10, -10, -9, -8, -7, -6, -5, -4, -3, -2, 
0, 2, 4, 7, 8, 9, 12, 13, 14, 16, 17, 18, 21, 21, 21, 21, 
20, 19, 18, 16, 15, 14, 12, 10, 8, 6, 4, 3, 2, 0, -1, -2, 
-3, -5, -7, -8, -9, -10, -12, -12, -13, -13, -13, -12, -11, -8, -4, 0, 
4, 8, 13, 20, 25, 30, 35, 41, 47, 56, 62, 67, 73, 78, 83, 90, 
94, 99, 103, 106, 110, 111, 113, 114, 115, 117, 118, 119, 120, 120, 119, 119, 
118, 117, 116, 115, 115, 114, 113, 112, 111, 110, 108, 106, 103, 101, 98, 95, 
91, 89, 87, 84, 82, 80, 76, 74, 71, 68, 65, 63, 59, 55, 52, 50, 
47, 44, 42, 40, 39, 38, 37, 34, 33, 31, 29, 27, 26, 24, 23, 21, 
20, 19, 16, 15, 13, 11, 8, 5, 1, -2, -6, -10, -13, -17, -20, -22, 
-23, -25, -27, -29, -31, -32, -32, -34, -33, -33, -32, -31, -30, -29, -28, -25, 
-22, -19, -16, -13, -7, -4, -1, 1, 2, 4, 7, 9, 10, 12, 14, 14, 
16, 17, 17, 17, 18, 17, 16, 14, 12, 11, 8, 4, 1, -1, -4, -6, 
-8, -11, -13, -14, -16, -19, -22, -24, -27, -29, -31, -32, -35, -36, -36, -37, 
-38, -40, -42, -43, -44, -46, -47, -49, -51, -52, -53, -54, -54, -54, -54, -54, 
-53, -54, -55, -55, -56, -57, -58, -60, -61, -62, -63, -64, -65, -66, -68, -70, 
-72, -74, -77, -82, -85, -88, -92, -96, -99, -104, -107, -109, -112, -114, -116, -118, 
-119, -120, -120, -120, -120, -121, -121, -120, -120, -119, -118, -117, -115, -114, -111, -109, 
-105, -102, -99, -95, -92, -86, -83, -79, -75, -72, -68, -63, -59, -56, -53, -49, 
-45, -40, -36, -33, -29, -26, -22, -19, -17, -15, -14, -12, -10, -10, -9, -9, 
-9, -9, -10, -9, -9, -8, -8, -7, -7, -7, -7, -8, -8, -8, -8, -8, 
-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -9, -10, -10, -11, -12, 
-13, -15, -15, -17, -20, -22, -24, -27, -29, -32, -33, -34, -36, -37, -39, -41, 
-43, -44, -45, -47, -48, -50, -52, -55, -57, -59, -63, -66, -69, -71, -73, -76, 
-80, -83, -85, -87, -89, -90, -90, -91, -91, -91, -91, -91, -91, -90, -89, -89, 
-87, -83, -81, -79, -76, -72, -67, -64, -61, -58, -55, -53, -49, -46, -43, -40, 
-38, -35, -31, -29, -26, -24, -22, -19, -18, -17, -17, -17, -17, -18, -19, -19, 
-18, -18, -18, -17, -17, -17, -17, -18, -18, -18, -18, -18, -19, -19, -20, -21, 
-22, -23, -24, -26, -28, -29, -31, -32, -33, -35, -36, -36, -36, -37, -37, -36, 
-35, -35, -34, -34, -34, -35, -36, -36, -36, -36, -35, -35, -34, -34, -35, -35, 
-37, -37, -37, -38, -39, -40, -42, -44, -46, -48, -50, -53, -54, -55, -57, -59, 
-61, -63, -65, -66, -67, -68, -69, -71, -72, -73, -74, -76, -77, -77, -77, -78, 
-78, -77, -76, -75, -75, -73, -72, -70, -68, -68, -67, -65, -64, -62, -59, -57, 
-54, -51, -48, -44, -42, -39, -37, -35, -34, -32, -30, -29, -28, -27, -25, -24, 
-23, -22, -21, -21, -21, -21, -21, -20, -20, -19, -18, -17, -16, -14, -13, -11, 
-9, -8, -7, -5, -4, -4, -3, -2, -1, 0, 3, 6, 9, 10, 12, 14, 
16, 18, 20, 20, 22, 23, 25, 25, 25, 25, 24, 23, 23, 22, 22, 22, 
21, 21, 20, 19, 19, 19, 19, 18, 18, 17, 16, 15, 14, 13, 13, 13, 
13, 13, 13, 13, 13, 12, 12, 12, 10, 10, 9, 8, 8, 7, 7, 7, 
7, 8, 9, 10, 11, 12, 14, 15, 17, 20, 22, 24, 27, 30, 33, 35, 
38, 40, 42, 44, 46, 48, 51, 53, 55, 56, 58, 60, 59, 59, 60, 60, 
60, 61, 61, 62, 63, 64, 64, 65, 67, 69, 71, 74, 76, 78, 79, 79, 
79, 80, 80, 81, 82, 82, 83, 83, 82, 82, 81, 78, 77, 77, 76, 75, 
74, 73, 73, 73, 73, 74, 75, 76, 78, 79, 80, 80, 81, 81, 80, 80, 
79, 79, 79, 79, 80, 80, 80, 80, 78, 77, 77, 76, 75, 73, 72, 72, 
71, 70, 69, 68, 67, 67, 66, 65, 64, 62, 60, 59, 58, 57, 56, 55, 
55, 53, 52, 51, 48, 47, 45, 43, 42, 41, 40, 40, 40, 41, 43, 45, 
46, 48, 48, 49, 50, 52, 52, 54, 56, 58, 62, 66, 70, 73, 75, 78, 
80, 81, 82, 82, 83, 84, 85, 87, 88, 89, 92, 93, 94, 95, 96, 96, 
95, 93, 91, 89, 87, 85, 83, 81, 80, 79, 77, 75, 72, 68, 64, 60, 
57, 54, 50, 47, 45, 43, 41, 39, 38, 37, 36, 35, 33, 32, 32, 31, 
31, 31, 32, 35, 36, 39, 42, 45, 49, 51, 54, 56, 58, 61, 62, 64, 
65, 66, 67, 68, 69, 69, 69, 69, 69, 68, 66, 64, 61, 59, 57, 54, 
53, 52, 51, 50, 49, 48, 47, 46, 44, 43, 42, 39, 38, 37, 37, 36, 
37, 37, 36, 36, 36, 36, 35, 35, 35, 35, 36, 36, 38, 38, 41, 43, 
45, 50, 51, 52, 54, 55, 55, 56, 56, 57, 58, 60, 61, 63, 65, 66, 
67, 68, 68, 67, 67, 66, 65, 64, 63, 62, 62, 61, 61, 60, 58, 56, 
53, 50, 48, 44, 40, 37, 34, 32, 31, 30, 30, 30, 30, 30, 29, 29, 
28, 28, 27, 27, 29, 30, 31, 34, 36, 38, 41, 42, 42, 43, 43, 42, 
41, 40, 38, 37, 35, 34, 32, 31, 30, 29, 28, 26, 24, 22, 20, 19, 
17, 16, 15, 14, 14, 13, 12, 11, 10, 10, 9, 8, 8, 7, 6, 5, 
5, 5, 6, 7, 8, 9, 9, 9, 9, 8, 7, 7, 7, 7, 7, 8, 
8, 8, 10, 11, 12, 12, 12, 12, 11, 10, 8, 7, 6, 5, 4, 4, 
4, 4, 3, 2, 1, -1, -4, -7, -11, -16, -19, -20, -22, -23, -23, -23, 
-22, -22, -22, -22, -22, -23, -25, -26, -27, -30, -32, -33, -34, -34, -34, -33, 
-33, -32, -32, -33, -33, -36, -37, -38, -40, -41, -42, -44, -44, -44, -45, -45, 
-45, -45, -45, -45, -46, -45, -47, -47, -47, -47, -47, -46, -45, -46, -46, -47, 
-48, -49, -51, -52, -53, -54, -55, -56, -55, -56, -56, -55, -54, -52, -51, -50, 
-49, -50, -50, -50, -50, -51, -51, -52, -51, -52, -52, -53, -55, -57, -58, -60, 
-61, -61, -62, -63, -62, -63, -64, -65, -65, -66, -67, -67, -68, -69, -70, -73, 
-75, -76, -77, -77, -77, -76, -76, -76, -76, -77, -78, -80, -83, -85, -86, -88, 
-91, -92, -93, -94, -95, -97, -98, -99, -100, -101, -101, -103, -104, -105, -106, -107, 
-107, -106, -105, -104, -101, -99, -95, -93, -92, -90, -89, -87, -86, -85, -85, -85, 
-85, -86, -87, -88, -90, -91, -92, -95, -97, -99, -101, -103, -104, -106, -108, -109, 
-110, -112, -114, -115, -115, -114, -113, -112, -109, -107, -105, -103, -100, -97, -92, -89, 
-86, -83, -80, -78, -74, -71, -67, -64, -62, -58, -56, -54, -52, -51, -50, -49, 
-48, -47, -46, -44, -42, -40, -37, -34, -32, -30, -27, -24, -22, -19, -15, -11, 
-4, 0, 5, 9, 14, 19, 26, 31, 35, 38, 41, 45, 47, 47, 48, 49, 
50, 51, 51, 51, 51, 51, 50, 49, 48, 47, 45, 44, 43, 42, 43, 44, 
45, 47, 49, 50, 51, 52, 54, 55, 57, 59, 60, 62, 63, 65, 67, 69, 
71, 73, 75, 77, 78, 78, 78, 78, 78, 77, 76, 76, 75, 75, 73, 72, 
72, 72, 71, 70, 68, 68, 67, 66, 66, 67, 67, 68, 69, 71, 72, 73, 
74, 75, 76, 77, 78, 80, 81, 82, 83, 84, 84, 85, 86, 87, 88, 89, 
90, 91, 91, 92, 92, 93, 93, 93, 94, 94, 94, 94, 94, 94, 95, 95, 
96, 97, 99, 100, 101, 102, 103, 103, 103, 102, 102, 101, 99, 98, 96, 95, 
95, 94, 91, 90, 89, 86, 84, 82, 77, 75, 72, 69, 65, 60, 55, 51, 
47, 43, 40, 36, 34, 31, 29, 28, 26, 23, 21, 20, 20, 19, 19, 20, 
20, 20, 20, 20, 21, 21, 22, 22, 22, 22, 21, 19, 17, 15, 14, 11, 
9, 7, 5, 4, 3, 0, -3, -5, -6, -8, -10, -11, -12, -12, -13, -13, 
-13, -14, -15, -16, -17, -20, -24, -27, -30, -33, -36, -41, -44, -48, -51, -54, 
-57, -61, -64, -67, -69, -73, -77, -82, -86, -89, -91, -93, -95, -96, -98, -99, 
-100, -101, -101, -101, -100, -99, -98, -97, -94, -93, -92, -90, -90, -88, -87, -87, 
-88, -88, -89, -89, -89, -89, -87, -87, -87, -86, -86, -84, -83, -81, -77, -75, 
-74, -73, -71, -70, -68, -65, -62, -59, -56, -54, -52, -50, -48, -46, -44, -42, 
-40, -38, -37, -36, -36, -37, -37, -38, -40, -41, -43, -46, -47, -49, -52, -54, 
-56, -58, -59, -61, -62, -63, -64, -63, -63, -62, -60, -58, -56, -54, -52, -50, 
-47, -44, -41, -39, -38, -37, -36, -36, -35, -35, -34, -33, -34, -35, -36, -38, 
-39, -41, -44, -45, -47, -49, -51, -53, -56, -59, -62, -64, -66, -68, -70, -72, 
-73, -74, -74, -74, -74, -72, -70, -68, -66, -64, -62, -60, -57, -55, -54, -52, 
-50, -49, -48, -47, -46, -45, -44, -42, -41, -40, -39, -38, -37, -36, -35, -33, 
-32, -31, -30, -29, -28, -28, -27, -27, -26, -26, -26, -25, -25, -25, -25, -24, 
-24, -24, -24, -24, -24, -24, -24, -25, -25, -25, -25, -25, -26, -27, -27, -27, 
-27, -28, -29, -29, -29, -31, -31, -34, -35, -36, -38, -38, -39, -39, -39, -38, 
-38, -37, -35, -33, -30, -28, -25, -22, -19, -16, -15, -14, -12, -11, -9, -8, 
-7, -7, -7, -7, -7, -8, -8, -8, -10, -11, -13, -14, -16, -19, -21, -24, 
-27, -29, -32, -35, -38, -39, -41, -43, -45, -47, -49, -49, -50, -51, -52, -52, 
-51, -49, -48, -47, -46, -45, -43, -42, -41, -40, -39, -39, -39, -39, -39, -40, 
-41, -42, -42, -42, -43, -44, -45, -46, -48, -49, -51, -52, -54, -56, -59, -60, 
-61, -64, -65, -65, -65, -65, -65, -63, -63, -62, -60, -59, -58, -56, -55, -54, 
-53, -53, -51, -51, -50, -49, -49, -48, -48, -48, -49, -50, -52, -54, -56, -56, 
-57, -58, -58, -59, -60, -60, -61, -60, -61, -60, -59, -59, -60, -60, -61, -62, 
-61, -61, -60, -58, -55, -53, -51, -49, -47, -44, -41, -38, -36, -34, -31, -30, 
-29, -28, -27, -26, -25, -24, -24, -23, -23, -22, -22, -22, -22, -22, -21, -21, 
-21, -21, -21, -20, -20, -20, -19, -19, -19, -18, -17, -16, -15, -15, -14, -14, 
-14, -14, -14, -13, -13, -12, -11, -9, -7, -5, -4, -2, 0, 3, 4, 6, 
7, 7, 8, 8, 9, 9, 9, 11, 14, 16, 17, 19, 22, 24, 27, 28, 
29, 31, 32, 35, 36, 37, 39, 40, 41, 44, 45, 45, 46, 47, 47, 48, 
48, 49, 49, 50, 52, 53, 54, 55, 56, 57, 58, 58, 59, 59, 60, 60, 
61, 61, 62, 63, 63, 64, 65, 64, 65, 66, 65, 66, 67, 68, 69, 70, 
71, 72, 73, 74, 74, 74, 74, 74, 75, 75, 76, 77, 79, 81, 83, 84, 
85, 86, 87, 88, 89, 89, 90, 91, 91, 92, 94, 95, 96, 98, 100, 100, 
101, 101, 100, 100, 100, 100, 101, 101, 101, 100, 100, 100, 99, 99, 99, 99, 
99, 98, 97, 96, 96, 95, 95, 95, 94, 93, 92, 91, 90, 90, 89, 88, 
88, 88, 88, 88, 88, 89, 89, 90, 90, 90, 90, 90, 90, 90, 89, 88, 
86, 85, 83, 83, 81, 80, 80, 80, 81, 82, 83, 85, 86, 87, 88, 89, 
90, 91, 92, 92, 93, 93, 93, 93, 94, 94, 93, 93, 91, 90, 89, 87, 
86, 85, 83, 82, 81, 81, 79, 76, 74, 73, 70, 67, 65, 60, 58, 55, 
54, 53, 52, 52, 53, 53, 54, 53, 54, 54, 55, 54, 54, 55, 56, 57, 
59, 60, 62, 63, 65, 66, 66, 67, 67, 66, 66, 65, 65, 64, 64, 65, 
66, 65, 65, 63, 62, 61, 59, 58, 58, 57, 57, 56, 56, 55, 54, 53, 
52, 51, 49, 47, 45, 44, 41, 40, 39, 38, 38, 38, 38, 38, 39, 39, 
39, 39, 39, 39, 38, 38, 38, 38, 38, 38, 39, 39, 40, 39, 39, 39, 
39, 40, 42, 42, 43, 44, 44, 44, 43, 42, 41, 41, 40, 39, 39, 38, 
37, 37, 37, 38, 39, 39, 40, 41, 42, 42, 42, 42, 43, 43, 45, 46, 
48, 48, 49, 50, 51, 51, 52, 52, 53, 53, 54, 53, 52, 52, 51, 50, 
51, 51, 50, 50, 49, 48, 47, 46, 45, 44, 43, 41, 39, 37, 35, 32, 
31, 29, 27, 26, 25, 24, 22, 21, 20, 19, 19, 18, 17, 16, 15, 14, 
14, 13, 13, 13, 13, 13, 13, 13, 14, 15, 15, 17, 19, 21, 22, 24, 
27, 29, 32, 34, 35, 37, 37, 38, 38, 38, 38, 38, 37, 35, 34, 33, 
31, 30, 29, 27, 25, 23, 21, 20, 18, 16, 14, 13, 12, 11, 9, 8, 
7, 7, 7, 8, 8, 9, 10, 10, 10, 12, 12, 12, 12, 12, 12, 12, 
12, 12, 12, 12, 12, 12, 11, 10, 10, 9, 7, 6, 4, 2, 0, -3, 
-6, -9, -11, -12, -14, -16, -20, -22, -25, -29, -32, -35, -39, -42, -44, -46, 
-48, -52, -53, -54, -56, -57, -58, -59, -58, -59, -58, -57, -57, -56, -55, -54, 
-53, -52, -51, -50, -51, -52, -53, -53, -54, -55, -55, -54, -53, -53, -53, -53, 
-52, -51, -52, -51, -52, -52, -51, -52, -53, -52, -53, -53, -54, -54, -55, -56, 
-57, -58, -59, -60, -61, -62, -63, -64, -65, -66, -67, -68, -68, -69, -70, -69, 
-69, -67, -64, -62, -59, -54, -52, -49, -46, -44, -42, -39, -36, -34, -32, -31, 
-30, -28, -27, -26, -25, -24, -23, -23, -24, -24, -25, -26, -28, -29, -29, -31, 
-33, -37, -39, -40, -42, -44, -45, -47, -49, -51, -54, -56, -57, -59, -61, -62, 
-64, -66, -68, -70, -72, -73, -74, -75, -75, -76, -76, -77, -78, -78, -79, -79, 
-79, -79, -79, -79, -79, -79, -78, -78, -77, -77, -76, -75, -75, -75, -74, -73, 
-73, -73, -73, -73, -73, -74, -74, -75, -77, -78, -81, -83, -86, -88, -89, -91, 
-92, -94, -95, -96, -98, -100, -101, -103, -104, -105, -105, -106, -105, -105, -105, -104, 
-103, -101, -99, -98, -95, -93, -88, -85, -83, -80, -77, -74, -69, -65, -61, -57, 
-53, -49, -45, -42, -39, -37, -34, -30, -27, -24, -22, -21, -18, -16, -14, -12, 
-11, -10, -8, -7, -6, -5, -4, -3, -2, 0, 2, 4, 7, 9, 13, 16, 
17, 20, 22, 25, 27, 29, 31, 33, 35, 38, 39, 40, 41, 42, 43, 43, 
43, 43, 42, 42, 42, 42, 41, 41, 41, 41, 42, 42, 42, 42, 42, 41, 
41, 41, 41, 41, 41, 42, 42, 42, 42, 42, 42, 41, 41, 41, 41, 41, 
41, 42, 43, 43, 44, 45, 46, 46, 46, 46, 45, 45, 44, 44, 43, 42, 
41, 40, 39, 39, 39, 39, 39, 38, 38, 38, 38, 39, 41, 44, 46, 48, 
50, 52, 55, 57, 60, 62, 64, 67, 68, 70, 72, 74, 75, 76, 78, 79, 
80, 81, 81, 82, 83, 84, 84, 84, 84, 83, 82, 82, 82, 81, 81, 80, 
80, 80, 79, 78, 77, 76, 76, 76, 76, 74, 71, 70, 69, 67, 65, 63, 
60, 57, 55, 53, 50, 47, 45, 43, 41, 39, 37, 35, 32, 30, 28, 27, 
24, 21, 19, 17, 15, 14, 11, 10, 9, 9, 9, 8, 8, 7, 6, 5, 
5, 4, 4, 3, 2, 2, 1, 1, 0, -1, -2, -3, -3, -6, -8, -9, 
-10, -12, -14, -15, -17, -18, -18, -20, -22, -24, -25, -27, -29, -31, -34, -35, 
-37, -39, -41, -43, -45, -48, -50, -53, -55, -58, -61, -65, -68, -70, -73, -77, 
-80, -82, -84, -86, -87, -89, -90, -90, -91, -92, -93, -93, -93, -93, -94, -94, 
-94, -95, -96, -97, -98, -98, -98, -98, -98, -98, -99, -99, -100, -100, -101, -101, 
-100, -100, -101, -101, -101, -102, -102, -101, -100, -99, -98, -96, -94, -92, -91, -90, 
-88, -87, -85, -84, -83, -83, -82, -80, -79, -78, -77, -75, -73, -69, -66, -63, 
-60, -56, -54, -52, -51, -49, -48, -47, -46, -45, -44, -44, -44, -44, -44, -44, 
-44, -45, -45, -45, -46, -46, -47, -47, -48, -48, -49, -48, -49, -49, -49, -49, 
-49, -50, -50, -50, -50, -50, -50, -51, -51, -53, -55, -55, -56, -57, -58, -59, 
-58, -59, -60, -59, -60, -61, -61, -61, -61, -61, -62, -63, -62, -62, -61, -61, 
-59, -58, -56, -54, -52, -50, -48, -46, -44, -41, -39, -38, -36, -34, -33, -31, 
-30, -29, -28, -27, -26, -25, -24, -22, -21, -20, -20, -20, -20, -20, -20, -20, 
-20, -20, -20, -21, -22, -23, -24, -24, -24, -24, -25, -25, -25, -25, -26, -25, 
-25, -24, -24, -24, -24, -25, -26, -26, -26, -27, -27, -27, -27, -28, -28, -27, 
-27, -27, -27, -27, -27, -29, -29, -29, -30, -30, -30, -30, -29, -29, -28, -28, 
-27, -25, -24, -23, -22, -21, -19, -18, -16, -14, -13, -11, -10, -9, -9, -10, 
-10, -10, -11, -11, -11, -11, -11, -12, -12, -13, -13, -13, -15, -16, -17, -18, 
-18, -20, -22, -23, -24, -24, -24, -24, -24, -24, -24, -24, -23, -23, -23, -23, 
-23, -23, -23, -23, -23, -23, -23, -23, -23, -24, -24, -24, -26, -26, -29, -31, 
-33, -35, -38, -40, -42, -44, -46, -48, -49, -51, -53, -55, -56, -57, -59, -60, 
-61, -62, -63, -64, -65, -64, -63, -63, -62, -63, -62, -62, -62, -61, -60, -58, 
-56, -54, -52, -50, -48, -47, -46, -45, -44, -43, -42, -41, -40, -38, -36, -34, 
-32, -28, -24, -22, -20, -17, -16, -14, -14, -13, -13, -13, -12, -12, -11, -11, 
-10, -10, -11, -11, -12, -13, -14, -14, -14, -14, -13, -13, -12, -12, -12, -12, 
-12, -13, -13, -13, -14, -14, -14, -14, -13, -12, -11, -9, -7, -6, -4, -3, 
-1, 0, 0, 2, 4, 5, 6, 7, 8, 9, 9, 10, 10, 10, 9, 9, 
9, 9, 9, 9, 9, 11, 11, 12, 13, 13, 13, 15, 15, 15, 14, 14, 
13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 14, 14, 14, 
15, 16, 17, 18, 19, 22, 24, 27, 29, 30, 31, 33, 35, 37, 39, 41, 
43, 45, 50, 53, 56, 59, 61, 63, 65, 66, 67, 68, 70, 71, 72, 73, 
75, 76, 77, 80, 82, 83, 84, 84, 84, 83, 82, 82, 82, 81, 80, 80, 
80, 80, 81, 82, 82, 83, 84, 84, 85, 85, 86, 87, 88, 89, 90, 92, 
93, 95, 96, 97, 99, 101, 102, 104, 105, 105, 106, 106, 106, 106, 106, 106, 
106, 106, 107, 106, 106, 106, 104, 102, 101, 100, 98, 97, 94, 92, 91, 90, 
88, 87, 86, 85, 85, 83, 82, 79, 77, 77, 75, 74, 74, 73, 74, 74, 
75, 76, 76, 77, 77, 77, 77, 77, 77, 78, 79, 81, 83, 84, 87, 89, 
91, 92, 93, 94, 95, 95, 95, 95, 95, 95, 94, 94, 94, 94, 94, 92, 
91, 90, 88, 87, 84, 82, 81, 80, 78, 77, 75, 73, 71, 70, 68, 67, 
66, 65, 65, 64, 64, 62, 62, 61, 61, 60, 60, 59, 58, 58, 57, 58, 
57, 58, 59, 59, 60, 60, 61, 62, 61, 60, 60, 61, 60, 60, 61, 61, 
62, 63, 64, 64, 65, 64, 64, 63, 63, 62, 62, 61, 60, 60, 59, 58, 
58, 59, 60, 59, 59, 60, 59, 58, 57, 56, 56, 55, 54, 55, 54, 53, 
54, 54, 55, 55, 56, 55, 56, 56, 55, 56, 57, 58, 60, 61, 62, 63, 
63, 64, 65, 64, 64, 63, 63, 62, 61, 60, 60, 59, 60, 59, 59, 58, 
57, 56, 55, 54, 53, 52, 51, 52, 52, 51, 52, 53, 52, 53, 52, 53, 
52, 51, 52, 53, 54, 56, 58, 60, 61, 62, 63, 64, 65, 65, 66, 66, 
67, 68, 67, 68, 69, 70, 71, 71, 71, 69, 67, 65, 62, 59, 56, 54, 
52, 50, 48, 46, 44, 42, 40, 39, 35, 32, 29, 27, 25, 23, 20, 18, 
17, 15, 14, 13, 11, 9, 8, 7, 6, 3, 1, 0, -1, -1, -1, -1, 
0, 0, 0, 1, 1, 2, 4, 5, 7, 8, 11, 12, 13, 14, 15, 17, 
20, 22, 23, 25, 27, 29, 30, 32, 32, 33, 33, 33, 33, 33, 33, 33, 
32, 31, 31, 30, 29, 29, 28, 28, 27, 26, 25, 24, 23, 22, 21, 21, 
20, 20, 18, 16, 14, 11, 9, 6, 4, 2, -1, -4, -7, -12, -15, -19, 
-23, -28, -33, -41, -47, -52, -58, -62, -70, -75, -79, -83, -86, -90, -93, -96, 
-98, -99, -100, -101, -101, -101, -100, -99, -98, -96, -95, -94, -92, -92, -91, -88, 
-87, -86, -84, -83, -81, -78, -76, -73, -71, -69, -65, -64, -62, -60, -58, -56, 
-54, -52, -50, -47, -45, -44, -41, -40, -38, -37, -36, -34, -33, -32, -31, -30, 
-29, -27, -26, -25, -24, -23, -22, -21, -20, -20, -20, -20, -21, -22, -22, -22, 
-23, -23, -24, -24, -24, -23, -23, -22, -21, -20, -20, -20, -19, -19, -19, -19, 
-19, -19, -19, -21, -22, -23, -24, -25, -28, -30, -31, -32, -34, -35, -37, -38, 
-38, -39, -41, -42, -44, -46, -47, -48, -49, -52, -53, -55, -58, -60, -61, -63, 
-64, -65, -67, -69, -70, -73, -75, -77, -78, -79, -81, -82, -84, -86, -88, -89, 
-90, -91, -91, -90, -90, -90, -91, -91, -93, -94, -95, -97, -99, -101, -102, -103, 
-105, -105, -105, -105, -104, -103, -103, -102, -101, -101, -101, -101, -102, -103, -103, -104, 
-104, -102, -100, -98, -96, -94, -92, -91, -88, -86, -85, -82, -80, -77, -76, -74, 
-72, -70, -68, -63, -59, -56, -53, -49, -46, -41, -38, -35, -30, -26, -21, -16, 
-13, -9, -5, -1, 6, 9, 13, 17, 20, 24, 29, 32, 35, 38, 42, 45, 
47, 50, 52, 54, 56, 57, 58, 59, 60, 61, 61, 62, 63, 63, 64, 65, 
65, 66, 66, 66, 66, 66, 66, 66, 65, 65, 65, 65, 65, 64, 63, 62, 
61, 60, 58, 56, 54, 52, 49, 46, 44, 42, 39, 37, 34, 31, 28, 24, 
21, 18, 13, 11, 9, 6, 4, 2, -1, -2, -3, -4, -5, -7, -8, -8, 
-8, -8, -8, -5, -3, -1, 0, 2, 5, 8, 10, 11, 12, 14, 17, 20, 
22, 24, 27, 31, 37, 41, 45, 48, 52, 56, 61, 64, 67, 71, 73, 77, 
79, 82, 85, 87, 90, 91, 92, 93, 93, 93, 93, 93, 93, 93, 91, 89, 
86, 84, 82, 79, 76, 74, 69, 67, 64, 61, 59, 56, 52, 49, 46, 44, 
40, 36, 32, 28, 25, 22, 19, 14, 11, 9, 6, 3, 0, -5, -8, -10, 
-13, -16, -19, -21, -23, -26, -29, -31, -35, -38, -41, -44, -48, -53, -57, -61, 
-64, -66, -69, -73, -76, -79, -81, -84, -87, -91, -95, -98, -100, -103, -107, -110, 
-112, -113, -114, -116, -117, -118, -119, -120, -122, -122, -124, -124, -125, -126, -127, -127, 
-127, -126, -126, -125, -123, -120, -118, -116, -113, -109, -106, -101, -98, -95, -92, -90, 
-87, -85, -84, -82, -79, -77, -73, -70, -66, -62, -59, -55, -50, -47, -45, -43, 
-42, -41, -40, -40, -39, -38, -37, -36, -35, -34, -33, -32, -32, -31, -31, -31, 
-30, -30, -30, -30, -29, -28, -27, -26, -25, -24, -24, -24, -24, -24, -25, -26, 
-27, -28, -30, -32, -33, -35, -36, -38, -40, -43, -44, -47, -50, -52, -54, -57, 
-59, -61, -63, -65, -66, -67, -67, -67, -68, -67, -66, -66, -65, -65, -65, -65, 
-63, -63, -62, -60, -58, -56, -53, -51, -49, -46, -43, -40, -37, -35, -33, -31, 
-29, -28, -26, -25, -24, -22, -20, -19, -17, -16, -15, -15, -14, -14, -14, -14, 
-14, -14, -15, -15, -15, -15, -15, -14, -14, -13, -13, -12, -12, -11, -11, -10, 
-10, -10, -10, -10, -10, -11, -11, -11, -12, -13, -14, -14, -14, -15, -15, -16, 
-16, -16, -16, -17, -17, -18, -18, -18, -18, -20, -21, -22, -24, -25, -26, -28, 
-30, -31, -33, -35, -38, -39, -41, -41, -43, -44, -45, -47, -47, -48, -49, -50, 
-50, -51, -50, -51, -52, -52, -53, -54, -55, -56, -58, -60, -62, -64, -65, -67, 
-68, -69, -70, -69, -69, -68, -68, -66, -66, -65, -63, -62, -60, -58, -58, -57, 
-56, -55, -53, -52, -50, -49, -48, -47, -47, -46, -46, -45, -44, -44, -43, -42, 
-42, -41, -40, -39, -37, -36, -35, -34, -34, -34, -33, -32, -31, -30, -29, -29, 
-29, -29, -29, -29, -29, -29, -29, -29, -30, -31, -32, -32, -32, -33, -33, -34, 
-34, -34, -36, -37, -39, -40, -40, -40, -41, -42, -42, -42, -41, -41, -41, -41, 
-43, -44, -44, -45, -45, -45, -44, -44, -44, -43, -43, -42, -41, -41, -40, -39, 
-40, -42, -44, -44, -46, -47, -47, -48, -48, -47, -48, -49, -50, -51, -53, -54, 
-56, -58, -61, -63, -66, -69, -71, -73, -74, -76, -77, -78, -79, -80, -80, -80, 
-80, -80, -79, -78, -78, -76, -74, -72, -69, -68, -65, -63, -61, -58, -54, -51, 
-48, -45, -43, -40, -36, -34, -32, -29, -26, -22, -18, -15, -13, -10, -9, -6, 
-3, 0, };
