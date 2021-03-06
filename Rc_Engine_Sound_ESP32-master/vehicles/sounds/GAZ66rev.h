const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 4173;
const signed char revSamples[] = {
0, 2, 8, 15, 22, 26, 27, 26, 27, 30, 33, 34, 31, 26, 24, 25, 
28, 33, 36, 41, 46, 47, 44, 32, 26, 24, 26, 29, 33, 33, 29, 24, 
20, 20, 22, 25, 28, 28, 22, 13, 4, 3, 6, 11, 15, 19, 20, 20, 
20, 23, 29, 43, 54, 58, 56, 50, 44, 42, 41, 41, 42, 44, 45, 40, 
35, 34, 34, 37, 38, 35, 29, 22, 17, 15, 19, 22, 26, 29, 28, 24, 
15, 12, 12, 16, 22, 32, 36, 34, 31, 27, 27, 33, 39, 43, 43, 41, 
37, 30, 25, 18, 11, 9, 12, 15, 18, 21, 22, 20, 19, 22, 28, 34, 
37, 38, 38, 37, 37, 39, 45, 54, 57, 59, 57, 53, 49, 45, 44, 44, 
44, 43, 41, 35, 29, 24, 24, 28, 34, 35, 32, 28, 28, 29, 33, 36, 
37, 39, 39, 37, 34, 30, 28, 23, 17, 8, 4, 2, -1, -1, 0, 0, 
-1, -1, 0, 1, 3, 4, 4, 3, -1, -6, -14, -14, -12, -10, -8, -8, 
-9, -10, -10, -9, -10, -14, -16, -15, -15, -15, -17, -19, -17, -16, -17, -20, 
-23, -26, -27, -28, -31, -34, -38, -39, -39, -38, -38, -39, -39, -41, -42, -43, 
-45, -47, -50, -52, -53, -54, -53, -51, -50, -50, -52, -55, -59, -59, -56, -51, 
-46, -44, -43, -46, -49, -51, -50, -49, -49, -49, -51, -52, -53, -54, -51, -46, 
-41, -36, -33, -34, -40, -42, -42, -38, -34, -33, -36, -43, -52, -61, -70, -74, 
-71, -65, -59, -58, -65, -79, -85, -85, -80, -75, -68, -66, -68, -71, -75, -78, 
-78, -74, -67, -60, -56, -56, -60, -63, -64, -64, -62, -54, -46, -37, -28, -21, 
-19, -25, -28, -28, -21, -10, 6, 12, 13, 13, 13, 14, 17, 19, 22, 23, 
24, 24, 25, 26, 28, 28, 29, 32, 34, 35, 38, 44, 49, 55, 55, 52, 
50, 46, 45, 49, 53, 53, 50, 46, 47, 51, 55, 58, 61, 64, 63, 59, 
56, 55, 54, 52, 51, 53, 52, 50, 49, 52, 54, 56, 56, 55, 51, 42, 
39, 39, 43, 44, 42, 40, 42, 48, 55, 62, 64, 59, 54, 50, 50, 55, 
64, 68, 69, 66, 61, 57, 51, 51, 54, 61, 68, 74, 74, 69, 63, 61, 
61, 67, 71, 72, 73, 74, 73, 67, 60, 53, 47, 43, 43, 45, 47, 48, 
45, 40, 31, 25, 21, 22, 27, 31, 32, 28, 23, 17, 11, 6, 6, 7, 
10, 14, 16, 10, 2, -6, -11, -13, -15, -15, -13, -11, -10, -10, -9, -10, 
-12, -15, -14, -13, -12, -11, -10, -11, -16, -27, -31, -33, -33, -32, -32, -33, 
-35, -40, -45, -49, -50, -52, -55, -59, -66, -74, -79, -79, -78, -76, -74, -72, 
-71, -73, -74, -74, -74, -75, -82, -87, -90, -93, -94, -96, -97, -97, -95, -92, 
-91, -90, -92, -95, -98, -102, -105, -105, -104, -101, -99, -97, -94, -93, -92, -90, 
-90, -91, -94, -96, -97, -97, -96, -94, -92, -91, -89, -89, -89, -90, -90, -90, 
-87, -84, -80, -78, -78, -79, -77, -75, -76, -78, -79, -79, -78, -78, -77, -75, 
-71, -68, -66, -62, -55, -49, -46, -44, -40, -37, -35, -34, -33, -33, -32, -27, 
-22, -17, -14, -12, -9, -2, 2, 4, 5, 6, 7, 11, 11, 10, 9, 8, 
11, 16, 23, 28, 30, 29, 20, 14, 12, 14, 22, 31, 39, 41, 41, 40, 
39, 37, 40, 46, 50, 50, 44, 30, 24, 23, 26, 32, 41, 43, 42, 41, 
41, 41, 43, 44, 48, 54, 59, 59, 56, 53, 51, 50, 52, 55, 56, 57, 
58, 60, 64, 66, 66, 63, 57, 51, 45, 41, 43, 47, 52, 56, 60, 60, 
59, 58, 57, 56, 56, 52, 47, 41, 38, 40, 45, 47, 48, 47, 45, 37, 
31, 26, 25, 25, 26, 28, 28, 27, 27, 27, 28, 31, 35, 40, 45, 49, 
51, 51, 49, 48, 49, 51, 49, 44, 39, 36, 37, 42, 46, 44, 39, 33, 
29, 25, 26, 27, 27, 26, 25, 25, 27, 29, 31, 31, 30, 21, 11, 0, 
-9, -12, -8, -5, -4, -4, -4, -3, -2, -3, -3, -3, -3, -5, -10, -12, 
-11, -8, -4, 2, 4, 4, 3, 0, -5, -10, -10, -8, -4, -1, 2, 9, 
15, 20, 24, 28, 32, 33, 32, 31, 31, 33, 35, 34, 32, 28, 25, 22, 
20, 17, 15, 14, 11, 7, 4, 4, 6, 10, 12, 12, 9, 6, 1, -5, 
-16, -20, -20, -18, -16, -15, -16, -18, -21, -25, -28, -30, -30, -30, -32, -36, 
-39, -38, -32, -27, -23, -24, -26, -26, -24, -21, -18, -17, -16, -16, -16, -17, 
-16, -14, -6, 0, 6, 7, 5, 1, -7, -10, -11, -9, -3, 4, 11, 12, 
10, 6, 1, -6, -9, -9, -7, -6, -7, -13, -16, -15, -13, -10, -5, 1, 
4, 7, 8, 8, 4, 0, -5, -9, -9, -7, -3, -1, -1, -1, -1, -1, 
2, 2, 1, 1, 2, 10, 17, 22, 24, 21, 13, 7, 11, 21, 35, 48, 
54, 50, 40, 31, 27, 28, 37, 44, 48, 48, 46, 43, 45, 52, 58, 63, 
66, 64, 59, 57, 60, 66, 70, 69, 63, 57, 54, 54, 57, 66, 73, 76, 
75, 70, 61, 58, 61, 66, 71, 73, 70, 69, 74, 83, 93, 98, 92, 79, 
66, 57, 59, 80, 96, 103, 99, 86, 68, 47, 43, 49, 61, 72, 79, 75, 
64, 48, 32, 22, 22, 25, 29, 31, 32, 33, 32, 27, 23, 19, 18, 17, 
14, 10, 3, -5, -13, -17, -14, -8, -1, 3, 4, 0, -4, -7, -10, -13, 
-17, -22, -23, -21, -15, -9, -7, -10, -15, -20, -23, -25, -24, -20, -13, -5, 
0, -2, -16, -28, -37, -41, -39, -30, -23, -21, -26, -35, -45, -53, -50, -45, 
-41, -41, -45, -59, -69, -75, -78, -75, -70, -69, -72, -76, -79, -78, -79, -82, 
-85, -89, -91, -90, -88, -87, -87, -86, -84, -81, -77, -71, -65, -64, -67, -80, 
-89, -96, -98, -93, -83, -65, -61, -66, -79, -97, -114, -108, -88, -61, -39, -32, 
-50, -75, -96, -105, -97, -63, -40, -27, -30, -45, -65, -86, -84, -70, -51, -32, 
-21, -22, -29, -41, -55, -67, -71, -67, -59, -51, -45, -45, -49, -54, -57, -55, 
-50, -46, -40, -39, -42, -45, -47, -52, -52, -50, -46, -41, -36, -32, -35, -43, 
-50, -52, -47, -31, -21, -16, -17, -21, -22, -17, -5, 6, 13, 12, 1, -8, 
-12, -9, -1, 10, 23, 28, 30, 27, 23, 18, 19, 25, 33, 38, 39, 36, 
30, 21, 16, 17, 25, 38, 41, 38, 32, 26, 24, 31, 41, 50, 54, 52, 
42, 36, 34, 37, 44, 52, 59, 56, 51, 45, 40, 44, 51, 58, 64, 65, 
62, 53, 49, 51, 60, 72, 84, 89, 85, 76, 67, 62, 67, 75, 84, 89, 
88, 80, 65, 59, 59, 63, 70, 74, 69, 61, 53, 46, 42, 45, 51, 57, 
62, 62, 57, 46, 40, 37, 38, 41, 44, 38, 30, 19, 12, 12, 21, 30, 
38, 42, 42, 34, 17, 7, 2, 1, 4, 6, 4, 1, -4, -10, -12, -4, 
6, 16, 23, 24, 16, -2, -14, -21, -22, -19, -10, -7, -7, -13, -24, -36, 
-54, -63, -66, -64, -62, -62, -69, -74, -75, -71, -64, -56, -56, -61, -69, -77, 
-82, -83, -82, -82, -81, -82, -85, -90, -93, -93, -92, -89, -87, -87, -88, -90, 
-94, -97, -104, -109, -110, -107, -101, -97, -95, -97, -100, -101, -100, -97, -94, -90, 
-86, -84, -85, -90, -91, -91, -86, -80, -74, -68, -67, -70, -75, -81, -85, -86, 
-85, -81, -78, -75, -74, -75, -76, -75, -69, -62, -51, -45, -43, -43, -46, -46, 
-42, -37, -31, -26, -20, -15, -14, -16, -20, -25, -27, -23, -15, -7, 0, 2, 
-3, -7, -8, -8, -4, 1, 5, 4, 2, -1, -2, -1, 3, 8, 12, 14, 
14, 13, 11, 10, 10, 13, 16, 21, 22, 22, 21, 21, 22, 25, 30, 33, 
33, 32, 29, 29, 32, 39, 46, 52, 57, 56, 53, 48, 45, 47, 50, 51, 
48, 44, 43, 43, 43, 41, 40, 39, 41, 46, 47, 49, 51, 54, 59, 62, 
67, 71, 75, 78, 79, 78, 75, 73, 71, 70, 68, 64, 59, 53, 49, 49, 
53, 59, 66, 69, 66, 59, 56, 57, 63, 69, 74, 73, 68, 63, 59, 56, 
53, 54, 57, 59, 59, 57, 53, 53, 54, 57, 61, 64, 64, 61, 56, 52, 
48, 44, 43, 45, 47, 48, 47, 43, 40, 40, 40, 42, 45, 49, 54, 58, 
64, 69, 72, 71, 69, 68, 70, 72, 72, 69, 66, 63, 62, 61, 63, 65, 
62, 59, 55, 49, 46, 43, 42, 43, 43, 46, 46, 46, 45, 41, 32, 24, 
20, 19, 19, 17, 11, 6, 1, -3, -5, -6, -5, -4, -4, -3, -2, 0, 
1, 0, -2, -3, -4, -3, -3, -2, 0, 0, 0, -7, -14, -22, -31, -38, 
-47, -51, -56, -60, -62, -66, -70, -71, -69, -66, -64, -65, -70, -75, -78, -78, 
-73, -66, -62, -60, -59, -59, -62, -67, -71, -72, -70, -67, -64, -62, -62, -64, 
-65, -66, -67, -68, -69, -70, -71, -71, -71, -69, -64, -61, -60, -60, -61, -59, 
-56, -52, -49, -46, -46, -48, -50, -51, -50, -49, -49, -51, -52, -53, -53, -56, 
-60, -65, -68, -66, -58, -49, -41, -36, -37, -43, -53, -54, -51, -50, -51, -50, 
-45, -42, -42, -45, -47, -46, -43, -39, -34, -30, -29, -33, -34, -31, -24, -17, 
-13, -12, -13, -13, -11, -7, -1, 2, 4, 8, 12, 17, 23, 25, 26, 28, 
31, 38, 42, 49, 56, 62, 67, 68, 65, 60, 59, 63, 70, 81, 82, 77, 
68, 61, 58, 64, 78, 95, 110, 119, 119, 111, 100, 90, 86, 86, 95, 100, 
100, 95, 86, 72, 70, 74, 78, 80, 77, 66, 58, 53, 49, 48, 48, 52, 
56, 60, 64, 65, 61, 57, 53, 51, 52, 56, 63, 66, 70, 72, 70, 65, 
53, 50, 50, 54, 59, 65, 66, 62, 58, 54, 53, 55, 57, 58, 57, 55, 
49, 36, 30, 27, 29, 33, 40, 42, 40, 37, 35, 36, 39, 40, 41, 40, 
40, 40, 39, 36, 32, 27, 23, 20, 17, 14, 9, 5, 0, -6, -9, -11, 
-15, -19, -20, -21, -21, -22, -24, -26, -24, -19, -16, -14, -15, -17, -20, -21, 
-22, -24, -26, -28, -31, -30, -28, -26, -24, -24, -28, -34, -38, -40, -42, -45, 
-50, -54, -55, -55, -57, -58, -61, -64, -69, -74, -78, -79, -79, -77, -75, -74, 
-75, -78, -81, -84, -86, -88, -90, -91, -91, -92, -95, -98, -100, -102, -102, -102, 
-102, -102, -105, -111, -119, -124, -126, -125, -123, -123, -124, -126, -127, -126, -125, -123, 
-117, -112, -109, -107, -107, -107, -107, -104, -101, -96, -91, -85, -81, -79, -78, -76, 
-76, -75, -76, -80, -81, -82, -79, -77, -73, -68, -63, -59, -56, -55, -55, -55, 
-53, -51, -46, -39, -31, -29, -29, -29, -29, -30, -29, -27, -22, -17, -12, -8, 
-8, -9, -11, -10, -4, 6, 14, 19, 20, 16, 7, 4, 7, 14, 21, 25, 
24, 22, 20, 22, 26, 31, 37, 40, 43, 44, 45, 46, 46, 48, 48, 48, 
50, 56, 62, 67, 69, 69, 70, 73, 76, 79, 80, 81, 81, 79, 79, 82, 
86, 89, 93, 95, 98, 100, 100, 98, 94, 88, 83, 81, 81, 85, 89, 92, 
93, 92, 90, 85, 83, 83, 85, 86, 81, 74, 66, 58, 53, 50, 53, 58, 
63, 68, 68, 63, 54, 49, 45, 44, 44, 46, 46, 43, 39, 36, 35, 35, 
35, 32, 30, 27, 25, 28, 30, 29, 27, 25, 22, 21, 20, 19, 17, 13, 
10, 9, 8, 7, 5, 1, -5, -8, -12, -15, -17, -20, -23, -25, -24, -22, 
-19, -15, -16, -21, -25, -31, -35, -35, -32, -29, -27, -26, -30, -33, -34, -36, 
-38, -40, -38, -33, -28, -24, -24, -25, -28, -29, -29, -28, -27, -26, -25, -25, 
-25, -25, -26, -23, -22, -21, -20, -18, -15, -15, -15, -15, -14, -12, -10, -12, 
-17, -21, -26, -30, -32, -29, -26, -23, -21, -21, -23, -26, -29, -31, -31, -32, 
-33, -36, -39, -41, -41, -45, -51, -55, -55, -50, -39, -35, -35, -35, -37, -39, 
-38, -35, -31, -27, -24, -23, -22, -21, -20, -20, -22, -24, -22, -19, -17, -14, 
-13, -9, -6, -3, -2, -3, -4, -6, -8, -8, -7, -5, -2, -1, 0, 4, 
8, 13, 15, 14, 12, 10, 8, 7, 6, 5, 5, 6, 8, 11, 14, 16, 
18, 16, 12, 6, 6, 10, 15, 20, 21, 19, 18, 16, 16, 17, 21, 22, 
23, 25, 25, 27, 29, 30, 28, 25, 22, 20, 19, 19, 19, 20, 23, 32, 
33, 30, 24, 20, 19, 27, 32, 35, 32, 27, 22, 21, 26, 33, 39, 43, 
39, 34, 30, 30, 33, 38, 45, 50, 53, 55, 53, 49, 42, 39, 36, 35, 
36, 42, 47, 51, 53, 51, 47, 47, 49, 53, 58, 60, 61, 54, 47, 42, 
39, 40, 48, 52, 54, 53, 52, 52, 52, 52, 52, 49, 45, 41, 38, 36, 
34, 31, 28, 27, 28, 29, 28, 27, 25, 21, 17, 11, 6, 1, -3, -3, 
-1, 1, 0, -4, -13, -17, -18, -20, -21, -23, -26, -26, -25, -24, -25, -33, 
-37, -39, -37, -32, -28, -26, -27, -31, -34, -36, -37, -32, -28, -25, -24, -25, 
-30, -33, -36, -36, -33, -29, -22, -20, -20, -21, -20, -17, -14, -15, -17, -21, 
-27, -34, -38, -42, -45, -47, -47, -47, -47, -47, -48, -48, -47, -49, -51, -53, 
-56, -57, -55, -52, -47, -44, -41, -38, -39, -40, -42, -46, -49, -51, -47, -41, 
-34, -31, -33, -42, -49, -53, -53, -50, -43, -32, -26, -25, -27, -32, -38, -42, 
-39, -32, -24, -19, -19, -24, -31, -35, -33, -25, -10, -7, -11, -20, -31, -39, 
-41, -37, -29, -20, -14, -15, -22, -31, -37, -36, -29, -16, -13, -17, -27, -38, 
-44, -38, -30, -23, -20, -21, -27, -28, -28, -27, -27, -27, -28, -25, -20, -15, 
-10, -5, -6, -8, -13, -17, -18, -8, 2, 12, 19, 21, 20, 18, 19, 24, 
29, 30, 27, 24, 23, 24, 26, 28, 29, 29, 30, 31, 32, 33, 33, 32, 
31, 30, 30, 29, 28, 27, 27, 27, 27, 28, 30, 31, 31, 33, 35, 38, 
41, 41, 39, 36, 33, 33, 34, 37, 40, 43, 50, 54, 55, 53, 51, 50, 
52, 57, 60, 60, 57, 52, 50, 51, 57, 63, 70, 78, 80, 80, 77, 73, 
71, 71, 74, 78, 80, 81, 84, 87, 91, 93, 92, 89, 81, 78, 77, 78, 
79, 79, 78, 77, 76, 75, 73, 71, 71, 72, 74, 76, 76, 69, 59, 49, 
41, 38, 38, 43, 43, 41, 37, 34, 35, 35, 33, 29, 24, 20, 18, 18, 
17, 15, 11, -1, -9, -16, -19, -20, -19, -17, -18, -21, -27, -35, -42, -48, 
-49, -49, -50, -56, -67, -73, -75, -75, -72, -71, -70, -72, -76, -80, -87, -92, 
-96, -96, -96, -97, -100, -104, -103, -97, -89, -82, -80, -85, -90, -94, -96, -97, 
-97, -99, -103, -108, -113, -117, -118, -116, -114, -114, -117, -120, -122, -120, -117, -114, 
-113, -113, -112, -111, -111, -110, -108, -105, -105, -107, -108, -108, -107, -105, -105, -106, 
-108, -108, -107, -103, -100, -98, -98, -99, -99, -99, -98, -97, -95, -93, -88, -87, 
-85, -83, -82, -81, -77, -71, -64, -57, -54, -54, -56, -56, -55, -53, -49, -41, 
-35, -31, -27, -22, -16, -6, 0, 4, 6, 5, 3, 5, 12, 22, 31, 37, 
43, 44, 44, 43, 43, 45, 51, 54, 56, 56, 54, 49, 46, 44, 43, 44, 
47, 53, 56, 57, 55, 50, 43, 40, 39, 39, 39, 37, 31, 25, 20, 17, 
17, 19, 25, 31, 35, 35, 29, 16, 11, 13, 20, 30, 38, 45, 45, 44, 
43, 43, 45, 51, 54, 55, 55, 53, 52, 54, 55, 57, 59, 62, 68, 72, 
74, 74, 68, 61, 50, 47, 47, 49, 51, 49, 46, 43, 37, 32, 29, 30, 
32, 31, 29, 27, 25, 28, 32, 37, 41, 45, 47, 47, 47, 47, 47, 46, 
42, 39, 38, 39, 41, 45, 49, 49, 48, 46, 44, 42, 45, 50, 53, 55, 
53, 48, 45, 44, 44, 45, 46, 46, 45, 43, 38, 33, 24, 20, 19, 20, 
23, 26, 29, 28, 26, 23, 19, 16, 14, 15, 18, 18, 16, 11, 8, 6, 
3, 0, 0, 0, -1, -3, -6, -8, -7, -6, -4, -2, -1, 0, 0, -1, 
-1, 0, 2, 5, 9, 11, 12, 12, 11, 7, 5, 3, 2, 1, 0, -1, 
-3, -4, -6, -9, -9, -11, -9, -7, -5, -4, -5, -8, -10, -10, -10, -12, 
-15, -15, -13, -9, -5, -3, -3, -5, -9, -12, -13, -11, -7, -2, 1, 0, 
-3, -8, -11, -15, -19, -22, -23, -20, -16, -11, -9, -10, -18, -26, -34, -37, 
-34, -27, -14, -11, -12, -17, -25, -31, -28, -19, -9, -1, 3, 3, -1, -6, 
-11, -14, -15, -10, -7, -7, -11, -16, -21, -28, -32, -32, -28, -18, 4, 13, 
13, 7, -3, -12, -9, 4, 22, 37, 42, 36, 17, 7, 4, 8, 18, 35, 
41, 39, 33, 25, 17, 15, 19, 26, 31, 32, 29, 25, 26, 29, 33, 37, 
36, 31, 26, 23, 24, 29, 37, 41, 44, 43, 38, 30, 21, 23, 30, 39, 
46, 47, 40, 30, 22, 20, 21, 28, 32, 31, 26, 18, 8, 3, 3, 5, 
9, 14, 16, 12, 7, 1, -3, -5, -1, 5, 13, 21, 26, 30, 28, 25, 
22, 21, 24, 33, 37, 40, 40, 40, 39, 37, 36, 34, 32, 31, 34, 36, 
36, 33, 28, 24, 21, 24, 29, 37, 42, 46, 47, 45, 43, 38, 33, 29, 
30, 33, 37, 39, 39, 36, 30, 23, 18, 16, 19, 27, 34, 37, 38, 33, 
23, 13, 3, -3, -5, -1, 8, 9, 6, -1, -10, -17, -22, -20, -16, -11, 
-7, -7, -9, -12, -13, -13, -9, -3, -3, -6, -12, -21, -27, -29, -25, -17, 
-9, -2, 2, -1, -5, -10, -16, -19, -20, -17, -15, -16, -20, -25, -30, -31, 
-33, -36, -39, -45, -47, -47, -47, -48, -52, -66, -76, -85, -90, -90, -88, -85, 
-83, -83, -84, -87, -94, -97, -99, -100, -99, -97, -94, -92, -93, -94, -95, -92, 
-86, -79, -74, -75, -83, -99, -107, -108, -105, -95, -83, -70, -68, -73, -83, -95, 
-109, -110, -104, -93, -79, -68, -62, -69, -82, -93, -97, -92, -73, -62, -60, -68, 
-83, -102, -105, -98, -84, -71, -63, -61, -65, -67, -67, -65, -62, -61, -64, -66, 
-67, -67, -62, -59, -55, -53, -51, -48, -40, -33, -26, -21, -20, -21, -25, -23, 
-17, -6, 7, 19, 17, 13, 9, 10, 17, 36, 48, 55, 54, 46, 36, 31, 
37, 51, 68, 80, 82, 75, 64, 58, 59, 66, 82, 88, 87, 80, 69, 64, 
69, 78, 87, 94, 98, 95, 91, 85, 78, 73, 72, 74, 79, 83, 87, 89, 
90, 87, 84, 82, 81, 80, 79, 78, 79, 81, 84, 88, 90, 89, 84, 80, 
78, 78, 88, 95, 98, 96, 87, 71, 62, 59, 61, 67, 72, 73, 68, 60, 
53, 49, 49, 54, 60, 62, 58, 50, 39, 33, 29, 27, 27, 27, 27, 26, 
24, 23, 22, 22, 20, 16, 10, 4, 2, 4, 7, 7, 4, 0, -6, -14, 
-16, -18, -19, -19, -23, -26, -29, -33, -36, -38, -42, -43, -43, -43, -42, -41, 
-38, -38, -39, -43, -50, -59, -63, -65, -66, -65, -63, -60, -58, -59, -65, -73, 
-81, -88, -88, -84, -79, -74, -73, -74, -76, -77, -77, -75, -72, -70, -72, -77, 
-84, -89, -89, -84, -79, -76, -76, -77, -77, -73, -68, -63, -59, -55, -53, -52, 
-51, -50, -49, -46, -44, -43, -42, -38, -28, -21, -16, -14, -16, -20, -25, -25, 
-23, -19, -17, -18, -25, -31, -34, -34, -30, -25, -25, -26, -27, -29, -30, -28, 
-25, -22, -21, -24, -26, -31, -31, -29, -27, -26, -29, -31, -32, -33, -32, -31, 
-28, -24, -22, -23, -27, -34, -37, -38, -35, -30, -26, -21, -20, -20, -20, -20, 
-19, -13, -9, -4, -1, -1, 1, 4, 9, 13, 16, 15, 7, 2, -1, 1, 
8, 17, 23, 22, 19, 15, 14, 19, 25, 30, 33, 32, 28, 20, 16, 16, 
19, 25, 31, 36, 35, 32, 31, 34, 42, 46, 48, 48, 47, 47, 49, 49, 
48, 47, 46, 44, 44, 44, 47, 53, 58, 63, 63, 61, 59, 58, 57, 54, 
53, 53, 56, 59, 61, 62, 62, 60, 58, 55, 51, 50, 52, 53, 53, 51, 
49, 50, 54, 58, 62, 62, 59, 54, 49, 47, 47, 53, 54, 54, 52, 48, 
45, 43, 43, 46, 48, 49, 47, 41, 37, 35, 36, 42, 51, 55, 53, 46, 
41, 41, 46, 53, 57, 59, 57, 52, 42, 36, 32, 32, 33, 36, 38, 39, 
38, 38, 40, 43, 46, 46, 43, 40, 38, 39, 40, 40, 40, 40, 44, 47, 
51, 52, 49, 45, 40, 37, 36, 34, 33, 27, 21, 17, 14, 14, 14, 14, 
13, 11, 6, -2, -10, -19, -23, -25, -26, -28, -31, -33, -36, -38, -37, -34, 
-28, -27, -29, -32, -38, -42, -46, -48, -48, -49, -50, -51, -51, -50, -48, -47, 
-48, -52, -57, -60, -60, -57, -53, -47, -43, -39, -37, -35, -31, -28, -27, -27, 
-30, -32, -32, -30, -28, -26, -25, -25, -26, -26, -25, -22, -19, -22, -27, -34, 
-40, -45, -47, -42, -36, -29, -24, -22, -23, -29, -33, -34, -31, -27, -20, -16, 
-15, -17, -22, -31, -45, -50, -48, -37, -26, -21, -32, -46, -59, -66, -65, -55, 
-47, -43, -45, -53, -65, -79, -80, -73, -64, -57, -56, -68, -76, -80, -78, -69, 
-54, -46, -44, -47, -53, -56, -53, -45, -36, -31, -29, -33, -34, -31, -24, -16, 
-9, -5, -6, -7, -6, -2, 6, 19, 26, 29, 31, 33, 40, 45, 52, 60, 
66, 69, 70, 71, 70, 70, 71, 71, 67, 66, 65, 65, 65, 68, 70, 72, 
72, 72, 69, 64, 62, 62, 65, 68, 69, 67, 66, 67, 69, 70, 71, 71, 
69, 66, 63, 60, 57, 56, 57, 59, 61, 62, 62, 63, 67, 71, 75, 77, 
75, 68, 61, 58, 61, 73, 81, 84, 83, 77, 69, 64, 65, 68, 72, 75, 
75, 73, 69, 67, 66, 68, 76, 81, 83, 82, 79, 74, 67, 64, 61, 58, 
54, 47, 45, 45, 45, 46, 46, 44, 41, 39, 38, 38, 39, 39, 35, 28, 
20, 12, -1, -6, -10, -11, -11, -13, -17, -20, -25, -32, -39, -48, -58, -61, 
-61, -58, -56, -53, -52, -52, -52, -53, -53, -55, -58, -62, -68, -73, -80, -82, 
-83, -84, -84, -83, -84, -86, -86, -85, -85, -85, -83, -82, -82, -82, -81, -81, 
-81, -81, -83, -85, -87, -89, -91, -94, -99, -104, -107, -106, -103, -100, -100, -105, 
-116, -122, -126, -127, -127, -124, -120, -118, -119, -120, -122, -125, -126, -123, -120, -117, 
-116, -117, -118, -118, -116, -113, -108, -98, -94, -89, -85, -82, -78, -74, -71, -69, 
-67, -65, -61, -59, -58, -58, -56, -55, -57, -57, -57, -55, -50, -43, -32, -27, 
-26, -27, -28, -25, -18, -10, -4, -2, -3, -8, -11, -14, -15, -11, -4, 6, 
7, 5, 3, 3, 6, 10, 12, 11, 10, 8, 4, 4, 7, 13, 19, 24, 
27, 26, 26, 27, 32, 40, 42, 44, 45, 45, 44, 42, 40, 40, 40, 41, 
40, 35, 34, 35, 39, 44, 50, 51, 52, 53, 52, 52, 51, 51, 50, 48, 
46, 45, 46, 51, 55, 57, 57, 55, 52, 50, 50, 52, 55, 59, 61, 63, 
65, 67, 69, 68, 67, 65, 64, 64, 62, 59, 55, 51, 48, 45, 42, 37, 
30, 24, 21, 20, 22, 23, 26, 29, 31, 32, 34, 35, 35, 35, 33, 29, 
26, 24, 23, 23, 22, 22, 24, 27, 29, 30, 25, 23, 23, 24, 24, 23, 
19, 16, 16, 19, 22, 26, 26, 26, 24, 21, 18, 16, 18, 20, 21, 19, 
17, 15, 15, 15, 15, 14, 14, 14, 15, 17, 16, 14, 11, 8, 6, 3, 
1, 1, 1, 1, 0, -2, -2, 1, 2, 1, -2, -6, -9, -12, -13, -14, 
-12, -8, -5, 0, 0, -1, -3, -6, -11, -14, -18, -23, -26, -31, -39, -44, 
-47, -48, -47, -44, -43, -43, -42, -41, -40, -36, -35, -35, -39, -44, -51, -58, 
-58, -54, -48, -42, -37, -38, -39, -41, -41, -39, -34, -30, -29, -29, -30, -29, 
-27, -28, -29, -32, -35, -38, -39, -37, -31, -26, -22, -21, -23, -26, -28, -29, 
-28, -28, -29, -31, -32, -30, -26, -23, -22, -21, -20, -16, -7, -2, 1, -1, 
-5, -9, -9, -5, 1, 6, 10, 6, 0, -8, -13, -5, 0, };
