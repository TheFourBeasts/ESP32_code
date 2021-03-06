const unsigned int sampleRate = 19000;  // 22050, but slower playback
const unsigned int sampleCount = 2588;
const signed char samples[] = {
0, 0, 1, 2, 5, 8, 12, 14, 15, 16, 16, 16, 14, 15, 16, 17,
19, 20, 22, 23, 23, 20, 15, 6, 1, -6, -11, -15, -17, -20, -20, -21, 
-21, -22, -25, -26, -27, -27, -26, -26, -23, -23, -24, -25, -28, -31, -35, -37, 
-39, -39, -39, -37, -36, -36, -36, -38, -41, -44, -47, -49, -51, -52, -52, -50, 
-51, -51, -52, -52, -52, -51, -51, -51, -50, -51, -49, -49, -49, -50, -52, -54, 
-59, -63, -66, -69, -71, -73, -74, -74, -75, -76, -77, -75, -73, -71, -70, -71, 
-70, -69, -68, -69, -68, -66, -61, -58, -54, -50, -46, -41, -35, -32, -29, -27, 
-28, -29, -31, -31, -31, -31, -29, -26, -23, -21, -20, -18, -16, -15, -15, -17, 
-18, -21, -25, -28, -30, -30, -30, -30, -30, -29, -27, -23, -18, -14, -9, -6, 
-1, 4, 9, 15, 18, 20, 21, 21, 21, 21, 21, 21, 20, 19, 19, 17, 
15, 14, 13, 13, 14, 16, 19, 23, 27, 33, 40, 44, 48, 53, 58, 63, 
66, 67, 64, 59, 54, 46, 43, 40, 38, 37, 37, 36, 35, 32, 29, 27, 
25, 23, 22, 20, 17, 14, 11, 11, 12, 14, 15, 18, 22, 24, 25, 26, 
26, 26, 24, 23, 22, 19, 16, 11, 8, 6, 3, 2, 1, 1, 1, 1, 
1, 1, 2, 4, 6, 8, 9, 10, 10, 10, 10, 9, 8, 7, 4, 2, 
0, -3, -3, -3, -2, -2, -3, -5, -7, -10, -12, -12, -12, -11, -9, -8, 
-7, -6, -5, -6, -6, -5, -5, -4, -3, -1, 3, 5, 6, 7, 8, 10, 
13, 16, 18, 21, 24, 25, 27, 30, 33, 34, 35, 36, 37, 37, 37, 37, 
37, 38, 38, 39, 41, 42, 45, 46, 46, 46, 46, 45, 45, 45, 45, 44, 
42, 40, 34, 32, 30, 28, 28, 27, 25, 24, 23, 22, 22, 19, 17, 17, 
17, 15, 13, 10, 8, 5, 2, 0, -2, -4, -4, -3, -3, -3, -2, -3, 
-4, -5, -6, -8, -10, -11, -11, -10, -9, -7, -5, -5, -6, -6, -6, -7, 
-8, -9, -9, -9, -9, -7, -7, -7, -8, -9, -8, -7, -5, -2, 0, 2, 
2, 2, 1, 1, 1, 0, -4, -6, -7, -8, -9, -9, -10, -12, -12, -12, 
-11, -7, -4, -2, -1, -1, -2, -5, -6, -7, -8, -8, -6, -4, -3, -3, 
-4, -7, -13, -18, -23, -28, -32, -37, -43, -48, -51, -53, -54, -53, -53, -53, 
-53, -54, -55, -55, -55, -55, -56, -56, -57, -58, -59, -61, -62, -63, -66, -68, 
-72, -75, -77, -79, -80, -81, -82, -82, -84, -85, -86, -86, -85, -84, -83, -82, 
-83, -84, -83, -84, -83, -78, -74, -70, -67, -63, -53, -47, -40, -36, -34, -34, 
-32, -29, -25, -21, -16, -12, -5, 0, 7, 12, 16, 22, 26, 29, 34, 39, 
46, 56, 62, 69, 76, 82, 88, 93, 95, 95, 94, 93, 92, 91, 90, 88, 
87, 86, 85, 86, 87, 88, 88, 87, 86, 87, 88, 87, 85, 80, 78, 77, 
76, 74, 72, 67, 63, 61, 60, 60, 59, 59, 57, 56, 54, 51, 47, 43, 
37, 30, 23, 18, 8, 0, -8, -14, -18, -20, -22, -22, -23, -24, -25, -27, 
-27, -28, -29, -30, -32, -37, -41, -44, -49, -54, -58, -62, -64, -65, -66, -67, 
-66, -66, -66, -66, -65, -65, -65, -65, -61, -57, -52, -48, -43, -40, -37, -35, 
-33, -28, -25, -22, -18, -15, -10, -3, 0, 2, 4, 7, 15, 21, 26, 31, 
35, 39, 45, 51, 56, 61, 66, 70, 77, 80, 81, 81, 79, 77, 77, 79, 
81, 82, 83, 81, 77, 74, 71, 69, 67, 65, 64, 61, 58, 57, 55, 56, 
56, 54, 54, 54, 51, 50, 49, 47, 44, 40, 36, 34, 33, 31, 29, 23, 
20, 18, 17, 14, 11, 7, 3, 1, -2, -5, -8, -12, -14, -16, -16, -14, 
-9, -5, -2, 1, 2, 3, 3, 2, 0, -1, -4, -6, -8, -9, -10, -11, 
-13, -12, -9, -7, -5, -2, -1, 0, 1, 2, 5, 7, 7, 4, 1, 0, 
-1, -2, -1, 0, 1, 1, 2, 2, 1, 0, -1, -2, -3, -5, -9, -12, 
-14, -16, -19, -21, -21, -22, -22, -23, -23, -24, -25, -27, -29, -30, -33, -40, 
-44, -49, -54, -58, -59, -61, -62, -63, -64, -63, -64, -66, -69, -71, -72, -73, 
-74, -77, -79, -81, -82, -83, -84, -84, -86, -87, -88, -89, -89, -90, -93, -95, 
-100, -103, -103, -104, -106, -108, -111, -111, -109, -106, -105, -104, -103, -101, -99, -98, 
-98, -97, -97, -97, -97, -98, -99, -98, -97, -96, -95, -94, -90, -87, -84, -82, 
-81, -80, -78, -73, -67, -63, -59, -55, -47, -40, -33, -25, -17, -10, -2, 1, 
2, 1, 0, -2, -4, -6, -7, -6, -5, -3, -1, 0, 1, 4, 7, 10, 
12, 14, 15, 18, 23, 27, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 
44, 47, 50, 52, 53, 54, 56, 59, 62, 65, 66, 67, 67, 68, 68, 69, 
69, 70, 71, 70, 69, 68, 69, 70, 72, 73, 74, 75, 74, 73, 71, 68, 
64, 61, 57, 57, 56, 56, 57, 58, 59, 59, 59, 60, 60, 57, 55, 53, 
50, 47, 43, 39, 37, 37, 37, 36, 36, 37, 37, 38, 39, 40, 41, 41, 
41, 41, 41, 41, 40, 39, 37, 35, 35, 34, 34, 36, 38, 40, 40, 40, 
40, 41, 41, 41, 41, 40, 39, 38, 38, 38, 37, 37, 35, 33, 34, 34, 
34, 33, 32, 30, 30, 26, 22, 16, 11, 6, 2, 0, 0, 1, 2, 2, 
1, 2, 4, 5, 6, 7, 6, 4, 4, 5, 8, 12, 14, 13, 12, 10, 
8, 6, 6, 5, 3, 1, -2, -5, -6, -6, -7, -10, -13, -17, -18, -19, 
-19, -18, -18, -15, -13, -12, -10, -9, -9, -9, -8, -4, 0, 5, 11, 14, 
17, 18, 18, 18, 15, 13, 11, 11, 12, 12, 13, 13, 14, 14, 14, 14, 
14, 16, 18, 19, 22, 27, 30, 31, 29, 29, 27, 25, 23, 22, 20, 18, 
14, 11, 7, 3, 0, -7, -11, -14, -14, -15, -15, -17, -19, -22, -26, -30, 
-34, -41, -46, -51, -53, -56, -57, -58, -59, -61, -63, -66, -70, -72, -74, -77, 
-80, -84, -91, -94, -95, -97, -99, -104, -106, -109, -112, -114, -116, -117, -116, -113, 
-110, -108, -106, -106, -106, -106, -105, -102, -97, -93, -89, -86, -82, -80, -76, -72, 
-67, -63, -59, -55, -50, -46, -43, -40, -37, -30, -25, -20, -15, -12, -9, -4, 
-1, 3, 7, 13, 17, 24, 28, 34, 39, 42, 44, 44, 44, 44, 44, 44, 
42, 40, 38, 37, 38, 39, 39, 40, 40, 38, 38, 37, 38, 40, 43, 47, 
51, 54, 55, 55, 55, 53, 52, 51, 51, 51, 49, 47, 42, 39, 35, 31, 
28, 23, 17, 14, 10, 6, 1, -2, -8, -11, -13, -16, -17, -19, -21, -21, 
-20, -18, -15, -10, -8, -8, -9, -12, -15, -17, -19, -21, -22, -25, -29, -31, 
-32, -32, -32, -31, -27, -23, -18, -14, -8, 0, 5, 10, 16, 20, 22, 21, 
19, 16, 15, 14, 15, 18, 22, 27, 31, 34, 38, 39, 40, 42, 43, 44, 
48, 51, 54, 56, 57, 57, 54, 53, 53, 52, 52, 52, 51, 48, 44, 41, 
37, 32, 30, 28, 27, 27, 28, 28, 28, 27, 27, 27, 24, 22, 18, 13, 
7, 1, -8, -12, -15, -18, -21, -23, -21, -20, -18, -16, -16, -15, -15, -17, 
-18, -19, -20, -20, -19, -18, -17, -15, -14, -11, -8, -3, 1, 5, 14, 19, 
22, 24, 24, 24, 22, 23, 24, 26, 30, 34, 45, 52, 58, 63, 67, 71, 
73, 74, 75, 75, 74, 71, 67, 64, 61, 58, 57, 59, 62, 64, 66, 69, 
72, 74, 76, 78, 76, 74, 67, 62, 59, 56, 53, 50, 47, 44, 43, 41, 
41, 39, 37, 35, 32, 29, 27, 25, 23, 21, 17, 14, 7, 1, -6, -14, 
-22, -30, -41, -47, -51, -55, -57, -60, -65, -67, -70, -72, -74, -78, -79, -83, 
-87, -91, -95, -100, -104, -107, -108, -109, -110, -110, -112, -115, -118, -121, -122, -122, 
-121, -121, -121, -120, -118, -115, -112, -108, -105, -102, -100, -97, -94, -90, -86, -82, 
-80, -78, -75, -72, -70, -69, -69, -69, -66, -63, -60, -55, -51, -47, -44, -40, 
-36, -34, -33, -33, -33, -31, -28, -26, -23, -22, -20, -19, -16, -14, -12, -10, 
-9, -10, -12, -14, -16, -20, -23, -27, -28, -29, -29, -27, -26, -23, -23, -23, 
-21, -20, -16, -14, -12, -11, -9, -7, -5, -4, -4, -3, -3, -2, 1, 2, 
1, -1, -4, -9, -10, -11, -11, -10, -8, -5, -2, 2, 6, 11, 15, 17, 
20, 24, 27, 31, 35, 38, 41, 44, 48, 52, 56, 58, 61, 63, 65, 67, 
68, 68, 68, 68, 67, 66, 66, 67, 67, 66, 65, 64, 64, 64, 65, 63, 
60, 58, 56, 54, 53, 52, 50, 50, 52, 54, 57, 61, 65, 67, 68, 68, 
68, 69, 68, 68, 67, 66, 65, 63, 60, 56, 52, 49, 47, 44, 43, 42, 
39, 35, 28, 24, 20, 16, 11, 6, 4, 3, 3, 3, 2, 2, -2, -5, 
-6, -7, -7, -6, -7, -9, -11, -11, -9, -6, -5, -6, -7, -8, -8, -6, 
-4, -1, 2, 5, 8, 8, 8, 9, 10, 11, 13, 15, 17, 19, 20, 21, 
24, 27, 30, 34, 37, 39, 42, 45, 50, 55, 59, 64, 67, 69, 71, 72, 
73, 72, 70, 69, 67, 65, 62, 59, 58, 56, 55, 54, 52, 52, 50, 48, 
49, 52, 56, 58, 58, 58, 57, 55, 54, 53, 50, 47, 44, 37, 30, 24, 
17, 12, 6, 2, -2, -6, -10, -14, -20, -24, -27, -31, -35, -38, -41, -42, 
-43, -44, -45, -48, -51, -54, -57, -62, -66, -72, -76, -79, -82, -85, -86, -86, 
-87, -87, -88, -90, -92, -92, -93, -95, -96, -95, -92, -89, -86, -85, -85, -84, 
-83, -82, -80, -78, -77, -75, -74, -72, -70, -68, -67, -66, -64, -63, -61, -58, 
-57, -56, -57, -58, -59, -58, -55, -52, -50, -47, -45, -45, -45, -46, -46, -43, 
-40, -36, -31, -29, -25, -21, -17, -11, -9, -8, -8, -9, -12, -18, -21, -23, 
-25, -26, -28, -29, -30, -32, -34, -35, -38, -39, -39, -37, -34, -32, -32, -32, 
-33, -34, -36, -36, -36, -36, -36, -36, -36, -34, -33, -32, -31, -29, -28, -25, 
-23, -20, -20, -21, -22, -24, -26, -27, -27, -27, -26, -26, -26, -26, -25, -24, 
-21, -19, -17, -13, -7, 1, 7, 13, 19, 25, 30, 37, 41, 45, 49, 51, 
52, 53, 53, 53, 53, 54, 57, 58, 59, 60, 61, 63, 67, 70, 73, 76, 
80, 82, 86, 88, 89, 90, 91, 91, 91, 92, 91, 92, 93, 95, 94, 91, 
88, 83, 77, 73, 71, 68, 65, 62, 56, 53, 50, 46, 43, 39, 34, 33, 
30, 27, 24, 21, 18, 15, 11, 5, -1, -12, -19, -23, -29, -35, -41, -48, 
-52, -55, -57, -59, -60, -62, -64, -66, -67, -68, -73, -76, -79, -80, -79, -78, 
-76, -75, -74, -72, -70, -68, -63, -59, -55, -52, -47, -38, -34, -29, -25, -21, 
-16, -9, -5, 0, 5, 9, 12, 17, 20, 24, 26, 27, 26, 26, 26, 27, 
29, 33, 37, 40, 42, 44, 46, 49, 52, 54, 56, 60, 64, 71, 75, 78, 
81, 83, 84, 85, 85, 86, 86, 87, 85, 85, 83, 80, 78, 76, 72, 70, 
67, 64, 60, 56, 54, 54, 53, 53, 53, 54, 55, 57, 59, 60, 60, 58, 
58, 55, 52, 49, 47, 44, 40, 36, 33, 30, 25, 21, 18, 13, 9, 6, 
0, -4, -7, -10, -11, -11, -10, -9, -9, -8, -7, -6, -5, -4, -3, -4, 
-4, -4, -6, -8, -11, -15, -19, -21, -21, -21, -22, -26, -31, -36, -40, -42, 
-42, -42, -40, -39, -38, -35, -32, -30, -25, -23, -22, -22, -22, -22, -21, -20, 
-20, -20, -20, -19, -20, -21, -23, -26, -28, -31, -32, -32, -32, -32, -30, -29, 
-29, -30, -32, -35, -39, -40, -40, -40, -38, -39, -42, -45, -48, -50, -51, -53, 
-55, -58, -61, -63, -67, -73, -77, -80, -83, -85, -89, -89, -90, -91, -92, -93, 
-94, -94, -95, -98, -101, -103, -106, -106, -106, -108, -110, -114, -116, -117, -119, -121, 
-124, -126, -126, -125, -124, -122, -120, -115, -109, -101, -92, -84, -73, -67, -62, -58, 
-54, -49, -43, -41, -39, -36, -31, -28, -25, -24, -23, -21, -18, -12, -7, -1, 
4, 11, 17, 25, 30, 36, 42, 48, 52, 57, 58, 59, 61, 63, 69, 75, 
80, 85, 90, 95, 100, 102, 102, 102, 102, 102, 103, 103, 102, 100, 99, 98, 
97, 97, 97, 97, 97, 98, 100, 102, 104, 105, 104, 99, 95, 91, 88, 86, 
81, 76, 71, 66, 62, 58, 52, 49, 47, 44, 41, 39, 35, 32, 27, 23, 
18, 10, 6, 2, -2, -6, -9, -11, -11, -10, -8, -9, -11, -15, -17, -18, 
-19, -19, -22, -26, -30, -34, -35, -35, -35, -37, -39, -39, -38, -34, -32, -31, 
-30, -30, -28, -24, -22, -21, -19, -17, -16, -12, -9, -7, -5, -5, -5, -5, 
-5, -5, -4, -4, -4, -5, -6, -7, -8, -10, -10, -10, -9, -8, -6, -2, 
1, 4, 6, 7, 9, 13, 17, 22, 27, 31, 36, 39, 40, 41, 42, 43, 
44, 46, 48, 49, 49, 49, 48, 48, 49, 51, 52, 54, 58, 61, 62, 63, 
64, 64, 64, 64, 62, 63, 64, 61, 59, 57, 55, 56, 57, 58, 60, 60, 
61, 62, 63, 63, 60, 57, 55, 53, 52, 54, 55, 55, 55, 55, 54, 53, 
52, 51, 49, 50, 50, 51, 51, 49, 47, 42, 40, 38, 36, 35, 35, 34, 
33, 31, 27, 24, 18, 15, 14, 14, 14, 14, 11, 8, 4, 0, -4, -9, 
-17, -21, -23, -26, -28, -31, -32, -34, -36, -40, -44, -50, -54, -56, -58, -62, 
-66, -70, -72, -74, -76, -80, -85, -90, -95, -98, -101, -103, -108, -111, -115, -119, 
-121, -125, -126, -127, -127, -126, -125, -121, -119, -116, -113, -110, -108, -108, -107, -106, 
-106, -106, -109, -110, -110, -110, -110, -111, -114, -116, -118, -120, -119, -117, -112, -108, 
-105, -103, -101, -99, -98, -98, -97, -96, -95, -90, -88, -88, -91, -93, -96, -98, 
-96, -93, -91, -89, -87, -86, -83, -81, -80, -78, -76, -74, -70, -66, -61, -54, 
-41, -32, -23, -15, -7, 1, 5, 6, 5, 5, 6, 10, 14, 17, 22, 26, 
31, 39, 44, 48, 49, 50, 50, 50, 52, 54, 56, 56, 55, 57, 60, 66, 
72, 79, 89, 97, 105, 112, 117, 121, 120, 118, 117, 115, 114, 112, 109, 106, 
102, 99, 98, 101, 105, 109, 112, 116, 120, 122, 125, 126, 126, 125, 123, 121, 
121, 121, 121, 122, 122, 123, 122, 121, 120, 115, 111, 107, 104, 103, 103, 104, 
103, 100, 97, 95, 90, 87, 85, 83, 81, 79, 77, 76, 73, 70, 68, 65, 
61, 59, 59, 57, 56, 53, 52, 50, 47, 43, 38, 28, 22, 16, 10, 5, 
0, -6, -7, -9, -10, -11, -12, -14, -17, -19, -20, -19, -14, -12, -12, -12, 
-13, -14, -15, -14, -12, -11, -11, -12, -12, -12, -12, -11, -9, -8, -8, -10, 
-12, -14, -16, -18, -19, -19, -19, -17, -15, -8, -4, 0, };
